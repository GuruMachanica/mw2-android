#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82300230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82300238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,142
	ctx.r8.s64 = ctx.r11.s64 + 142;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r6,30
	ctx.r4.u64 = ctx.r6.u32 & 0x3;
	// lwz r11,1132(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1132);
	// lwzx r29,r5,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82300334
	if (ctx.cr6.eq) goto loc_82300334;
loc_82300288:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8230028C:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r11,r8,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823002cc
	if (ctx.cr6.gt) goto loc_823002CC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823002C0:
	// dcbt r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823002c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823002C0;
loc_823002CC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// sthx r8,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u16);
	// bne cr6,0x8230028c
	if (!ctx.cr6.eq) goto loc_8230028C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82300328
	if (!ctx.cr6.eq) goto loc_82300328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fff70
	ctx.lr = 0x8230031C;
	sub_822FFF70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300340
	if (ctx.cr6.eq) goto loc_82300340;
loc_82300328:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82300288
	if (!ctx.cr6.eq) goto loc_82300288;
loc_82300334:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82300340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300230) {
	__imp__sub_82300230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230034C) {
	__imp__sub_8230034C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82300358;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,138
	ctx.r9.s64 = ctx.r11.s64 + 138;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// lwz r11,1100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1100);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8230047c
	if (ctx.cr6.eq) goto loc_8230047C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_823003A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x823003c4
	if (ctx.cr6.lt) goto loc_823003C4;
	// li r9,2
	ctx.r9.s64 = 2;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// b 0x823003c8
	goto loc_823003C8;
loc_823003C4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823003C8:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r5,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8230041c
	if (ctx.cr6.gt) goto loc_8230041C;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r8,r8,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82300410:
	// dcbt r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82300410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82300410;
loc_8230041C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,1132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1132, ctx.r10.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r7,r11,142
	ctx.r7.s64 = ctx.r11.s64 + 142;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r4,30
	ctx.r3.u64 = ctx.r4.u32 & 0x3;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8230046c
	if (!ctx.cr6.eq) goto loc_8230046C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300230
	ctx.lr = 0x82300460;
	sub_82300230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300488
	if (ctx.cr6.eq) goto loc_82300488;
loc_8230046C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823003a4
	if (!ctx.cr6.eq) goto loc_823003A4;
loc_8230047C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82300488:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300350) {
	__imp__sub_82300350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300494) {
	__imp__sub_82300494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823004A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,25
	ctx.r5.u64 = ctx.r6.u32 & 0x7F;
	// lwz r11,76(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8230068c
	if (ctx.cr6.eq) goto loc_8230068C;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_823004EC:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,28(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r11,r29,r7
	ctx.r11.u64 = ctx.r29.u64 + ctx.r7.u64;
	// lhzx r8,r29,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8230067c
	if (ctx.cr6.lt) goto loc_8230067C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8230067c
	if (ctx.cr6.gt) goto loc_8230067C;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230067c
	if (ctx.cr6.lt) goto loc_8230067C;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8230067c
	if (ctx.cr6.gt) goto loc_8230067C;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230067c
	if (ctx.cr6.lt) goto loc_8230067C;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8230067c
	if (ctx.cr6.gt) goto loc_8230067C;
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x8230060c
	if (ctx.cr6.lt) goto loc_8230060C;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823005b0
	if (ctx.cr6.gt) goto loc_823005B0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823005A4:
	// dcbt r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823005a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823005A4;
loc_823005B0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,1100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1100, ctx.r8.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r11,138
	ctx.r8.s64 = ctx.r11.s64 + 138;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8230067c
	if (!ctx.cr6.eq) goto loc_8230067C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300350
	ctx.lr = 0x823005F4;
	sub_82300350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230067c
	if (!ctx.cr6.eq) goto loc_8230067C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8230060C:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230064c
	if (ctx.cr6.gt) goto loc_8230064C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82300640:
	// dcbt r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82300640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82300640;
loc_8230064C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r8.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,25
	ctx.r5.u64 = ctx.r6.u32 & 0x7F;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_8230067C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823004ec
	if (!ctx.cr6.eq) goto loc_823004EC;
loc_8230068C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300498) {
	__imp__sub_82300498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r7,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230070c
	if (ctx.cr6.gt) goto loc_8230070C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82300700:
	// dcbt r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82300700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82300700;
loc_8230070C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x822ffdc0
	ctx.lr = 0x82300730;
	sub_822FFDC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82300760:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82300498
	ctx.lr = 0x82300768;
	sub_82300498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300838
	if (ctx.cr6.eq) goto loc_82300838;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82300760
	if (!ctx.cr6.eq) goto loc_82300760;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823007b8
	if (ctx.cr6.eq) goto loc_823007B8;
loc_82300794:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82300350
	ctx.lr = 0x8230079C;
	sub_82300350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300838
	if (ctx.cr6.eq) goto loc_82300838;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82300794
	if (!ctx.cr6.eq) goto loc_82300794;
loc_823007B8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823007ec
	if (ctx.cr6.eq) goto loc_823007EC;
loc_823007C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82300230
	ctx.lr = 0x823007D0;
	sub_82300230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300838
	if (ctx.cr6.eq) goto loc_82300838;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823007c8
	if (!ctx.cr6.eq) goto loc_823007C8;
loc_823007EC:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82300820
	if (ctx.cr6.eq) goto loc_82300820;
loc_823007FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822fff70
	ctx.lr = 0x82300804;
	sub_822FFF70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300838
	if (ctx.cr6.eq) goto loc_82300838;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823007fc
	if (!ctx.cr6.eq) goto loc_823007FC;
loc_82300820:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82300838:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300698) {
	__imp__sub_82300698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823ddff4
	ctx.lr = 0x82300860;
	__savefpr_15(ctx, base);
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82300884
	if (!ctx.cr6.eq) goto loc_82300884;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de040
	ctx.lr = 0x82300878;
	__restfpr_15(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82300884:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,6912
	ctx.r9.s64 = ctx.r10.s64 + 6912;
	// vslw128 v62,v63,v63
	ctx.v62.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vxor128 v62,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// ble cr6,0x823009e8
	if (!ctx.cr6.gt) goto loc_823009E8;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r9,-5928
	ctx.r7.s64 = ctx.r9.s64 + -5928;
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r8,-30336
	ctx.r6.s64 = ctx.r8.s64 + -30336;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r10,-24
	ctx.r11.s64 = ctx.r10.s64 + -24;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f4,f13
	ctx.f4.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fabs f1,f10
	ctx.f1.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f24,-5928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5928);
	ctx.f24.f64 = double(temp.f32);
	// fabs f31,f9
	ctx.f31.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f26,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fabs f30,f8
	ctx.f30.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f25,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fabs f29,f7
	ctx.f29.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fabs f28,f6
	ctx.f28.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f27,f5
	ctx.f27.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82300920:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-164
	ctx.r7.s64 = ctx.r1.s64 + -164;
	// fmuls f23,f0,f12
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f20,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f21,f0,f9
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f22,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f19,f0,f6
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f18,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f17,f20,f3
	ctx.f17.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// lfs f16,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f15,f20,f31
	ctx.f15.f64 = double(float(ctx.f20.f64 * ctx.f31.f64));
	// lfsu f0,36(r11)
	ea = 36 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f20,f20,f28
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f28.f64));
	// addi r6,r1,-164
	ctx.r6.s64 = ctx.r1.s64 + -164;
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// fmadds f23,f22,f11,f23
	ctx.f23.f64 = double(float(ctx.f22.f64 * ctx.f11.f64 + ctx.f23.f64));
	// fmadds f21,f22,f8,f21
	ctx.f21.f64 = double(float(ctx.f22.f64 * ctx.f8.f64 + ctx.f21.f64));
	// fmadds f22,f22,f5,f19
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f5.f64 + ctx.f19.f64));
	// fmadds f19,f0,f2,f17
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f17.f64));
	// fmadds f17,f0,f30,f15
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f15.f64));
	// fmadds f0,f0,f27,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f20.f64));
	// fmadds f23,f18,f13,f23
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f13.f64 + ctx.f23.f64));
	// fmadds f21,f18,f10,f21
	ctx.f21.f64 = double(float(ctx.f18.f64 * ctx.f10.f64 + ctx.f21.f64));
	// fmadds f22,f18,f7,f22
	ctx.f22.f64 = double(float(ctx.f18.f64 * ctx.f7.f64 + ctx.f22.f64));
	// fmadds f20,f16,f4,f19
	ctx.f20.f64 = double(float(ctx.f16.f64 * ctx.f4.f64 + ctx.f19.f64));
	// stfs f20,-164(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fmadds f20,f16,f1,f17
	ctx.f20.f64 = double(float(ctx.f16.f64 * ctx.f1.f64 + ctx.f17.f64));
	// stfs f20,-160(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmadds f0,f16,f29,f0
	ctx.f0.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fadds f0,f24,f23
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f23.f64));
	// stfs f0,-176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fadds f0,f25,f21
	ctx.f0.f64 = double(float(ctx.f25.f64 + ctx.f21.f64));
	// stfs f0,-172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fadds f0,f22,f26
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f26.f64));
	// stfs f0,-168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// lvrx128 v58,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v55,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v53,v55,v61
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vand128 v54,v56,v61
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vsubfp128 v52,v53,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v52.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v51,v53,v54
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vminfp128 v63,v52,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v51,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v62.f32)));
	// bdnz 0x82300920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82300920;
loc_823009E8:
	// vaddfp128 v50,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v50.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-5792
	ctx.r9.s64 = ctx.r11.s64 + -5792;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v50,v61
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v48,v62,v49
	simde_mm_store_ps(ctx.v48.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vspltw128 v47,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// vsubfp128 v46,v49,v63
	simde_mm_store_ps(ctx.v46.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v45,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xAA));
	// vspltw128 v44,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x55));
	// stvewx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// vmaxfp128 v43,v46,v48
	simde_mm_store_ps(ctx.v43.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vspltw128 v42,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// vspltw128 v41,v43,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xAA));
	// vspltw128 v40,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0x55));
	// stvewx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de040
	ctx.lr = 0x82300A54;
	__restfpr_15(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300850) {
	__imp__sub_82300850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300A60) {
	__imp__sub_82300A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300A68) {
	__imp__sub_82300A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300A8C) {
	__imp__sub_82300A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300A90) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r5,124
	ctx.r10.s64 = ctx.r5.s64 * 124;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300A90) {
	__imp__sub_82300A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300AB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300AB0) {
	__imp__sub_82300AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300AC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300AC8) {
	__imp__sub_82300AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300AE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r8,70(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 70);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300AE0) {
	__imp__sub_82300AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300B04) {
	__imp__sub_82300B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,225(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300B08) {
	__imp__sub_82300B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300B14) {
	__imp__sub_82300B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,225(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300B18) {
	__imp__sub_82300B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B38) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300B38) {
	__imp__sub_82300B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300B40) {
	__imp__sub_82300B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,225(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
	// lbz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82300b9c
	if (!ctx.cr6.lt) goto loc_82300B9C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82300B7C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82300bc0
	if (ctx.cr6.lt) goto loc_82300BC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82300b7c
	if (ctx.cr6.lt) goto loc_82300B7C;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
loc_82300B9C:
	// bgt cr6,0x82300bb8
	if (ctx.cr6.gt) goto loc_82300BB8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82300bbc
	if (ctx.cr6.lt) goto loc_82300BBC;
loc_82300BB8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82300BBC:
	// blr 
	return;
loc_82300BC0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300B48) {
	__imp__sub_82300B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300BC8) {
	__imp__sub_82300BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300BCC) {
	__imp__sub_82300BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300BD0) {
	__imp__sub_82300BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300BE8) {
	__imp__sub_82300BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300BF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300BF0) {
	__imp__sub_82300BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300C10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300C10) {
	__imp__sub_82300C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300C20) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300c64
	if (ctx.cr6.eq) goto loc_82300C64;
	// lis r10,21065
	ctx.r10.s64 = 1380515840;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r8,r10,17990
	ctx.r8.u64 = ctx.r10.u64 | 17990;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82300c64
	if (!ctx.cr6.eq) goto loc_82300C64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82300C64:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d3ad8
	ctx.lr = 0x82300C74;
	sub_822D3AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82300cd0
	if (ctx.cr6.eq) goto loc_82300CD0;
loc_82300C7C:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d3ab0
	ctx.lr = 0x82300C8C;
	sub_822D3AB0(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82300ce8
	if (ctx.cr6.eq) goto loc_82300CE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82300cf4
	if (ctx.cr6.eq) goto loc_82300CF4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d3ad8
	ctx.lr = 0x82300CC8;
	sub_822D3AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82300c7c
	if (!ctx.cr6.eq) goto loc_82300C7C;
loc_82300CD0:
	// bl 0x8236b698
	ctx.lr = 0x82300CD4;
	sub_8236B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82300d10
	if (!ctx.cr6.gt) goto loc_82300D10;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82300d10
	goto loc_82300D10;
loc_82300CE8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82300d10
	goto loc_82300D10;
loc_82300CF4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_82300D10:
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

PPC_WEAK_FUNC(sub_82300C20) {
	__imp__sub_82300C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82300D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822d3ad8
	ctx.lr = 0x82300D54;
	sub_822D3AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82300d78
	if (!ctx.cr6.eq) goto loc_82300D78;
loc_82300D5C:
	// bl 0x8236b698
	ctx.lr = 0x82300D60;
	sub_8236B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82300d94
	if (!ctx.cr6.gt) goto loc_82300D94;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82300D78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d3ab0
	ctx.lr = 0x82300D88;
	sub_822D3AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82300d5c
	if (ctx.cr6.eq) goto loc_82300D5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300D28) {
	__imp__sub_82300D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300D9C) {
	__imp__sub_82300D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300DA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82300DA0) {
	__imp__sub_82300DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300E3C) {
	__imp__sub_82300E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300E40) {
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
	// beq cr6,0x82300e6c
	if (ctx.cr6.eq) goto loc_82300E6C;
	// bl 0x822d3788
	ctx.lr = 0x82300E64;
	sub_822D3788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82300E6C:
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

PPC_WEAK_FUNC(sub_82300E40) {
	__imp__sub_82300E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82300E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x822d3ad8
	ctx.lr = 0x82300EA8;
	sub_822D3AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82300ec0
	if (!ctx.cr6.eq) goto loc_82300EC0;
	// bl 0x8236b698
	ctx.lr = 0x82300EB4;
	sub_8236B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82300ef0
	if (!ctx.cr6.gt) goto loc_82300EF0;
	// b 0x82300ee4
	goto loc_82300EE4;
loc_82300EC0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3ab0
	ctx.lr = 0x82300ED0;
	sub_822D3AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82300ef4
	if (!ctx.cr6.eq) goto loc_82300EF4;
	// bl 0x8236b698
	ctx.lr = 0x82300EDC;
	sub_8236B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82300eec
	if (!ctx.cr6.gt) goto loc_82300EEC;
loc_82300EE4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_82300EEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_82300EF0:
	// blt cr6,0x82300f8c
	if (ctx.cr6.lt) goto loc_82300F8C;
loc_82300EF4:
	// lhbrx r6,0,r31
	ctx.r6.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r31.u32));
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,6
	ctx.r7.s64 = ctx.r31.s64 + 6;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// lhbrx r5,0,r11
	ctx.r5.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r11.u32));
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// lhbrx r4,0,r8
	ctx.r4.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r8.u32));
	// sth r4,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r4.u16);
	// lhbrx r3,0,r7
	ctx.r3.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r7.u32));
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lhbrx r11,0,r9
	ctx.r11.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r9.u32));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// beq cr6,0x82300f88
	if (ctx.cr6.eq) goto loc_82300F88;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_82300F3C:
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwbrx r4,0,r11
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwbrx r3,0,r6
	ctx.r3.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lhbrx r8,0,r5
	ctx.r8.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r5.u32));
	// sth r8,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82300f3c
	if (ctx.cr6.lt) goto loc_82300F3C;
loc_82300F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82300E80) {
	__imp__sub_82300E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82300F94) {
	__imp__sub_82300F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82300F98) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82300fcc
	if (!ctx.cr6.gt) goto loc_82300FCC;
	// subf r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_82300FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82300fe4
	if (ctx.cr6.eq) goto loc_82300FE4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// bl 0x82300d28
	ctx.lr = 0x82300FE4;
	sub_82300D28(ctx, base);
loc_82300FE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82300ff0
	if (ctx.cr6.eq) goto loc_82300FF0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82300FF0:
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

PPC_WEAK_FUNC(sub_82300F98) {
	__imp__sub_82300F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301008) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8230103c
	if (!ctx.cr6.gt) goto loc_8230103C;
	// subf r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_8230103C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82301054
	if (ctx.cr6.eq) goto loc_82301054;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// bl 0x82300d28
	ctx.lr = 0x82301054;
	sub_82300D28(ctx, base);
loc_82301054:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82301060
	if (ctx.cr6.eq) goto loc_82301060;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82301060:
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

PPC_WEAK_FUNC(sub_82301008) {
	__imp__sub_82301008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301078) {
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
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823010ac
	if (!ctx.cr6.gt) goto loc_823010AC;
	// subf r31,r4,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_823010AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823010c4
	if (ctx.cr6.eq) goto loc_823010C4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r10,124
	ctx.r3.s64 = ctx.r10.s64 + 124;
	// bl 0x82300d28
	ctx.lr = 0x823010C4;
	sub_82300D28(ctx, base);
loc_823010C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823010d0
	if (ctx.cr6.eq) goto loc_823010D0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_823010D0:
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

PPC_WEAK_FUNC(sub_82301078) {
	__imp__sub_82301078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823010E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823010E8) {
	__imp__sub_823010E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230110C) {
	__imp__sub_8230110C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301110) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301110) {
	__imp__sub_82301110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301124) {
	__imp__sub_82301124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301128) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82301158
	if (ctx.cr6.eq) goto loc_82301158;
	// lis r8,21065
	ctx.r8.s64 = 1380515840;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r6,r8,17990
	ctx.r6.u64 = ctx.r8.u64 | 17990;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82301158
	if (!ctx.cr6.eq) goto loc_82301158;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82301158:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823011a4
	if (ctx.cr6.gt) goto loc_823011A4;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82301174:
	// ldx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r11.u32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// lwbrx r9,0,r5
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// beq cr6,0x823011b0
	if (ctx.cr6.eq) goto loc_823011B0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82301174
	if (!ctx.cr6.gt) goto loc_82301174;
loc_823011A4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_823011B0:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301128) {
	__imp__sub_82301128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823011CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823011CC) {
	__imp__sub_823011CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823011D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
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
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823011D0) {
	__imp__sub_823011D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230128C) {
	__imp__sub_8230128C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82301298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lis r11,21065
	ctx.r11.s64 = 1380515840;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// ori r9,r11,17990
	ctx.r9.u64 = ctx.r11.u64 | 17990;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r8,26221
	ctx.r8.s64 = 1718419456;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// ori r7,r8,29728
	ctx.r7.u64 = ctx.r8.u64 | 29728;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,25697
	ctx.r5.s64 = 1684078592;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,22337
	ctx.r11.s64 = 1463877632;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// ori r10,r5,29793
	ctx.r10.u64 = ctx.r5.u64 | 29793;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// ori r26,r11,22085
	ctx.r26.u64 = ctx.r11.u64 | 22085;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r9,29541
	ctx.r9.s64 = 1935998976;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lis r6,18775
	ctx.r6.s64 = 1230438400;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r8,r9,25963
	ctx.r8.u64 = ctx.r9.u64 | 25963;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r6,22601
	ctx.r4.u64 = ctx.r6.u64 | 22601;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// stw r5,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// bl 0x82301128
	ctx.lr = 0x82301380;
	sub_82301128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230140c
	if (ctx.cr6.lt) goto loc_8230140C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82301128
	ctx.lr = 0x82301390;
	sub_82301128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230140c
	if (ctx.cr6.lt) goto loc_8230140C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82301128
	ctx.lr = 0x823013A0;
	sub_82301128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230140c
	if (ctx.cr6.lt) goto loc_8230140C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82301128
	ctx.lr = 0x823013B0;
	sub_82301128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230140c
	if (ctx.cr6.lt) goto loc_8230140C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82301128
	ctx.lr = 0x823013C0;
	sub_82301128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230140c
	if (ctx.cr6.lt) goto loc_8230140C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823013ec
	if (!ctx.cr6.gt) goto loc_823013EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823013EC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r8,r9,16389
	ctx.r8.u64 = ctx.r9.u64 | 16389;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r6,r26,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r26.s64;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8230140C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301290) {
	__imp__sub_82301290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301414) {
	__imp__sub_82301414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301418) {
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
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// bge cr6,0x82301460
	if (!ctx.cr6.lt) goto loc_82301460;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r4,r11,2256
	ctx.r4.s64 = ctx.r11.s64 + 2256;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82301448;
	sub_82280B08(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82301460:
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823014a4
	if (!ctx.cr6.gt) goto loc_823014A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r4,r11,2144
	ctx.r4.s64 = ctx.r11.s64 + 2144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8230148C;
	sub_82280B08(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823014A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// lhbrx r8,0,r11
	ctx.r8.u64 = __builtin_bswap16(PPC_LOAD_U16(ctx.r11.u32));
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// sth r8,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r8.u16);
	// lwbrx r7,0,r9
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// ble cr6,0x823014fc
	if (!ctx.cr6.gt) goto loc_823014FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,2072
	ctx.r4.s64 = ctx.r11.s64 + 2072;
	// bl 0x82280b08
	ctx.lr = 0x823014E4;
	sub_82280B08(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823014FC:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stb r7,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r7.u8);
	// lbz r5,29(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// stb r5,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r5.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301418) {
	__imp__sub_82301418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301530) {
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
	// lwz r6,172(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bge cr6,0x82301578
	if (!ctx.cr6.lt) goto loc_82301578;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,2360
	ctx.r4.s64 = ctx.r11.s64 + 2360;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82301560;
	sub_82280B08(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82301578:
	// lwz r7,168(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823015bc
	if (!ctx.cr6.gt) goto loc_823015BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r11,2144
	ctx.r4.s64 = ctx.r11.s64 + 2144;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x823015A4;
	sub_82280900(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823015BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwbrx r10,0,r11
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301530) {
	__imp__sub_82301530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823015E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823015E4) {
	__imp__sub_823015E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823015E8) {
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
	// beq cr6,0x82301614
	if (ctx.cr6.eq) goto loc_82301614;
	// bl 0x822d3788
	ctx.lr = 0x8230160C;
	sub_822D3788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82301614:
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

PPC_WEAK_FUNC(sub_823015E8) {
	__imp__sub_823015E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82301630;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301658
	if (ctx.cr6.eq) goto loc_82301658;
	// bl 0x822d3788
	ctx.lr = 0x82301654;
	sub_822D3788(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82301658:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82301698
	if (!ctx.cr6.eq) goto loc_82301698;
	// bl 0x822d39c0
	ctx.lr = 0x8230166C;
	sub_822D39C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823016c8
	if (!ctx.cr6.eq) goto loc_823016C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2472
	ctx.r4.s64 = ctx.r11.s64 + 2472;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82301688;
	sub_82280B08(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82301698:
	// bl 0x822d38e0
	ctx.lr = 0x8230169C;
	sub_822D38E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823016c8
	if (!ctx.cr6.eq) goto loc_823016C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2472
	ctx.r4.s64 = ctx.r11.s64 + 2472;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823016B8;
	sub_82280B08(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823016C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,21065
	ctx.r10.s64 = 1380515840;
	// lis r9,26221
	ctx.r9.s64 = 1718419456;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r8,r10,17990
	ctx.r8.u64 = ctx.r10.u64 | 17990;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// ori r7,r9,29728
	ctx.r7.u64 = ctx.r9.u64 | 29728;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r6,25697
	ctx.r6.s64 = 1684078592;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,22337
	ctx.r4.s64 = 1463877632;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// ori r3,r6,29793
	ctx.r3.u64 = ctx.r6.u64 | 29793;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// ori r25,r4,22085
	ctx.r25.u64 = ctx.r4.u64 | 22085;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r9,r11,25963
	ctx.r9.u64 = ctx.r11.u64 | 25963;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lis r8,18775
	ctx.r8.s64 = 1230438400;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// ori r7,r8,22601
	ctx.r7.u64 = ctx.r8.u64 | 22601;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// stw r25,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r25.u32);
	// addi r27,r31,124
	ctx.r27.s64 = ctx.r31.s64 + 124;
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// addi r26,r31,28
	ctx.r26.s64 = ctx.r31.s64 + 28;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// bl 0x82300c20
	ctx.lr = 0x82301774;
	sub_82300C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823017ec
	if (ctx.cr6.lt) goto loc_823017EC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82300c20
	ctx.lr = 0x82301784;
	sub_82300C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823017ec
	if (ctx.cr6.lt) goto loc_823017EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82300c20
	ctx.lr = 0x82301794;
	sub_82300C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823017ec
	if (ctx.cr6.lt) goto loc_823017EC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82300c20
	ctx.lr = 0x823017A4;
	sub_82300C20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82300c20
	ctx.lr = 0x823017AC;
	sub_82300C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823017ec
	if (ctx.cr6.lt) goto loc_823017EC;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300d28
	ctx.lr = 0x823017C8;
	sub_82300D28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823017ec
	if (ctx.cr6.lt) goto loc_823017EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subf r9,r25,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r25.s64;
	// ori r8,r10,1006
	ctx.r8.u64 = ctx.r10.u64 | 1006;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
loc_823017EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301628) {
	__imp__sub_82301628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823017F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823017F4) {
	__imp__sub_823017F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823017F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823017F8) {
	__imp__sub_823017F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301800) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301800) {
	__imp__sub_82301800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82301810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwzx r29,r30,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x822e4c70
	ctx.lr = 0x8230182C;
	sub_822E4C70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82090068
	ctx.lr = 0x82301834;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82301838;
	sub_822E4C88(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301808) {
	__imp__sub_82301808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301848) {
	__imp__sub_82301848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301890) {
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
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x823e0420
	ctx.lr = 0x823018C4;
	sub_823E0420(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,2528(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 2528);
	// fmul f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-21320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21320);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsel f6,f8,f0,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f1,f7,f13,f6
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301890) {
	__imp__sub_82301890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301904) {
	__imp__sub_82301904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301908) {
	__imp__sub_82301908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r7,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 7;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ble cr6,0x823019f4
	if (!ctx.cr6.gt) goto loc_823019F4;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_823019F4:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301950) {
	__imp__sub_82301950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823019FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823019FC) {
	__imp__sub_823019FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82301a1c
	if (ctx.cr6.eq) goto loc_82301A1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82301A1C:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301A00) {
	__imp__sub_82301A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,23872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23872);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82301a68
	if (ctx.cr6.eq) goto loc_82301A68;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82301a68
	if (!ctx.cr6.eq) goto loc_82301A68;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82301A68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82301A30) {
	__imp__sub_82301A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301A74) {
	__imp__sub_82301A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82301A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,68(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dcd18
	ctx.lr = 0x82301A98;
	sub_822DCD18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301adc
	if (ctx.cr6.eq) goto loc_82301ADC;
loc_82301AA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82301ad0
	if (!ctx.cr6.eq) goto loc_82301AD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82301ad0
	if (!ctx.cr6.eq) goto loc_82301AD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eba60
	ctx.lr = 0x82301AC8;
	sub_822EBA60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82301ae8
	if (!ctx.cr6.eq) goto loc_82301AE8;
loc_82301AD0:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82301aa4
	if (!ctx.cr6.eq) goto loc_82301AA4;
loc_82301ADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82301AE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dce30
	ctx.lr = 0x82301AF0;
	sub_822DCE30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301A78) {
	__imp__sub_82301A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301AFC) {
	__imp__sub_82301AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82301B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822dccb8
	ctx.lr = 0x82301B18;
	sub_822DCCB8(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82301b2c
	if (!ctx.cr6.eq) goto loc_82301B2C;
	// bl 0x822dccd0
	ctx.lr = 0x82301B28;
	sub_822DCCD0(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82301B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dce30
	ctx.lr = 0x82301B34;
	sub_822DCE30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebb00
	ctx.lr = 0x82301B3C;
	sub_822EBB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82301b4c
	if (ctx.cr6.eq) goto loc_82301B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dcec0
	ctx.lr = 0x82301B4C;
	sub_822DCEC0(ctx, base);
loc_82301B4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd008
	ctx.lr = 0x82301B58;
	sub_822DD008(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x822dcd60
	ctx.lr = 0x82301B74;
	sub_822DCD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301B00) {
	__imp__sub_82301B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82301B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82301a78
	ctx.lr = 0x82301BA0;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82301bc4
	if (!ctx.cr6.eq) goto loc_82301BC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301b00
	ctx.lr = 0x82301BB4;
	sub_82301B00(ctx, base);
	// bl 0x822dcdb8
	ctx.lr = 0x82301BB8;
	sub_822DCDB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82301BC4;
	sub_823DE1F0(ctx, base);
loc_82301BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301B80) {
	__imp__sub_82301B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82301BCC) {
	__imp__sub_82301BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82301BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82301BF4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82301bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82301BF4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r9,r11,511
	ctx.r9.s64 = ctx.r11.s64 + 511;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r8,r9,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFE00;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82301c24
	if (!ctx.cr6.lt) goto loc_82301C24;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82301ca4
	goto loc_82301CA4;
loc_82301C24:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82301ca0
	if (ctx.cr6.lt) goto loc_82301CA0;
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
loc_82301C48:
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfic r5,r5,17
	ctx.xer.ca = ctx.r5.u32 <= 17;
	ctx.r5.s64 = 17 - ctx.r5.s64;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,1(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 | ctx.r27.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// sraw r5,r11,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r5.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x82301c48
	if (!ctx.cr6.gt) goto loc_82301C48;
loc_82301CA0:
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_82301CA4:
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82090480
	ctx.lr = 0x82301CB8;
	sub_82090480(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301BD0) {
	__imp__sub_82301BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82301CC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x82301CDC;
	sub_822EC4E8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r26,r11,31
	ctx.r26.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bge cr6,0x82301d84
	if (!ctx.cr6.lt) goto loc_82301D84;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82301D00:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82301d84
	if (ctx.cr6.eq) goto loc_82301D84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301a78
	ctx.lr = 0x82301D18;
	sub_82301A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301d84
	if (ctx.cr6.eq) goto loc_82301D84;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82301d34
	if (!ctx.cr6.eq) goto loc_82301D34;
	// bl 0x822dce08
	ctx.lr = 0x82301D34;
	sub_822DCE08(ctx, base);
loc_82301D34:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r30,r30,2048
	ctx.r30.s64 = ctx.r30.s64 + 2048;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r9.u32);
	// beq cr6,0x82301d60
	if (ctx.cr6.eq) goto loc_82301D60;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82301d60
	if (!ctx.cr6.eq) goto loc_82301D60;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82301D60:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82301d00
	if (ctx.cr6.lt) goto loc_82301D00;
loc_82301D84:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x82301D8C;
	sub_822EC500(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82301e10
	if (ctx.cr6.eq) goto loc_82301E10;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82301DA4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82301da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82301DA4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82301e10
	if (ctx.cr6.eq) goto loc_82301E10;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r28,2048
	ctx.r28.s64 = 2048;
loc_82301DC0:
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822dcdb8
	ctx.lr = 0x82301DCC;
	sub_822DCDB8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82090248
	ctx.lr = 0x82301DE8;
	sub_82090248(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82301e04
	if (ctx.cr6.eq) goto loc_82301E04;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82301bd0
	ctx.lr = 0x82301E04;
	sub_82301BD0(ctx, base);
loc_82301E04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82301dc0
	if (!ctx.cr0.eq) goto loc_82301DC0;
loc_82301E10:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301CC0) {
	__imp__sub_82301CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82301E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82301E20;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,124(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82301e70
	if (ctx.cr6.lt) goto loc_82301E70;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822ebc10
	ctx.lr = 0x82301E48;
	sub_822EBC10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,2536
	ctx.r4.s64 = ctx.r11.s64 + 2536;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82280b08
	ctx.lr = 0x82301E64;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82301E70:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r25,r11,31
	ctx.r25.u64 = ctx.r11.u32 & 0x1;
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82301eb8
	if (ctx.cr6.eq) goto loc_82301EB8;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82301f0c
	goto loc_82301F0C;
loc_82301EB8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82301ec8
	if (ctx.cr6.eq) goto loc_82301EC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82301f0c
	goto loc_82301F0C;
loc_82301EC8:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82301f08
	if (ctx.cr6.eq) goto loc_82301F08;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822d3ea0
	ctx.lr = 0x82301EDC;
	sub_822D3EA0(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// b 0x82301f0c
	goto loc_82301F0C;
loc_82301F08:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82301F0C:
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f8,128(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// beq cr6,0x82301fc8
	if (ctx.cr6.eq) goto loc_82301FC8;
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r28,56
	ctx.r10.s64 = ctx.r28.s64 * 56;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r6,r31,136
	ctx.r6.s64 = ctx.r31.s64 + 136;
	// addi r11,r11,13432
	ctx.r11.s64 = ctx.r11.s64 + 13432;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82301950
	ctx.lr = 0x82301F68;
	sub_82301950(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwbrx r9,r10,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32));
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82301fb8
	if (!ctx.cr6.gt) goto loc_82301FB8;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82301F94:
	// lwbrx r8,0,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82301fb8
	if (ctx.cr6.gt) goto loc_82301FB8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82301f94
	if (ctx.cr6.lt) goto loc_82301F94;
loc_82301FB8:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r7,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82301fd4
	goto loc_82301FD4;
loc_82301FC8:
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
loc_82301FD4:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301ff8
	if (ctx.cr6.eq) goto loc_82301FF8;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82301FF8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// bge cr6,0x82302020
	if (!ctx.cr6.lt) goto loc_82302020;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301a78
	ctx.lr = 0x82302010;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82302020
	if (!ctx.cr6.eq) goto loc_82302020;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82302020:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82301E18) {
	__imp__sub_82301E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82302044) {
	__imp__sub_82302044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302048) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823011d0
	ctx.lr = 0x8230206C;
	sub_823011D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebc10
	ctx.lr = 0x82302074;
	sub_822EBC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// bl 0x82301290
	ctx.lr = 0x82302088;
	sub_82301290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82302098
	if (!ctx.cr6.lt) goto loc_82302098;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823020a4
	goto loc_823020A4;
loc_82302098:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_823020A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

PPC_WEAK_FUNC(sub_82302048) {
	__imp__sub_82302048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823020BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823020BC) {
	__imp__sub_823020BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823020C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823020C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823011d0
	ctx.lr = 0x823020E0;
	sub_823011D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebc10
	ctx.lr = 0x823020E8;
	sub_822EBC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// bl 0x82301290
	ctx.lr = 0x823020FC;
	sub_82301290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82302110
	if (!ctx.cr6.lt) goto loc_82302110;
loc_82302104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82302110:
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,13432
	ctx.r10.s64 = ctx.r10.s64 + 13432;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82301418
	ctx.lr = 0x8230212C;
	sub_82301418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302104
	if (ctx.cr6.lt) goto loc_82302104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82301530
	ctx.lr = 0x82302140;
	sub_82301530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82302104
	if (ctx.cr6.lt) goto loc_82302104;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// bl 0x82301e18
	ctx.lr = 0x8230217C;
	sub_82301E18(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823020C0) {
	__imp__sub_823020C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82302184) {
	__imp__sub_82302184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82302190;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x823021A4;
	sub_822EC4E8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r26,r31,100
	ctx.r26.s64 = ctx.r31.s64 + 100;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x823021c8
	if (ctx.cr6.eq) goto loc_823021C8;
	// bl 0x822eb870
	ctx.lr = 0x823021C0;
	sub_822EB870(ctx, base);
	// stw r23,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r23.u32);
	// b 0x823021d4
	goto loc_823021D4;
loc_823021C8:
	// bl 0x822eb8e8
	ctx.lr = 0x823021CC;
	sub_822EB8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823022b4
	if (!ctx.cr6.eq) goto loc_823022B4;
loc_823021D4:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r27,-31836
	ctx.r27.s64 = -2086404096;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823022c8
	if (!ctx.cr6.eq) goto loc_823022C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301a78
	ctx.lr = 0x823021F4;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823022c8
	if (ctx.cr6.eq) goto loc_823022C8;
	// lwz r30,-25876(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25876);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822dcdb8
	ctx.lr = 0x8230220C;
	sub_822DCDB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8230221C;
	sub_823DE1F0(ctx, base);
	// li r30,2048
	ctx.r30.s64 = 2048;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// ble cr6,0x82302264
	if (!ctx.cr6.gt) goto loc_82302264;
loc_82302228:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301a78
	ctx.lr = 0x82302234;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823022c8
	if (ctx.cr6.eq) goto loc_823022C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822dcdb8
	ctx.lr = 0x82302248;
	sub_822DCDB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82302258;
	sub_823DE1F0(ctx, base);
	// addi r30,r30,2048
	ctx.r30.s64 = ctx.r30.s64 + 2048;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82302228
	if (ctx.cr6.lt) goto loc_82302228;
loc_82302264:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823020c0
	ctx.lr = 0x82302278;
	sub_823020C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823022c4
	if (!ctx.cr6.eq) goto loc_823022C4;
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebc10
	ctx.lr = 0x82302290;
	sub_822EBC10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,2724
	ctx.r4.s64 = ctx.r11.s64 + 2724;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823022A4;
	sub_82280B08(ctx, base);
loc_823022A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb870
	ctx.lr = 0x823022AC;
	sub_822EB870(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb8d0
	ctx.lr = 0x823022B4;
	sub_822EB8D0(ctx, base);
loc_823022B4:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x823022BC;
	sub_822EC500(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823022C4:
	// stb r25,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r25.u8);
loc_823022C8:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823022f4
	if (!ctx.cr6.eq) goto loc_823022F4;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lis r29,4
	ctx.r29.s64 = 262144;
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// bge cr6,0x823022ec
	if (!ctx.cr6.lt) goto loc_823022EC;
	// li r11,150
	ctx.r11.s64 = 150;
loc_823022EC:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8230237c
	goto loc_8230237C;
loc_823022F4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823022b4
	if (ctx.cr6.eq) goto loc_823022B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x82301a78
	ctx.lr = 0x8230231C;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82302364
	if (ctx.cr6.eq) goto loc_82302364;
loc_82302324:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r30,2048
	ctx.r30.s64 = ctx.r30.s64 + 2048;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82302344
	if (!ctx.cr6.eq) goto loc_82302344;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823022b4
	if (ctx.cr6.eq) goto loc_823022B4;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82302344:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 128, ctx.xer);
	// beq cr6,0x823022b4
	if (ctx.cr6.eq) goto loc_823022B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301a78
	ctx.lr = 0x8230235C;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82302324
	if (!ctx.cr6.eq) goto loc_82302324;
loc_82302364:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8230237c
	if (!ctx.cr6.gt) goto loc_8230237C;
	// lis r29,4
	ctx.r29.s64 = 262144;
loc_8230237C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb900
	ctx.lr = 0x82302384;
	sub_822EB900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82302398
	if (!ctx.cr6.eq) goto loc_82302398;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebb40
	ctx.lr = 0x82302398;
	sub_822EBB40(ctx, base);
loc_82302398:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x823023A0;
	sub_822EC500(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb900
	ctx.lr = 0x823023A8;
	sub_822EB900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823023f0
	if (!ctx.cr6.eq) goto loc_823023F0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ebf00
	ctx.lr = 0x823023BC;
	sub_822EBF00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb8e8
	ctx.lr = 0x823023C4;
	sub_822EB8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823023f0
	if (ctx.cr6.eq) goto loc_823023F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ebc10
	ctx.lr = 0x823023D4;
	sub_822EBC10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,2688
	ctx.r4.s64 = ctx.r11.s64 + 2688;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823023E8;
	sub_82280B08(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823023F0:
	// lwz r11,-25876(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25876);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eb930
	ctx.lr = 0x82302410;
	sub_822EB930(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec4e8
	ctx.lr = 0x8230241C;
	sub_822EC4E8(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82302574
	if (!ctx.cr6.eq) goto loc_82302574;
	// cmpwi cr6,r27,2048
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2048, ctx.xer);
	// blt cr6,0x823024f4
	if (ctx.cr6.lt) goto loc_823024F4;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230251c
	if (!ctx.cr6.eq) goto loc_8230251C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82302048
	ctx.lr = 0x82302448;
	sub_82302048(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823024f4
	if (ctx.cr6.eq) goto loc_823024F4;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r30,2048
	ctx.r11.s64 = ctx.r30.s64 + 2048;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823024f4
	if (ctx.cr6.lt) goto loc_823024F4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823024b4
	if (!ctx.cr6.gt) goto loc_823024B4;
loc_82302470:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82301a78
	ctx.lr = 0x82302484;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823024a8
	if (!ctx.cr6.eq) goto loc_823024A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301b00
	ctx.lr = 0x82302498;
	sub_82301B00(ctx, base);
	// bl 0x822dcdb8
	ctx.lr = 0x8230249C;
	sub_822DCDB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// bl 0x823de1f0
	ctx.lr = 0x823024A8;
	sub_823DE1F0(ctx, base);
loc_823024A8:
	// addi r29,r29,2048
	ctx.r29.s64 = ctx.r29.s64 + 2048;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82302470
	if (ctx.cr6.lt) goto loc_82302470;
loc_823024B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823020c0
	ctx.lr = 0x823024C4;
	sub_823020C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823024f4
	if (ctx.cr6.eq) goto loc_823024F4;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82302508
	if (!ctx.cr6.gt) goto loc_82302508;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,2632
	ctx.r4.s64 = ctx.r11.s64 + 2632;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823024F4;
	sub_82280B08(ctx, base);
loc_823024F4:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823022a4
	if (!ctx.cr6.eq) goto loc_823022A4;
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// b 0x823022a4
	goto loc_823022A4;
loc_82302508:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// stb r25,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r25.u8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8230251C:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,2048
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2048, ctx.xer);
	// blt cr6,0x82302574
	if (ctx.cr6.lt) goto loc_82302574;
	// rlwinm r27,r27,21,11,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 21) & 0x1FFFFF;
loc_8230252C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82301a78
	ctx.lr = 0x82302540;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82302564
	if (!ctx.cr6.eq) goto loc_82302564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301b00
	ctx.lr = 0x82302554;
	sub_82301B00(ctx, base);
	// bl 0x822dcdb8
	ctx.lr = 0x82302558;
	sub_822DCDB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// bl 0x823de1f0
	ctx.lr = 0x82302564;
	sub_823DE1F0(ctx, base);
loc_82302564:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,2048
	ctx.r30.s64 = ctx.r30.s64 + 2048;
	// addi r28,r28,2048
	ctx.r28.s64 = ctx.r28.s64 + 2048;
	// bne 0x8230252c
	if (!ctx.cr0.eq) goto loc_8230252C;
loc_82302574:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x8230257C;
	sub_822EC500(ctx, base);
	// bl 0x8228bd80
	ctx.lr = 0x82302580;
	sub_8228BD80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302188) {
	__imp__sub_82302188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302588) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,14104
	ctx.r10.s64 = ctx.r10.s64 + 14104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82302188
	sub_82302188(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302588) {
	__imp__sub_82302588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823025A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823025B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-25872
	ctx.r31.s64 = ctx.r11.s64 + -25872;
	// lbz r11,17632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823025d4
	if (!ctx.cr6.eq) goto loc_823025D4;
	// bl 0x8228bfd8
	ctx.lr = 0x823025D0;
	sub_8228BFD8(ctx, base);
	// stb r3,17632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17632, ctx.r3.u8);
loc_823025D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,8344
	ctx.r10.s64 = ctx.r31.s64 + 8344;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x823025F8;
	sub_822EC4E8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bne 0x8230261c
	if (!ctx.cr0.eq) goto loc_8230261C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcf80
	ctx.lr = 0x8230261C;
	sub_822DCF80(ctx, base);
loc_8230261C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82302640
	if (ctx.cr6.eq) goto loc_82302640;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x82302638;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82302640:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82302684
	if (ctx.cr6.lt) goto loc_82302684;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82302680
	if (ctx.cr6.eq) goto loc_82302680;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x82302678;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82302680:
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82302684:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x8230268C;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823025A8) {
	__imp__sub_823025A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82302694) {
	__imp__sub_82302694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r8,35236
	ctx.r4.u64 = ctx.r8.u64 | 35236;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r10,-12528
	ctx.r6.s64 = ctx.r10.s64 + -12528;
	// stb r11,-12528(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12528, ctx.r11.u8);
	// ori r5,r9,35228
	ctx.r5.u64 = ctx.r9.u64 | 35228;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f0,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stwx r10,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302698) {
	__imp__sub_82302698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823026F0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r5,r10,-25872
	ctx.r5.s64 = ctx.r10.s64 + -25872;
	// lfs f1,2768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2768);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820b40b0
	ctx.lr = 0x82302714;
	sub_820B40B0(ctx, base);
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-12528
	ctx.r7.s64 = ctx.r9.s64 + -12528;
	// ori r6,r8,35232
	ctx.r6.u64 = ctx.r8.u64 | 35232;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823026F0) {
	__imp__sub_823026F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82302750;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-25872
	ctx.r31.s64 = ctx.r11.s64 + -25872;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r31,17528
	ctx.r9.s64 = ctx.r31.s64 + 17528;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r31,17512
	ctx.r11.s64 = ctx.r31.s64 + 17512;
	// stw r9,17516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17516, ctx.r9.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,17508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17508, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r9,17528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17528, ctx.r9.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// addi r11,r31,17536
	ctx.r11.s64 = ctx.r31.s64 + 17536;
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,17532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17532, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r30,17512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17512, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r30.u32);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stb r29,17504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17504, ctx.r29.u8);
loc_823027DC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,17536
	ctx.r9.s64 = ctx.r31.s64 + 17536;
	// addi r8,r31,17537
	ctx.r8.s64 = ctx.r31.s64 + 17537;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stbx r30,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u8);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// beq cr6,0x82302800
	if (ctx.cr6.eq) goto loc_82302800;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82302804
	goto loc_82302804;
loc_82302800:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82302804:
	// addi r9,r31,17540
	ctx.r9.s64 = ctx.r31.s64 + 17540;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lbz r8,17528(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17528);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823027dc
	if (ctx.cr6.lt) goto loc_823027DC;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// addi r6,r31,308
	ctx.r6.s64 = ctx.r31.s64 + 308;
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stb r7,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r7.u8);
	// stw r6,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// ori r8,r3,48000
	ctx.r8.u64 = ctx.r3.u64 | 48000;
	// stb r29,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r29.u8);
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stb r30,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r30.u8);
	// addi r7,r31,17504
	ctx.r7.s64 = ctx.r31.s64 + 17504;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stb r30,309(r31)
	PPC_STORE_U8(ctx.r31.u32 + 309, ctx.r30.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r30.u8);
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r6,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r6.u8);
	// stb r29,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r29.u8);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stb r30,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r30.u8);
	// bl 0x82090938
	ctx.lr = 0x823028B0;
	sub_82090938(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// stb r30,17536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17536, ctx.r30.u8);
	// stb r11,17528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17528, ctx.r11.u8);
	// addi r11,r31,17528
	ctx.r11.s64 = ctx.r31.s64 + 17528;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stb r30,17537(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17537, ctx.r30.u8);
	// stw r11,17524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17524, ctx.r11.u32);
	// addi r3,r5,-12528
	ctx.r3.s64 = ctx.r5.s64 + -12528;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,17544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17544, ctx.r30.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r29,17545(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17545, ctx.r29.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,2416(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,17540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 17540, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f0,17548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 17548, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r7,17500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17500, ctx.r7.u8);
	// stb r6,17504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17504, ctx.r6.u8);
	// stw r10,20332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20332, ctx.r10.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,17520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17520, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302748) {
	__imp__sub_82302748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230291C) {
	__imp__sub_8230291C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r10,r11,17356
	ctx.r10.s64 = ctx.r11.s64 + 17356;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,17356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17356, temp.u32);
	// stw r10,17348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17348, ctx.r10.u32);
	// stfs f13,17360(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17360, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302920) {
	__imp__sub_82302920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230294C) {
	__imp__sub_8230294C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302950) {
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
	// bl 0x823627e8
	ctx.lr = 0x82302964;
	sub_823627E8(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r7,r11,20496
	ctx.r7.s64 = ctx.r11.s64 + 20496;
	// addi r6,r11,20520
	ctx.r6.s64 = ctx.r11.s64 + 20520;
	// addi r5,r11,20484
	ctx.r5.s64 = ctx.r11.s64 + 20484;
	// addi r9,r11,20476
	ctx.r9.s64 = ctx.r11.s64 + 20476;
	// addi r4,r11,20488
	ctx.r4.s64 = ctx.r11.s64 + 20488;
	// lfsx f12,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,20492
	ctx.r31.s64 = ctx.r11.s64 + 20492;
	// lfsx f10,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r11,20512
	ctx.r7.s64 = ctx.r11.s64 + 20512;
	// lfsx f8,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r11,20516
	ctx.r6.s64 = ctx.r11.s64 + 20516;
	// addi r5,r11,20480
	ctx.r5.s64 = ctx.r11.s64 + 20480;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-25872
	ctx.r11.s64 = ctx.r8.s64 + -25872;
	// lfsx f13,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfsx f9,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfsx f7,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfsx f6,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,16832(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16832, temp.u32);
	// stfs f13,16808(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16808, temp.u32);
	// stfs f12,16816(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16816, temp.u32);
	// stfs f11,16812(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16812, temp.u32);
	// stfs f10,16828(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16828, temp.u32);
	// stfs f9,16820(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16820, temp.u32);
	// stfs f8,16840(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16840, temp.u32);
	// stfs f7,16824(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16824, temp.u32);
	// stfs f6,16836(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16836, temp.u32);
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

PPC_WEAK_FUNC(sub_82302950) {
	__imp__sub_82302950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82302A10;
	__savegprlr_23(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r9,r11,17356
	ctx.r9.s64 = ctx.r11.s64 + 17356;
	// addi r8,r11,17084
	ctx.r8.s64 = ctx.r11.s64 + 17084;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,17348
	ctx.r7.s64 = ctx.r11.s64 + 17348;
	// lbz r10,17500(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17500);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,17348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17348, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,16844(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16844, temp.u32);
	// addi r31,r11,17492
	ctx.r31.s64 = ctx.r11.s64 + 17492;
	// stfs f0,16848(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16848, temp.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f0,16852(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16852, temp.u32);
	// li r29,17
	ctx.r29.s64 = 17;
	// stfs f0,17356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17356, temp.u32);
	// addi r28,r11,17012
	ctx.r28.s64 = ctx.r11.s64 + 17012;
	// stfs f13,17360(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17360, temp.u32);
	// li r27,6
	ctx.r27.s64 = 6;
	// stfs f0,16900(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16900, temp.u32);
	// addi r26,r11,17060
	ctx.r26.s64 = ctx.r11.s64 + 17060;
	// stfs f0,16904(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16904, temp.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stfs f0,16908(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16908, temp.u32);
	// addi r24,r11,17124
	ctx.r24.s64 = ctx.r11.s64 + 17124;
	// stfs f0,16924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16924, temp.u32);
	// stfs f13,16956(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16956, temp.u32);
	// stw r8,16860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16860, ctx.r8.u32);
	// stfs f0,17084(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17084, temp.u32);
	// stw r7,16932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16932, ctx.r7.u32);
	// stfs f0,17088(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17088, temp.u32);
	// stw r6,16936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16936, ctx.r6.u32);
	// stfs f0,17092(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17092, temp.u32);
	// stw r5,16940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16940, ctx.r5.u32);
	// stfs f13,17096(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17096, temp.u32);
	// stw r4,16944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16944, ctx.r4.u32);
	// stfs f0,17100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17100, temp.u32);
	// stw r3,16948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16948, ctx.r3.u32);
	// stfs f13,17104(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17104, temp.u32);
	// stw r31,16928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16928, ctx.r31.u32);
	// stfs f0,17108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17108, temp.u32);
	// stw r30,16920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16920, ctx.r30.u32);
	// stfs f13,17112(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17112, temp.u32);
	// stw r29,16960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16960, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,16964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16964, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r27,16976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16976, ctx.r27.u32);
	// stw r26,16968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16968, ctx.r26.u32);
	// stw r25,16972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16972, ctx.r25.u32);
	// stb r10,17116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17116, ctx.r10.u8);
	// stw r24,17120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17120, ctx.r24.u32);
	// beq cr6,0x82302b44
	if (ctx.cr6.eq) goto loc_82302B44;
	// addi r8,r11,17156
	ctx.r8.s64 = ctx.r11.s64 + 17156;
	// addi r10,r11,17140
	ctx.r10.s64 = ctx.r11.s64 + 17140;
loc_82302B04:
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r10.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,-16(r10)
	PPC_STORE_U8(ctx.r10.u32 + -16, ctx.r9.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82302B1C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x82302b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82302B1C;
	// lbz r7,17116(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17116);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82302b04
	if (ctx.cr6.lt) goto loc_82302B04;
loc_82302B44:
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302A08) {
	__imp__sub_82302A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302B48) {
	PPC_FUNC_PROLOGUE();
	// li r11,456
	ctx.r11.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302B48) {
	__imp__sub_82302B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302B58) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,456
	ctx.r4.s64 = 456;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82302B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82302b9c
	if (ctx.cr6.eq) goto loc_82302B9C;
	// bl 0x82307088
	ctx.lr = 0x82302B94;
	sub_82307088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82302ba0
	goto loc_82302BA0;
loc_82302B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82302BA0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82302B58) {
	__imp__sub_82302B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82302BBC) {
	__imp__sub_82302BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r7,r11,-25872
	ctx.r7.s64 = ctx.r11.s64 + -25872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r7,332
	ctx.r11.s64 = ctx.r7.s64 + 332;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2772);
	ctx.f13.f64 = double(temp.f32);
loc_82302BE0:
	// li r9,3
	ctx.r9.s64 = 3;
loc_82302BE4:
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82302BEC:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x82302bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82302BEC;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82302be4
	if (!ctx.cr0.eq) goto loc_82302BE4;
	// addi r10,r7,8012
	ctx.r10.s64 = ctx.r7.s64 + 8012;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82302be0
	if (ctx.cr6.lt) goto loc_82302BE0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302BC0) {
	__imp__sub_82302BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82302C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r28,r10,-25872
	ctx.r28.s64 = ctx.r10.s64 + -25872;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r28,324
	ctx.r10.s64 = ctx.r28.s64 + 324;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820900d0
	ctx.lr = 0x82302C80;
	sub_820900D0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820900d0
	ctx.lr = 0x82302C9C;
	sub_820900D0(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lwz r11,-12552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12552);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82302cc8
	if (ctx.cr6.eq) goto loc_82302CC8;
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82302cc8
	if (ctx.cr6.eq) goto loc_82302CC8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82302ccc
	if (!ctx.cr6.eq) goto loc_82302CCC;
loc_82302CC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82302CCC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820900d0
	ctx.lr = 0x82302CE8;
	sub_820900D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82302d18
	if (ctx.cr6.eq) goto loc_82302D18;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820900d0
	ctx.lr = 0x82302D18;
	sub_820900D0(ctx, base);
loc_82302D18:
	// lfs f0,8004(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8004);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820900d0
	ctx.lr = 0x82302D38;
	sub_820900D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302C20) {
	__imp__sub_82302C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302D40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82302db0
	if (ctx.cr6.eq) goto loc_82302DB0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12552);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82302db0
	if (ctx.cr6.eq) goto loc_82302DB0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-25872
	ctx.r11.s64 = ctx.r10.s64 + -25872;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82302D7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82302D84:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82302db8
	if (!ctx.cr6.eq) goto loc_82302DB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1280
	ctx.r10.s64 = ctx.r10.s64 + 1280;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82302d84
	if (ctx.cr6.lt) goto loc_82302D84;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,3840
	ctx.r9.s64 = ctx.r9.s64 + 3840;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x82302d7c
	if (ctx.cr6.lt) goto loc_82302D7C;
loc_82302DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82302DB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302D40) {
	__imp__sub_82302D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82302DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820f7d78
	ctx.lr = 0x82302DE0;
	sub_820F7D78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82302d40
	ctx.lr = 0x82302DF0;
	sub_82302D40(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r26,r11,228
	ctx.r26.s64 = ctx.r11.s64 + 228;
	// lbzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82302e18
	if (ctx.cr6.eq) goto loc_82302E18;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82302e64
	if (ctx.cr6.eq) goto loc_82302E64;
loc_82302E18:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82302E1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82302E20:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82302c20
	ctx.lr = 0x82302E3C;
	sub_82302C20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82302e20
	if (ctx.cr6.lt) goto loc_82302E20;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82302e1c
	if (ctx.cr6.lt) goto loc_82302E1C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stbx r9,r25,r26
	PPC_STORE_U8(ctx.r25.u32 + ctx.r26.u32, ctx.r9.u8);
loc_82302E64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82302DC0) {
	__imp__sub_82302DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82302E6C) {
	__imp__sub_82302E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82302E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,300
	ctx.r9.s64 = ctx.r11.s64 + 300;
	// beq cr6,0x82302e90
	if (ctx.cr6.eq) goto loc_82302E90;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
loc_82302E90:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r9,17524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17524, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230311c
	if (!ctx.cr6.eq) goto loc_8230311C;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// addi r30,r11,8024
	ctx.r30.s64 = ctx.r11.s64 + 8024;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,8436
	ctx.r9.s64 = ctx.r11.s64 + 8436;
	// addi r11,r11,8484
	ctx.r11.s64 = ctx.r11.s64 + 8484;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r5.u32);
	// stwx r31,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82302efc
	if (!ctx.cr6.gt) goto loc_82302EFC;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82302efc
	if (ctx.cr6.eq) goto loc_82302EFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82302EF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82302ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82302EF4;
loc_82302EFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82302ff4
	if (ctx.cr6.lt) goto loc_82302FF4;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82302F24:
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f12,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfsx f11,r7,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f9,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lbz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f8,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfsx f7,r7,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f6,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r7,-8(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + -8);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f4,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfsx f3,r7,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f2,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// stfsu f2,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfsx f0,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfsx f13,r8,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82302f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82302F24;
loc_82302FF4:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8230304c
	if (!ctx.cr6.lt) goto loc_8230304C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82303014:
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r9,r7,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfsx f11,r9,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82303014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303014;
loc_8230304C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x823030e4
	if (ctx.cr6.lt) goto loc_823030E4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82303080:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fneg f4,f12
	ctx.f4.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f3,f11
	ctx.f3.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f2,f9
	ctx.f2.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f10,f6,f0,f9
	ctx.f10.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f11,f8,f0,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsel f9,f5,f0,f7
	ctx.f9.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsel f8,f4,f13,f12
	ctx.f8.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsel f6,f2,f13,f10
	ctx.f6.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsel f7,f3,f13,f11
	ctx.f7.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsel f5,f1,f13,f9
	ctx.f5.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82303080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303080;
loc_823030E4:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8230311c
	if (!ctx.cr6.lt) goto loc_8230311C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82303100:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f8,f10,f13,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82303100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303100;
loc_8230311C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82302E70) {
	__imp__sub_82302E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,228
	ctx.r9.s64 = ctx.r11.s64 + 228;
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303128) {
	__imp__sub_82303128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82303148;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,11
	ctx.r9.s64 = 11;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82303164:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82303164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303164;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r31,r9,-25872
	ctx.r31.s64 = ctx.r9.s64 + -25872;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r11,8008(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8008);
	// li r28,12
	ctx.r28.s64 = 12;
	// lbz r10,17500(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17500);
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r26,r31,17504
	ctx.r26.s64 = ctx.r31.s64 + 17504;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stb r5,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r5.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stb r29,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r29.u8);
	// stb r10,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r10.u8);
	// stb r28,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r28.u8);
	// stb r8,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r8.u8);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// blt cr6,0x82303258
	if (ctx.cr6.lt) goto loc_82303258;
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bge cr6,0x82303258
	if (!ctx.cr6.lt) goto loc_82303258;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// stb r29,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r29.u8);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,9640
	ctx.r9.s64 = ctx.r11.s64 + 9640;
	// stb r10,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r10.u8);
	// lwzx r8,r28,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e4c70
	ctx.lr = 0x82303230;
	sub_822E4C70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820908e0
	ctx.lr = 0x8230323C;
	sub_820908E0(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82303240;
	sub_822E4C88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r31,228
	ctx.r7.s64 = ctx.r31.s64 + 228;
	// stwx r3,r28,r27
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r3.u32);
	// stbx r29,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r29.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82303258:
	// bl 0x822e4c70
	ctx.lr = 0x8230325C;
	sub_822E4C70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820908e0
	ctx.lr = 0x82303268;
	sub_820908E0(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x8230326C;
	sub_822E4C88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r9,r31,228
	ctx.r9.s64 = ctx.r31.s64 + 228;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// stbx r29,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82303140) {
	__imp__sub_82303140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230328C) {
	__imp__sub_8230328C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303290) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,26076
	ctx.r11.s64 = ctx.r11.s64 + 26076;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lfs f0,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,44(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r3,80(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f29,f11,f0,f8
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f30,f10,f0,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// bl 0x822dd790
	ctx.lr = 0x82303308;
	sub_822DD790(ctx, base);
	// fdivs f13,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// addi r10,r11,-25872
	ctx.r10.s64 = ctx.r11.s64 + -25872;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lfs f0,2776(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2776);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,17348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// fsel f5,f6,f13,f0
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,17348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ble cr6,0x82303520
	if (!ctx.cr6.gt) goto loc_82303520;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823034b4
	if (ctx.cr6.lt) goto loc_823034B4;
	// addi r8,r5,-5
	ctx.r8.s64 = ctx.r5.s64 + -5;
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// li r11,8
	ctx.r11.s64 = 8;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82303388:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// lfsx f11,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,17348(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,17348(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f0
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,17348(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f2,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,17348(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// lfsx f1,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f1,f12,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,17348(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f8,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,17348(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfsx f7,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsel f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfs f3,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r6.u32);
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x82303388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303388;
loc_823034B4:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82303520
	if (!ctx.cr6.lt) goto loc_82303520;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// fsubs f12,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823034D0:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f11,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// bdnz 0x823034d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823034D0;
loc_82303520:
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r9,17348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17348);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// stfs f30,16952(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16952, temp.u32);
	// stw r8,17352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17352, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82303290) {
	__imp__sub_82303290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230357C) {
	__imp__sub_8230357C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lfs f10,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,-25880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25880);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-25872
	ctx.r8.s64 = ctx.r10.s64 + -25872;
	// lfs f11,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,17000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17000);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x823035c4
	if (ctx.cr6.gt) goto loc_823035C4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// blr 
	return;
loc_823035C4:
	// lfs f13,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f1,f10,f11,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303580) {
	__imp__sub_82303580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823035FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823035FC) {
	__imp__sub_823035FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303600) {
	__imp__sub_82303600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823036B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de014
	ctx.lr = 0x823036C0;
	__savefpr_23(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,16972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16972);
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne cr6,0x823037c0
	if (!ctx.cr6.eq) goto loc_823037C0;
	// fsubs f5,f13,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f12,17020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17020);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,17012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17012);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,17016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17016);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,17028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17028);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,17032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17032);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,5880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f4,f9
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fadds f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fsel f9,f9,f7,f13
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// fmadds f8,f12,f2,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmadds f8,f11,f2,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fsel f9,f7,f9,f12
	ctx.f9.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f8,f10,f2,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f8,17020(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17020, temp.u32);
	// fmuls f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fadds f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsel f13,f4,f9,f11
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// fadds f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadds f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsel f13,f9,f13,f10
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fmuls f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,17024(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17024, temp.u32);
	// fmuls f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fadds f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f13,17012(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17012, temp.u32);
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f13,17016(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17016, temp.u32);
	// fadds f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,17028(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17028, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,17032(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17032, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de060
	ctx.lr = 0x823037B4;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823037C0:
	// fsubs f27,f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f12,17028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17028);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,17032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17032);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,17012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17012);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f26,f11,f13
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f4,17016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17016);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,17020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17020);
	ctx.f30.f64 = double(temp.f32);
	// lfs f5,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,17024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17024);
	ctx.f29.f64 = double(temp.f32);
	// lfs f9,17044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17044);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,17052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17052);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,17056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17056);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f28,f10
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// lfs f31,5880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	ctx.f31.f64 = double(temp.f32);
	// fadds f12,f26,f4
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fadds f11,f28,f30
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f10,f26,f29
	ctx.f10.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f28,f12
	ctx.f28.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f30,f13,f2
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f29,f12,f2
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fsel f4,f4,f5,f13
	ctx.f4.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f13.f64;
	// fsel f5,f28,f5,f12
	ctx.f5.f64 = ctx.f28.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// fmadds f30,f11,f2,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f30.f64));
	// fmadds f29,f10,f2,f29
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f28,f4,f11
	ctx.f28.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f26,f5,f10
	ctx.f26.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fmadds f30,f9,f2,f30
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f30.f64));
	// fmadds f29,f8,f2,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fsel f4,f28,f4,f11
	ctx.f4.f64 = ctx.f28.f64 >= 0.0 ? ctx.f4.f64 : ctx.f11.f64;
	// fsel f5,f26,f5,f10
	ctx.f5.f64 = ctx.f26.f64 >= 0.0 ? ctx.f5.f64 : ctx.f10.f64;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f30,f7,f2,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f30.f64));
	// stfs f30,17028(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17028, temp.u32);
	// fmadds f2,f6,f2,f29
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f29.f64));
	// stfs f2,17032(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17032, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f2,f27,f13
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f29,f27,f12
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fsubs f26,f4,f9
	ctx.f26.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fsubs f24,f5,f8
	ctx.f24.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fadds f25,f13,f11
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f30,f27,f11
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f23,f10,f12
	ctx.f23.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fmuls f28,f27,f10
	ctx.f28.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsel f13,f26,f4,f9
	ctx.f13.f64 = ctx.f26.f64 >= 0.0 ? ctx.f4.f64 : ctx.f9.f64;
	// fsel f12,f24,f5,f8
	ctx.f12.f64 = ctx.f24.f64 >= 0.0 ? ctx.f5.f64 : ctx.f8.f64;
	// fadds f4,f25,f11
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fmuls f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fadds f8,f23,f10
	ctx.f8.f64 = double(float(ctx.f23.f64 + ctx.f10.f64));
	// fmuls f10,f27,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f26,f12,f6
	ctx.f26.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsel f9,f5,f13,f7
	ctx.f9.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsel f12,f26,f12,f6
	ctx.f12.f64 = ctx.f26.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f9,17036(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17036, temp.u32);
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f12,17040(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17040, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f8,f4,f3
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,17052(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17052, temp.u32);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,17012(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17012, temp.u32);
	// fadds f13,f29,f5
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f5.f64));
	// stfs f13,17016(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17016, temp.u32);
	// fadds f12,f30,f6
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// fadds f13,f28,f5
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// stfs f12,17020(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17020, temp.u32);
	// stfs f13,17024(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17024, temp.u32);
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f10,f5
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f12,17044(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17044, temp.u32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,17048(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17048, temp.u32);
	// stfs f0,17056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 17056, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de060
	ctx.lr = 0x82303938;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823036B0) {
	__imp__sub_823036B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82303944) {
	__imp__sub_82303944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82303950;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r31,r3,176
	ctx.r31.s64 = ctx.r3.s64 * 176;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r29,26076
	ctx.r11.s64 = ctx.r29.s64 + 26076;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82303c48
	if (ctx.cr6.eq) goto loc_82303C48;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f7d40
	ctx.lr = 0x8230399C;
	sub_820F7D40(ctx, base);
	// addi r11,r29,26216
	ctx.r11.s64 = ctx.r29.s64 + 26216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r10,-25872
	ctx.r31.s64 = ctx.r10.s64 + -25872;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f9,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f1,f3,f13,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16864(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16864, temp.u32);
	// fmadds f13,f3,f11,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,16868(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16868, temp.u32);
	// fmadds f11,f0,f5,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f2.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,16872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16872, temp.u32);
	// fneg f0,f6
	ctx.f0.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,16884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16884, temp.u32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f12,f5,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f8,16876(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16876, temp.u32);
	// fmadds f5,f10,f5,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f7,16880(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16880, temp.u32);
	// fmadds f12,f4,f6,f11
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f4,f8,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,16888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16888, temp.u32);
	// fmadds f13,f4,f7,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,16892(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16892, temp.u32);
	// stfs f0,16896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16896, temp.u32);
	// bl 0x82302950
	ctx.lr = 0x82303A5C;
	sub_82302950(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20664);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82303a80
	if (!ctx.cr6.eq) goto loc_82303A80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236a040
	ctx.lr = 0x82303A78;
	sub_8236A040(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82303a84
	goto loc_82303A84;
loc_82303A80:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82303A84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82303290
	ctx.lr = 0x82303A8C;
	sub_82303290(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16960(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16960);
	// addi r7,r31,16964
	ctx.r7.s64 = ctx.r31.s64 + 16964;
	// addi r5,r31,16860
	ctx.r5.s64 = ctx.r31.s64 + 16860;
	// addi r4,r31,16808
	ctx.r4.s64 = ctx.r31.s64 + 16808;
	// stw r11,16972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16972, ctx.r11.u32);
	// stw r11,16920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16920, ctx.r11.u32);
	// bl 0x820b5e10
	ctx.lr = 0x82303AB0;
	sub_820B5E10(ctx, base);
	// lwz r10,16976(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16976);
	// lwz r9,16972(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16972);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f29,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stb r10,17140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17140, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303b08
	if (ctx.cr6.eq) goto loc_82303B08;
	// addi r10,r31,17008
	ctx.r10.s64 = ctx.r31.s64 + 17008;
loc_82303ADC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f10,f12,f31,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fsel f9,f11,f29,f10
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f29.f64 : ctx.f10.f64;
	// stfsu f9,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lbz r9,17140(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17140);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82303adc
	if (ctx.cr6.lt) goto loc_82303ADC;
loc_82303B08:
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,-25880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25880);
	// lfs f11,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f11,f3
	ctx.cr6.compare(ctx.f11.f64, ctx.f3.f64);
	// ble cr6,0x82303b6c
	if (!ctx.cr6.gt) goto loc_82303B6C;
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 17000);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bgt cr6,0x82303b40
	if (ctx.cr6.gt) goto loc_82303B40;
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// b 0x82303b6c
	goto loc_82303B6C;
loc_82303B40:
	// lfs f12,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82303b6c
	if (ctx.cr6.eq) goto loc_82303B6C;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82303b6c
	if (!ctx.cr6.lt) goto loc_82303B6C;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f3,f11,f12,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
loc_82303B6C:
	// lfs f2,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823036b0
	ctx.lr = 0x82303B78;
	sub_823036B0(ctx, base);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r6,20472(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20472);
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82303b94
	if (!ctx.cr6.eq) goto loc_82303B94;
	// lfs f31,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_82303B94:
	// lbz r10,17140(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303bc8
	if (ctx.cr6.eq) goto loc_82303BC8;
	// addi r9,r31,17152
	ctx.r9.s64 = ctx.r31.s64 + 17152;
	// addi r10,r31,17008
	ctx.r10.s64 = ctx.r31.s64 + 17008;
loc_82303BAC:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsu f0,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lbz r8,17140(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17140);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82303bac
	if (ctx.cr6.lt) goto loc_82303BAC;
loc_82303BC8:
	// lwz r11,16972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16972);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,17148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17148, ctx.r11.u8);
	// lwz r10,23872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23872);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82303c00
	if (ctx.cr6.eq) goto loc_82303C00;
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82303c00
	if (!ctx.cr6.eq) goto loc_82303C00;
	// lfs f13,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82303c04
	goto loc_82303C04;
loc_82303C00:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
loc_82303C04:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303c34
	if (ctx.cr6.eq) goto loc_82303C34;
	// addi r10,r31,17248
	ctx.r10.s64 = ctx.r31.s64 + 17248;
loc_82303C18:
	// lfs f0,16988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16988);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lbz r9,17148(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17148);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82303c18
	if (ctx.cr6.lt) goto loc_82303C18;
loc_82303C34:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,17116
	ctx.r4.s64 = ctx.r31.s64 + 17116;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82090198
	ctx.lr = 0x82303C48;
	sub_82090198(ctx, base);
loc_82303C48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_82303948) {
	__imp__sub_82303948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82303C5C) {
	__imp__sub_82303C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r10,r11,-25872
	ctx.r10.s64 = ctx.r11.s64 + -25872;
	// stfs f1,8004(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8004, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303C60) {
	__imp__sub_82303C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r11,324
	ctx.r8.s64 = ctx.r11.s64 + 324;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r7,r11,328
	ctx.r7.s64 = ctx.r11.s64 + 328;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,332
	ctx.r5.s64 = ctx.r11.s64 + 332;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// li r4,1
	ctx.r4.s64 = 1;
	// stfsx f1,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// stfsx f2,r10,r5
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// stfsx f3,r10,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303C70) {
	__imp__sub_82303C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303CC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// addi r8,r11,324
	ctx.r8.s64 = ctx.r11.s64 + 324;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r7,r4,r9
	PPC_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r7.u8);
	// stwx r6,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303CC8) {
	__imp__sub_82303CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// addi r8,r11,332
	ctx.r8.s64 = ctx.r11.s64 + 332;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// stbx r7,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303D08) {
	__imp__sub_82303D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// addi r8,r11,328
	ctx.r8.s64 = ctx.r11.s64 + 328;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// stbx r7,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303D48) {
	__imp__sub_82303D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// addi r8,r11,336
	ctx.r8.s64 = ctx.r11.s64 + 336;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// stbx r7,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303D88) {
	__imp__sub_82303D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303DC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r9,-25872
	ctx.r11.s64 = ctx.r9.s64 + -25872;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r11,340
	ctx.r7.s64 = ctx.r11.s64 + 340;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r6,r4,r7
	PPC_STORE_U8(ctx.r4.u32 + ctx.r7.u32, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82303DC8) {
	__imp__sub_82303DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82303E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-25872
	ctx.r27.s64 = ctx.r11.s64 + -25872;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f0,8004(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82303E2C;
	sub_822E40F0(ctx, base);
	// addi r31,r27,324
	ctx.r31.s64 = ctx.r27.s64 + 324;
loc_82303E30:
	// li r29,3
	ctx.r29.s64 = 3;
loc_82303E34:
	// li r30,64
	ctx.r30.s64 = 64;
loc_82303E38:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82303E48;
	sub_822E40F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82303e38
	if (!ctx.cr0.eq) goto loc_82303E38;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82303e34
	if (!ctx.cr0.eq) goto loc_82303E34;
	// addi r11,r27,8004
	ctx.r11.s64 = ctx.r27.s64 + 8004;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82303e30
	if (ctx.cr6.lt) goto loc_82303E30;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82303E00) {
	__imp__sub_82303E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82303E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x82303E8C;
	sub_822E4480(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,-25872
	ctx.r27.s64 = ctx.r11.s64 + -25872;
	// addi r31,r27,324
	ctx.r31.s64 = ctx.r27.s64 + 324;
	// stfs f0,8004(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8004, temp.u32);
loc_82303EA0:
	// li r29,3
	ctx.r29.s64 = 3;
loc_82303EA4:
	// li r30,64
	ctx.r30.s64 = 64;
loc_82303EA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x82303EB8;
	sub_822E4480(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82303ea8
	if (!ctx.cr0.eq) goto loc_82303EA8;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82303ea4
	if (!ctx.cr0.eq) goto loc_82303EA4;
	// addi r11,r27,8004
	ctx.r11.s64 = ctx.r27.s64 + 8004;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82303ea0
	if (ctx.cr6.lt) goto loc_82303EA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82303E70) {
	__imp__sub_82303E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82303EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82303EE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r11,-25872
	ctx.r31.s64 = ctx.r11.s64 + -25872;
	// addi r4,r10,2816
	ctx.r4.s64 = ctx.r10.s64 + 2816;
	// li r3,9
	ctx.r3.s64 = 9;
	// lfs f1,8004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8004);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x82303F10;
	sub_82280900(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r23,r11,-12528
	ctx.r23.s64 = ctx.r11.s64 + -12528;
	// lwz r11,26072(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82304004
	if (!ctx.cr6.gt) goto loc_82304004;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r31,324
	ctx.r25.s64 = ctx.r31.s64 + 324;
	// addi r28,r10,2788
	ctx.r28.s64 = ctx.r10.s64 + 2788;
	// addi r27,r9,-31568
	ctx.r27.s64 = ctx.r9.s64 + -31568;
	// addi r24,r11,2780
	ctx.r24.s64 = ctx.r11.s64 + 2780;
loc_82303F44:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361be8
	ctx.lr = 0x82303F4C;
	sub_82361BE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82303F5C;
	sub_82280900(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82303F64:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82303F68:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82303F78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82303f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303F78;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303fd4
	if (ctx.cr6.eq) goto loc_82303FD4;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfd f2,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f3,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f3.u64);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// bl 0x82280900
	ctx.lr = 0x82303FD4;
	sub_82280900(ctx, base);
loc_82303FD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1280
	ctx.r31.s64 = ctx.r31.s64 + 1280;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82303f68
	if (ctx.cr6.lt) goto loc_82303F68;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82303f64
	if (ctx.cr6.lt) goto loc_82303F64;
	// lwz r11,26072(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26072);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82303f44
	if (ctx.cr6.lt) goto loc_82303F44;
loc_82304004:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82303EE0) {
	__imp__sub_82303EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230400C) {
	__imp__sub_8230400C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304010) {
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
	// lis r3,4
	ctx.r3.s64 = 262144;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// ori r3,r3,4096
	ctx.r3.u64 = ctx.r3.u64 | 4096;
	// bl 0x822e54e0
	ctx.lr = 0x82304038;
	sub_822E54E0(ctx, base);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r31,r9,-25872
	ctx.r31.s64 = ctx.r9.s64 + -25872;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r7,r8,2304
	ctx.r7.s64 = ctx.r8.s64 + 2304;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// bl 0x820906b8
	ctx.lr = 0x8230407C;
	sub_820906B8(ctx, base);
	// bl 0x82302748
	ctx.lr = 0x82304080;
	sub_82302748(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,11096
	ctx.r11.s64 = ctx.r11.s64 + 11096;
	// addi r10,r10,11080
	ctx.r10.s64 = ctx.r10.s64 + 11080;
	// addi r4,r31,8008
	ctx.r4.s64 = ctx.r31.s64 + 8008;
	// lfs f0,12168(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8004, temp.u32);
	// stw r11,8016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8016, ctx.r11.u32);
	// stw r10,8012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8012, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82090848
	ctx.lr = 0x823040B8;
	sub_82090848(ctx, base);
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

PPC_WEAK_FUNC(sub_82304010) {
	__imp__sub_82304010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823040D0) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r9,r11,-25872
	ctx.r9.s64 = ctx.r11.s64 + -25872;
	// lwz r11,13428(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13428);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82304114
	if (ctx.cr6.eq) goto loc_82304114;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8230413c
	goto loc_8230413C;
loc_82304114:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,21064
	ctx.r10.s64 = ctx.r10.s64 + 21064;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,48
	ctx.r7.s64 = 48;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_8230413C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,280(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820900d0
	ctx.lr = 0x82304150;
	sub_820900D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823040D0) {
	__imp__sub_823040D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82304168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82363050
	ctx.lr = 0x82304174;
	sub_82363050(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823041c0
	if (ctx.cr6.eq) goto loc_823041C0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26092
	ctx.r9.s64 = ctx.r11.s64 + 26092;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82361b10
	ctx.lr = 0x823041A8;
	sub_82361B10(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x823041AC;
	sub_822E4C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090068
	ctx.lr = 0x823041B4;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x823041B8;
	sub_822E4C88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r8.u32);
loc_823041C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304160) {
	__imp__sub_82304160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823041C8) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090368
	ctx.lr = 0x823041F8;
	sub_82090368(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// mulli r7,r31,176
	ctx.r7.s64 = ctx.r31.s64 * 176;
	// addi r11,r8,-12528
	ctx.r11.s64 = ctx.r8.s64 + -12528;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,26240
	ctx.r5.s64 = ctx.r11.s64 + 26240;
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_823041C8) {
	__imp__sub_823041C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304224) {
	__imp__sub_82304224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304228) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820903c0
	ctx.lr = 0x8230425C;
	sub_820903C0(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// mulli r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 * 176;
	// addi r10,r8,-12528
	ctx.r10.s64 = ctx.r8.s64 + -12528;
	// addi r10,r10,26076
	ctx.r10.s64 = ctx.r10.s64 + 26076;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82304288
	if (!ctx.cr6.eq) goto loc_82304288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090320
	ctx.lr = 0x82304288;
	sub_82090320(ctx, base);
loc_82304288:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_82304228) {
	__imp__sub_82304228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823042A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r11,r11,26216
	ctx.r11.s64 = ctx.r11.s64 + 26216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823042A8) {
	__imp__sub_823042A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823042D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823042E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82363050
	ctx.lr = 0x823042EC;
	sub_82363050(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82304338
	if (ctx.cr6.eq) goto loc_82304338;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26092
	ctx.r9.s64 = ctx.r11.s64 + 26092;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82361b10
	ctx.lr = 0x82304320;
	sub_82361B10(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x82304324;
	sub_822E4C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090068
	ctx.lr = 0x8230432C;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82304330;
	sub_822E4C88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r8.u32);
loc_82304338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823042D8) {
	__imp__sub_823042D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304340) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090368
	ctx.lr = 0x82304370;
	sub_82090368(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// mulli r7,r31,176
	ctx.r7.s64 = ctx.r31.s64 * 176;
	// addi r11,r8,-12528
	ctx.r11.s64 = ctx.r8.s64 + -12528;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,26240
	ctx.r5.s64 = ctx.r11.s64 + 26240;
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_82304340) {
	__imp__sub_82304340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230439C) {
	__imp__sub_8230439C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823043A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82304228
	sub_82304228(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823043A0) {
	__imp__sub_823043A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823043A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823043A4) {
	__imp__sub_823043A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823043A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823043A8) {
	__imp__sub_823043A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823043C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823043D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82363050
	ctx.lr = 0x823043DC;
	sub_82363050(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// lwzx r30,r29,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82304428
	if (ctx.cr6.eq) goto loc_82304428;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26092
	ctx.r9.s64 = ctx.r11.s64 + 26092;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82361b10
	ctx.lr = 0x82304410;
	sub_82361B10(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x82304414;
	sub_822E4C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090068
	ctx.lr = 0x8230441C;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82304420;
	sub_822E4C88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r8.u32);
loc_82304428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823043C8) {
	__imp__sub_823043C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304430) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090368
	ctx.lr = 0x82304460;
	sub_82090368(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// mulli r7,r31,176
	ctx.r7.s64 = ctx.r31.s64 * 176;
	// addi r11,r8,-12528
	ctx.r11.s64 = ctx.r8.s64 + -12528;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,26240
	ctx.r5.s64 = ctx.r11.s64 + 26240;
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_82304430) {
	__imp__sub_82304430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230448C) {
	__imp__sub_8230448C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304490) {
	PPC_FUNC_PROLOGUE();
	// b 0x82304228
	sub_82304228(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304490) {
	__imp__sub_82304490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304494) {
	__imp__sub_82304494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304498) {
	__imp__sub_82304498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823044B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823044C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82363050
	ctx.lr = 0x823044CC;
	sub_82363050(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230451c
	if (ctx.cr6.eq) goto loc_8230451C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26092
	ctx.r9.s64 = ctx.r11.s64 + 26092;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82361b10
	ctx.lr = 0x82304500;
	sub_82361B10(ctx, base);
	// lwzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x822e4c70
	ctx.lr = 0x82304508;
	sub_822E4C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82090068
	ctx.lr = 0x82304510;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82304514;
	sub_822E4C88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r8.u32);
loc_8230451C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823044B8) {
	__imp__sub_823044B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304524) {
	__imp__sub_82304524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// mulli r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 * 176;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26076
	ctx.r10.s64 = ctx.r10.s64 + 26076;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r9.u8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82090368
	sub_82090368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304528) {
	__imp__sub_82304528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230456C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8230456C) {
	__imp__sub_8230456C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304570) {
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
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// addi r10,r11,26076
	ctx.r10.s64 = ctx.r11.s64 + 26076;
	// addi r11,r8,-25872
	ctx.r11.s64 = ctx.r8.s64 + -25872;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r4,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r4.u8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwzx r30,r7,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// beq cr6,0x823045e0
	if (ctx.cr6.eq) goto loc_823045E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820903c0
	ctx.lr = 0x823045C8;
	sub_820903C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823045e0
	if (!ctx.cr6.eq) goto loc_823045E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090320
	ctx.lr = 0x823045E0;
	sub_82090320(ctx, base);
loc_823045E0:
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

PPC_WEAK_FUNC(sub_82304570) {
	__imp__sub_82304570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823045F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82304634
	if (!ctx.cr6.eq) goto loc_82304634;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26076
	ctx.r9.s64 = ctx.r11.s64 + 26076;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82304638
	if (ctx.cr6.eq) goto loc_82304638;
loc_82304634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304638:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823045F8) {
	__imp__sub_823045F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82304648;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lwz r7,56(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// srawi r6,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 9;
	// clrlwi r31,r6,26
	ctx.r31.u64 = ctx.r6.u32 & 0x3F;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82304698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823046c0
	if (!ctx.cr6.lt) goto loc_823046C0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_823046C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x823046CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// lwz r21,148(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x82304a10
	if (!ctx.cr6.lt) goto loc_82304A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r22,100(r25)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r25.u32 + 100);
	// lwz r20,96(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x82361b78
	ctx.lr = 0x823046F8;
	sub_82361B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230472c
	if (ctx.cr6.eq) goto loc_8230472C;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230472c
	if (!ctx.cr6.eq) goto loc_8230472C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r10,2928
	ctx.r4.s64 = ctx.r10.s64 + 2928;
	// bl 0x82280c30
	ctx.lr = 0x8230472C;
	sub_82280C30(ctx, base);
loc_8230472C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// bl 0x822dd7a0
	ctx.lr = 0x82304738;
	sub_822DD7A0(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-25872
	ctx.r29.s64 = ctx.r11.s64 + -25872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,17500(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17500);
	// stw r28,17516(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17516, ctx.r28.u32);
	// stb r11,17504(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17504, ctx.r11.u8);
	// bl 0x82361b78
	ctx.lr = 0x82304758;
	sub_82361B78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82302e70
	ctx.lr = 0x8230476C;
	sub_82302E70(ctx, base);
	// addi r23,r25,88
	ctx.r23.s64 = ctx.r25.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82303140
	ctx.lr = 0x8230477C;
	sub_82303140(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361ae8
	ctx.lr = 0x82304788;
	sub_82361AE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82302dc0
	ctx.lr = 0x8230479C;
	sub_82302DC0(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,-12528
	ctx.r28.s64 = ctx.r11.s64 + -12528;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,20336(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lwz r11,20296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20296);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// beq cr6,0x82304804
	if (ctx.cr6.eq) goto loc_82304804;
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82304804
	if (!ctx.cr6.eq) goto loc_82304804;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82304804
	if (ctx.cr6.eq) goto loc_82304804;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82362f28
	ctx.lr = 0x82304800;
	sub_82362F28(ctx, base);
	// fmuls f29,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
loc_82304804:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// extsw r10,r20
	ctx.r10.s64 = ctx.r20.s32;
	// lfs f13,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f31,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r29,16600
	ctx.r31.s64 = ctx.r29.s64 + 16600;
	// fmadds f6,f12,f13,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82304854;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.f2.u32);
	// bl 0x820905c8
	ctx.lr = 0x8230486C;
	sub_820905C8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x82301890
	ctx.lr = 0x82304878;
	sub_82301890(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82090640
	ctx.lr = 0x82304880;
	sub_82090640(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x823048c4
	if (ctx.cr6.eq) goto loc_823048C4;
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823048B0;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82304920
	goto loc_82304920;
loc_823048C4:
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82304920
	if (!ctx.cr6.eq) goto loc_82304920;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230491c
	if (ctx.cr6.eq) goto loc_8230491C;
	// bl 0x822d3ea0
	ctx.lr = 0x823048E4;
	sub_822D3EA0(ctx, base);
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fadds f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82304904;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r10,0,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// b 0x82304920
	goto loc_82304920;
loc_8230491C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82304920:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82304930;
	sub_823DE1F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8230498c
	if (ctx.cr6.eq) goto loc_8230498C;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230494C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8230494c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230494C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82301950
	ctx.lr = 0x82304968;
	sub_82301950(ctx, base);
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82091760
	ctx.lr = 0x82304980;
	sub_82091760(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82090480
	ctx.lr = 0x8230498C;
	sub_82090480(ctx, base);
loc_8230498C:
	// lwz r10,56(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r31,r21,r11
	ctx.r31.u64 = ctx.r21.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823049b4
	if (ctx.cr6.eq) goto loc_823049B4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x823049c8
	goto loc_823049C8;
loc_823049B4:
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r29.u8);
	// stb r29,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r29.u8);
loc_823049C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82090248
	ctx.lr = 0x823049D8;
	sub_82090248(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82304a2c
	if (!ctx.cr6.lt) goto loc_82304A2C;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x823049F4;
	sub_822DDAA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r11,2868
	ctx.r4.s64 = ctx.r11.s64 + 2868;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82304A10;
	sub_82280B08(ctx, base);
loc_82304A10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362a60
	ctx.lr = 0x82304A18;
	sub_82362A60(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82304A2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823630c8
	ctx.lr = 0x82304A38;
	sub_823630C8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363290
	ctx.lr = 0x82304A4C;
	sub_82363290(ctx, base);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362a80
	ctx.lr = 0x82304A5C;
	sub_82362A80(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304640) {
	__imp__sub_82304640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304A70) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090588
	ctx.lr = 0x82304A98;
	sub_82090588(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304A70) {
	__imp__sub_82304A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304AAC) {
	__imp__sub_82304AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x820905c8
	sub_820905C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304AB0) {
	__imp__sub_82304AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304AC8) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090588
	ctx.lr = 0x82304AF0;
	sub_82090588(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304AC8) {
	__imp__sub_82304AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304B04) {
	__imp__sub_82304B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x820905c8
	sub_820905C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304B08) {
	__imp__sub_82304B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304B20) {
	__imp__sub_82304B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r10,26076
	ctx.r9.s64 = ctx.r10.s64 + 26076;
	// mulli r8,r3,176
	ctx.r8.s64 = ctx.r3.s64 * 176;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16392
	ctx.r6.s64 = ctx.r11.s64 + 16392;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stfsx f1,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x820905c8
	sub_820905C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304B38) {
	__imp__sub_82304B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304B74) {
	__imp__sub_82304B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,16600
	ctx.r9.s64 = ctx.r11.s64 + 16600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304B78) {
	__imp__sub_82304B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304B90) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-25872
	ctx.r31.s64 = ctx.r11.s64 + -25872;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r31,16600
	ctx.r9.s64 = ctx.r31.s64 + 16600;
	// addi r11,r10,-12528
	ctx.r11.s64 = ctx.r10.s64 + -12528;
	// mulli r8,r3,176
	ctx.r8.s64 = ctx.r3.s64 * 176;
	// stwx r4,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r7,r11,26084
	ctx.r7.s64 = ctx.r11.s64 + 26084;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82301890
	ctx.lr = 0x82304BD4;
	sub_82301890(ctx, base);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x82090640
	ctx.lr = 0x82304BE0;
	sub_82090640(ctx, base);
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

PPC_WEAK_FUNC(sub_82304B90) {
	__imp__sub_82304B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,16600
	ctx.r9.s64 = ctx.r11.s64 + 16600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304BF8) {
	__imp__sub_82304BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304C10) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-25872
	ctx.r31.s64 = ctx.r11.s64 + -25872;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r31,16600
	ctx.r9.s64 = ctx.r31.s64 + 16600;
	// addi r11,r10,-12528
	ctx.r11.s64 = ctx.r10.s64 + -12528;
	// mulli r8,r3,176
	ctx.r8.s64 = ctx.r3.s64 * 176;
	// stwx r4,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r7,r11,26084
	ctx.r7.s64 = ctx.r11.s64 + 26084;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82301890
	ctx.lr = 0x82304C54;
	sub_82301890(ctx, base);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x82090640
	ctx.lr = 0x82304C60;
	sub_82090640(ctx, base);
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

PPC_WEAK_FUNC(sub_82304C10) {
	__imp__sub_82304C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r11,16600
	ctx.r9.s64 = ctx.r11.s64 + 16600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304C78) {
	__imp__sub_82304C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304C90) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// addi r7,r11,26076
	ctx.r7.s64 = ctx.r11.s64 + 26076;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,16600
	ctx.r6.s64 = ctx.r10.s64 + 16600;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stwx r4,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r4.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82304cf0
	if (ctx.cr6.eq) goto loc_82304CF0;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r7,r11,26084
	ctx.r7.s64 = ctx.r11.s64 + 26084;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x82301890
	ctx.lr = 0x82304CE8;
	sub_82301890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82090640
	ctx.lr = 0x82304CF0;
	sub_82090640(ctx, base);
loc_82304CF0:
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

PPC_WEAK_FUNC(sub_82304C90) {
	__imp__sub_82304C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304D04) {
	__imp__sub_82304D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82304D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r4,r10,26196
	ctx.r4.s64 = ctx.r10.s64 + 26196;
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,8020
	ctx.r5.s64 = ctx.r11.s64 + 8020;
	// lwz r29,20472(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,8024
	ctx.r4.s64 = ctx.r11.s64 + 8024;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r7,r11,8436
	ctx.r7.s64 = ctx.r11.s64 + 8436;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r4,r6,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stb r10,17140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17140, ctx.r10.u8);
	// addi r6,r11,8484
	ctx.r6.s64 = ctx.r11.s64 + 8484;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// add r30,r9,r6
	ctx.r30.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82304d84
	if (ctx.cr6.eq) goto loc_82304D84;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82304d88
	goto loc_82304D88;
loc_82304D84:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82304D88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82304de4
	if (ctx.cr6.lt) goto loc_82304DE4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r7,r11,17152
	ctx.r7.s64 = ctx.r11.s64 + 17152;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82304DB0:
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,16(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,24(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lfsu f13,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f7,32(r7)
	ea = 32 + ctx.r7.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82304db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304DB0;
loc_82304DE4:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82304e1c
	if (!ctx.cr6.lt) goto loc_82304E1C;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,17152
	ctx.r9.s64 = ctx.r11.s64 + 17152;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82304E0C:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82304e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304E0C;
loc_82304E1C:
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// stb r4,17148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17148, ctx.r4.u8);
	// lwz r10,23872(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23872);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82304e4c
	if (ctx.cr6.eq) goto loc_82304E4C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82304e4c
	if (!ctx.cr6.eq) goto loc_82304E4C;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82304e54
	goto loc_82304E54;
loc_82304E4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_82304E54:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82304eb0
	if (ctx.cr6.lt) goto loc_82304EB0;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r8,r11,17248
	ctx.r8.s64 = ctx.r11.s64 + 17248;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82304E7C:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,16(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,24(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f7,32(r8)
	ea = 32 + ctx.r8.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82304e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304E7C;
loc_82304EB0:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82304ee8
	if (!ctx.cr6.lt) goto loc_82304EE8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r8,r11,17248
	ctx.r8.s64 = ctx.r11.s64 + 17248;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82304ED8:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82304ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304ED8;
loc_82304EE8:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r4,r11,17116
	ctx.r4.s64 = ctx.r11.s64 + 17116;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82090198
	ctx.lr = 0x82304EFC;
	sub_82090198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304D08) {
	__imp__sub_82304D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304F04) {
	__imp__sub_82304F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82304d08
	sub_82304D08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304F08) {
	__imp__sub_82304F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304F0C) {
	__imp__sub_82304F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82304F10) {
	__imp__sub_82304F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82304F14) {
	__imp__sub_82304F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82304F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r31,26196
	ctx.r11.s64 = ctx.r31.s64 + 26196;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r3,r8,26
	ctx.r3.u64 = ctx.r8.u32 & 0x3F;
	// bl 0x82361b78
	ctx.lr = 0x82304F4C;
	sub_82361B78(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82304f70
	if (!ctx.cr6.eq) goto loc_82304F70;
	// addi r11,r31,26076
	ctx.r11.s64 = ctx.r31.s64 + 26076;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82304f70
	if (ctx.cr6.eq) goto loc_82304F70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304d08
	ctx.lr = 0x82304F70;
	sub_82304D08(ctx, base);
loc_82304F70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304F18) {
	__imp__sub_82304F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82304F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82304F80;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// addi r21,r11,-25872
	ctx.r21.s64 = ctx.r11.s64 + -25872;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r23,r10,26088
	ctx.r23.s64 = ctx.r10.s64 + 26088;
	// addi r22,r21,20
	ctx.r22.s64 = ctx.r21.s64 + 20;
loc_82304FA0:
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r27,4(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82305034
	if (ctx.cr6.eq) goto loc_82305034;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x820f7d78
	ctx.lr = 0x82304FB8;
	sub_820F7D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82302d40
	ctx.lr = 0x82304FC8;
	sub_82302D40(ctx, base);
	// addi r25,r21,228
	ctx.r25.s64 = ctx.r21.s64 + 228;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304fe8
	if (ctx.cr6.eq) goto loc_82304FE8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305034
	if (ctx.cr6.eq) goto loc_82305034;
loc_82304FE8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82304FEC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82304FF0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82302c20
	ctx.lr = 0x8230500C;
	sub_82302C20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82304ff0
	if (ctx.cr6.lt) goto loc_82304FF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82304fec
	if (ctx.cr6.lt) goto loc_82304FEC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stbx r9,r26,r25
	PPC_STORE_U8(ctx.r26.u32 + ctx.r25.u32, ctx.r9.u8);
loc_82305034:
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r11,r21,228
	ctx.r11.s64 = ctx.r21.s64 + 228;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,176
	ctx.r23.s64 = ctx.r23.s64 + 176;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82304fa0
	if (ctx.cr6.lt) goto loc_82304FA0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82304F78) {
	__imp__sub_82304F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305054) {
	__imp__sub_82305054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26196
	ctx.r9.s64 = ctx.r11.s64 + 26196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,148(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305058) {
	__imp__sub_82305058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230507C) {
	__imp__sub_8230507C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26196
	ctx.r9.s64 = ctx.r11.s64 + 26196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,148(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305080) {
	__imp__sub_82305080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823050A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823050A4) {
	__imp__sub_823050A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823050A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-25872
	ctx.r11.s64 = ctx.r10.s64 + -25872;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,8424
	ctx.r7.s64 = ctx.r11.s64 + 8424;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823050A8) {
	__imp__sub_823050A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823050C8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// blt cr6,0x823051a0
	if (ctx.cr6.lt) goto loc_823051A0;
	// cmpwi cr6,r3,41
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 41, ctx.xer);
	// bne cr6,0x82305138
	if (!ctx.cr6.eq) goto loc_82305138;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,33116
	ctx.r9.u64 = ctx.r10.u64 | 33116;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82305138
	if (ctx.cr6.eq) goto loc_82305138;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,33412
	ctx.r8.u64 = ctx.r10.u64 | 33412;
	// ori r7,r9,33236
	ctx.r7.u64 = ctx.r9.u64 | 33236;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,76(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r5,76(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82305138
	if (!ctx.cr6.eq) goto loc_82305138;
	// li r3,40
	ctx.r3.s64 = 40;
loc_82305138:
	// addi r11,r11,26076
	ctx.r11.s64 = ctx.r11.s64 + 26076;
	// mulli r8,r3,176
	ctx.r8.s64 = ctx.r3.s64 * 176;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r9,-25872
	ctx.r11.s64 = ctx.r9.s64 + -25872;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82305170
	if (!ctx.cr6.eq) goto loc_82305170;
	// lfs f1,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82305264
	goto loc_82305264;
loc_82305170:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82305250
	goto loc_82305250;
loc_823051A0:
	// addi r8,r11,26196
	ctx.r8.s64 = ctx.r11.s64 + 26196;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-25872
	ctx.r11.s64 = ctx.r9.s64 + -25872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82090530
	ctx.lr = 0x823051D0;
	sub_82090530(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82305238
	if (ctx.cr6.eq) goto loc_82305238;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82305238:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82305250:
	// fcfid f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_82305264:
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

PPC_WEAK_FUNC(sub_823050C8) {
	__imp__sub_823050C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230527C) {
	__imp__sub_8230527C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82305288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x823050c8
	ctx.lr = 0x823052B0;
	sub_823050C8(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mulli r29,r30,176
	ctx.r29.s64 = ctx.r30.s64 * 176;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r30,26192
	ctx.r8.s64 = ctx.r30.s64 + 26192;
	// lfsx f0,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82090588
	ctx.lr = 0x823052DC;
	sub_82090588(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82305304
	if (ctx.cr6.eq) goto loc_82305304;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82305304:
	// addi r11,r30,26188
	ctx.r11.s64 = ctx.r30.s64 + 26188;
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305280) {
	__imp__sub_82305280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r9,r10,-12528
	ctx.r9.s64 = ctx.r10.s64 + -12528;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lfs f0,16420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x820905c8
	sub_820905C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305318) {
	__imp__sub_82305318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305344) {
	__imp__sub_82305344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82305350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x823050c8
	ctx.lr = 0x82305378;
	sub_823050C8(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mulli r29,r30,176
	ctx.r29.s64 = ctx.r30.s64 * 176;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r30,26192
	ctx.r8.s64 = ctx.r30.s64 + 26192;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfsx f0,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82090588
	ctx.lr = 0x823053A4;
	sub_82090588(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823053c8
	if (ctx.cr6.eq) goto loc_823053C8;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x823053d4
	goto loc_823053D4;
loc_823053C8:
	// addi r11,r30,26188
	ctx.r11.s64 = ctx.r30.s64 + 26188;
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_823053D4:
	// addi r11,r30,26216
	ctx.r11.s64 = ctx.r30.s64 + 26216;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305348) {
	__imp__sub_82305348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823053FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823053FC) {
	__imp__sub_823053FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82305408;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823050c8
	ctx.lr = 0x8230541C;
	sub_823050C8(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-25872
	ctx.r28.s64 = ctx.r11.s64 + -25872;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r28,16600
	ctx.r10.s64 = ctx.r28.s64 + 16600;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r30,26244
	ctx.r6.s64 = ctx.r30.s64 + 26244;
	// mulli r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 * 176;
	// lwzx r8,r27,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fmadds f8,f13,f11,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f0,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fadds f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x82305484;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r30,26188
	ctx.r11.s64 = ctx.r30.s64 + 26188;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,5484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f4.u32);
	// lfsx f3,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,16420(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823054c8
	if (ctx.cr6.eq) goto loc_823054C8;
	// addi r11,r28,16392
	ctx.r11.s64 = ctx.r28.s64 + 16392;
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x823054d0
	goto loc_823054D0;
loc_823054C8:
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_823054D0:
	// addi r11,r30,26216
	ctx.r11.s64 = ctx.r30.s64 + 26216;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305400) {
	__imp__sub_82305400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823054F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// addi r9,r11,26076
	ctx.r9.s64 = ctx.r11.s64 + 26076;
	// mulli r8,r3,176
	ctx.r8.s64 = ctx.r3.s64 * 176;
	// lfs f0,16420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,16392
	ctx.r6.s64 = ctx.r10.s64 + 16392;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stfsx f1,r11,r6
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820905c8
	sub_820905C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823054F8) {
	__imp__sub_823054F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305540) {
	__imp__sub_82305540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305544) {
	__imp__sub_82305544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305548) {
	__imp__sub_82305548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230554C) {
	__imp__sub_8230554C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305550) {
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
	// bl 0x82304f78
	ctx.lr = 0x82305560;
	sub_82304F78(ctx, base);
	// bl 0x82366ae8
	ctx.lr = 0x82305564;
	sub_82366AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305550) {
	__imp__sub_82305550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305574) {
	__imp__sub_82305574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82305580;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r30,26076
	ctx.r11.s64 = ctx.r30.s64 + 26076;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230570c
	if (!ctx.cr6.eq) goto loc_8230570C;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// lwzx r26,r27,r28
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bne cr6,0x8230560c
	if (!ctx.cr6.eq) goto loc_8230560C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820901f0
	ctx.lr = 0x823055DC;
	sub_820901F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82305600
	if (!ctx.cr6.eq) goto loc_82305600;
	// bl 0x82369d78
	ctx.lr = 0x823055F4;
	sub_82369D78(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82305600:
	// bl 0x82369e98
	ctx.lr = 0x82305604;
	sub_82369E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230570c
	if (!ctx.cr6.eq) goto loc_8230570C;
loc_8230560C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,120(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82362f58
	ctx.lr = 0x82305618;
	sub_82362F58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82305658
	if (ctx.cr6.eq) goto loc_82305658;
	// lbz r11,165(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82305658
	if (!ctx.cr6.eq) goto loc_82305658;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82305658
	if (ctx.cr6.eq) goto loc_82305658;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362f28
	ctx.lr = 0x82305654;
	sub_82362F28(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82305658:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lfs f0,16420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20296);
	// srawi r9,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 9;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x820905c8
	ctx.lr = 0x8230568C;
	sub_820905C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8230570c
	if (ctx.cr6.eq) goto loc_8230570C;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
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
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8230570c
	if (!ctx.cr6.eq) goto loc_8230570C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82090320
	ctx.lr = 0x823056D4;
	sub_82090320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230570c
	if (!ctx.cr6.lt) goto loc_8230570C;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x823056F0;
	sub_822DDAA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8230570C;
	sub_82280B08(ctx, base);
loc_8230570C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305578) {
	__imp__sub_82305578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82305720;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r29,26076
	ctx.r11.s64 = ctx.r29.s64 + 26076;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823058b4
	if (!ctx.cr6.eq) goto loc_823058B4;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r28,r11,20
	ctx.r28.s64 = ctx.r11.s64 + 20;
	// lwzx r25,r27,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bne cr6,0x823057ac
	if (!ctx.cr6.eq) goto loc_823057AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820901f0
	ctx.lr = 0x8230577C;
	sub_820901F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823057a0
	if (!ctx.cr6.eq) goto loc_823057A0;
	// bl 0x82369d78
	ctx.lr = 0x82305794;
	sub_82369D78(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823057A0:
	// bl 0x82369e98
	ctx.lr = 0x823057A4;
	sub_82369E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823058b4
	if (!ctx.cr6.eq) goto loc_823058B4;
loc_823057AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,120(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82362f58
	ctx.lr = 0x823057B8;
	sub_82362F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82303948
	ctx.lr = 0x823057C4;
	sub_82303948(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82305800
	if (ctx.cr6.eq) goto loc_82305800;
	// lbz r11,165(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82305800
	if (!ctx.cr6.eq) goto loc_82305800;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82305800
	if (ctx.cr6.eq) goto loc_82305800;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82362f28
	ctx.lr = 0x823057FC;
	sub_82362F28(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82305800:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lfs f0,16420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20296(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20296);
	// srawi r9,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 9;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x820905c8
	ctx.lr = 0x82305834;
	sub_820905C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823058b4
	if (ctx.cr6.eq) goto loc_823058B4;
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
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
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823058b4
	if (!ctx.cr6.eq) goto loc_823058B4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82090320
	ctx.lr = 0x8230587C;
	sub_82090320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823058b4
	if (!ctx.cr6.lt) goto loc_823058B4;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x82305898;
	sub_822DDAA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x823058B4;
	sub_82280B08(ctx, base);
loc_823058B4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305718) {
	__imp__sub_82305718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823058C0) {
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
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,-25872
	ctx.r31.s64 = ctx.r10.s64 + -25872;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r31,14104
	ctx.r10.s64 = ctx.r31.s64 + 14104;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82305a24
	if (ctx.cr6.eq) goto loc_82305A24;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82305994
	if (ctx.cr6.lt) goto loc_82305994;
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,33116
	ctx.r9.u64 = ctx.r10.u64 | 33116;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82305a40
	if (ctx.cr6.eq) goto loc_82305A40;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,33236
	ctx.r7.u64 = ctx.r10.u64 | 33236;
	// ori r6,r8,33412
	ctx.r6.u64 = ctx.r8.u64 | 33412;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r5,76(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82305a24
	if (!ctx.cr6.eq) goto loc_82305A24;
	// lwz r11,14196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14196);
	// lwz r10,14188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82305a40
	if (ctx.cr6.eq) goto loc_82305A40;
	// lwz r11,14176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
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
loc_82305994:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// ori r9,r10,33292
	ctx.r9.u64 = ctx.r10.u64 | 33292;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82305a40
	if (ctx.cr6.eq) goto loc_82305A40;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,33412
	ctx.r8.u64 = ctx.r10.u64 | 33412;
	// ori r7,r9,33236
	ctx.r7.u64 = ctx.r9.u64 | 33236;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,76(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
	// lbz r11,14368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305a24
	if (ctx.cr6.eq) goto loc_82305A24;
	// lwz r11,14340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14340);
	// lwz r10,14332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14332);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82305a40
	if (ctx.cr6.eq) goto loc_82305A40;
	// lwz r11,14320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82305a40
	if (!ctx.cr6.eq) goto loc_82305A40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec4e8
	ctx.lr = 0x82305A08;
	sub_822EC4E8(ctx, base);
	// addi r3,r31,14248
	ctx.r3.s64 = ctx.r31.s64 + 14248;
	// lwz r4,14340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14340);
	// bl 0x82301a78
	ctx.lr = 0x82305A14;
	sub_82301A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x82305a3c
	if (!ctx.cr6.eq) goto loc_82305A3C;
	// bl 0x822ec500
	ctx.lr = 0x82305A24;
	sub_822EC500(ctx, base);
loc_82305A24:
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
loc_82305A3C:
	// bl 0x822ec500
	ctx.lr = 0x82305A40;
	sub_822EC500(ctx, base);
loc_82305A40:
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

PPC_WEAK_FUNC(sub_823058C0) {
	__imp__sub_823058C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305A58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82305A58) {
	__imp__sub_82305A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82305A68;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// addi r23,r11,-12528
	ctx.r23.s64 = ctx.r11.s64 + -12528;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r10,r23,26076
	ctx.r10.s64 = ctx.r23.s64 + 26076;
	// addi r29,r11,-25872
	ctx.r29.s64 = ctx.r11.s64 + -25872;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r11,r29,11192
	ctx.r11.s64 = ctx.r29.s64 + 11192;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// clrlwi r28,r7,26
	ctx.r28.u64 = ctx.r7.u32 & 0x3F;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// lwz r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82361b78
	ctx.lr = 0x82305AB8;
	sub_82361B78(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82305af0
	if (ctx.cr6.eq) goto loc_82305AF0;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82305af0
	if (!ctx.cr6.eq) goto loc_82305AF0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r9,2928
	ctx.r4.s64 = ctx.r9.s64 + 2928;
	// bl 0x82280c30
	ctx.lr = 0x82305AF0;
	sub_82280C30(ctx, base);
loc_82305AF0:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x822dd7a0
	ctx.lr = 0x82305B00;
	sub_822DD7A0(ctx, base);
	// lbz r11,17500(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17500);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r25,17516(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17516, ctx.r25.u32);
	// stb r11,17504(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17504, ctx.r11.u8);
	// bl 0x82361b78
	ctx.lr = 0x82305B18;
	sub_82361B78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82302e70
	ctx.lr = 0x82305B2C;
	sub_82302E70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82303140
	ctx.lr = 0x82305B38;
	sub_82303140(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361ae8
	ctx.lr = 0x82305B44;
	sub_82361AE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82302dc0
	ctx.lr = 0x82305B58;
	sub_82302DC0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363290
	ctx.lr = 0x82305B6C;
	sub_82363290(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,16392
	ctx.r10.s64 = ctx.r29.s64 + 16392;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82305b90
	if (ctx.cr6.eq) goto loc_82305B90;
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820905c8
	ctx.lr = 0x82305B90;
	sub_820905C8(ctx, base);
loc_82305B90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// lfs f13,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f13,f12,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x82305BD8;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82304c90
	ctx.lr = 0x82305BF0;
	sub_82304C90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361b78
	ctx.lr = 0x82305BF8;
	sub_82361B78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82305c0c
	if (!ctx.cr6.eq) goto loc_82305C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304f18
	ctx.lr = 0x82305C0C;
	sub_82304F18(ctx, base);
loc_82305C0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305A60) {
	__imp__sub_82305A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305C14) {
	__imp__sub_82305C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82305C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,-25872
	ctx.r25.s64 = ctx.r11.s64 + -25872;
	// addi r27,r10,-12528
	ctx.r27.s64 = ctx.r10.s64 + -12528;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r31,r25,20
	ctx.r31.s64 = ctx.r25.s64 + 20;
	// addi r30,r27,26092
	ctx.r30.s64 = ctx.r27.s64 + 26092;
loc_82305C44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363050
	ctx.lr = 0x82305C4C;
	sub_82363050(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82305c74
	if (ctx.cr6.eq) goto loc_82305C74;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82361b10
	ctx.lr = 0x82305C60;
	sub_82361B10(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x82305C64;
	sub_822E4C70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82090068
	ctx.lr = 0x82305C6C;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82305C70;
	sub_822E4C88(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82305C74:
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r11,r27,27500
	ctx.r11.s64 = ctx.r27.s64 + 27500;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82305c44
	if (ctx.cr6.lt) goto loc_82305C44;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r31,r25,52
	ctx.r31.s64 = ctx.r25.s64 + 52;
	// addi r30,r27,27500
	ctx.r30.s64 = ctx.r27.s64 + 27500;
loc_82305C98:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82363050
	ctx.lr = 0x82305CA0;
	sub_82363050(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82305cc8
	if (ctx.cr6.eq) goto loc_82305CC8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82361b10
	ctx.lr = 0x82305CB4;
	sub_82361B10(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x82305CB8;
	sub_822E4C70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82090068
	ctx.lr = 0x82305CC0;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82305CC4;
	sub_822E4C88(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82305CC8:
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,-32404
	ctx.r11.s64 = ctx.r11.s64 + -32404;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82305c98
	if (ctx.cr6.lt) goto loc_82305C98;
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r31,r25,180
	ctx.r31.s64 = ctx.r25.s64 + 180;
	// addi r30,r11,-32404
	ctx.r30.s64 = ctx.r11.s64 + -32404;
loc_82305CF4:
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82363050
	ctx.lr = 0x82305CFC;
	sub_82363050(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82305d28
	if (ctx.cr6.eq) goto loc_82305D28;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82361b10
	ctx.lr = 0x82305D10;
	sub_82361B10(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e4c70
	ctx.lr = 0x82305D18;
	sub_822E4C70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82090068
	ctx.lr = 0x82305D20;
	sub_82090068(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x82305D24;
	sub_822E4C88(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82305D28:
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,-30292
	ctx.r11.s64 = ctx.r11.s64 + -30292;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82305cf4
	if (ctx.cr6.lt) goto loc_82305CF4;
	// lwz r3,280(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	// bl 0x82090068
	ctx.lr = 0x82305D4C;
	sub_82090068(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305C18) {
	__imp__sub_82305C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82305D54) {
	__imp__sub_82305D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305D58) {
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
	// bl 0x823103a0
	ctx.lr = 0x82305D70;
	sub_823103A0(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r31,r10,-12528
	ctx.r31.s64 = ctx.r10.s64 + -12528;
	// addi r30,r11,-25872
	ctx.r30.s64 = ctx.r11.s64 + -25872;
	// lbz r11,-12528(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305dc8
	if (ctx.cr6.eq) goto loc_82305DC8;
	// bl 0x82305c18
	ctx.lr = 0x82305D90;
	sub_82305C18(ctx, base);
	// bl 0x820907c8
	ctx.lr = 0x82305D94;
	sub_820907C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82305db0
	if (!ctx.cr6.lt) goto loc_82305DB0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,3052
	ctx.r4.s64 = ctx.r11.s64 + 3052;
	// bl 0x82280b08
	ctx.lr = 0x82305DB0;
	sub_82280B08(ctx, base);
loc_82305DB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stb r9,17632(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17632, ctx.r9.u8);
loc_82305DC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,17632
	ctx.r5.s64 = 17632;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82305DD8;
	sub_823DE090(ctx, base);
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

PPC_WEAK_FUNC(sub_82305D58) {
	__imp__sub_82305D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82305DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,17112
	ctx.r7.s64 = ctx.r11.s64 + 17112;
	// addi r6,r10,13512
	ctx.r6.s64 = ctx.r10.s64 + 13512;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82304640
	ctx.lr = 0x82305E20;
	sub_82304640(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82305e34
	if (ctx.cr6.eq) goto loc_82305E34;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82305E34:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82305e48
	if (!ctx.cr6.eq) goto loc_82305E48;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82305E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304d08
	ctx.lr = 0x82305E50;
	sub_82304D08(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// mulli r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 * 176;
	// addi r9,r10,26096
	ctx.r9.s64 = ctx.r10.s64 + 26096;
	// addi r8,r8,-25872
	ctx.r8.s64 = ctx.r8.s64 + -25872;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,20
	ctx.r6.s64 = ctx.r8.s64 + 20;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bne cr6,0x82305eec
	if (!ctx.cr6.eq) goto loc_82305EEC;
	// addi r10,r10,26240
	ctx.r10.s64 = ctx.r10.s64 + 26240;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82305eec
	if (!ctx.cr6.eq) goto loc_82305EEC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82090320
	ctx.lr = 0x82305EA0;
	sub_82090320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82305eec
	if (!ctx.cr6.lt) goto loc_82305EEC;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ddaa8
	ctx.lr = 0x82305EBC;
	sub_822DDAA8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,3096
	ctx.r4.s64 = ctx.r11.s64 + 3096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82305EDC;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362a60
	ctx.lr = 0x82305EE4;
	sub_82362A60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82305EEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305DF0) {
	__imp__sub_82305DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82305EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82305F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,17352
	ctx.r7.s64 = ctx.r11.s64 + 17352;
	// addi r6,r10,13688
	ctx.r6.s64 = ctx.r10.s64 + 13688;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82304640
	ctx.lr = 0x82305F28;
	sub_82304640(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82305f3c
	if (ctx.cr6.eq) goto loc_82305F3C;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82305F3C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82305f50
	if (!ctx.cr6.eq) goto loc_82305F50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82305F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82303948
	ctx.lr = 0x82305F58;
	sub_82303948(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// mulli r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 * 176;
	// addi r9,r10,26096
	ctx.r9.s64 = ctx.r10.s64 + 26096;
	// addi r8,r8,-25872
	ctx.r8.s64 = ctx.r8.s64 + -25872;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,20
	ctx.r6.s64 = ctx.r8.s64 + 20;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bne cr6,0x82305ff4
	if (!ctx.cr6.eq) goto loc_82305FF4;
	// addi r10,r10,26240
	ctx.r10.s64 = ctx.r10.s64 + 26240;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82305ff4
	if (!ctx.cr6.eq) goto loc_82305FF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82090320
	ctx.lr = 0x82305FA8;
	sub_82090320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82305ff4
	if (!ctx.cr6.lt) goto loc_82305FF4;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822ddaa8
	ctx.lr = 0x82305FC4;
	sub_822DDAA8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,3168
	ctx.r4.s64 = ctx.r11.s64 + 3168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82305FE4;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362a60
	ctx.lr = 0x82305FEC;
	sub_82362A60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82305FF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82305EF8) {
	__imp__sub_82305EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82306008;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-40
	ctx.r29.s64 = ctx.r3.s64 + -40;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r26,r11,-12528
	ctx.r26.s64 = ctx.r11.s64 + -12528;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r28,r11,-25872
	ctx.r28.s64 = ctx.r11.s64 + -25872;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r26,26076
	ctx.r8.s64 = ctx.r26.s64 + 26076;
	// addi r10,r28,14104
	ctx.r10.s64 = ctx.r28.s64 + 14104;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x82306054;
	sub_822EC4E8(ctx, base);
	// lwz r9,112(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82306098
	if (!ctx.cr6.eq) goto loc_82306098;
	// addi r3,r24,100
	ctx.r3.s64 = ctx.r24.s64 + 100;
	// bl 0x822eb8e8
	ctx.lr = 0x82306068;
	sub_822EB8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82306098
	if (ctx.cr6.eq) goto loc_82306098;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x82306078;
	sub_822EC500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362e28
	ctx.lr = 0x82306084;
	sub_82362E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82306088:
	// bl 0x82369d78
	ctx.lr = 0x8230608C;
	sub_82369D78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82306098:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x823060A0;
	sub_822EC500(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823060cc
	if (!ctx.cr6.eq) goto loc_823060CC;
	// lbz r11,120(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823060cc
	if (ctx.cr6.eq) goto loc_823060CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305a60
	ctx.lr = 0x823060C0;
	sub_82305A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// bl 0x82362e28
	ctx.lr = 0x823060CC;
	sub_82362E28(ctx, base);
loc_823060CC:
	// lbz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823062e8
	if (!ctx.cr6.eq) goto loc_823062E8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x823060f8
	if (!ctx.cr6.lt) goto loc_823060F8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823662d8
	ctx.lr = 0x823060EC;
	sub_823662D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823062e8
	if (ctx.cr6.eq) goto loc_823062E8;
loc_823060F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r28,20
	ctx.r23.s64 = ctx.r28.s64 + 20;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwzx r22,r25,r23
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x82306168
	if (!ctx.cr6.eq) goto loc_82306168;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306168
	if (ctx.cr6.eq) goto loc_82306168;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lwz r10,84(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82306168
	if (!ctx.cr6.eq) goto loc_82306168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820901f0
	ctx.lr = 0x82306148;
	sub_820901F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306088
	if (ctx.cr6.eq) goto loc_82306088;
	// bl 0x82369e98
	ctx.lr = 0x82306160;
	sub_82369E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823062e8
	if (!ctx.cr6.eq) goto loc_823062E8;
loc_82306168:
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823061ac
	if (ctx.cr6.eq) goto loc_823061AC;
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823061b4
	if (!ctx.cr6.lt) goto loc_823061B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823058c0
	ctx.lr = 0x82306188;
	sub_823058C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230619c
	if (ctx.cr6.eq) goto loc_8230619C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82301cc0
	ctx.lr = 0x8230619C;
	sub_82301CC0(ctx, base);
loc_8230619C:
	// lwz r11,92(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// lwz r10,84(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823061b4
	if (ctx.cr6.eq) goto loc_823061B4;
loc_823061AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228c160
	ctx.lr = 0x823061B4;
	sub_8228C160(ctx, base);
loc_823061B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,120(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82362f58
	ctx.lr = 0x823061C0;
	sub_82362F58(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823061f0
	if (ctx.cr6.eq) goto loc_823061F0;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r3,r10,26
	ctx.r3.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x82361b78
	ctx.lr = 0x823061DC;
	sub_82361B78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823061f0
	if (ctx.cr6.eq) goto loc_823061F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82303948
	ctx.lr = 0x823061F0;
	sub_82303948(ctx, base);
loc_823061F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20336(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8230622c
	if (ctx.cr6.eq) goto loc_8230622C;
	// lbz r11,165(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230622c
	if (!ctx.cr6.eq) goto loc_8230622C;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230622c
	if (ctx.cr6.eq) goto loc_8230622C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362f28
	ctx.lr = 0x82306228;
	sub_82362F28(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_8230622C:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r8,r28,16392
	ctx.r8.s64 = ctx.r28.s64 + 16392;
	// lwz r10,20296(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20296);
	// lfs f0,16420(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// srawi r7,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 9;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r10
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f1,r25,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x82306274
	if (ctx.cr6.eq) goto loc_82306274;
	// lwzx r3,r25,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// bl 0x820905c8
	ctx.lr = 0x82306274;
	sub_820905C8(ctx, base);
loc_82306274:
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823062e8
	if (ctx.cr6.eq) goto loc_823062E8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823062ac
	if (!ctx.cr6.eq) goto loc_823062AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820901f0
	ctx.lr = 0x82306298;
	sub_820901F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823062e8
	if (!ctx.cr6.eq) goto loc_823062E8;
	// b 0x823062dc
	goto loc_823062DC;
loc_823062AC:
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
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
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823062e8
	if (!ctx.cr6.eq) goto loc_823062E8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_823062DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82090320
	ctx.lr = 0x823062E8;
	sub_82090320(ctx, base);
loc_823062E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82306000) {
	__imp__sub_82306000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823062F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823062F4) {
	__imp__sub_823062F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823062F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82306000
	sub_82306000(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823062F8) {
	__imp__sub_823062F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823062FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823062FC) {
	__imp__sub_823062FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306300) {
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
	// bl 0x822e4e20
	ctx.lr = 0x8230631C;
	sub_822E4E20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r3,r7,3304
	ctx.r3.s64 = ctx.r7.s64 + 3304;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,3252
	ctx.r8.s64 = ctx.r8.s64 + 3252;
	// lfs f2,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x82306350;
	sub_822E1660(ctx, base);
	// lis r6,-31809
	ctx.r6.s64 = -2084634624;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r6,-12528
	ctx.r31.s64 = ctx.r6.s64 + -12528;
	// ori r4,r5,35228
	ctx.r4.u64 = ctx.r5.u64 | 35228;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stb r11,-12528(r6)
	PPC_STORE_U8(ctx.r6.u32 + -12528, ctx.r11.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r7,r9,35236
	ctx.r7.u64 = ctx.r9.u64 | 35236;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r8,-31836
	ctx.r8.s64 = -2086404096;
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r9,12
	ctx.r9.s64 = 12;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r10,6
	ctx.r10.s64 = 6;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r3,-25880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25880, ctx.r3.u32);
	// lis r5,-31836
	ctx.r5.s64 = -2086404096;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r30,r5,-25872
	ctx.r30.s64 = ctx.r5.s64 + -25872;
	// li r3,63
	ctx.r3.s64 = 63;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,2768(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2768);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820b40b0
	ctx.lr = 0x823063BC;
	sub_820B40B0(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r3,r4,35232
	ctx.r3.u64 = ctx.r4.u64 | 35232;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stwx r10,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82310360
	ctx.lr = 0x823063D8;
	sub_82310360(ctx, base);
	// bl 0x82302a08
	ctx.lr = 0x823063DC;
	sub_82302A08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r11,3240
	ctx.r4.s64 = ctx.r11.s64 + 3240;
	// bl 0x82177148
	ctx.lr = 0x823063EC;
	sub_82177148(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,13428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13428, ctx.r11.u32);
	// bl 0x823040d0
	ctx.lr = 0x82306400;
	sub_823040D0(ctx, base);
	// bl 0x82302bc0
	ctx.lr = 0x82306404;
	sub_82302BC0(ctx, base);
	// bl 0x822dcbf8
	ctx.lr = 0x82306408;
	sub_822DCBF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_82306300) {
	__imp__sub_82306300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82306430;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lwz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// srawi r5,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 9;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// bl 0x823619e0
	ctx.lr = 0x82306468;
	sub_823619E0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823064b0
	if (ctx.cr6.eq) goto loc_823064B0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823064c4
	if (!ctx.cr6.eq) goto loc_823064C4;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ddaa8
	ctx.lr = 0x82306494;
	sub_822DDAA8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3336
	ctx.r4.s64 = ctx.r11.s64 + 3336;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x823064B0;
	sub_82280B08(ctx, base);
loc_823064B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362a60
	ctx.lr = 0x823064B8;
	sub_82362A60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823064C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823044b8
	ctx.lr = 0x823064CC;
	sub_823044B8(ctx, base);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r11,-25872
	ctx.r27.s64 = ctx.r11.s64 + -25872;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r11,r27,8344
	ctx.r11.s64 = ctx.r27.s64 + 8344;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,7
	ctx.r3.s64 = 7;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x823064F0;
	sub_822EC4E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,56(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822ebc30
	ctx.lr = 0x82306550;
	sub_822EBC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ebbc0
	ctx.lr = 0x82306558;
	sub_822EBBC0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822ec500
	ctx.lr = 0x82306564;
	sub_822EC500(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823630c8
	ctx.lr = 0x82306570;
	sub_823630C8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363290
	ctx.lr = 0x82306584;
	sub_82363290(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,-12528
	ctx.r28.s64 = ctx.r11.s64 + -12528;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srawi r8,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 9;
	// lfs f13,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20336(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,16420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16420);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20296(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20296);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f31,f10,f12
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// beq cr6,0x823065f4
	if (ctx.cr6.eq) goto loc_823065F4;
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823065f4
	if (!ctx.cr6.eq) goto loc_823065F4;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823065f4
	if (ctx.cr6.eq) goto loc_823065F4;
	// bl 0x82362f28
	ctx.lr = 0x823065F0;
	sub_82362F28(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_823065F4:
	// mulli r10,r29,176
	ctx.r10.s64 = ctx.r29.s64 * 176;
	// addi r9,r28,26076
	ctx.r9.s64 = ctx.r28.s64 + 26076;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r27,16392
	ctx.r8.s64 = ctx.r27.s64 + 16392;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stfsx f31,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82306624
	if (ctx.cr6.eq) goto loc_82306624;
	// addi r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 + 20;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820905c8
	ctx.lr = 0x82306624;
	sub_820905C8(ctx, base);
loc_82306624:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82306000
	ctx.lr = 0x82306630;
	sub_82306000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82362a80
	ctx.lr = 0x8230663C;
	sub_82362A80(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82306428) {
	__imp__sub_82306428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306648) {
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
	ctx.lr = 0x8230665C;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_82306678:
	// stfs f0,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82306678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82306678;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x823066A4;
	sub_823DE800(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x823066B0;
	sub_823DE720(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f28,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f29,f11,f10
	ctx.f29.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// bgt cr6,0x8230689c
	if (ctx.cr6.gt) goto loc_8230689C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82306720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306720;
	// bdzf 4*cr6+eq,0x82306758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306758;
	// bdzf 4*cr6+eq,0x823067d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823067D4;
	// bne cr6,0x82306850
	if (!ctx.cr6.eq) goto loc_82306850;
	// fsubs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f9,f29,f30
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfs f13,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x823068b4
	goto loc_823068B4;
loc_82306720:
	// fadds f8,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f9,f29,f30
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfs f13,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f0,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x823068b4
	goto loc_823068B4;
loc_82306758:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-11392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11392);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-29640(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29640);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823e1e88
	ctx.lr = 0x82306774;
	sub_823E1E88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,13216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fadds f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fsubs f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmuls f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fnmsubs f7,f9,f31,f10
	ctx.f7.f64 = double(float(-(ctx.f9.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// fmuls f6,f8,f28
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fnmsubs f5,f10,f31,f9
	ctx.f5.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f9.f64)));
	// fnmsubs f4,f9,f31,f10
	ctx.f4.f64 = double(float(-(ctx.f9.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// fmadds f3,f10,f31,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f1,f9,f31,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f2,f9,f31,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fadds f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f7,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fadds f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f8,f28
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// b 0x823068b4
	goto loc_823068B4;
loc_823067D4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-11392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11392);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-29640(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29640);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823067F0;
	sub_823E1E88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,13216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fadds f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmuls f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f7,f10,f31,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmuls f6,f8,f28
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmadds f5,f9,f31,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f4,f10,f31,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fnmsubs f1,f10,f31,f9
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f9.f64)));
	// fnmsubs f3,f10,f31,f9
	ctx.f3.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f9.f64)));
	// fnmsubs f2,f9,f31,f10
	ctx.f2.f64 = double(float(-(ctx.f9.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// fadds f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f7,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsubs f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fadds f9,f3,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fmuls f10,f2,f28
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// b 0x823068b4
	goto loc_823068B4;
loc_82306850:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-11392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11392);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-29640(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29640);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823e1e88
	ctx.lr = 0x8230686C;
	sub_823E1E88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,13216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fdivs f8,f29,f12
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fadds f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fsubs f12,f30,f11
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fadds f9,f8,f30
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fsubs f11,f30,f8
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// b 0x823068b4
	goto loc_823068B4;
loc_8230689C:
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
loc_823068B4:
	// fdivs f9,f30,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x823068EC;
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

PPC_WEAK_FUNC(sub_82306648) {
	__imp__sub_82306648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823068FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823068FC) {
	__imp__sub_823068FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 10;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r5,14
	ctx.r9.s64 = ctx.r5.s64 + 14;
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f12,f8,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfsx f6,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f8,r10,r3
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lfsx f4,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f6,r8,r3
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// fmadds f3,f11,f7,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fnmsubs f2,f10,f6,f3
	ctx.f2.f64 = double(float(-(ctx.f10.f64 * ctx.f6.f64 - ctx.f3.f64)));
	// fnmsubs f1,f9,f4,f2
	ctx.f1.f64 = double(float(-(ctx.f9.f64 * ctx.f4.f64 - ctx.f2.f64)));
	// stfsx f1,r9,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82306900) {
	__imp__sub_82306900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230696C) {
	__imp__sub_8230696C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82306970) {
	__imp__sub_82306970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82306984) {
	__imp__sub_82306984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82306988) {
	__imp__sub_82306988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230699C) {
	__imp__sub_8230699C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823069A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823069A0) {
	__imp__sub_823069A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823069B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823069B0) {
	__imp__sub_823069B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823069C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823069D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82090ab0
	ctx.lr = 0x82306A28;
	sub_82090AB0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82306ac8
	if (ctx.cr6.gt) goto loc_82306AC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82306a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306A80;
	// bdzf 4*cr6+eq,0x82306a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306A8C;
	// bdzf 4*cr6+eq,0x82306a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306A98;
	// bdzf 4*cr6+eq,0x82306aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306AA4;
	// bdzf 4*cr6+eq,0x82306aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306AAC;
	// bdzf 4*cr6+eq,0x82306ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82306AB4;
	// bne cr6,0x82306ac0
	if (!ctx.cr6.eq) goto loc_82306AC0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_82306A5C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82306A60:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82306A68:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306A74;
	sub_82090AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306A80:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82306a60
	goto loc_82306A60;
loc_82306A8C:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82306a60
	goto loc_82306A60;
loc_82306A98:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82306a60
	goto loc_82306A60;
loc_82306AA4:
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// b 0x82306a5c
	goto loc_82306A5C;
loc_82306AAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82306a5c
	goto loc_82306A5C;
loc_82306AB4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82306a60
	goto loc_82306A60;
loc_82306AC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82306a5c
	goto loc_82306A5C;
loc_82306AC8:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82306a68
	goto loc_82306A68;
}

PPC_WEAK_FUNC(sub_823069C8) {
	__imp__sub_823069C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82306AD4) {
	__imp__sub_82306AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82306AE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// bl 0x82090ab0
	ctx.lr = 0x82306B28;
	sub_82090AB0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82306c5c
	if (ctx.cr6.gt) goto loc_82306C5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82306c1c
	if (ctx.cr6.eq) goto loc_82306C1C;
	// bdz 0x82306c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306C68;
	// bdz 0x82306cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306CB4;
	// bdz 0x82306cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306CF4;
	// bdz 0x82306d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306D24;
	// bdz 0x82306b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306B60;
	// bdz 0x82306bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306BAC;
	// bdz 0x82306bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82306BEC;
	// b 0x82306db0
	goto loc_82306DB0;
loc_82306B60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82306b90
	if (ctx.cr6.lt) goto loc_82306B90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82306b90
	if (!ctx.cr6.lt) goto loc_82306B90;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306B84;
	sub_82090AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306B90:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306B9C;
	sub_82090AB0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306BAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82306b90
	if (ctx.cr6.lt) goto loc_82306B90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82306b90
	if (ctx.cr6.gt) goto loc_82306B90;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306BE0;
	sub_82090AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306BEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82306b90
	if (ctx.cr6.lt) goto loc_82306B90;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82306b90
	if (ctx.cr6.gt) goto loc_82306B90;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306C10;
	sub_82090AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306C1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82306c5c
	if (ctx.cr6.lt) goto loc_82306C5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82306c5c
	if (!ctx.cr6.lt) goto loc_82306C5C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82306c88
	goto loc_82306C88;
loc_82306C5C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x82306c9c
	goto loc_82306C9C;
loc_82306C68:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82306c80
	if (!ctx.cr6.eq) goto loc_82306C80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82306C80:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82306C84:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_82306C88:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306c9c
	if (ctx.cr6.eq) goto loc_82306C9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82306648
	ctx.lr = 0x82306C9C;
	sub_82306648(ctx, base);
loc_82306C9C:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306CA8;
	sub_82090AB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306CB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82306c5c
	if (ctx.cr6.lt) goto loc_82306C5C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,2772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2772);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82306c5c
	if (ctx.cr6.gt) goto loc_82306C5C;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82306cec
	if (!ctx.cr6.eq) goto loc_82306CEC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82306CEC:
	// stfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82306c84
	goto loc_82306C84;
loc_82306CF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82306c5c
	if (!ctx.cr6.gt) goto loc_82306C5C;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82306d1c
	if (!ctx.cr6.eq) goto loc_82306D1C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82306D1C:
	// stfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// b 0x82306c84
	goto loc_82306C84;
loc_82306D24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82306d98
	if (ctx.cr6.eq) goto loc_82306D98;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// stb r28,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r28.u8);
loc_82306D50:
	// lbz r8,-216(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -216);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82306d90
	if (!ctx.cr6.eq) goto loc_82306D90;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82306d90
	if (!ctx.cr6.eq) goto loc_82306D90;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82306d50
	if (ctx.cr6.lt) goto loc_82306D50;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306D84;
	sub_82090AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306D90:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
loc_82306D98:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82090ab0
	ctx.lr = 0x82306DA4;
	sub_82090AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82306DB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82306df8
	if (!ctx.cr6.eq) goto loc_82306DF8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82306df8
	if (!ctx.cr6.eq) goto loc_82306DF8;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82306df8
	if (!ctx.cr6.eq) goto loc_82306DF8;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82306dfc
	if (ctx.cr6.eq) goto loc_82306DFC;
loc_82306DF8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82306DFC:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// b 0x82306c88
	goto loc_82306C88;
}

PPC_WEAK_FUNC(sub_82306AD8) {
	__imp__sub_82306AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82306e3c
	if (!ctx.cr6.lt) goto loc_82306E3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82306E3C:
	// mulli r11,r6,216
	ctx.r11.s64 = ctx.r6.s64 * 216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82306E5C:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82306f48
	if (ctx.cr6.eq) goto loc_82306F48;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// beq cr6,0x82306ee0
	if (ctx.cr6.eq) goto loc_82306EE0;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r5,10
	ctx.r9.s64 = ctx.r5.s64 + 10;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r5,14
	ctx.r8.s64 = ctx.r5.s64 + 14;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// fmadds f5,f11,f7,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f12.f64));
	// lfsx f4,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f6,r10,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f3,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfsx f4,r7,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fmadds f0,f6,f10,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmsubs f13,f9,f4,f0
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f4.f64 - ctx.f0.f64)));
	// fnmsubs f0,f8,f3,f13
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f3.f64 - ctx.f13.f64)));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// b 0x82306f48
	goto loc_82306F48;
loc_82306EE0:
	// fmuls f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r5,10
	ctx.r8.s64 = ctx.r5.s64 + 10;
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r5,14
	ctx.r7.s64 = ctx.r5.s64 + 14;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f5,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfsx f7,r9,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f4,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f5,r10,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fmadds f3,f12,f8,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f0,f7,f11,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fnmsubs f13,f10,f5,f0
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f5.f64 - ctx.f0.f64)));
	// fnmsubs f0,f9,f4,f13
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f4.f64 - ctx.f13.f64)));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
loc_82306F48:
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x82306e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82306E5C;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306f64
	if (ctx.cr6.eq) goto loc_82306F64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82306F64:
	// fmuls f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82306E20) {
	__imp__sub_82306E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82306F6C) {
	__imp__sub_82306F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306F70) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lfs f13,2772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2772);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bl 0x82306648
	ctx.lr = 0x82306FB0;
	sub_82306648(ctx, base);
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

PPC_WEAK_FUNC(sub_82306F70) {
	__imp__sub_82306F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82306FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82306FD0;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307070
	if (ctx.cr6.eq) goto loc_82307070;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82094a18
	ctx.lr = 0x82306FF8;
	sub_82094A18(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82307070
	if (ctx.cr6.eq) goto loc_82307070;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82307010:
	// rlwinm r4,r5,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// li r30,256
	ctx.r30.s64 = 256;
loc_82307018:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// fsubs f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r4,r11
	ctx.r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsx f1,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82306e20
	ctx.lr = 0x82307038;
	sub_82306E20(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82306e20
	ctx.lr = 0x8230704C;
	sub_82306E20(ctx, base);
	// fadds f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82307018
	if (!ctx.cr0.eq) goto loc_82307018;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82307010
	if (ctx.cr6.lt) goto loc_82307010;
loc_82307070:
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82306FC8) {
	__imp__sub_82306FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307084) {
	__imp__sub_82307084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82307090;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,3432
	ctx.r10.s64 = ctx.r11.s64 + 3432;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,2772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2772);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_823070C8:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82306648
	ctx.lr = 0x823070E4;
	sub_82306648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bge 0x823070c8
	if (!ctx.cr0.lt) goto loc_823070C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stb r29,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307088) {
	__imp__sub_82307088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230711C) {
	__imp__sub_8230711C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r3,19616
	ctx.r10.s64 = ctx.r3.s64 * 19616;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307120) {
	__imp__sub_82307120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307134) {
	__imp__sub_82307134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307138) {
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
	// lbz r11,19608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307178
	if (ctx.cr6.eq) goto loc_82307178;
	// bl 0x82310110
	ctx.lr = 0x8230715C;
	sub_82310110(ctx, base);
	// lwz r11,19612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19612);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r8,r10,37856
	ctx.r8.u64 = ctx.r10.u64 | 37856;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8230717c
	if (ctx.cr6.gt) goto loc_8230717C;
loc_82307178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230717C:
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

PPC_WEAK_FUNC(sub_82307138) {
	__imp__sub_82307138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307194) {
	__imp__sub_82307194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823071A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r3,19616
	ctx.r10.s64 = ctx.r3.s64 * 19616;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r31,19600
	ctx.r29.s64 = ctx.r31.s64 + 19600;
	// lwz r10,19600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19600);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823072ac
	if (!ctx.cr6.eq) goto loc_823072AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stb r11,19608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19608, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,19604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19604, ctx.r11.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82372c08
	ctx.lr = 0x823071E8;
	sub_82372C08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x823072ac
	if (ctx.cr6.eq) goto loc_823072AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82307230
	if (ctx.cr6.eq) goto loc_82307230;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bba0
	ctx.lr = 0x82307204;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823072ac
	if (ctx.cr6.eq) goto loc_823072AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,3520
	ctx.r4.s64 = ctx.r11.s64 + 3520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82307228;
	sub_82280B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82307230:
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-8232
	ctx.r28.s64 = ctx.r11.s64 + -8232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822805e8
	ctx.lr = 0x82307248;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8230724C;
	sub_822807B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fe50
	ctx.lr = 0x82307268;
	sub_8236FE50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823072ac
	if (ctx.cr6.eq) goto loc_823072AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8230727C;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230729c
	if (ctx.cr6.eq) goto loc_8230729C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,3460
	ctx.r4.s64 = ctx.r11.s64 + 3460;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8230729C;
	sub_82280B08(ctx, base);
loc_8230729C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82280760
	ctx.lr = 0x823072A8;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x823072AC;
	sub_822805F0(ctx, base);
loc_823072AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307198) {
	__imp__sub_82307198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823072B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823072B4) {
	__imp__sub_823072B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823072B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823072C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,37(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,-6816
	ctx.r11.s64 = ctx.r9.s64 + -6816;
	// mulli r10,r10,19616
	ctx.r10.s64 = ctx.r10.s64 * 19616;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,19600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19600);
	// bl 0x8236b770
	ctx.lr = 0x823072E4;
	sub_8236B770(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,19600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19600, ctx.r27.u32);
	// bl 0x822807b0
	ctx.lr = 0x823072F4;
	sub_822807B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8236bad8
	ctx.lr = 0x82307304;
	sub_8236BAD8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,19604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19604, ctx.r8.u32);
	// bl 0x8236bab0
	ctx.lr = 0x82307314;
	sub_8236BAB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82307368
	if (ctx.cr6.eq) goto loc_82307368;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82307368
	if (ctx.cr6.eq) goto loc_82307368;
	// lbz r3,37(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// bl 0x8230bba0
	ctx.lr = 0x82307338;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307358
	if (ctx.cr6.eq) goto loc_82307358;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,3600
	ctx.r4.s64 = ctx.r11.s64 + 3600;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82307358;
	sub_82280B08(ctx, base);
loc_82307358:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// stb r11,19608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19608, ctx.r11.u8);
	// b 0x82307370
	goto loc_82307370;
loc_82307368:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r27,19608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19608, ctx.r27.u8);
loc_82307370:
	// bl 0x82310110
	ctx.lr = 0x82307374;
	sub_82310110(ctx, base);
	// stw r3,19612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19612, ctx.r3.u32);
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// bl 0x82280760
	ctx.lr = 0x82307388;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8230738C;
	sub_822805F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823072B8) {
	__imp__sub_823072B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823073A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r11,-8232
	ctx.r27.s64 = ctx.r11.s64 + -8232;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r27,36
	ctx.r30.s64 = ctx.r27.s64 + 36;
	// addi r29,r10,3736
	ctx.r29.s64 = ctx.r10.s64 + 3736;
	// addi r28,r11,3708
	ctx.r28.s64 = ctx.r11.s64 + 3708;
loc_823073C0:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307424
	if (ctx.cr6.eq) goto loc_82307424;
	// addi r31,r30,-32
	ctx.r31.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822807b0
	ctx.lr = 0x823073D8;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82307434
	if (ctx.cr6.eq) goto loc_82307434;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82307404
	if (ctx.cr6.eq) goto loc_82307404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x822e84f0
	ctx.lr = 0x823073FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82307414
	goto loc_82307414;
loc_82307404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823072b8
	ctx.lr = 0x8230740C;
	sub_823072B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82307414:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82307424
	if (ctx.cr6.lt) goto loc_82307424;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x82307424;
	sub_82280B08(ctx, base);
loc_82307424:
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r11,r27,1444
	ctx.r11.s64 = ctx.r27.s64 + 1444;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823073c0
	if (ctx.cr6.lt) goto loc_823073C0;
loc_82307434:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307398) {
	__imp__sub_82307398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230743C) {
	__imp__sub_8230743C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307440) {
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
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,-6816
	ctx.r31.s64 = ctx.r11.s64 + -6816;
	// ori r5,r5,12928
	ctx.r5.u64 = ctx.r5.u64 | 12928;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8230746C;
	sub_823DE090(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// addi r4,r10,3768
	ctx.r4.s64 = ctx.r10.s64 + 3768;
	// addi r3,r9,-8232
	ctx.r3.s64 = ctx.r9.s64 + -8232;
	// bl 0x822801e0
	ctx.lr = 0x82307480;
	sub_822801E0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-5
	ctx.r10.s64 = -327680;
	// ori r10,r10,27680
	ctx.r10.u64 = ctx.r10.u64 | 27680;
loc_82307494:
	// stwu r10,19616(r11)
	ea = 19616 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82307494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82307494;
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

PPC_WEAK_FUNC(sub_82307440) {
	__imp__sub_82307440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823074B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// b 0x82280470
	sub_82280470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823074B0) {
	__imp__sub_823074B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823074BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823074BC) {
	__imp__sub_823074BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823074C0) {
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
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// mulli r11,r3,19616
	ctx.r11.s64 = ctx.r3.s64 * 19616;
	// addi r10,r10,-6816
	ctx.r10.s64 = ctx.r10.s64 + -6816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,19608(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19608);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82307514
	if (ctx.cr6.eq) goto loc_82307514;
	// bl 0x82310110
	ctx.lr = 0x823074F8;
	sub_82310110(ctx, base);
	// lwz r11,19612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19612);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r8,r10,37856
	ctx.r8.u64 = ctx.r10.u64 | 37856;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82307518
	if (ctx.cr6.gt) goto loc_82307518;
loc_82307514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82307518:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230752c
	if (ctx.cr6.eq) goto loc_8230752C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82307198
	ctx.lr = 0x8230752C;
	sub_82307198(ctx, base);
loc_8230752C:
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

PPC_WEAK_FUNC(sub_823074C0) {
	__imp__sub_823074C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307544) {
	__imp__sub_82307544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r3,19616
	ctx.r10.s64 = ctx.r3.s64 * 19616;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,19608
	ctx.r8.s64 = ctx.r11.s64 + 19608;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307548) {
	__imp__sub_82307548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307564) {
	__imp__sub_82307564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r10,r3,19616
	ctx.r10.s64 = ctx.r3.s64 * 19616;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,19604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823075ac
	if (!ctx.cr6.eq) goto loc_823075AC;
loc_82307594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823075AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82307594
	if (!ctx.cr6.gt) goto loc_82307594;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r8,16726
	ctx.r8.s64 = 1096155136;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// ori r8,r8,2071
	ctx.r8.u64 = ctx.r8.u64 | 2071;
loc_823075D0:
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823075f4
	if (ctx.cr6.eq) goto loc_823075F4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823075f4
	if (!ctx.cr6.eq) goto loc_823075F4;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_823075F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// bdnz 0x823075d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823075D0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82307594
	if (ctx.cr6.eq) goto loc_82307594;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d94d8
	ctx.lr = 0x82307610;
	sub_822D94D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mulli r8,r9,196
	ctx.r8.s64 = ctx.r9.s64 * 196;
	// ldx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r31.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307568) {
	__imp__sub_82307568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307638) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,19604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19604);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82307668
	if (!ctx.cr6.gt) goto loc_82307668;
loc_8230764C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82307670
	if (ctx.cr6.eq) goto loc_82307670;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230764c
	if (ctx.cr6.lt) goto loc_8230764C;
loc_82307668:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82307670:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307638) {
	__imp__sub_82307638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82307680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r9,r3,19616
	ctx.r9.s64 = ctx.r3.s64 * 19616;
	// addi r10,r11,-6816
	ctx.r10.s64 = ctx.r11.s64 + -6816;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,19604(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19604);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823077dc
	if (!ctx.cr6.gt) goto loc_823077DC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823076B4:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r7,r4
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x823076dc
	if (ctx.cr6.eq) goto loc_823076DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823076b4
	if (ctx.cr6.lt) goto loc_823076B4;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823076DC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823077dc
	if (ctx.cr6.lt) goto loc_823077DC;
	// mulli r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 * 196;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823077b4
	if (!ctx.cr6.eq) goto loc_823077B4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82307788
	if (ctx.cr6.eq) goto loc_82307788;
	// rlwinm r9,r11,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82307744
	if (!ctx.cr6.eq) goto loc_82307744;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,3816
	ctx.r3.s64 = ctx.r11.s64 + 3816;
	// bl 0x822b6ff0
	ctx.lr = 0x82307724;
	sub_822B6FF0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x8230773C;
	sub_822E8368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82307744:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82307788
	if (ctx.cr6.eq) goto loc_82307788;
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82307788
	if (!ctx.cr6.eq) goto loc_82307788;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,3800
	ctx.r3.s64 = ctx.r11.s64 + 3800;
	// bl 0x822b6ff0
	ctx.lr = 0x82307768;
	sub_822B6FF0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x82307780;
	sub_822E8368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82307788:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,3784
	ctx.r3.s64 = ctx.r11.s64 + 3784;
	// bl 0x822b6ff0
	ctx.lr = 0x82307794;
	sub_822B6FF0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x823077AC;
	sub_822E8368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823077B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fe68
	ctx.lr = 0x823077D4;
	sub_8236FE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823077e8
	if (ctx.cr6.gt) goto loc_823077E8;
loc_823077DC:
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823077E8:
	// stbx r29,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82307678) {
	__imp__sub_82307678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823077F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823077F4) {
	__imp__sub_823077F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823077F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31836
	ctx.r11.s64 = -2086404096;
	// mulli r9,r3,19616
	ctx.r9.s64 = ctx.r3.s64 * 19616;
	// addi r10,r11,-6816
	ctx.r10.s64 = ctx.r11.s64 + -6816;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,19604(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19604);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82307850
	if (!ctx.cr6.gt) goto loc_82307850;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82307820:
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r5,r4
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82307848
	if (ctx.cr6.eq) goto loc_82307848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82307820
	if (ctx.cr6.lt) goto loc_82307820;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82307848:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8230785c
	if (!ctx.cr6.lt) goto loc_8230785C;
loc_82307850:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_8230785C:
	// mulli r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 * 196;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823077F8) {
	__imp__sub_823077F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82307874) {
	__imp__sub_82307874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307878) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// bl 0x8213af78
	ctx.lr = 0x823078B4;
	sub_8213AF78(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823078d8
	if (!ctx.cr6.gt) goto loc_823078D8;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_823078D8:
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x823078f8
	if (!ctx.cr6.gt) goto loc_823078F8;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_823078F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213af78
	ctx.lr = 0x82307900;
	sub_8213AF78(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82307924
	if (!ctx.cr6.gt) goto loc_82307924;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_82307924:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82307944
	if (!ctx.cr6.gt) goto loc_82307944;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_82307944:
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

PPC_WEAK_FUNC(sub_82307878) {
	__imp__sub_82307878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8230795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8230795C) {
	__imp__sub_8230795C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82307960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r9,-31835
	ctx.r9.s64 = -2086338560;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,6208(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6208);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lbz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,6232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f6,f8,f13,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f11.f64));
	// fdivs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f12,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f12.f64 : ctx.f5.f64;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmsubs f8,f9,f13,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f1.f64));
	// fdivs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f12,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82307960) {
	__imp__sub_82307960(ctx, base);
}

