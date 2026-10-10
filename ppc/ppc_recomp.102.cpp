#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823C97B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C97B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2804);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// xor r28,r4,r11
	ctx.r28.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823c97ec
	if (!ctx.cr6.eq) goto loc_823C97EC;
	// lwz r11,2796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2796);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,5,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFFF00;
	// rlwinm r9,r9,0,21,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0007FF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c9a08
	if (ctx.cr6.eq) goto loc_823C9A08;
loc_823C97EC:
	// rlwinm r11,r28,0,3,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x18000000;
	// lwz r27,144(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9820
	if (ctx.cr6.eq) goto loc_823C9820;
	// rlwinm r11,r30,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000000;
	// li r10,7
	ctx.r10.s64 = 7;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r7,r30,7,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x8;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// bl 0x820bf618
	ctx.lr = 0x823C9820;
	sub_820BF618(ctx, base);
loc_823C9820:
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c983c
	if (ctx.cr6.eq) goto loc_823C983C;
	// not r11,r30
	ctx.r11.u64 = ~ctx.r30.u64;
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// rlwinm r4,r11,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// bl 0x820be980
	ctx.lr = 0x823C983C;
	sub_820BE980(ctx, base);
loc_823C983C:
	// rlwinm r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9858
	if (ctx.cr6.eq) goto loc_823C9858;
	// lwz r11,2804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// rlwinm r28,r28,0,20,17
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_823C9858:
	// rlwinm r11,r28,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9870
	if (ctx.cr6.eq) goto loc_823C9870;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ca0b8
	ctx.lr = 0x823C9870;
	sub_823CA0B8(ctx, base);
loc_823C9870:
	// rlwinm r11,r28,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9894
	if (ctx.cr6.eq) goto loc_823C9894;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r30,20,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xC;
	// addi r9,r11,-11404
	ctx.r9.s64 = ctx.r11.s64 + -11404;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820be920
	ctx.lr = 0x823C9894;
	sub_820BE920(ctx, base);
loc_823C9894:
	// rlwinm r11,r28,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c98bc
	if (ctx.cr6.eq) goto loc_823C98BC;
	// rlwinm r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	// li r10,37
	ctx.r10.s64 = 37;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x820be950
	ctx.lr = 0x823C98BC;
	sub_820BE950(ctx, base);
loc_823C98BC:
	// rlwinm r11,r28,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9978
	if (ctx.cr6.eq) goto loc_823C9978;
	// lwz r10,2804(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r31,2852(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2852);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c9914
	if (ctx.cr6.eq) goto loc_823C9914;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x823c98f4
	if (!ctx.cr6.eq) goto loc_823C98F4;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x823c9948
	goto loc_823C9948;
loc_823C98F4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r5,r6,0,16,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// b 0x823c9944
	goto loc_823C9944;
loc_823C9914:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x823c9924
	if (!ctx.cr6.eq) goto loc_823C9924;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x823c9948
	goto loc_823C9948;
loc_823C9924:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r5,r7,16,12,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xF0000) | (ctx.r5.u64 & 0xFFFFFFFFFFF0FFFF);
loc_823C9944:
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
loc_823C9948:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x820c0fe8
	ctx.lr = 0x823C9968;
	sub_820C0FE8(ctx, base);
	// stw r31,2852(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2852, ctx.r31.u32);
	// addi r4,r29,2836
	ctx.r4.s64 = ctx.r29.s64 + 2836;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c8b80
	ctx.lr = 0x823C9978;
	sub_823C8B80(ctx, base);
loc_823C9978:
	// lwz r11,2796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2796);
	// rlwinm r10,r30,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x700;
	// rlwinm r9,r11,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x823c99cc
	if (!ctx.cr6.eq) goto loc_823C99CC;
	// lwz r11,2804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r30,r11,0,21,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FF) | (ctx.r30.u64 & 0xFFFFFFFFFFFFF800);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwimi r30,r11,0,5,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FF0000) | (ctx.r30.u64 & 0xFFFFFFFFF800FFFF);
	// beq cr6,0x823c9a04
	if (ctx.cr6.eq) goto loc_823C9A04;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c17b8
	ctx.lr = 0x823C99C0;
	sub_820C17B8(ctx, base);
	// stw r30,2804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2804, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823C99CC:
	// rlwinm r11,r30,0,5,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x7000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c99f4
	if (!ctx.cr6.eq) goto loc_823C99F4;
	// rlwinm r11,r30,0,16,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFF800FFFF;
	// lwz r10,2804(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// rlwinm r9,r11,16,5,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FF0000;
	// or r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 | ctx.r11.u64;
	// xor r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// rlwimi r8,r28,0,16,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFFFFFFF800FFFF) | (ctx.r8.u64 & 0x7FF0000);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_823C99F4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c9fd0
	ctx.lr = 0x823C9A04;
	sub_823C9FD0(ctx, base);
loc_823C9A04:
	// stw r30,2804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2804, ctx.r30.u32);
loc_823C9A08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C97B0) {
	__imp__sub_823C97B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C9A18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2808);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// xor r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823c9bd4
	if (ctx.cr6.eq) goto loc_823C9BD4;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lwz r29,144(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9a50
	if (ctx.cr6.eq) goto loc_823C9A50;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bf0a8
	ctx.lr = 0x823C9A50;
	sub_820BF0A8(ctx, base);
loc_823C9A50:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9a6c
	if (ctx.cr6.eq) goto loc_823C9A6C;
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x820bf068
	ctx.lr = 0x823C9A6C;
	sub_820BF068(ctx, base);
loc_823C9A6C:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9a88
	if (ctx.cr6.eq) goto loc_823C9A88;
	// lwz r11,2808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2808);
	// rlwinm r30,r30,0,30,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// or r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 | ctx.r31.u64;
loc_823C9A88:
	// rlwinm r10,r30,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-11272
	ctx.r28.s64 = ctx.r11.s64 + -11272;
	// beq cr6,0x823c9ab0
	if (ctx.cr6.eq) goto loc_823C9AB0;
	// addi r11,r28,-48
	ctx.r11.s64 = ctx.r28.s64 + -48;
	// rlwinm r10,r31,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820bf0d8
	ctx.lr = 0x823C9AB0;
	sub_820BF0D8(ctx, base);
loc_823C9AB0:
	// rlwinm r11,r30,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9ac8
	if (ctx.cr6.eq) goto loc_823C9AC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c91d8
	ctx.lr = 0x823C9AC8;
	sub_823C91D8(ctx, base);
loc_823C9AC8:
	// rlwinm r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// beq cr6,0x823c9af0
	if (ctx.cr6.eq) goto loc_823C9AF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9b10
	if (ctx.cr6.eq) goto loc_823C9B10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bf110
	ctx.lr = 0x823C9AEC;
	sub_820BF110(ctx, base);
	// b 0x823c9b10
	goto loc_823C9B10;
loc_823C9AF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9b04
	if (ctx.cr6.eq) goto loc_823C9B04;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bf110
	ctx.lr = 0x823C9B04;
	sub_820BF110(ctx, base);
loc_823C9B04:
	// lwz r11,2808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2808);
	// clrlwi r30,r30,25
	ctx.r30.u64 = ctx.r30.u32 & 0x7F;
	// rlwimi r31,r11,0,0,24
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFF80) | (ctx.r31.u64 & 0xFFFFFFFF0000007F);
loc_823C9B10:
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c9b30
	if (!ctx.cr6.eq) goto loc_823C9B30;
	// clrlwi r11,r31,12
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFFF;
	// lwz r10,2808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2808);
	// rlwinm r9,r11,12,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF00000;
	// or r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 | ctx.r11.u64;
	// xor r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 ^ ctx.r10.u64;
loc_823C9B30:
	// rlwinm r11,r30,0,15,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FF00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9b78
	if (ctx.cr6.eq) goto loc_823C9B78;
	// addi r11,r28,-32
	ctx.r11.s64 = ctx.r28.s64 + -32;
	// rlwinm r10,r31,26,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820bf228
	ctx.lr = 0x823C9B50;
	sub_820BF228(ctx, base);
	// addi r9,r28,-32
	ctx.r9.s64 = ctx.r28.s64 + -32;
	// rlwinm r8,r31,23,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 23) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x820bf1b8
	ctx.lr = 0x823C9B64;
	sub_820BF1B8(ctx, base);
	// addi r7,r28,-32
	ctx.r7.s64 = ctx.r28.s64 + -32;
	// rlwinm r6,r31,20,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x820bf1f0
	ctx.lr = 0x823C9B78;
	sub_820BF1F0(ctx, base);
loc_823C9B78:
	// rlwinm r11,r30,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1FF00000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9b98
	if (ctx.cr6.eq) goto loc_823C9B98;
	// rlwinm r6,r31,6,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x7;
	// rlwinm r5,r31,9,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x7;
	// rlwinm r4,r31,12,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0x7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ca060
	ctx.lr = 0x823C9B98;
	sub_823CA060(ctx, base);
loc_823C9B98:
	// rlwinm r11,r30,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE0000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9bb4
	if (ctx.cr6.eq) goto loc_823C9BB4;
	// rlwinm r11,r31,17,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x820bf188
	ctx.lr = 0x823C9BB4;
	sub_820BF188(ctx, base);
loc_823C9BB4:
	// rlwinm r11,r30,0,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE0000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9bd0
	if (ctx.cr6.eq) goto loc_823C9BD0;
	// rlwinm r11,r31,5,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x820bf258
	ctx.lr = 0x823C9BD0;
	sub_820BF258(ctx, base);
loc_823C9BD0:
	// stw r31,2808(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2808, ctx.r31.u32);
loc_823C9BD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9A10) {
	__imp__sub_823C9A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9BDC) {
	__imp__sub_823C9BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9BE0) {
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
	// lwz r11,2804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2804);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9c88
	if (ctx.cr6.eq) goto loc_823C9C88;
	// lwz r10,2796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2796);
	// rlwinm r9,r11,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r30,2852(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2852);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// rlwinm r8,r10,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r9,2804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2804, ctx.r9.u32);
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// stw r8,2796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2796, ctx.r8.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x823c9c38
	if (!ctx.cr6.eq) goto loc_823C9C38;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x823c9c58
	goto loc_823C9C58;
loc_823C9C38:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r5,r6,0,16,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
loc_823C9C58:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x820c0fe8
	ctx.lr = 0x823C9C78;
	sub_820C0FE8(ctx, base);
	// stw r30,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r30.u32);
	// addi r4,r31,2836
	ctx.r4.s64 = ctx.r31.s64 + 2836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8b80
	ctx.lr = 0x823C9C88;
	sub_823C8B80(ctx, base);
loc_823C9C88:
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

PPC_WEAK_FUNC(sub_823C9BE0) {
	__imp__sub_823C9BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9CA0) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,2852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2852);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823c9d20
	if (ctx.cr6.eq) goto loc_823C9D20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9be0
	ctx.lr = 0x823C9CD4;
	sub_823C9BE0(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r10,-26624
	ctx.r8.s64 = ctx.r10.s64 + -26624;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823c9cfc
	if (ctx.cr6.eq) goto loc_823C9CFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9048
	ctx.lr = 0x823C9CFC;
	sub_823C9048(ctx, base);
loc_823C9CFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ca128
	ctx.lr = 0x823C9D08;
	sub_823CA128(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,2852(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2852, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,5696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5696, ctx.r10.u32);
	// stb r9,5772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5772, ctx.r9.u8);
loc_823C9D20:
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

PPC_WEAK_FUNC(sub_823C9CA0) {
	__imp__sub_823C9CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C9D40;
	__savegprlr_25(ctx, base);
	// stwu r1,-3024(r1)
	ea = -3024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8236b940
	ctx.lr = 0x823C9D60;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r31,r10,3224
	ctx.r31.s64 = ctx.r10.s64 + 3224;
	// bge cr6,0x823c9d9c
	if (!ctx.cr6.lt) goto loc_823C9D9C;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c9d9c
	if (ctx.cr6.eq) goto loc_823C9D9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c9d9c
	if (!ctx.cr0.lt) goto loc_823C9D9C;
	// bl 0x823905c8
	ctx.lr = 0x823C9D9C;
	sub_823905C8(ctx, base);
loc_823C9D9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4328
	ctx.lr = 0x823C9DAC;
	sub_823D4328(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// beq cr6,0x823c9dc8
	if (ctx.cr6.eq) goto loc_823C9DC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820be070
	ctx.lr = 0x823C9DC8;
	sub_820BE070(ctx, base);
loc_823C9DC8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d3c78
	ctx.lr = 0x823C9DD0;
	sub_823D3C78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x823C9DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c9618
	ctx.lr = 0x823C9E04;
	sub_823C9618(ctx, base);
	// addi r1,r1,3024
	ctx.r1.s64 = ctx.r1.s64 + 3024;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9D38) {
	__imp__sub_823C9D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9E0C) {
	__imp__sub_823C9E0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823C9E18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// xor r26,r5,r6
	ctx.r26.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r26,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF00;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9e48
	if (ctx.cr6.eq) goto loc_823C9E48;
	// rlwinm r5,r5,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xF;
	// bl 0x820c0208
	ctx.lr = 0x823C9E48;
	sub_820C0208(ctx, base);
loc_823C9E48:
	// rlwinm r11,r26,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9e64
	if (ctx.cr6.eq) goto loc_823C9E64;
	// rlwinm r5,r29,20,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c03b0
	ctx.lr = 0x823C9E64;
	sub_820C03B0(ctx, base);
loc_823C9E64:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9e94
	if (ctx.cr6.eq) goto loc_823C9E94;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x823c9e8c
	if (!ctx.cr6.gt) goto loc_823C9E8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c0650
	ctx.lr = 0x823C9E88;
	sub_820C0650(ctx, base);
	// b 0x823c9e94
	goto loc_823C9E94;
loc_823C9E8C:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// rlwimi r27,r28,0,24,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFF00);
loc_823C9E94:
	// rlwinm r11,r26,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0000;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x823c9ee0
	if (ctx.cr6.eq) goto loc_823C9EE0;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r6,r11,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,1164
	ctx.r9.s64 = ctx.r10.s64 + 1164;
	// lwz r5,1164(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1164);
	// rlwimi r5,r29,7,7,8
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x1800000) | (ctx.r5.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r5,1164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1164, ctx.r5.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
loc_823C9EE0:
	// rlwinm r10,r26,0,6,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3F00000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9fc4
	if (ctx.cr6.eq) goto loc_823C9FC4;
	// rlwinm r10,r26,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9f30
	if (ctx.cr6.eq) goto loc_823C9F30;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r5,r11,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwimi r4,r29,22,20,21
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 22) & 0xC00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwinm r3,r4,0,20,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
loc_823C9F30:
	// rlwinm r10,r26,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC00000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9f74
	if (ctx.cr6.eq) goto loc_823C9F74;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r5,r11,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwimi r4,r29,23,17,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 23) & 0x6000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r3,r4,0,17,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
loc_823C9F74:
	// rlwinm r10,r26,0,6,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3000000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9fc8
	if (ctx.cr6.eq) goto loc_823C9FC8;
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r5,r11,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwimi r4,r29,24,14,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0x30000) | (ctx.r4.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r4,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C9FC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_823C9FC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9E10) {
	__imp__sub_823C9E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9FD0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r6,10,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1C;
	// addi r11,r11,-11344
	ctx.r11.s64 = ctx.r11.s64 + -11344;
	// rlwinm r9,r6,14,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3C;
	// addi r8,r11,-44
	ctx.r8.s64 = ctx.r11.s64 + -44;
	// rlwinm r5,r6,18,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3C;
	// addi r7,r11,-44
	ctx.r7.s64 = ctx.r11.s64 + -44;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r11,-44
	ctx.r10.s64 = ctx.r11.s64 + -44;
	// rlwinm r31,r6,30,26,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3C;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r6,26,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1C;
	// lwzx r7,r5,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwimi r4,r9,3,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
	// rlwimi r7,r4,5,0,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xFFFFFFE0) | (ctx.r7.u64 & 0xFFFFFFFF0000001F);
	// lbzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r8,r6,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwzx r5,r8,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwimi r6,r11,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwimi r5,r6,5,0,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0xFFFFFFE0) | (ctx.r5.u64 & 0xFFFFFFFF0000001F);
	// bl 0x820c17b8
	ctx.lr = 0x823CA04C;
	sub_820C17B8(ctx, base);
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

PPC_WEAK_FUNC(sub_823C9FD0) {
	__imp__sub_823C9FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CA068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-11304
	ctx.r28.s64 = ctx.r11.s64 + -11304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x820bf2f8
	ctx.lr = 0x823CA08C;
	sub_820BF2F8(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r9,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x820bf288
	ctx.lr = 0x823CA09C;
	sub_820BF288(ctx, base);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x820bf2c0
	ctx.lr = 0x823CA0AC;
	sub_820BF2C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA060) {
	__imp__sub_823CA060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CA0B4) {
	__imp__sub_823CA0B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CA0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x823ca0e0
	if (!ctx.cr6.eq) goto loc_823CA0E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823ca0f4
	goto loc_823CA0F4;
loc_823CA0E0:
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// li r31,128
	ctx.r31.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823ca0f4
	if (ctx.cr6.eq) goto loc_823CA0F4;
	// li r4,6
	ctx.r4.s64 = 6;
loc_823CA0F4:
	// lwz r30,144(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bee48
	ctx.lr = 0x823CA100;
	sub_820BEE48(ctx, base);
	// lbz r11,2784(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2784);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823ca11c
	if (ctx.cr6.eq) goto loc_823CA11C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bede0
	ctx.lr = 0x823CA118;
	sub_820BEDE0(ctx, base);
	// stb r31,2784(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2784, ctx.r31.u8);
loc_823CA11C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA0B8) {
	__imp__sub_823CA0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CA124) {
	__imp__sub_823CA124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CA130;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r27,144(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-26624
	ctx.r30.s64 = ctx.r11.s64 + -26624;
	// lwz r11,2852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2852);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r5,r29,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823ca200
	if (ctx.cr6.eq) goto loc_823CA200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c0fe8
	ctx.lr = 0x823CA184;
	sub_820C0FE8(ctx, base);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r11.u32);
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r5,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r5.u32);
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lfs f0,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r4.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r11,2804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2804);
	// lwz r10,2796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// bne cr6,0x823ca1f0
	if (!ctx.cr6.eq) goto loc_823CA1F0;
	// oris r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 1073741824;
	// oris r8,r10,16384
	ctx.r8.u64 = ctx.r10.u64 | 1073741824;
	// b 0x823ca1f8
	goto loc_823CA1F8;
loc_823CA1F0:
	// rlwinm r9,r11,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm r8,r10,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_823CA1F8:
	// stw r8,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r8.u32);
	// stw r9,2804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2804, ctx.r9.u32);
loc_823CA200:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823ca230
	if (ctx.cr6.eq) goto loc_823CA230;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c1340
	ctx.lr = 0x823CA230;
	sub_820C1340(ctx, base);
loc_823CA230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA128) {
	__imp__sub_823CA128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA238) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820bb9d0
	ctx.lr = 0x823CA25C;
	sub_820BB9D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823ca288
	if (!ctx.cr6.eq) goto loc_823CA288;
loc_823CA264:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x823CA26C;
	sub_8228B0D8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb9d0
	ctx.lr = 0x823CA280;
	sub_820BB9D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823ca264
	if (ctx.cr6.eq) goto loc_823CA264;
loc_823CA288:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x823ca298
	if (ctx.cr6.lt) goto loc_823CA298;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823CA298:
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

PPC_WEAK_FUNC(sub_823CA238) {
	__imp__sub_823CA238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CA2AC) {
	__imp__sub_823CA2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r11,1200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x823ca2cc
	if (!ctx.cr6.eq) goto loc_823CA2CC;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823CA2CC:
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CA2B0) {
	__imp__sub_823CA2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CA2D4) {
	__imp__sub_823CA2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA2D8) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x823ca32c
	if (!ctx.cr6.lt) goto loc_823CA32C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x823ca374
	if (!ctx.cr6.gt) goto loc_823CA374;
	// blr 
	return;
loc_823CA32C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823ca374
	if (!ctx.cr6.gt) goto loc_823CA374;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_823CA374:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CA2D8) {
	__imp__sub_823CA2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CA37C) {
	__imp__sub_823CA37C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823CA388;
	__savegprlr_18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r4,-15488
	ctx.r11.s64 = ctx.r4.s64 + -15488;
	// ori r4,r9,6152
	ctx.r4.u64 = ctx.r9.u64 | 6152;
	// ori r10,r3,6156
	ctx.r10.u64 = ctx.r3.u64 | 6156;
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// lwzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// sthx r4,r31,r6
	PPC_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u16);
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r30,r7,2
	ctx.r30.s64 = ctx.r7.s64 + 2;
	// addi r31,r8,6
	ctx.r31.s64 = ctx.r8.s64 + 6;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// ori r4,r9,6152
	ctx.r4.u64 = ctx.r9.u64 | 6152;
	// addi r28,r8,8
	ctx.r28.s64 = ctx.r8.s64 + 8;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r26,r8,16
	ctx.r26.u64 = ctx.r8.u32 & 0xFFFF;
	// ori r27,r9,6152
	ctx.r27.u64 = ctx.r9.u64 | 6152;
	// lis r9,8176
	ctx.r9.s64 = 535822336;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// ori r21,r7,6152
	ctx.r21.u64 = ctx.r7.u64 | 6152;
	// rlwinm r7,r10,5,11,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FFFE0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ori r20,r6,6152
	ctx.r20.u64 = ctx.r6.u64 | 6152;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// addi r6,r6,10
	ctx.r6.s64 = ctx.r6.s64 + 10;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r4,r29
	PPC_STORE_U16(ctx.r4.u32 + ctx.r29.u32, ctx.r26.u16);
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u16);
	// lfs f13,12168(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r28
	PPC_STORE_U16(ctx.r8.u32 + ctx.r28.u32, ctx.r10.u16);
	// lwzx r10,r11,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r19.u16);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r22,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r22.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r22,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r22.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r22,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r22.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stw r22,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r22.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r6,6156
	ctx.r4.u64 = ctx.r6.u64 | 6156;
	// ori r9,r5,6152
	ctx.r9.u64 = ctx.r5.u64 | 6152;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,6156
	ctx.r6.u64 = ctx.r8.u64 | 6156;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// ori r5,r7,6152
	ctx.r5.u64 = ctx.r7.u64 | 6152;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA380) {
	__imp__sub_823CA380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA500) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,-29904
	ctx.r8.s64 = ctx.r10.s64 + -29904;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,8456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,5652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5652);
	// lfs f13,428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f4,424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f3,f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f13,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f10,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f11,f4,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f6,f9,f4,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f5,f7,f4,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f4,f31,f0,f12
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f3,f13,f0,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f12,f10,f0,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// bl 0x823ca380
	ctx.lr = 0x823CA59C;
	sub_823CA380(ctx, base);
	// stfs f3,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f3,72(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f4,100(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f3,104(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f12,108(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f5,96(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,15104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fadds f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// lfs f2,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f5,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f12,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f6,64(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f11,100(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f10,104(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
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

PPC_WEAK_FUNC(sub_823CA500) {
	__imp__sub_823CA500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CA6A8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x823CA6B0;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,-29904
	ctx.r9.s64 = ctx.r11.s64 + -29904;
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,5652(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5652);
	// lwz r9,8456(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lfs f29,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r9,424
	ctx.r10.s64 = ctx.r9.s64 + 424;
	// lfs f13,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f13,f9,f8,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x823ca894
	if (!ctx.cr6.gt) goto loc_823CA894;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lfs f11,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// addi r7,r9,4520
	ctx.r7.s64 = ctx.r9.s64 + 4520;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfs f8,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fmadds f3,f8,f9,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lwz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f7,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f28,f31,f13
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// lfs f5,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lfs f8,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f7,f0,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f30,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lwz r29,12(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f11,f9,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f5,f28,f13,f31
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmadds f27,f8,f0,f4
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmsubs f3,f5,f10,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fadds f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmuls f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CA7A4;
	sub_823DDE20(ctx, base);
	// extsw r3,r27
	ctx.r3.s64 = ctx.r27.s32;
	// fmadds f0,f28,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f31.f64));
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fctiwz f7,f13
	ctx.f7.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmsubs f5,f0,f8,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CA7F0;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// and r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 & ctx.r31.u64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ble cr6,0x823ca820
	if (!ctx.cr6.gt) goto loc_823CA820;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823CA820:
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// ble cr6,0x823ca838
	if (!ctx.cr6.gt) goto loc_823CA838;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_823CA838:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823ca894
	if (!ctx.cr6.gt) goto loc_823CA894;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823ca894
	if (!ctx.cr6.gt) goto loc_823CA894;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
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
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x823CA890;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823CA894:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x823CA8A4;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA6A0) {
	__imp__sub_823CA6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA8A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823ca6a0
	ctx.lr = 0x823CA8CC;
	sub_823CA6A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x823ca960
	if (ctx.cr6.eq) goto loc_823CA960;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r7,r10,-29904
	ctx.r7.s64 = ctx.r10.s64 + -29904;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// li r8,8195
	ctx.r8.s64 = 8195;
	// lwz r10,8456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// addi r6,r4,-9672
	ctx.r6.s64 = ctx.r4.s64 + -9672;
	// lwz r11,5652(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5652);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,20420(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lfs f13,424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823a0c98
	ctx.lr = 0x823CA950;
	sub_823A0C98(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ca960
	if (ctx.cr6.eq) goto loc_823CA960;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_823CA960:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_823CA8A8) {
	__imp__sub_823CA8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CA978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CA980;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r7,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r6,r29,7
	ctx.r6.s64 = ctx.r29.s64 + 7;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r28,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823ca9c4
	if (!ctx.cr6.eq) goto loc_823CA9C4;
	// bl 0x823ca8a8
	ctx.lr = 0x823CA9BC;
	sub_823CA8A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823CA9C4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,8364(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8364);
	// bl 0x823b1ca8
	ctx.lr = 0x823CA9DC;
	sub_823B1CA8(ctx, base);
	// lis r30,-256
	ctx.r30.s64 = -16777216;
	// bl 0x823a64e8
	ctx.lr = 0x823CA9E4;
	sub_823A64E8(ctx, base);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r9,-29904
	ctx.r7.s64 = ctx.r9.s64 + -29904;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,6056(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5764(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5764);
	// lwz r10,5768(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5768);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// bl 0x823ca500
	ctx.lr = 0x823CAA34;
	sub_823CA500(ctx, base);
	// add r30,r29,r31
	ctx.r30.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lbz r3,25(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823caac8
	if (ctx.cr6.eq) goto loc_823CAAC8;
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x823ca238
	ctx.lr = 0x823CAA50;
	sub_823CA238(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823caa5c
	if (!ctx.cr6.eq) goto loc_823CAA5C;
	// stb r27,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r27.u8);
loc_823CAA5C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r11,1200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x823caa78
	if (!ctx.cr6.eq) goto loc_823CAA78;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823CAA78:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823caa88
	if (!ctx.cr6.gt) goto loc_823CAA88;
	// stb r27,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r27.u8);
loc_823CAA88:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f0,f7,f8,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// b 0x823caad0
	goto loc_823CAAD0;
loc_823CAAC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_823CAAD0:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823caae0
	if (!ctx.cr6.eq) goto loc_823CAAE0;
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_823CAAE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x820bb748
	ctx.lr = 0x823CAAF4;
	sub_820BB748(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823CAAF8;
	sub_823B1C28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x820bb748
	ctx.lr = 0x823CAB04;
	sub_820BB748(ctx, base);
	// stb r27,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CA978) {
	__imp__sub_823CA978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CAB10) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,8456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// addi r31,r11,424
	ctx.r31.s64 = ctx.r11.s64 + 424;
	// lwz r3,344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x823b1ca8
	ctx.lr = 0x823CAB44;
	sub_823B1CA8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x823ca380
	ctx.lr = 0x823CAB4C;
	sub_823CA380(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r11,8456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f10,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-10912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,14164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x823cab94
	if (!ctx.cr6.gt) goto loc_823CAB94;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x823caba0
	goto loc_823CABA0;
loc_823CAB94:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_823CABA0:
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmsubs f1,f6,f12,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f12,f9,f11,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmsubs f11,f7,f0,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmuls f8,f1,f1
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f8,f4,f13,f5
	ctx.f8.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fmuls f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f7,f2,f12,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 - ctx.f11.f64));
	// fmsubs f6,f9,f1,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 - ctx.f10.f64));
	// fmsubs f5,f3,f13,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fadds f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f1,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fadds f10,f9,f4
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f4
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,96(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f6,100(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f4,104(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// bl 0x823b1c28
	ctx.lr = 0x823CACD0;
	sub_823B1C28(ctx, base);
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

PPC_WEAK_FUNC(sub_823CAB10) {
	__imp__sub_823CAB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CACE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CAD18;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cad8c
	if (ctx.cr6.eq) goto loc_823CAD8C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// bl 0x823b1ca8
	ctx.lr = 0x823CAD50;
	sub_823B1CA8(ctx, base);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwimi r9,r31,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 | ctx.r31.u64;
	// bl 0x823a64e8
	ctx.lr = 0x823CAD68;
	sub_823A64E8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,14152(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 10268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// bl 0x823ca500
	ctx.lr = 0x823CAD88;
	sub_823CA500(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823CAD8C;
	sub_823B1C28(ctx, base);
loc_823CAD8C:
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

PPC_WEAK_FUNC(sub_823CACE8) {
	__imp__sub_823CACE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CADA4) {
	__imp__sub_823CADA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CADA8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cae40
	if (ctx.cr6.eq) goto loc_823CAE40;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823cae40
	if (!ctx.cr6.gt) goto loc_823CAE40;
	// lfs f0,368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823cadf8
	if (ctx.cr6.lt) goto loc_823CADF8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823cae08
	goto loc_823CAE08;
loc_823CADF8:
	// lfs f12,360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fdivs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
loc_823CAE08:
	// lfs f13,372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,380(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lfs f12,364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lfs f11,356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f5,f12,f0,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ca2d8
	ctx.lr = 0x823CAE30;
	sub_823CA2D8(ctx, base);
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// bl 0x823cace8
	ctx.lr = 0x823CAE40;
	sub_823CACE8(ctx, base);
loc_823CAE40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CADA8) {
	__imp__sub_823CADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CAE50) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r6,r10,-29904
	ctx.r6.s64 = ctx.r10.s64 + -29904;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,5652(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5652);
	// lfs f5,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// bgt cr6,0x823caecc
	if (ctx.cr6.gt) goto loc_823CAECC;
	// stfs f5,0(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x823caf30
	goto loc_823CAF30;
loc_823CAECC:
	// lfs f0,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x823caee0
	if (ctx.cr6.gt) goto loc_823CAEE0;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x823caf04
	goto loc_823CAF04;
loc_823CAEE0:
	// lfs f0,388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// blt cr6,0x823caef4
	if (ctx.cr6.lt) goto loc_823CAEF4;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// b 0x823caf04
	goto loc_823CAF04;
loc_823CAEF4:
	// lfs f13,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_823CAF04:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,400(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,396(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823ca2d8
	ctx.lr = 0x823CAF1C;
	sub_823CA2D8(ctx, base);
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lfs f12,392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_823CAF30:
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lfs f0,412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bgt cr6,0x823caf58
	if (ctx.cr6.gt) goto loc_823CAF58;
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
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
loc_823CAF58:
	// lfs f0,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x823caf6c
	if (ctx.cr6.gt) goto loc_823CAF6C;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x823caf90
	goto loc_823CAF90;
loc_823CAF6C:
	// lfs f0,408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// blt cr6,0x823caf80
	if (ctx.cr6.lt) goto loc_823CAF80;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// b 0x823caf90
	goto loc_823CAF90;
loc_823CAF80:
	// lfs f13,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_823CAF90:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,420(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823ca2d8
	ctx.lr = 0x823CAFA8;
	sub_823CA2D8(ctx, base);
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lfs f12,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_823CAE50) {
	__imp__sub_823CAE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CAFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,-29904
	ctx.r8.s64 = ctx.r10.s64 + -29904;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,8456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,5652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5652);
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x823cab10
	sub_823CAB10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CAFD0) {
	__imp__sub_823CAFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CB024) {
	__imp__sub_823CB024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823cae50
	ctx.lr = 0x823CB040;
	sub_823CAE50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823cb0a0
	if (!ctx.cr6.gt) goto loc_823CB0A0;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x823CB074;
	sub_8238FEA8(ctx, base);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r9,4608
	ctx.r7.s64 = ctx.r9.s64 + 4608;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r3,8400(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8400);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x823a6e18
	ctx.lr = 0x823CB0A0;
	sub_823A6E18(ctx, base);
loc_823CB0A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CB028) {
	__imp__sub_823CB028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB0B0) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// lbz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb16c
	if (ctx.cr6.eq) goto loc_823CB16C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-26240
	ctx.r11.s64 = ctx.r10.s64 + -26240;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823a64e8
	ctx.lr = 0x823CB0F8;
	sub_823A64E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ca978
	ctx.lr = 0x823CB100;
	sub_823CA978(ctx, base);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lwz r10,8456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,-29904
	ctx.r6.s64 = ctx.r8.s64 + -29904;
	// lfs f12,424(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,5652(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5652);
	// lfs f10,428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x823cb14c
	if (!ctx.cr6.gt) goto loc_823CB14C;
	// bl 0x823cab10
	ctx.lr = 0x823CB14C;
	sub_823CAB10(ctx, base);
loc_823CB14C:
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
	// beq cr6,0x823cb16c
	if (ctx.cr6.eq) goto loc_823CB16C;
	// bl 0x823b1c28
	ctx.lr = 0x823CB16C;
	sub_823B1C28(ctx, base);
loc_823CB16C:
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

PPC_WEAK_FUNC(sub_823CB0B0) {
	__imp__sub_823CB0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CB184) {
	__imp__sub_823CB184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB188) {
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
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-26240
	ctx.r11.s64 = ctx.r9.s64 + -26240;
	// addi r7,r8,-29904
	ctx.r7.s64 = ctx.r8.s64 + -29904;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,5700(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5700);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cb1d8
	if (ctx.cr6.eq) goto loc_823CB1D8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ble cr6,0x823cb1dc
	if (!ctx.cr6.gt) goto loc_823CB1DC;
loc_823CB1D8:
	// li r30,10
	ctx.r30.s64 = 10;
loc_823CB1DC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lbz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 340);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cb210
	if (ctx.cr6.eq) goto loc_823CB210;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cada8
	ctx.lr = 0x823CB204;
	sub_823CADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cb028
	ctx.lr = 0x823CB210;
	sub_823CB028(ctx, base);
loc_823CB210:
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

PPC_WEAK_FUNC(sub_823CB188) {
	__imp__sub_823CB188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823CB230;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r22,r11,13312
	ctx.r22.s64 = ctx.r11.s64 + 13312;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cb2e8
	if (ctx.cr6.eq) goto loc_823CB2E8;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// addi r11,r11,-26240
	ctx.r11.s64 = ctx.r11.s64 + -26240;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r28,r11,25
	ctx.r28.s64 = ctx.r11.s64 + 25;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// ori r27,r9,14
	ctx.r27.u64 = ctx.r9.u64 | 14;
	// addi r24,r10,-32644
	ctx.r24.s64 = ctx.r10.s64 + -32644;
	// addi r25,r11,3224
	ctx.r25.s64 = ctx.r11.s64 + 3224;
loc_823CB274:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_823CB27C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x820bb418
	ctx.lr = 0x823CB28C;
	sub_820BB418(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r9,r27
	ctx.r31.u64 = ctx.r9.u64 & ctx.r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x823cb2c0
	if (!ctx.cr6.lt) goto loc_823CB2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238dbc8
	ctx.lr = 0x823CB2A8;
	sub_8238DBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x823CB2BC;
	sub_82280900(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823CB2C0:
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// stbx r26,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r26.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x823cb27c
	if (ctx.cr6.lt) goto loc_823CB27C;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cb274
	if (ctx.cr6.lt) goto loc_823CB274;
loc_823CB2E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CB228) {
	__imp__sub_823CB228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823CB2F8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r11,-26072
	ctx.r27.s64 = ctx.r11.s64 + -26072;
	// lfs f31,-10908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10908);
	ctx.f31.f64 = double(temp.f32);
loc_823CB324:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// li r28,0
	ctx.r28.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_823CB344:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_823CB374:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x823cb3a4
	if (!ctx.cr6.gt) goto loc_823CB3A4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bge cr6,0x823cb3a4
	if (!ctx.cr6.lt) goto loc_823CB3A4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x823cb3a4
	if (!ctx.cr6.gt) goto loc_823CB3A4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bge cr6,0x823cb3a4
	if (!ctx.cr6.lt) goto loc_823CB3A4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x823cb3a4
	if (!ctx.cr6.gt) goto loc_823CB3A4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// blt cr6,0x823cb3d4
	if (ctx.cr6.lt) goto loc_823CB3D4;
loc_823CB3A4:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x823CB3CC;
	sub_822D4B08(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
loc_823CB3D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x823cb374
	if (ctx.cr6.lt) goto loc_823CB374;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x823cb344
	if (ctx.cr6.lt) goto loc_823CB344;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x823cb324
	if (ctx.cr6.lt) goto loc_823CB324;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CB2F0) {
	__imp__sub_823CB2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB408) {
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
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x823cb438
	if (ctx.cr6.gt) goto loc_823CB438;
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
loc_823CB438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x823cb45c
	if (ctx.cr6.lt) goto loc_823CB45C;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823CB45C:
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
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CB474;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CB408) {
	__imp__sub_823CB408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CB4A0;
	__savegprlr_28(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r10,-26072
	ctx.r10.s64 = ctx.r10.s64 + -26072;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// subf r30,r5,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// subf r10,r5,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 + 20;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r31,r5,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lfs f13,5484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// subf r5,r5,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r5.s64;
loc_823CB4F4:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823cb550
	if (!ctx.cr6.gt) goto loc_823CB550;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,-20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,-16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
loc_823CB550:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823cb5ac
	if (!ctx.cr6.gt) goto loc_823CB5AC;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823CB5AC:
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfsx f10,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823cb608
	if (!ctx.cr6.gt) goto loc_823CB608;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_823CB608:
	// lfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfsx f10,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823cb664
	if (!ctx.cr6.gt) goto loc_823CB664;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_823CB664:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x823cb4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CB4F4;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CB498) {
	__imp__sub_823CB498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CB674) {
	__imp__sub_823CB674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CB680;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x823CB688;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,56
	ctx.r10.s64 = 56;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_823CB6A0:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823cb6b4
	if (ctx.cr6.gt) goto loc_823CB6B4;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x823cb6b8
	goto loc_823CB6B8;
loc_823CB6B4:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_823CB6B8:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823cb6d0
	if (ctx.cr6.gt) goto loc_823CB6D0;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x823cb6d4
	goto loc_823CB6D4;
loc_823CB6D0:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_823CB6D4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823cb6ec
	if (ctx.cr6.gt) goto loc_823CB6EC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x823cb6f0
	goto loc_823CB6F0;
loc_823CB6EC:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_823CB6F0:
	// stfsu f0,12(r11)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cb6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CB6A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f28,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f28.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f27,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// li r27,56
	ctx.r27.s64 = 56;
	// lfs f31,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,6232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6232);
	ctx.f29.f64 = double(temp.f32);
loc_823CB724:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823CB728:
	// lbzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// add r29,r28,r31
	ctx.r29.u64 = ctx.r28.u64 + ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f10,f29,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823cb75c
	if (ctx.cr6.gt) goto loc_823CB75C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823cb788
	goto loc_823CB788;
loc_823CB75C:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x823cb76c
	if (ctx.cr6.lt) goto loc_823CB76C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823cb788
	goto loc_823CB788;
loc_823CB76C:
	// fmadds f1,f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CB774;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_823CB788:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x823cb728
	if (ctx.cr6.lt) goto loc_823CB728;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// bne 0x823cb724
	if (!ctx.cr0.eq) goto loc_823CB724;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x823CB7B4;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CB678) {
	__imp__sub_823CB678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
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
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f11,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f0,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// ble cr6,0x823cb804
	if (!ctx.cr6.gt) goto loc_823CB804;
loc_823CB7FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CB804:
	// fsqrts f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x823cb820
	if (!ctx.cr6.lt) goto loc_823CB820;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823CB820:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x823cb8fc
	if (!ctx.cr6.eq) goto loc_823CB8FC;
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f12,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f0,f5,f11,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// ble cr6,0x823cb7fc
	if (!ctx.cr6.gt) goto loc_823CB7FC;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823cb8fc
	if (!ctx.cr6.lt) goto loc_823CB8FC;
	// fsubs f8,f0,f4
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fsubs f7,f12,f4
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823cb8fc
	if (!ctx.cr6.lt) goto loc_823CB8FC;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x823cb8e4
	if (ctx.cr6.lt) goto loc_823CB8E4;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CB8C0:
	// fmuls f12,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bdnz 0x823cb8c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CB8C0;
loc_823CB8E4:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823cb8fc
	if (!ctx.cr6.lt) goto loc_823CB8FC;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CB8F4:
	// fmuls f10,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bdnz 0x823cb8f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CB8F4;
loc_823CB8FC:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f13,f12
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f6,f8,f0,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f3,0(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f1,4(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CB7B8) {
	__imp__sub_823CB7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CB950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CB958;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,12932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cb9fc
	if (ctx.cr6.eq) goto loc_823CB9FC;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cb9fc
	if (!ctx.cr6.gt) goto loc_823CB9FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823CB998:
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823cb7b8
	ctx.lr = 0x823CB9B0;
	sub_823CB7B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823cb9e4
	if (!ctx.cr6.eq) goto loc_823CB9E4;
	// li r5,672
	ctx.r5.s64 = 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823de090
	ctx.lr = 0x823CB9C8;
	sub_823DE090(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cb498
	ctx.lr = 0x823CB9D8;
	sub_823CB498(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823cb678
	ctx.lr = 0x823CB9E4;
	sub_823CB678(ctx, base);
loc_823CB9E4:
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823cb998
	if (ctx.cr6.lt) goto loc_823CB998;
loc_823CB9FC:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CB950) {
	__imp__sub_823CB950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CBA04) {
	__imp__sub_823CBA04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBA08) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823902a0
	ctx.lr = 0x823CBA24;
	sub_823902A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,191
	ctx.r4.s64 = 191;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c91d0
	ctx.lr = 0x823CBA44;
	sub_823C91D0(ctx, base);
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

PPC_WEAK_FUNC(sub_823CBA08) {
	__imp__sub_823CBA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CBA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r4,7120
	ctx.r4.s64 = ctx.r4.s64 + 7120;
	// bl 0x823d3b90
	ctx.lr = 0x823CBA7C;
	sub_823D3B90(ctx, base);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CBA88;
	sub_823D3C78(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// addi r29,r11,-29904
	ctx.r29.s64 = ctx.r11.s64 + -29904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823CBA9C;
	sub_823C90B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823d4328
	ctx.lr = 0x823CBAAC;
	sub_823D4328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// bl 0x823c8d28
	ctx.lr = 0x823CBAB8;
	sub_823C8D28(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CBAC8;
	sub_823C9CA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d41b0
	ctx.lr = 0x823CBAD0;
	sub_823D41B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CBAD8;
	sub_823C9618(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBA58) {
	__imp__sub_823CBA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// lwz r11,4520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4520);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// divwu r6,r9,r7
	ctx.r6.u32 = ctx.r9.u32 / ctx.r7.u32;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r8,340(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// divwu r6,r8,r5
	ctx.r6.u32 = ctx.r8.u32 / ctx.r5.u32;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// divwu r11,r6,r7
	ctx.r11.u32 = ctx.r6.u32 / ctx.r7.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// divwu r11,r7,r5
	ctx.r11.u32 = ctx.r7.u32 / ctx.r5.u32;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// subf r3,r8,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CBAE0) {
	__imp__sub_823CBAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823CBB78;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,7120
	ctx.r4.s64 = ctx.r4.s64 + 7120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823CBB9C;
	sub_823D3B90(ctx, base);
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CBBA8;
	sub_823D3C78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4328
	ctx.lr = 0x823CBBB8;
	sub_823D4328(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// lwz r7,344(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r9,r10,4520
	ctx.r9.s64 = ctx.r10.s64 + 4520;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4520);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r27,r9,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r11,r5
	ctx.r9.u32 = ctx.r11.u32 / ctx.r5.u32;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// divwu r25,r10,r27
	ctx.r25.u32 = ctx.r10.u32 / ctx.r27.u32;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r24,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// divwu r10,r11,r5
	ctx.r10.u32 = ctx.r11.u32 / ctx.r5.u32;
	// divwu r11,r23,r27
	ctx.r11.u32 = ctx.r23.u32 / ctx.r27.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mullw r6,r10,r5
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r25,r27
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r27.s32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mullw r5,r7,r27
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x823c90b8
	ctx.lr = 0x823CBC5C;
	sub_823C90B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823CBC68;
	sub_823C8D28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CBC74;
	sub_823C9CA0(ctx, base);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r9,-26624
	ctx.r8.s64 = ctx.r9.s64 + -26624;
	// lwz r4,100(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// bl 0x823a7d90
	ctx.lr = 0x823CBC88;
	sub_823A7D90(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823CBC94;
	sub_823C8D28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CBC9C;
	sub_823C9618(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBB70) {
	__imp__sub_823CBB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CBCA4) {
	__imp__sub_823CBCA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CBCB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r11,3224
	ctx.r9.s64 = ctx.r11.s64 + 3224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,-19968(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19968);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r31,5488
	ctx.r11.s64 = ctx.r31.s64 + 5488;
	// bl 0x820bad78
	ctx.lr = 0x823CBCD8;
	sub_820BAD78(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// stw r3,5488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5488, ctx.r3.u32);
	// lwz r11,13120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13120);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823cbcfc
	if (ctx.cr6.eq) goto loc_823CBCFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cba58
	ctx.lr = 0x823CBCFC;
	sub_823CBA58(ctx, base);
loc_823CBCFC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cbb70
	ctx.lr = 0x823CBD08;
	sub_823CBB70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBCA8) {
	__imp__sub_823CBCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823CBD18;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1398
	ctx.r11.s64 = ctx.r4.s64 + 1398;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cbe9c
	if (ctx.cr6.eq) goto loc_823CBE9C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r10,3224
	ctx.r30.s64 = ctx.r10.s64 + 3224;
	// lwz r11,5672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbe0c
	if (ctx.cr6.eq) goto loc_823CBE0C;
	// addi r9,r29,5676
	ctx.r9.s64 = ctx.r29.s64 + 5676;
loc_823CBD68:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x823cbd8c
	if (!ctx.cr6.eq) goto loc_823CBD8C;
	// stwcx. r25,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823cbd68
	if (!ctx.cr0.eq) goto loc_823CBD68;
	// b 0x823cbd94
	goto loc_823CBD94;
loc_823CBD8C:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823CBD94:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cbe0c
	if (!ctx.cr6.eq) goto loc_823CBE0C;
	// stw r27,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5c0
	ctx.lr = 0x823CBDAC;
	sub_823EF5C0(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divwu r24,r9,r11
	ctx.r24.u32 = ctx.r9.u32 / ctx.r11.u32;
	// bl 0x823ef5a0
	ctx.lr = 0x823CBDC0;
	sub_823EF5A0(ctx, base);
	// lwz r8,5672(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5672);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823cbe04
	if (ctx.cr6.eq) goto loc_823CBE04;
loc_823CBDCC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ef5a0
	ctx.lr = 0x823CBDD4;
	sub_823EF5A0(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823cbdf8
	if (!ctx.cr6.lt) goto loc_823CBDF8;
	// lwz r11,5672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cbdcc
	if (!ctx.cr6.eq) goto loc_823CBDCC;
	// b 0x823cbe04
	goto loc_823CBE04;
loc_823CBDF8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7fd0
	ctx.lr = 0x823CBE04;
	sub_823B7FD0(ctx, base);
loc_823CBE04:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r25.u32);
loc_823CBE0C:
	// lwsync 
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbe9c
	if (ctx.cr6.eq) goto loc_823CBE9C;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,5668(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5668);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x820c6130
	ctx.lr = 0x823CBE34;
	sub_820C6130(ctx, base);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r5,r10,-5916
	ctx.r5.s64 = ctx.r10.s64 + -5916;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c91d0
	ctx.lr = 0x823CBE70;
	sub_823C91D0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// addi r4,r11,74
	ctx.r4.s64 = ctx.r11.s64 + 74;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x820bad78
	ctx.lr = 0x823CBE88;
	sub_820BAD78(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwsync 
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_823CBE9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBD10) {
	__imp__sub_823CBD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CBEA4) {
	__imp__sub_823CBEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CBEB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1398
	ctx.r11.s64 = ctx.r4.s64 + 1398;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cbf84
	if (ctx.cr6.eq) goto loc_823CBF84;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,5672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5672);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cbf44
	if (ctx.cr6.eq) goto loc_823CBF44;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,5676
	ctx.r7.s64 = ctx.r11.s64 + 5676;
loc_823CBEF0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823cbf14
	if (!ctx.cr6.eq) goto loc_823CBF14;
	// stwcx. r29,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823cbef0
	if (!ctx.cr0.eq) goto loc_823CBEF0;
	// b 0x823cbf1c
	goto loc_823CBF1C;
loc_823CBF14:
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823CBF1C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cbf44
	if (!ctx.cr6.eq) goto loc_823CBF44;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// stw r30,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r30.u32);
	// bl 0x823b7fd0
	ctx.lr = 0x823CBF3C;
	sub_823B7FD0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r29.u32);
loc_823CBF44:
	// lwsync 
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbf84
	if (ctx.cr6.eq) goto loc_823CBF84;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r10,5488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5488);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// addi r7,r11,74
	ctx.r7.s64 = ctx.r11.s64 + 74;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwsync 
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r5.u32);
loc_823CBF84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBEA8) {
	__imp__sub_823CBEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CBF8C) {
	__imp__sub_823CBF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CBF98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,5672
	ctx.r29.s64 = ctx.r3.s64 + 5672;
	// addi r30,r3,5592
	ctx.r30.s64 = ctx.r3.s64 + 5592;
loc_823CBFAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbfd0
	if (ctx.cr6.eq) goto loc_823CBFD0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cbfd0
	if (ctx.cr6.eq) goto loc_823CBFD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b7fd0
	ctx.lr = 0x823CBFD0;
	sub_823B7FD0(ctx, base);
loc_823CBFD0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// blt cr6,0x823cbfac
	if (ctx.cr6.lt) goto loc_823CBFAC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CBF90) {
	__imp__sub_823CBF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CBFEC) {
	__imp__sub_823CBFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CBFF0) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19960
	ctx.r11.s64 = ctx.r11.s64 + -19960;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823cc08c
	if (!ctx.cr6.eq) goto loc_823CC08C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r9,-24112
	ctx.r30.s64 = ctx.r9.s64 + -24112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CC038;
	sub_823D3C78(ctx, base);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,-29904
	ctx.r3.s64 = ctx.r8.s64 + -29904;
	// bl 0x823c90b8
	ctx.lr = 0x823CC048;
	sub_823C90B8(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r3,-16268(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC058;
	sub_823C9CA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,144(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x823902a0
	ctx.lr = 0x823CC064;
	sub_823902A0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,191
	ctx.r4.s64 = 191;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c91d0
	ctx.lr = 0x823CC084;
	sub_823C91D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CC08C;
	sub_823C9618(ctx, base);
loc_823CC08C:
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

PPC_WEAK_FUNC(sub_823CBFF0) {
	__imp__sub_823CBFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC0A4) {
	__imp__sub_823CC0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC0D0;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC0E4;
	sub_823C94D0(ctx, base);
	// addi r5,r30,3208
	ctx.r5.s64 = ctx.r30.s64 + 3208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC0F4;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC100;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC0A8) {
	__imp__sub_823CC0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC130;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC144;
	sub_823C94D0(ctx, base);
	// addi r5,r30,1256
	ctx.r5.s64 = ctx.r30.s64 + 1256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC154;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC160;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC108) {
	__imp__sub_823CC108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC190;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC1A4;
	sub_823C94D0(ctx, base);
	// addi r5,r30,1744
	ctx.r5.s64 = ctx.r30.s64 + 1744;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC1B4;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC1C0;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC168) {
	__imp__sub_823CC168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC1F0;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC204;
	sub_823C94D0(ctx, base);
	// addi r5,r30,2232
	ctx.r5.s64 = ctx.r30.s64 + 2232;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC214;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC220;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC1C8) {
	__imp__sub_823CC1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC250;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC264;
	sub_823C94D0(ctx, base);
	// addi r5,r30,768
	ctx.r5.s64 = ctx.r30.s64 + 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC274;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC280;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC228) {
	__imp__sub_823CC228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC2B0;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC2C4;
	sub_823C94D0(ctx, base);
	// addi r5,r30,2720
	ctx.r5.s64 = ctx.r30.s64 + 2720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC2D4;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC2E0;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC288) {
	__imp__sub_823CC288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC2F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC310;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC324;
	sub_823C94D0(ctx, base);
	// addi r5,r30,4672
	ctx.r5.s64 = ctx.r30.s64 + 4672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC334;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC340;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC2E8) {
	__imp__sub_823CC2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC350;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r4,7120
	ctx.r4.s64 = ctx.r4.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823CC374;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823CC380;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823CC38C;
	sub_823C8D28(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9d38
	ctx.lr = 0x823CC3A8;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC348) {
	__imp__sub_823CC348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC3B0) {
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
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// bl 0x823cc348
	ctx.lr = 0x823CC3E0;
	sub_823CC348(ctx, base);
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-16120
	ctx.r3.s64 = ctx.r10.s64 + -16120;
	// bl 0x823cc348
	ctx.lr = 0x823CC3F4;
	sub_823CC348(ctx, base);
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,-16024
	ctx.r3.s64 = ctx.r9.s64 + -16024;
	// bl 0x823cc348
	ctx.lr = 0x823CC408;
	sub_823CC348(ctx, base);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,-15928
	ctx.r3.s64 = ctx.r8.s64 + -15928;
	// bl 0x823cc348
	ctx.lr = 0x823CC41C;
	sub_823CC348(ctx, base);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r7,-15832
	ctx.r3.s64 = ctx.r7.s64 + -15832;
	// bl 0x823cc348
	ctx.lr = 0x823CC430;
	sub_823CC348(ctx, base);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r6,-15736
	ctx.r3.s64 = ctx.r6.s64 + -15736;
	// bl 0x823cc348
	ctx.lr = 0x823CC444;
	sub_823CC348(ctx, base);
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-15640
	ctx.r3.s64 = ctx.r3.s64 + -15640;
	// bl 0x823cc348
	ctx.lr = 0x823CC458;
	sub_823CC348(ctx, base);
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

PPC_WEAK_FUNC(sub_823CC3B0) {
	__imp__sub_823CC3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc50c
	if (ctx.cr6.eq) goto loc_823CC50C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// addi r4,r10,-21248
	ctx.r4.s64 = ctx.r10.s64 + -21248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823d3b90
	ctx.lr = 0x823CC4A8;
	sub_823D3B90(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// addi r29,r8,-24112
	ctx.r29.s64 = ctx.r8.s64 + -24112;
	// lwz r11,-19968(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4924, ctx.r11.u32);
	// bl 0x823d3c78
	ctx.lr = 0x823CC4C4;
	sub_823D3C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823CC4D0;
	sub_823C90B8(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC4E0;
	sub_823C9CA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823d4328
	ctx.lr = 0x823CC4F0;
	sub_823D4328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// bl 0x823c8d28
	ctx.lr = 0x823CC4FC;
	sub_823C8D28(ctx, base);
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x823ad5d0
	ctx.lr = 0x823CC504;
	sub_823AD5D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CC50C;
	sub_823C9618(ctx, base);
loc_823CC50C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC470) {
	__imp__sub_823CC470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC514) {
	__imp__sub_823CC514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CC520;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,-19968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19968);
	// lwz r10,5564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cc570
	if (!ctx.cr6.gt) goto loc_823CC570;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823CC540:
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r30.u32);
	// bl 0x823bf578
	ctx.lr = 0x823CC554;
	sub_823BF578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc470
	ctx.lr = 0x823CC55C;
	sub_823CC470(ctx, base);
	// lwz r11,5564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8496
	ctx.r29.s64 = ctx.r29.s64 + 8496;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cc540
	if (ctx.cr6.lt) goto loc_823CC540;
loc_823CC570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC518) {
	__imp__sub_823CC518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC5A0;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC5B4;
	sub_823C94D0(ctx, base);
	// addi r5,r30,768
	ctx.r5.s64 = ctx.r30.s64 + 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC5C4;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC5D0;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC578) {
	__imp__sub_823CC578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC5D8) {
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
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC600;
	sub_823C9CA0(ctx, base);
	// addi r5,r31,2720
	ctx.r5.s64 = ctx.r31.s64 + 2720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC610;
	sub_823A9398(ctx, base);
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

PPC_WEAK_FUNC(sub_823CC5D8) {
	__imp__sub_823CC5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CC630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC650;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823CC664;
	sub_823C94D0(ctx, base);
	// addi r5,r30,4672
	ctx.r5.s64 = ctx.r30.s64 + 4672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823CC674;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823CC680;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC628) {
	__imp__sub_823CC628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC688) {
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
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// bl 0x823cc348
	ctx.lr = 0x823CC6B8;
	sub_823CC348(ctx, base);
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-14888
	ctx.r3.s64 = ctx.r10.s64 + -14888;
	// bl 0x823cc348
	ctx.lr = 0x823CC6CC;
	sub_823CC348(ctx, base);
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,-14808
	ctx.r3.s64 = ctx.r9.s64 + -14808;
	// bl 0x823cc348
	ctx.lr = 0x823CC6E0;
	sub_823CC348(ctx, base);
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

PPC_WEAK_FUNC(sub_823CC688) {
	__imp__sub_823CC688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CC700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,-19968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19968);
	// lwz r10,5564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cc750
	if (!ctx.cr6.gt) goto loc_823CC750;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823CC720:
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r30.u32);
	// bl 0x823bf578
	ctx.lr = 0x823CC734;
	sub_823BF578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc470
	ctx.lr = 0x823CC73C;
	sub_823CC470(ctx, base);
	// lwz r11,5564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8496
	ctx.r29.s64 = ctx.r29.s64 + 8496;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cc720
	if (ctx.cr6.lt) goto loc_823CC720;
loc_823CC750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC6F8) {
	__imp__sub_823CC6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC758) {
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
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823CC788;
	sub_823D3B90(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r3,r10,-24112
	ctx.r3.s64 = ctx.r10.s64 + -24112;
	// bl 0x823d3c78
	ctx.lr = 0x823CC794;
	sub_823D3C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823CC7A0;
	sub_823C90B8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CC7B0;
	sub_823C9CA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823d4328
	ctx.lr = 0x823CC7C0;
	sub_823D4328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// bl 0x823c8d28
	ctx.lr = 0x823CC7CC;
	sub_823C8D28(ctx, base);
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

PPC_WEAK_FUNC(sub_823CC758) {
	__imp__sub_823CC758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC7E4) {
	__imp__sub_823CC7E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// b 0x823c9618
	sub_823C9618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC7E8) {
	__imp__sub_823CC7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC7F4) {
	__imp__sub_823CC7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC7F8) {
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
	// bl 0x823cc758
	ctx.lr = 0x823CC808;
	sub_823CC758(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,-19968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19968);
	// lwz r3,5560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// bl 0x823cb0b0
	ctx.lr = 0x823CC818;
	sub_823CB0B0(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r3,r10,-24112
	ctx.r3.s64 = ctx.r10.s64 + -24112;
	// bl 0x823c9618
	ctx.lr = 0x823CC824;
	sub_823C9618(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CC7F8) {
	__imp__sub_823CC7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC834) {
	__imp__sub_823CC834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC838) {
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
	// bl 0x823cc758
	ctx.lr = 0x823CC848;
	sub_823CC758(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,-19968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19968);
	// lwz r3,5560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// bl 0x823cb188
	ctx.lr = 0x823CC858;
	sub_823CB188(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r3,r10,-24112
	ctx.r3.s64 = ctx.r10.s64 + -24112;
	// bl 0x823c9618
	ctx.lr = 0x823CC864;
	sub_823C9618(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CC838) {
	__imp__sub_823CC838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC874) {
	__imp__sub_823CC874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CC878) {
	__imp__sub_823CC878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC87C) {
	__imp__sub_823CC87C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC880) {
	PPC_FUNC_PROLOGUE();
	// b 0x823da280
	sub_823DA280(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC880) {
	__imp__sub_823CC880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CC884) {
	__imp__sub_823CC884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CC888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823CC890;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31777
	ctx.r25.s64 = -2082537472;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r31,-19968(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19968);
	// bne cr6,0x823cc8e8
	if (!ctx.cr6.eq) goto loc_823CC8E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393f70
	ctx.lr = 0x823CC8B4;
	sub_82393F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc8cc
	if (ctx.cr6.eq) goto loc_823CC8CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823daf58
	ctx.lr = 0x823CC8CC;
	sub_823DAF58(ctx, base);
loc_823CC8CC:
	// lwz r11,-19968(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19968);
	// lwz r11,8736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc8e8
	if (ctx.cr6.eq) goto loc_823CC8E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823daf00
	ctx.lr = 0x823CC8E8;
	sub_823DAF00(ctx, base);
loc_823CC8E8:
	// lwz r3,8464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823cbff0
	ctx.lr = 0x823CC8F0;
	sub_823CBFF0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r30,336
	ctx.r29.s64 = ctx.r30.s64 + 336;
	// addi r7,r11,29512
	ctx.r7.s64 = ctx.r11.s64 + 29512;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r30,3328
	ctx.r5.s64 = ctx.r30.s64 + 3328;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CC910;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CC91C;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d8ef0
	ctx.lr = 0x823CC928;
	sub_823D8EF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r10,-10588
	ctx.r7.s64 = ctx.r10.s64 + -10588;
	// addi r5,r31,10616
	ctx.r5.s64 = ctx.r31.s64 + 10616;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CC944;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CC950;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da8d0
	ctx.lr = 0x823CC95C;
	sub_823DA8D0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r9,-10616
	ctx.r7.s64 = ctx.r9.s64 + -10616;
	// addi r5,r31,10992
	ctx.r5.s64 = ctx.r31.s64 + 10992;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CC978;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CC984;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da9d8
	ctx.lr = 0x823CC990;
	sub_823DA9D8(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r8,-10644
	ctx.r7.s64 = ctx.r8.s64 + -10644;
	// addi r5,r31,11368
	ctx.r5.s64 = ctx.r31.s64 + 11368;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CC9AC;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CC9B8;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823daae0
	ctx.lr = 0x823CC9C4;
	sub_823DAAE0(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r7,-10672
	ctx.r7.s64 = ctx.r7.s64 + -10672;
	// addi r5,r31,11744
	ctx.r5.s64 = ctx.r31.s64 + 11744;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CC9E0;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CC9EC;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dabe8
	ctx.lr = 0x823CC9F8;
	sub_823DABE8(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r5,-10688
	ctx.r7.s64 = ctx.r5.s64 + -10688;
	// addi r5,r31,12120
	ctx.r5.s64 = ctx.r31.s64 + 12120;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCA14;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCA20;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dacf0
	ctx.lr = 0x823CCA2C;
	sub_823DACF0(ctx, base);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r4,-10696
	ctx.r7.s64 = ctx.r4.s64 + -10696;
	// addi r5,r30,888
	ctx.r5.s64 = ctx.r30.s64 + 888;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCA48;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCA54;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d8fe8
	ctx.lr = 0x823CCA60;
	sub_823D8FE8(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r3,-10708
	ctx.r7.s64 = ctx.r3.s64 + -10708;
	// addi r5,r30,1376
	ctx.r5.s64 = ctx.r30.s64 + 1376;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCA7C;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCA88;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d8c10
	ctx.lr = 0x823CCA94;
	sub_823D8C10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r11,-10720
	ctx.r7.s64 = ctx.r11.s64 + -10720;
	// addi r5,r30,1864
	ctx.r5.s64 = ctx.r30.s64 + 1864;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCAB0;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCABC;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d8d08
	ctx.lr = 0x823CCAC8;
	sub_823D8D08(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r10,-10732
	ctx.r7.s64 = ctx.r10.s64 + -10732;
	// addi r5,r30,2352
	ctx.r5.s64 = ctx.r30.s64 + 2352;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCAE4;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCAF0;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d8e00
	ctx.lr = 0x823CCAFC;
	sub_823D8E00(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r9,-10740
	ctx.r7.s64 = ctx.r9.s64 + -10740;
	// addi r5,r31,12500
	ctx.r5.s64 = ctx.r31.s64 + 12500;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCB18;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCB24;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d90d0
	ctx.lr = 0x823CCB30;
	sub_823D90D0(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r11,-29904
	ctx.r26.s64 = ctx.r11.s64 + -29904;
	// addi r4,r30,7120
	ctx.r4.s64 = ctx.r30.s64 + 7120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823CCB48;
	sub_823D3B90(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r28,r11,-24112
	ctx.r28.s64 = ctx.r11.s64 + -24112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CCB58;
	sub_823D3C78(ctx, base);
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// ld r3,-16268(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// bl 0x823a7df0
	ctx.lr = 0x823CCB68;
	sub_823A7DF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CCB70;
	sub_823C9618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cc758
	ctx.lr = 0x823CCB78;
	sub_823CC758(ctx, base);
	// lwz r11,-19968(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19968);
	// lwz r3,5560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// bl 0x823cb0b0
	ctx.lr = 0x823CCB84;
	sub_823CB0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CCB8C;
	sub_823C9618(ctx, base);
	// lbz r8,428(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 428);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ccbd0
	if (ctx.cr6.eq) goto loc_823CCBD0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823CCBA4;
	sub_823C90B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823CCBB0;
	sub_823C8D28(ctx, base);
	// ld r3,-16268(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CCBBC;
	sub_823C9CA0(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// ld r3,-16268(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// addi r10,r11,-26624
	ctx.r10.s64 = ctx.r11.s64 + -26624;
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// bl 0x823a7d90
	ctx.lr = 0x823CCBD0;
	sub_823A7D90(ctx, base);
loc_823CCBD0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r11,29476
	ctx.r7.s64 = ctx.r11.s64 + 29476;
	// addi r5,r30,4792
	ctx.r5.s64 = ctx.r30.s64 + 4792;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823CCBEC;
	sub_823CBD10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCBF8;
	sub_823DA280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da838
	ctx.lr = 0x823CCC04;
	sub_823DA838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da658
	ctx.lr = 0x823CCC0C;
	sub_823DA658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cc758
	ctx.lr = 0x823CCC14;
	sub_823CC758(ctx, base);
	// lwz r11,-19968(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19968);
	// lwz r3,5560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// bl 0x823cb188
	ctx.lr = 0x823CCC20;
	sub_823CB188(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CCC28;
	sub_823C9618(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,3224
	ctx.r9.s64 = ctx.r10.s64 + 3224;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r29,-19968(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19968);
	// ld r28,-16268(r27)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// addi r11,r29,5488
	ctx.r11.s64 = ctx.r29.s64 + 5488;
	// bl 0x820bad78
	ctx.lr = 0x823CCC44;
	sub_820BAD78(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// stw r3,5488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5488, ctx.r3.u32);
	// lwz r11,13120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13120);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823ccc68
	if (ctx.cr6.eq) goto loc_823CCC68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823cba58
	ctx.lr = 0x823CCC68;
	sub_823CBA58(ctx, base);
loc_823CCC68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823cbb70
	ctx.lr = 0x823CCC74;
	sub_823CBB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbf90
	ctx.lr = 0x823CCC7C;
	sub_823CBF90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CC888) {
	__imp__sub_823CC888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CCC84) {
	__imp__sub_823CCC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CCC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// lwz r30,-19968(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19968);
	// lwz r11,5564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccd64
	if (ctx.cr6.eq) goto loc_823CCD64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823CCCB0:
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// stw r30,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823cccd8
	if (!ctx.cr6.eq) goto loc_823CCCD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bfbf0
	ctx.lr = 0x823CCCD0;
	sub_823BFBF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc470
	ctx.lr = 0x823CCCD8;
	sub_823CC470(ctx, base);
loc_823CCCD8:
	// lwz r11,5564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8496
	ctx.r29.s64 = ctx.r29.s64 + 8496;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cccb0
	if (ctx.cr6.lt) goto loc_823CCCB0;
	// lwz r30,-19968(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19968);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,5568(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// addi r4,r31,7120
	ctx.r4.s64 = ctx.r31.s64 + 7120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823CCD0C;
	sub_823D3B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823CCD18;
	sub_823C90B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CCD28;
	sub_823C9CA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823d4328
	ctx.lr = 0x823CCD38;
	sub_823D4328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// bl 0x823c8d28
	ctx.lr = 0x823CCD44;
	sub_823C8D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4060
	ctx.lr = 0x823CCD4C;
	sub_823D4060(ctx, base);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// addi r31,r9,-24112
	ctx.r31.s64 = ctx.r9.s64 + -24112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CCD5C;
	sub_823D3C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CCD64;
	sub_823C9618(ctx, base);
loc_823CCD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CCC88) {
	__imp__sub_823CCC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CCD6C) {
	__imp__sub_823CCD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-27528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27528);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// beq cr6,0x823ccd94
	if (ctx.cr6.eq) goto loc_823CCD94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823ccd90
	if (ctx.cr6.lt) goto loc_823CCD90;
	// b 0x823ccc88
	sub_823CCC88(ctx, base);
	return;
loc_823CCD90:
	// b 0x823cc6f8
	sub_823CC6F8(ctx, base);
	return;
loc_823CCD94:
	// b 0x823cc518
	sub_823CC518(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CCD70) {
	__imp__sub_823CCD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCD98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CCD98) {
	__imp__sub_823CCD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CCD9C) {
	__imp__sub_823CCD9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CCDA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8464);
	// ld r29,-16268(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16268);
	// lwz r30,-19968(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19968);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x823cbff0
	ctx.lr = 0x823CCDCC;
	sub_823CBFF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCDD8;
	sub_823DA280(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cc3b0
	ctx.lr = 0x823CCDE4;
	sub_823CC3B0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,7120
	ctx.r4.s64 = ctx.r31.s64 + 7120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823CCDF8;
	sub_823D3B90(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CCE04;
	sub_823D3C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823CCE10;
	sub_823C90B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823CCE1C;
	sub_823C9CA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4328
	ctx.lr = 0x823CCE2C;
	sub_823D4328(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823CCE38;
	sub_823C8D28(ctx, base);
	// lwz r11,-19968(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19968);
	// lwz r3,5560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// bl 0x823cb0b0
	ctx.lr = 0x823CCE44;
	sub_823CB0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CCE4C;
	sub_823C9618(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,3224
	ctx.r9.s64 = ctx.r10.s64 + 3224;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,-19968(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19968);
	// addi r11,r30,5488
	ctx.r11.s64 = ctx.r30.s64 + 5488;
	// bl 0x820bad78
	ctx.lr = 0x823CCE64;
	sub_820BAD78(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// stw r3,5488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5488, ctx.r3.u32);
	// lwz r11,13120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13120);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823cce88
	if (ctx.cr6.eq) goto loc_823CCE88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cba58
	ctx.lr = 0x823CCE88;
	sub_823CBA58(ctx, base);
loc_823CCE88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cbb70
	ctx.lr = 0x823CCE94;
	sub_823CBB70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CCDA0) {
	__imp__sub_823CCDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CCE9C) {
	__imp__sub_823CCE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CCEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8464);
	// ld r29,-16268(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16268);
	// lwz r30,-19968(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19968);
	// bl 0x823cbff0
	ctx.lr = 0x823CCEC8;
	sub_823CBFF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823da280
	ctx.lr = 0x823CCED4;
	sub_823DA280(ctx, base);
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-14984
	ctx.r3.s64 = ctx.r10.s64 + -14984;
	// bl 0x823cc348
	ctx.lr = 0x823CCEE8;
	sub_823CC348(ctx, base);
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-14888
	ctx.r3.s64 = ctx.r9.s64 + -14888;
	// bl 0x823cc348
	ctx.lr = 0x823CCEFC;
	sub_823CC348(ctx, base);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,-14808
	ctx.r3.s64 = ctx.r8.s64 + -14808;
	// bl 0x823cc348
	ctx.lr = 0x823CCF10;
	sub_823CC348(ctx, base);
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// addi r6,r7,3224
	ctx.r6.s64 = ctx.r7.s64 + 3224;
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r30,-19968(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19968);
	// addi r11,r30,5488
	ctx.r11.s64 = ctx.r30.s64 + 5488;
	// bl 0x820bad78
	ctx.lr = 0x823CCF28;
	sub_820BAD78(ctx, base);
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// stw r3,5488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5488, ctx.r3.u32);
	// lwz r11,13120(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13120);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823ccf4c
	if (ctx.cr6.eq) goto loc_823CCF4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cba58
	ctx.lr = 0x823CCF4C;
	sub_823CBA58(ctx, base);
loc_823CCF4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cbb70
	ctx.lr = 0x823CCF58;
	sub_823CBB70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CCEA0) {
	__imp__sub_823CCEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CCF60) {
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
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-27528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27528);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823ccfd4
	if (ctx.cr6.lt) goto loc_823CCFD4;
	// beq cr6,0x823ccfbc
	if (ctx.cr6.eq) goto loc_823CCFBC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823ccfa4
	if (ctx.cr6.lt) goto loc_823CCFA4;
	// bl 0x823cc888
	ctx.lr = 0x823CCF90;
	sub_823CC888(ctx, base);
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
loc_823CCFA4:
	// bl 0x823ccea0
	ctx.lr = 0x823CCFA8;
	sub_823CCEA0(ctx, base);
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
loc_823CCFBC:
	// bl 0x823ccda0
	ctx.lr = 0x823CCFC0;
	sub_823CCDA0(ctx, base);
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
loc_823CCFD4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823CCFE4;
	sub_823D3C78(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,-29904
	ctx.r3.s64 = ctx.r10.s64 + -29904;
	// bl 0x823c90b8
	ctx.lr = 0x823CCFF4;
	sub_823C90B8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823CD004;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9618
	ctx.lr = 0x823CD00C;
	sub_823C9618(ctx, base);
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

PPC_WEAK_FUNC(sub_823CCF60) {
	__imp__sub_823CCF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD020) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD020) {
	__imp__sub_823CD020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de014
	ctx.lr = 0x823CD038;
	__savefpr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r11,-9080
	ctx.r6.s64 = ctx.r11.s64 + -9080;
	// addi r4,r10,-9084
	ctx.r4.s64 = ctx.r10.s64 + -9084;
	// addi r3,r9,-10136
	ctx.r3.s64 = ctx.r9.s64 + -10136;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x823CD05C;
	sub_822E17E0(ctx, base);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,-25392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25392, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f3,12240(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r4,-9128
	ctx.r8.s64 = ctx.r4.s64 + -9128;
	// lfs f30,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r3,-10156
	ctx.r3.s64 = ctx.r3.s64 + -10156;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6056);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD098;
	sub_822E1660(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r10,-9172
	ctx.r6.s64 = ctx.r10.s64 + -9172;
	// stw r3,-25316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25316, ctx.r3.u32);
	// addi r4,r9,-9184
	ctx.r4.s64 = ctx.r9.s64 + -9184;
	// addi r3,r8,-10176
	ctx.r3.s64 = ctx.r8.s64 + -10176;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x823CD0C0;
	sub_822E17E0(ctx, base);
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r3,-25324(r7)
	PPC_STORE_U32(ctx.r7.u32 + -25324, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f31,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r4,-9236
	ctx.r8.s64 = ctx.r4.s64 + -9236;
	// lfs f28,20560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20560);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r3,-10196
	ctx.r3.s64 = ctx.r3.s64 + -10196;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD0FC;
	sub_822E1660(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r3,-25396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25396, ctx.r3.u32);
	// addi r3,r7,-10220
	ctx.r3.s64 = ctx.r7.s64 + -10220;
	// lfs f29,5188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5188);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r8,-9288
	ctx.r8.s64 = ctx.r8.s64 + -9288;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6028(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6028);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD134;
	sub_822E1660(ctx, base);
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r4,-9344
	ctx.r8.s64 = ctx.r4.s64 + -9344;
	// stw r3,-25332(r5)
	PPC_STORE_U32(ctx.r5.u32 + -25332, ctx.r3.u32);
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-9292(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -9292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x823CD164;
	sub_822E1660(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r3,-25328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25328, ctx.r3.u32);
	// addi r3,r7,-10264
	ctx.r3.s64 = ctx.r7.s64 + -10264;
	// lfs f1,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r8,-9400
	ctx.r8.s64 = ctx.r8.s64 + -9400;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823CD194;
	sub_822E1660(ctx, base);
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-9448
	ctx.r8.s64 = ctx.r5.s64 + -9448;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-25348(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25348, ctx.r3.u32);
	// addi r3,r4,-10288
	ctx.r3.s64 = ctx.r4.s64 + -10288;
	// bl 0x822e1660
	ctx.lr = 0x823CD1C0;
	sub_822E1660(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r8,r9,-9496
	ctx.r8.s64 = ctx.r9.s64 + -9496;
	// stw r3,-25356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25356, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f28,6024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6024);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r6,-10308
	ctx.r3.s64 = ctx.r6.s64 + -10308;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD1F4;
	sub_822E1660(ctx, base);
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r8,r4,-9544
	ctx.r8.s64 = ctx.r4.s64 + -9544;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-25368(r5)
	PPC_STORE_U32(ctx.r5.u32 + -25368, ctx.r3.u32);
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// bl 0x822e1660
	ctx.lr = 0x823CD220;
	sub_822E1660(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r3,-25360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25360, ctx.r3.u32);
	// addi r3,r7,-10352
	ctx.r3.s64 = ctx.r7.s64 + -10352;
	// lfs f27,5808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5808);
	ctx.f27.f64 = double(temp.f32);
	// addi r8,r8,-9600
	ctx.r8.s64 = ctx.r8.s64 + -9600;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD254;
	sub_822E1660(ctx, base);
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r4,-9656
	ctx.r8.s64 = ctx.r4.s64 + -9656;
	// stw r3,-25388(r5)
	PPC_STORE_U32(ctx.r5.u32 + -25388, ctx.r3.u32);
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// lfs f26,7324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7324);
	ctx.f26.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD288;
	sub_822E1660(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r3,-25344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25344, ctx.r3.u32);
	// addi r3,r7,-10400
	ctx.r3.s64 = ctx.r7.s64 + -10400;
	// lfs f25,8336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8336);
	ctx.f25.f64 = double(temp.f32);
	// addi r8,r8,-9712
	ctx.r8.s64 = ctx.r8.s64 + -9712;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD2BC;
	sub_822E1660(ctx, base);
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// stw r3,-25352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25352, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r4,-9760
	ctx.r8.s64 = ctx.r4.s64 + -9760;
	// addi r3,r11,-10420
	ctx.r3.s64 = ctx.r11.s64 + -10420;
	// lfs f24,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD2F0;
	sub_822E1660(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r3,-25364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25364, ctx.r3.u32);
	// addi r3,r7,-10440
	ctx.r3.s64 = ctx.r7.s64 + -10440;
	// lfs f23,7544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7544);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r8,-9808
	ctx.r8.s64 = ctx.r8.s64 + -9808;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x823CD324;
	sub_822E1660(ctx, base);
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-9864
	ctx.r8.s64 = ctx.r5.s64 + -9864;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-25384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25384, ctx.r3.u32);
	// addi r3,r4,-10464
	ctx.r3.s64 = ctx.r4.s64 + -10464;
	// bl 0x822e1660
	ctx.lr = 0x823CD350;
	sub_822E1660(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r10,-9920
	ctx.r8.s64 = ctx.r10.s64 + -9920;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-25336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25336, ctx.r3.u32);
	// addi r3,r9,-10488
	ctx.r3.s64 = ctx.r9.s64 + -10488;
	// bl 0x822e1660
	ctx.lr = 0x823CD37C;
	sub_822E1660(ctx, base);
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,-9976
	ctx.r8.s64 = ctx.r6.s64 + -9976;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stw r3,-25340(r7)
	PPC_STORE_U32(ctx.r7.u32 + -25340, ctx.r3.u32);
	// addi r3,r5,-10512
	ctx.r3.s64 = ctx.r5.s64 + -10512;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823CD3A8;
	sub_822E1660(ctx, base);
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// stw r3,-25312(r4)
	PPC_STORE_U32(ctx.r4.u32 + -25312, ctx.r3.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r8,r3,-10024
	ctx.r8.s64 = ctx.r3.s64 + -10024;
	// addi r3,r11,-10532
	ctx.r3.s64 = ctx.r11.s64 + -10532;
	// bl 0x822e1660
	ctx.lr = 0x823CD3D4;
	sub_822E1660(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// addi r8,r9,-10072
	ctx.r8.s64 = ctx.r9.s64 + -10072;
	// stw r3,-25376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25376, ctx.r3.u32);
	// addi r3,r7,-10552
	ctx.r3.s64 = ctx.r7.s64 + -10552;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x823CD400;
	sub_822E1660(ctx, base);
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// stw r3,-25372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25372, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r9,-10572
	ctx.r3.s64 = ctx.r9.s64 + -10572;
	// addi r10,r11,-10116
	ctx.r10.s64 = ctx.r11.s64 + -10116;
	// lfs f5,2412(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2412);
	ctx.f5.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f4,-10076(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10076);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x823CD43C;
	sub_822E16F0(ctx, base);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// stw r3,-25380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25380, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de060
	ctx.lr = 0x823CD450;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD028) {
	__imp__sub_823CD028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD45C) {
	__imp__sub_823CD45C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD460) {
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
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-25392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25392);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8238bd98
	ctx.lr = 0x823CD494;
	sub_8238BD98(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,-25316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25316);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,-25324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25324);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8238bd98
	ctx.lr = 0x823CD4BC;
	sub_8238BD98(ctx, base);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,-25396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25396);
	// lfs f31,2416(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5524(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5524);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,-25332(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25332);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD4F8;
	sub_823DE800(ctx, base);
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r3,-31771
	ctx.r3.s64 = -2082144256;
	// lwz r11,-25328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25328);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,-25348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25348);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD528;
	sub_823DE800(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-25356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25356);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,-25368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25368);
	// lfs f29,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f29.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fadds f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD560;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// li r8,36
	ctx.r8.s64 = 36;
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f1.u32);
	// lwz r11,-25360(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -25360);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD588;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r6,40
	ctx.r6.s64 = 40;
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f11.u32);
	// lwz r11,-25388(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25388);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD5AC;
	sub_823DE800(ctx, base);
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,-25344(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25344);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD5C8;
	sub_823DE800(ctx, base);
	// lis r3,-31771
	ctx.r3.s64 = -2082144256;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lwz r11,-25352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25352);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r11,-25364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD5F8;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// li r9,56
	ctx.r9.s64 = 56;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f2.u32);
	// lwz r11,-25384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25384);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD620;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r7,60
	ctx.r7.s64 = 60;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f12.u32);
	// lwz r11,-25336(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25336);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD644;
	sub_823DE800(ctx, base);
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r11,-25340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25340);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823CD660;
	sub_823DE800(ctx, base);
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lis r3,-31771
	ctx.r3.s64 = -2082144256;
	// lwz r11,-25312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25312);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,72(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,-25376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25376);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fadds f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD690;
	sub_823DDE20(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// li r11,76
	ctx.r11.s64 = 76;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f3.u32);
	// lwz r11,-25372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25372);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f29
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fadds f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823CD6B8;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r9,80
	ctx.r9.s64 = 80;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f13.u32);
	// lwz r11,-25380(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25380);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x822da518
	ctx.lr = 0x823CD6E4;
	sub_822DA518(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_823CD460) {
	__imp__sub_823CD460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD70C) {
	__imp__sub_823CD70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r4,-26240
	ctx.r31.s64 = ctx.r4.s64 + -26240;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,5484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,-26240(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + -26240, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD710) {
	__imp__sub_823CD710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD7BC) {
	__imp__sub_823CD7BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CD7C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r10,4608
	ctx.r27.s64 = ctx.r10.s64 + 4608;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r3,8456(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cd810
	if (!ctx.cr6.gt) goto loc_823CD810;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823CD7F0:
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r31,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u16);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r3,8456(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823cd7f0
	if (ctx.cr6.lt) goto loc_823CD7F0;
loc_823CD810:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cd884
	if (ctx.cr6.eq) goto loc_823CD884;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823CD82C:
	// lwz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// ldx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r9,r10,0,2,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3E000000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823cd864
	if (ctx.cr6.eq) goto loc_823CD864;
	// lwz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r7,r9,-5136
	ctx.r7.s64 = ctx.r9.s64 + -5136;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8239ea10
	ctx.lr = 0x823CD860;
	sub_8239EA10(ctx, base);
	// lwz r3,8456(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
loc_823CD864:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823cd82c
	if (ctx.cr6.lt) goto loc_823CD82C;
loc_823CD884:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CD7C0) {
	__imp__sub_823CD7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD88C) {
	__imp__sub_823CD88C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r12,-256
	ctx.r12.s64 = -256;
	// lbz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r10,45,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD890) {
	__imp__sub_823CD890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD8B4) {
	__imp__sub_823CD8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r10,5(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823cd8e0
	if (ctx.cr6.eq) goto loc_823CD8E0;
loc_823CD8D0:
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
loc_823CD8E0:
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823cd8d0
	if (!ctx.cr6.eq) goto loc_823CD8D0;
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r11,r11,34,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0xFFF;
	// rldicl r10,r10,34,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0xFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x823cd91c
	if (ctx.cr6.eq) goto loc_823CD91C;
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823cd914
	if (ctx.cr6.lt) goto loc_823CD914;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CD914:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_823CD91C:
	// subfc r11,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD8B8) {
	__imp__sub_823CD8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD92C) {
	__imp__sub_823CD92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD930) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x823cd94c
	if (!ctx.cr6.lt) goto loc_823CD94C;
loc_823CD938:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cd938
	if (ctx.cr6.lt) goto loc_823CD938;
loc_823CD94C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823cd95c
	if (!ctx.cr6.eq) goto loc_823CD95C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CD95C:
	// divw r11,r3,r4
	ctx.r11.s32 = ctx.r3.s32 / ctx.r4.s32;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cd984
	if (ctx.cr0.eq) goto loc_823CD984;
loc_823CD96C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cd96c
	if (!ctx.cr0.eq) goto loc_823CD96C;
loc_823CD984:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CD930) {
	__imp__sub_823CD930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CD98C) {
	__imp__sub_823CD98C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823CD998;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r27,r7,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r31,624(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r30,628(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// bl 0x823cd930
	ctx.lr = 0x823CD9C8;
	sub_823CD930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdb3c
	if (ctx.cr6.eq) goto loc_823CDB3C;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r22,r27,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r25,r29,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r21,r11,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r10,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r26,r9,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r7,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
loc_823CDA04:
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r9,r26,r31
	ctx.r9.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDA20:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823cda20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA20;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CDA40:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cda40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA40;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_823CDA54:
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r11,r24,r8
	ctx.r11.u64 = ctx.r24.u64 + ctx.r8.u64;
	// add r10,r25,r4
	ctx.r10.u64 = ctx.r25.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823cda7c
	if (ctx.cr6.lt) goto loc_823CDA7C;
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r27.s64;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// subf r10,r22,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r22.s64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823cdad4
	if (ctx.cr6.eq) goto loc_823CDAD4;
loc_823CDA7C:
	// li r7,6
	ctx.r7.s64 = 6;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823CDA94:
	// lwzu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823cda94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA94;
	// li r8,8
	ctx.r8.s64 = 8;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r4,r30
	ctx.r7.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CDAB8:
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x823cdab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDAB8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x823cda54
	goto loc_823CDA54;
loc_823CDAD4:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_823CDAF8:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cdaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDAF8;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDB1C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cdb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDB1C;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x823cda04
	if (!ctx.cr0.eq) goto loc_823CDA04;
loc_823CDB3C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CD990) {
	__imp__sub_823CD990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CDB44) {
	__imp__sub_823CDB44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x823CDB50;
	__savegprlr_15(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// subf r25,r3,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// subf r22,r7,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r27,620(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r24,632(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// bl 0x823cd930
	ctx.lr = 0x823CDB84;
	sub_823CD930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdcc4
	if (ctx.cr6.eq) goto loc_823CDCC4;
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r16,r22,44
	ctx.r16.s64 = ctx.r22.s64 * 44;
	// mulli r21,r25,44
	ctx.r21.s64 = ctx.r25.s64 * 44;
	// rlwinm r15,r11,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r10,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r18,r7,44
	ctx.r18.s64 = ctx.r7.s64 * 44;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_823CDBC4:
	// li r11,9
	ctx.r11.s64 = 9;
	// add r10,r23,r27
	ctx.r10.u64 = ctx.r23.u64 + ctx.r27.u64;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDBDC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cdbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDBDC;
	// add r4,r18,r24
	ctx.r4.u64 = ctx.r18.u64 + ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x823CDBF8;
	sub_823DE1F0(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823CDC00:
	// add r30,r28,r25
	ctx.r30.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r31,r20,r11
	ctx.r31.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r29,r21,r8
	ctx.r29.u64 = ctx.r21.u64 + ctx.r8.u64;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x823cdc28
	if (ctx.cr6.lt) goto loc_823CDC28;
	// subf r30,r22,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r22.s64;
	// subf r31,r15,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r15.s64;
	// subf r29,r16,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r16.s64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823cdc6c
	if (ctx.cr6.eq) goto loc_823CDC6C;
loc_823CDC28:
	// li r10,9
	ctx.r10.s64 = 9;
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CDC40:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cdc40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDC40;
	// add r3,r8,r24
	ctx.r3.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x823CDC5C;
	sub_823DE1F0(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x823cdc00
	goto loc_823CDC00;
loc_823CDC6C:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,9
	ctx.r11.s64 = 9;
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_823CDC90:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cdc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDC90;
	// mulli r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 * 44;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x823CDCB0;
	sub_823DE1F0(ctx, base);
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r18,r18,44
	ctx.r18.s64 = ctx.r18.s64 + 44;
	// addi r23,r23,36
	ctx.r23.s64 = ctx.r23.s64 + 36;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bne 0x823cdbc4
	if (!ctx.cr0.eq) goto loc_823CDBC4;
loc_823CDCC4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CDB48) {
	__imp__sub_823CDB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CDCCC) {
	__imp__sub_823CDCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDCD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,22(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// subf. r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r9,r11,34,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r8,r10,34,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// clrlwi r6,r8,20
	ctx.r6.u64 = ctx.r8.u32 & 0xFFF;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CDCD0) {
	__imp__sub_823CDCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CDD1C) {
	__imp__sub_823CDD1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CDD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823CDD28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r24,r11,4608
	ctx.r24.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8456);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r23,616(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// lwz r26,624(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lhz r25,52(r8)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r8.u32 + 52);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x823ce064
	if (!ctx.cr6.gt) goto loc_823CE064;
loc_823CDD5C:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r9,-8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// subf. r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cddb0
	if (!ctx.cr0.eq) goto loc_823CDDB0;
	// lbz r11,-2(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + -2);
	// lbz r8,22(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 22);
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cddb0
	if (!ctx.cr0.eq) goto loc_823CDDB0;
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicl r9,r11,34,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r8,r10,34,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// clrlwi r5,r8,20
	ctx.r5.u64 = ctx.r8.u32 & 0xFFF;
	// subf r11,r7,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_823CDDB0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823cddc0
	if (ctx.cr6.gt) goto loc_823CDDC0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x823ce05c
	goto loc_823CE05C;
loc_823CDDC0:
	// addic. r31,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r31.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823cde30
	if (ctx.cr0.eq) goto loc_823CDE30;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_823CDDDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// subf. r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823cde30
	if (!ctx.cr0.eq) goto loc_823CDE30;
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,30(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// subf. r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823cde30
	if (!ctx.cr0.eq) goto loc_823CDE30;
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicl r5,r8,34,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 34) & 0x3FFFFFFFF;
	// rldicl r7,r9,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r3,r5,20
	ctx.r3.u64 = ctx.r5.u32 & 0xFFF;
	// clrlwi r4,r7,20
	ctx.r4.u64 = ctx.r7.u32 & 0xFFF;
	// subf. r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823cde30
	if (!ctx.cr0.eq) goto loc_823CDE30;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// bne 0x823cdddc
	if (!ctx.cr0.eq) goto loc_823CDDDC;
loc_823CDE30:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cdea8
	if (ctx.cr6.eq) goto loc_823CDEA8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
loc_823CDE58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cde94
	if (!ctx.cr0.eq) goto loc_823CDE94;
	// lbz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r5,22(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 22);
	// subf. r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cde94
	if (!ctx.cr0.eq) goto loc_823CDE94;
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicl r5,r11,34,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r4,r9,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r3,r5,20
	ctx.r3.u64 = ctx.r5.u32 & 0xFFF;
	// clrlwi r11,r4,20
	ctx.r11.u64 = ctx.r4.u32 & 0xFFF;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_823CDE94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cdea8
	if (!ctx.cr6.gt) goto loc_823CDEA8;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// bne 0x823cde58
	if (!ctx.cr0.eq) goto loc_823CDE58;
loc_823CDEA8:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x823cdf20
	if (!ctx.cr6.lt) goto loc_823CDF20;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r8,5(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823CDED0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// subf. r4,r7,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x823cdf20
	if (!ctx.cr0.eq) goto loc_823CDF20;
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,22(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 22);
	// subf. r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x823cdf20
	if (!ctx.cr0.eq) goto loc_823CDF20;
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r3,r7,34,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// rldicl r10,r4,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r7,r3,20
	ctx.r7.u64 = ctx.r3.u32 & 0xFFF;
	// clrlwi r4,r10,20
	ctx.r4.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823cdf20
	if (!ctx.cr0.eq) goto loc_823CDF20;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823cded0
	if (ctx.cr6.lt) goto loc_823CDED0;
loc_823CDF20:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x823cdf9c
	if (!ctx.cr6.lt) goto loc_823CDF9C;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_823CDF48:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// subf. r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cdf84
	if (!ctx.cr0.eq) goto loc_823CDF84;
	// lbz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,22(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 22);
	// subf. r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823cdf84
	if (!ctx.cr0.eq) goto loc_823CDF84;
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicl r4,r11,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r3,r9,34,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r11,r4,20
	ctx.r11.u64 = ctx.r4.u32 & 0xFFF;
	// clrlwi r9,r3,20
	ctx.r9.u64 = ctx.r3.u32 & 0xFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_823CDF84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cdf9c
	if (!ctx.cr6.gt) goto loc_823CDF9C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823cdf48
	if (ctx.cr6.lt) goto loc_823CDF48;
loc_823CDF9C:
	// lwz r11,8456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8456);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823ce024
	if (!ctx.cr6.gt) goto loc_823CE024;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_823CDFB4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823ce00c
	if (ctx.cr6.lt) goto loc_823CE00C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823ce00c
	if (!ctx.cr6.lt) goto loc_823CE00C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823cdfdc
	if (!ctx.cr6.lt) goto loc_823CDFDC;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x823ce008
	goto loc_823CE008;
loc_823CDFDC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823cdff0
	if (!ctx.cr6.lt) goto loc_823CDFF0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x823ce008
	goto loc_823CE008;
loc_823CDFF0:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bge cr6,0x823ce004
	if (!ctx.cr6.lt) goto loc_823CE004;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x823ce008
	goto loc_823CE008;
loc_823CE004:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823CE008:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_823CE00C:
	// lwz r11,8456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8456);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r8,548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823cdfb4
	if (ctx.cr6.lt) goto loc_823CDFB4;
loc_823CE024:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd990
	ctx.lr = 0x823CE030;
	sub_823CD990(ctx, base);
	// subf r30,r28,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r28.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823cd990
	ctx.lr = 0x823CE048;
	sub_823CD990(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd990
	ctx.lr = 0x823CE058;
	sub_823CD990(ctx, base);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_823CE05C:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823cdd5c
	if (ctx.cr6.lt) goto loc_823CDD5C;
loc_823CE064:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CDD20) {
	__imp__sub_823CDD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE06C) {
	__imp__sub_823CE06C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE070) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82300ae0
	ctx.lr = 0x823CE090;
	sub_82300AE0(ctx, base);
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicl r7,r8,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r3,r7,20
	ctx.r3.u64 = ctx.r7.u32 & 0xFFF;
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

PPC_WEAK_FUNC(sub_823CE070) {
	__imp__sub_823CE070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE0BC) {
	__imp__sub_823CE0BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE0C0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82300ae0
	ctx.lr = 0x823CE0E8;
	sub_82300AE0(ctx, base);
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r31,r6,20
	ctx.r31.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE110;
	sub_82300AE0(ctx, base);
	// lbz r5,39(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf r3,r9,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
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

PPC_WEAK_FUNC(sub_823CE0C0) {
	__imp__sub_823CE0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE144) {
	__imp__sub_823CE144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE148) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CE148) {
	__imp__sub_823CE148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE15C) {
	__imp__sub_823CE15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823CE168;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,28(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823CE180;
	sub_82300AE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x82300b08
	ctx.lr = 0x823CE198;
	sub_82300B08(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce210
	if (ctx.cr6.eq) goto loc_823CE210;
loc_823CE1A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82300ac8
	ctx.lr = 0x823CE1B4;
	sub_82300AC8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce1f8
	if (ctx.cr6.eq) goto loc_823CE1F8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_823CE1C8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r11,r7,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrldi r6,r11,52
	ctx.r6.u64 = ctx.r11.u64 & 0xFFF;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x823ce1ec
	if (!ctx.cr6.lt) goto loc_823CE1EC;
	// clrlwi r29,r11,20
	ctx.r29.u64 = ctx.r11.u32 & 0xFFF;
	// add r27,r10,r31
	ctx.r27.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_823CE1EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823ce1c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE1C8;
loc_823CE1F8:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823ce1a8
	if (ctx.cr6.lt) goto loc_823CE1A8;
loc_823CE210:
	// stb r27,39(r24)
	PPC_STORE_U8(ctx.r24.u32 + 39, ctx.r27.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE160) {
	__imp__sub_823CE160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE21C) {
	__imp__sub_823CE21C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823CE228;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r22,r11,4608
	ctx.r22.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
	// lwz r23,544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x823ce250
	if (!ctx.cr6.eq) goto loc_823CE250;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823CE250:
	// lwz r24,632(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823ce278
	if (ctx.cr6.eq) goto loc_823CE278;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_823CE264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ce160
	ctx.lr = 0x823CE26C;
	sub_823CE160(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x823ce264
	if (!ctx.cr0.eq) goto loc_823CE264;
loc_823CE278:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x823ce68c
	if (!ctx.cr6.gt) goto loc_823CE68C;
loc_823CE288:
	// mulli r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 * 44;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x82300ae0
	ctx.lr = 0x823CE29C;
	sub_82300AE0(ctx, base);
	// lbz r11,-5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -5);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r30,r6,20
	ctx.r30.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE2C4;
	sub_82300AE0(ctx, base);
	// lbz r5,39(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x823ce2ec
	if (ctx.cr0.gt) goto loc_823CE2EC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x823ce684
	goto loc_823CE684;
loc_823CE2EC:
	// addic. r25,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r25.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// beq 0x823ce364
	if (ctx.cr0.eq) goto loc_823CE364;
	// mulli r11,r25,44
	ctx.r11.s64 = ctx.r25.s64 * 44;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,-5
	ctx.r30.s64 = ctx.r11.s64 + -5;
loc_823CE304:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-11(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11);
	// bl 0x82300ae0
	ctx.lr = 0x823CE310;
	sub_82300AE0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,33(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 33);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r28,r6,20
	ctx.r28.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE338;
	sub_82300AE0(ctx, base);
	// lbz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823ce364
	if (!ctx.cr0.eq) goto loc_823CE364;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,-44
	ctx.r30.s64 = ctx.r30.s64 + -44;
	// bne 0x823ce304
	if (!ctx.cr0.eq) goto loc_823CE304;
loc_823CE364:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// mulli r11,r25,44
	ctx.r11.s64 = ctx.r25.s64 * 44;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,-5
	ctx.r30.s64 = ctx.r11.s64 + -5;
loc_823CE37C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-11(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11);
	// bl 0x82300ae0
	ctx.lr = 0x823CE388;
	sub_82300AE0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r28,r6,20
	ctx.r28.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE3B0;
	sub_82300AE0(ctx, base);
	// lbz r5,39(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x823ce3dc
	if (!ctx.cr0.gt) goto loc_823CE3DC;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,-44
	ctx.r30.s64 = ctx.r30.s64 + -44;
	// bne 0x823ce37c
	if (!ctx.cr0.eq) goto loc_823CE37C;
loc_823CE3DC:
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823ce458
	if (!ctx.cr6.lt) goto loc_823CE458;
	// mulli r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 * 44;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,39
	ctx.r30.s64 = ctx.r11.s64 + 39;
loc_823CE3F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82300ae0
	ctx.lr = 0x823CE400;
	sub_82300AE0(ctx, base);
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-11(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r27,r6,20
	ctx.r27.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE428;
	sub_82300AE0(ctx, base);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823ce458
	if (!ctx.cr0.eq) goto loc_823CE458;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823ce3f4
	if (ctx.cr6.lt) goto loc_823CE3F4;
loc_823CE458:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823ce4d4
	if (!ctx.cr6.lt) goto loc_823CE4D4;
	// mulli r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 * 44;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,39
	ctx.r30.s64 = ctx.r11.s64 + 39;
loc_823CE470:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82300ae0
	ctx.lr = 0x823CE47C;
	sub_82300AE0(ctx, base);
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-11(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r20,r6,20
	ctx.r20.u64 = ctx.r6.u32 & 0xFFF;
	// bl 0x82300ae0
	ctx.lr = 0x823CE4A4;
	sub_82300AE0(ctx, base);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// subf. r8,r9,r20
	ctx.r8.s64 = ctx.r20.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x823ce4d4
	if (!ctx.cr0.gt) goto loc_823CE4D4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823ce470
	if (ctx.cr6.lt) goto loc_823CE470;
loc_823CE4D4:
	// lwz r11,8456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ce590
	if (!ctx.cr6.gt) goto loc_823CE590;
	// li r6,0
	ctx.r6.s64 = 0;
loc_823CE4EC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhz r9,30(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 30);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ce57c
	if (ctx.cr6.eq) goto loc_823CE57C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CE508:
	// lwz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823ce564
	if (ctx.cr6.lt) goto loc_823CE564;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823ce564
	if (!ctx.cr6.lt) goto loc_823CE564;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x823ce534
	if (!ctx.cr6.lt) goto loc_823CE534;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x823ce560
	goto loc_823CE560;
loc_823CE534:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823ce548
	if (!ctx.cr6.lt) goto loc_823CE548;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x823ce560
	goto loc_823CE560;
loc_823CE548:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bge cr6,0x823ce55c
	if (!ctx.cr6.lt) goto loc_823CE55C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823ce560
	goto loc_823CE560;
loc_823CE55C:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_823CE560:
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
loc_823CE564:
	// lhz r11,30(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 30);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ce508
	if (ctx.cr6.lt) goto loc_823CE508;
	// lwz r11,8456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
loc_823CE57C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ce4ec
	if (ctx.cr6.lt) goto loc_823CE4EC;
loc_823CE590:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823ce648
	if (!ctx.cr6.gt) goto loc_823CE648;
	// li r6,0
	ctx.r6.s64 = 0;
loc_823CE5A4:
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ce634
	if (ctx.cr6.eq) goto loc_823CE634;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CE5C0:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823ce61c
	if (ctx.cr6.lt) goto loc_823CE61C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x823ce61c
	if (!ctx.cr6.lt) goto loc_823CE61C;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x823ce5ec
	if (!ctx.cr6.lt) goto loc_823CE5EC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x823ce618
	goto loc_823CE618;
loc_823CE5EC:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x823ce600
	if (!ctx.cr6.lt) goto loc_823CE600;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x823ce618
	goto loc_823CE618;
loc_823CE600:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bge cr6,0x823ce614
	if (!ctx.cr6.lt) goto loc_823CE614;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823ce618
	goto loc_823CE618;
loc_823CE614:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_823CE618:
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_823CE61C:
	// lhz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ce5c0
	if (ctx.cr6.lt) goto loc_823CE5C0;
	// lwz r11,8456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
loc_823CE634:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ce5a4
	if (ctx.cr6.lt) goto loc_823CE5A4;
loc_823CE648:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823cdb48
	ctx.lr = 0x823CE658;
	sub_823CDB48(ctx, base);
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r31,r30,r25
	ctx.r31.u64 = ctx.r30.u64 + ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823cdb48
	ctx.lr = 0x823CE670;
	sub_823CDB48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdb48
	ctx.lr = 0x823CE680;
	sub_823CDB48(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823CE684:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823ce288
	if (ctx.cr6.lt) goto loc_823CE288;
loc_823CE68C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE220) {
	__imp__sub_823CE220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE698) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cec78
	sub_823CEC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE698) {
	__imp__sub_823CE698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE69C) {
	__imp__sub_823CE69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// addi r6,r8,-10056
	ctx.r6.s64 = ctx.r8.s64 + -10056;
	// mulli r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 * 56;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r8,300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r11,54(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 54);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r4.s64;
	// divw r5,r3,r7
	ctx.r5.s32 = ctx.r3.s32 / ctx.r7.s32;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823cf598
	sub_823CF598(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE6A0) {
	__imp__sub_823CE6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE6EC) {
	__imp__sub_823CE6EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823CE6F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r26,624(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r25,52(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823ce73c
	if (ctx.cr6.eq) goto loc_823CE73C;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x823CE73C;
	sub_823DE090(ctx, base);
loc_823CE73C:
	// bl 0x823cdd20
	ctx.lr = 0x823CE740;
	sub_823CDD20(ctx, base);
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x823ce7ac
	if (!ctx.cr6.gt) goto loc_823CE7AC;
	// li r30,56
	ctx.r30.s64 = 56;
	// li r28,24
	ctx.r28.s64 = 24;
loc_823CE75C:
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r6,r8,-10056
	ctx.r6.s64 = ctx.r8.s64 + -10056;
	// lhz r11,54(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 54);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r4.s64;
	// divw r5,r3,r28
	ctx.r5.s32 = ctx.r3.s32 / ctx.r28.s32;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823cf598
	ctx.lr = 0x823CE794;
	sub_823CF598(ctx, base);
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ce75c
	if (ctx.cr6.lt) goto loc_823CE75C;
loc_823CE7AC:
	// bl 0x823ce220
	ctx.lr = 0x823CE7B0;
	sub_823CE220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ce7c0
	if (ctx.cr6.eq) goto loc_823CE7C0;
	// bl 0x823b9a18
	ctx.lr = 0x823CE7C0;
	sub_823B9A18(ctx, base);
loc_823CE7C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ce858
	if (ctx.cr6.eq) goto loc_823CE858;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r10,r26,22
	ctx.r10.s64 = ctx.r26.s64 + 22;
loc_823CE7DC:
	// lwz r8,-6(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6);
	// li r12,-256
	ctx.r12.s64 = -256;
	// lwz r9,8456(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lwz r3,636(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 636);
	// and r8,r4,r12
	ctx.r8.u64 = ctx.r4.u64 & ctx.r12.u64;
	// rldimi r8,r5,45,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u64, 45) & 0x1FE00000000000) | (ctx.r8.u64 & 0xFFE01FFFFFFFFFFF);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stdx r8,r3,r7
	PPC_STORE_U64(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u64);
	// bge cr6,0x823ce844
	if (!ctx.cr6.lt) goto loc_823CE844;
	// rlwinm r9,r9,0,2,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E000000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823ce844
	if (ctx.cr6.eq) goto loc_823CE844;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ce844
	if (ctx.cr6.eq) goto loc_823CE844;
	// lwz r8,8456(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r8,640(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 640);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
loc_823CE844:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// bdnz 0x823ce7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE7DC;
loc_823CE858:
	// bl 0x823cd7c0
	ctx.lr = 0x823CE85C;
	sub_823CD7C0(ctx, base);
	// bl 0x8239b038
	ctx.lr = 0x823CE860;
	sub_8239B038(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE6F0) {
	__imp__sub_823CE6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823CE870;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x823ce914
	if (!ctx.cr6.lt) goto loc_823CE914;
loc_823CE8A4:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CE8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ce914
	if (ctx.cr6.eq) goto loc_823CE914;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_823CE8F0:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823ce8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE8F0;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// blt cr6,0x823ce8a4
	if (ctx.cr6.lt) goto loc_823CE8A4;
loc_823CE914:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_823CE938:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823ce938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE938;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE868) {
	__imp__sub_823CE868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE94C) {
	__imp__sub_823CE94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE950) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_823CE95C:
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823ce99c
	if (ctx.cr6.gt) goto loc_823CE99C;
	// subf r10,r7,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CE980:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x823ce994
	if (!ctx.cr6.lt) goto loc_823CE994;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_823CE994:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823ce980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE980;
loc_823CE99C:
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823ce95c
	if (ctx.cr6.gt) goto loc_823CE95C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CE950) {
	__imp__sub_823CE950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CE9BC) {
	__imp__sub_823CE9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CE9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CE9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823CE9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cea54
	if (ctx.cr6.eq) goto loc_823CEA54;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823cea54
	if (ctx.cr6.eq) goto loc_823CEA54;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEA10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cea10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEA10;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEA2C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cea2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEA2C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEA48:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cea48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEA48;
loc_823CEA54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CEA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ceacc
	if (ctx.cr6.eq) goto loc_823CEACC;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823ceacc
	if (ctx.cr6.eq) goto loc_823CEACC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEA88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cea88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEA88;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEAA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ceaa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEAA4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEAC0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ceac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEAC0;
loc_823CEACC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823CEADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ceb44
	if (ctx.cr6.eq) goto loc_823CEB44;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823ceb44
	if (ctx.cr6.eq) goto loc_823CEB44;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEB00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ceb00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEB00;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEB1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ceb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEB1C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CEB38:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ceb38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEB38;
loc_823CEB44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CE9C0) {
	__imp__sub_823CE9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CEB4C) {
	__imp__sub_823CEB4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823CEB58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823cec0c
	if (!ctx.cr6.lt) goto loc_823CEC0C;
loc_823CEB8C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-24
	ctx.r4.s64 = ctx.r3.s64 + -24;
	// bctrl 
	ctx.lr = 0x823CEBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cebb8
	if (ctx.cr6.eq) goto loc_823CEBB8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_823CEBB8:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CEBE8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cebe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEBE8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x823ceb8c
	if (ctx.cr6.lt) goto loc_823CEB8C;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_823CEC0C:
	// bne cr6,0x823cec50
	if (!ctx.cr6.eq) goto loc_823CEC50;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CEC40:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cec40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CEC40;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_823CEC50:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ce868
	ctx.lr = 0x823CEC70;
	sub_823CE868(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CEB50) {
	__imp__sub_823CEB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823CEC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x823cedd0
	if (ctx.cr6.lt) goto loc_823CEDD0;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// addi r31,r9,-4
	ctx.r31.s64 = ctx.r9.s64 + -4;
loc_823CECA8:
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_823CECAC:
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x823cecc8
	if (ctx.cr6.gt) goto loc_823CECC8;
	// bl 0x823ce950
	ctx.lr = 0x823CECC4;
	sub_823CE950(ctx, base);
	// b 0x823cedb4
	goto loc_823CEDB4;
loc_823CECC8:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// stdx r7,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u64);
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
loc_823CECEC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823ced04
	if (ctx.cr6.gt) goto loc_823CED04;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x823cecec
	if (!ctx.cr6.gt) goto loc_823CECEC;
loc_823CED04:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ced1c
	if (!ctx.cr6.lt) goto loc_823CED1C;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x823ced04
	if (!ctx.cr6.gt) goto loc_823CED04;
loc_823CED1C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ced38
	if (ctx.cr6.lt) goto loc_823CED38;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// b 0x823cecec
	goto loc_823CECEC;
loc_823CED38:
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,-8
	ctx.r5.s64 = ctx.r9.s64 + -8;
	// rlwinm r9,r6,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r5,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823ced94
	if (ctx.cr6.lt) goto loc_823CED94;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823ced84
	if (ctx.cr6.gt) goto loc_823CED84;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_823CED84:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823cedb4
	if (!ctx.cr6.lt) goto loc_823CEDB4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x823cecac
	goto loc_823CECAC;
loc_823CED94:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823ceda8
	if (!ctx.cr6.lt) goto loc_823CEDA8;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
loc_823CEDA8:
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ceca8
	if (ctx.cr6.lt) goto loc_823CECA8;
loc_823CEDB4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// blt 0x823cedd0
	if (ctx.cr0.lt) goto loc_823CEDD0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x823cecac
	goto loc_823CECAC;
loc_823CEDD0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CEC78) {
	__imp__sub_823CEC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823CEDE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x823cee80
	if (!ctx.cr6.gt) goto loc_823CEE80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823ce9c0
	ctx.lr = 0x823CEE38;
	sub_823CE9C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x823ce9c0
	ctx.lr = 0x823CEE4C;
	sub_823CE9C0(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x823ce9c0
	ctx.lr = 0x823CEE64;
	sub_823CE9C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ce9c0
	ctx.lr = 0x823CEE78;
	sub_823CE9C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823CEE80:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ce9c0
	ctx.lr = 0x823CEE8C;
	sub_823CE9C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CEDD8) {
	__imp__sub_823CEDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CEE94) {
	__imp__sub_823CEE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CEEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x823cef00
	if (!ctx.cr0.gt) goto loc_823CEF00;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823CEED4:
	// ldu r6,-24(r30)
	ea = -24 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// bl 0x823ceb50
	ctx.lr = 0x823CEEF8;
	sub_823CEB50(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x823ceed4
	if (ctx.cr6.gt) goto loc_823CEED4;
loc_823CEF00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CEE98) {
	__imp__sub_823CEE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CEF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823CEF10;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-24
	ctx.r5.s64 = ctx.r5.s64 + -24;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823cedd8
	ctx.lr = 0x823CEF58;
	sub_823CEDD8(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823cefb0
	if (!ctx.cr6.lt) goto loc_823CEFB0;
loc_823CEF68:
	// addi r31,r30,-24
	ctx.r31.s64 = ctx.r30.s64 + -24;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823CEF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cefb0
	if (!ctx.cr6.eq) goto loc_823CEFB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CEF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cefb0
	if (!ctx.cr6.eq) goto loc_823CEFB0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823cef68
	if (ctx.cr6.lt) goto loc_823CEF68;
loc_823CEFB0:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823ceffc
	if (!ctx.cr6.lt) goto loc_823CEFFC;
loc_823CEFB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x823CEFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ceffc
	if (!ctx.cr6.eq) goto loc_823CEFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CEFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ceffc
	if (!ctx.cr6.eq) goto loc_823CEFFC;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823cefb8
	if (ctx.cr6.lt) goto loc_823CEFB8;
loc_823CEFFC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823CF004:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823cf0b4
	if (!ctx.cr6.lt) goto loc_823CF0B4;
loc_823CF00C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CF01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf0a8
	if (!ctx.cr6.eq) goto loc_823CF0A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x823CF038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf0b4
	if (!ctx.cr6.eq) goto loc_823CF0B4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823cf0a8
	if (ctx.cr6.eq) goto loc_823CF0A8;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CF064:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF064;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CF080:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF080;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF09C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF09C;
loc_823CF0A8:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823cf00c
	if (ctx.cr6.lt) goto loc_823CF00C;
loc_823CF0B4:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823cf16c
	if (!ctx.cr6.gt) goto loc_823CF16C;
	// addi r31,r27,-24
	ctx.r31.s64 = ctx.r27.s64 + -24;
loc_823CF0C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823CF0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf158
	if (!ctx.cr6.eq) goto loc_823CF158;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823CF0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf168
	if (!ctx.cr6.eq) goto loc_823CF168;
	// addi r30,r30,-24
	ctx.r30.s64 = ctx.r30.s64 + -24;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823cf158
	if (ctx.cr6.eq) goto loc_823CF158;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF114:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF114;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF130:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF130;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF14C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF14C;
loc_823CF158:
	// addi r27,r27,-24
	ctx.r27.s64 = ctx.r27.s64 + -24;
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823cf0c0
	if (ctx.cr6.lt) goto loc_823CF0C0;
loc_823CF168:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_823CF16C:
	// bne cr6,0x823cf250
	if (!ctx.cr6.eq) goto loc_823CF250;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x823cf384
	if (ctx.cr6.eq) goto loc_823CF384;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823cf1dc
	if (ctx.cr6.eq) goto loc_823CF1DC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823cf1dc
	if (ctx.cr6.eq) goto loc_823CF1DC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF198:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF198;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF1B4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF1B4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF1D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF1D0;
loc_823CF1DC:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823cf004
	if (ctx.cr6.eq) goto loc_823CF004;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CF208:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cf208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF208;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF224:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cf224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF224;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF240:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF240;
	// b 0x823cf004
	goto loc_823CF004;
loc_823CF250:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-24
	ctx.r27.s64 = ctx.r27.s64 + -24;
	// bne cr6,0x823cf320
	if (!ctx.cr6.eq) goto loc_823CF320;
	// addi r30,r30,-24
	ctx.r30.s64 = ctx.r30.s64 + -24;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823cf2bc
	if (ctx.cr6.eq) goto loc_823CF2BC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF278:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF278;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF294:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF294;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF2B0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF2B0;
loc_823CF2BC:
	// addi r28,r28,-24
	ctx.r28.s64 = ctx.r28.s64 + -24;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823cf004
	if (ctx.cr6.eq) goto loc_823CF004;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF2D8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF2D8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF2F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF2F4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF310:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF310;
	// b 0x823cf004
	goto loc_823CF004;
loc_823CF320:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823cf37c
	if (ctx.cr6.eq) goto loc_823CF37C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF338:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF338;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF354:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF354;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,268
	ctx.r11.s64 = ctx.r1.s64 + 268;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF370:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF370;
loc_823CF37C:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// b 0x823cf004
	goto loc_823CF004;
loc_823CF384:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CEF08) {
	__imp__sub_823CEF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823CF3A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823cf4e8
	if (ctx.cr6.eq) goto loc_823CF4E8;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823cf4e8
	if (ctx.cr6.eq) goto loc_823CF4E8;
	// addi r26,r29,-24
	ctx.r26.s64 = ctx.r29.s64 + -24;
loc_823CF3C8:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF3E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF3E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823CF3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf45c
	if (ctx.cr6.eq) goto loc_823CF45C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823cf43c
	if (ctx.cr6.eq) goto loc_823CF43C;
loc_823CF414:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CF428:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cf428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF428;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823cf414
	if (!ctx.cr6.eq) goto loc_823CF414;
loc_823CF43C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF44C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF44C;
	// b 0x823cf4d8
	goto loc_823CF4D8;
loc_823CF45C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823CF470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf4bc
	if (ctx.cr6.eq) goto loc_823CF4BC;
loc_823CF47C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF48C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF48C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823CF4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf47c
	if (!ctx.cr6.eq) goto loc_823CF47C;
loc_823CF4BC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF4CC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cf4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF4CC;
loc_823CF4D8:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823cf3c8
	if (!ctx.cr6.eq) goto loc_823CF3C8;
loc_823CF4E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CF398) {
	__imp__sub_823CF398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CF4F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,24
	ctx.r28.s64 = 24;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823cf58c
	if (!ctx.cr6.gt) goto loc_823CF58C;
	// addi r29,r3,-24
	ctx.r29.s64 = ctx.r3.s64 + -24;
loc_823CF51C:
	// li r8,6
	ctx.r8.s64 = 6;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823CF530:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cf530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF530;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CF54C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cf54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CF54C;
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// divw r5,r11,r28
	ctx.r5.s32 = ctx.r11.s32 / ctx.r28.s32;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ceb50
	ctx.lr = 0x823CF57C;
	sub_823CEB50(ctx, base);
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823cf51c
	if (ctx.cr6.gt) goto loc_823CF51C;
loc_823CF58C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CF4F0) {
	__imp__sub_823CF4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CF594) {
	__imp__sub_823CF594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823CF5A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,24
	ctx.r25.s64 = 24;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823cf654
	if (!ctx.cr6.gt) goto loc_823CF654;
loc_823CF5C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823cf678
	if (!ctx.cr6.gt) goto loc_823CF678;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cef08
	ctx.lr = 0x823CF5E4;
	sub_823CEF08(ctx, base);
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
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = ctx.r9.s32 / ctx.r25.s32;
	// divw r6,r8,r25
	ctx.r6.s32 = ctx.r8.s32 / ctx.r25.s32;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x823cf634
	if (!ctx.cr6.lt) goto loc_823CF634;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cf598
	ctx.lr = 0x823CF62C;
	sub_823CF598(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x823cf644
	goto loc_823CF644;
loc_823CF634:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823cf598
	ctx.lr = 0x823CF640;
	sub_823CF598(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_823CF644:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x823cf5c8
	if (ctx.cr6.gt) goto loc_823CF5C8;
loc_823CF654:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823cf670
	if (!ctx.cr6.gt) goto loc_823CF670;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cf398
	ctx.lr = 0x823CF670;
	sub_823CF398(ctx, base);
loc_823CF670:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823CF678:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823cf654
	if (!ctx.cr6.gt) goto loc_823CF654;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823cf6a0
	if (!ctx.cr6.gt) goto loc_823CF6A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cee98
	ctx.lr = 0x823CF6A0;
	sub_823CEE98(ctx, base);
loc_823CF6A0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cf4f0
	ctx.lr = 0x823CF6B0;
	sub_823CF4F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CF598) {
	__imp__sub_823CF598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF6B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CF6B8) {
	__imp__sub_823CF6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CF6C4) {
	__imp__sub_823CF6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf6e0
	if (!ctx.cr6.eq) goto loc_823CF6E0;
loc_823CF6D8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823CF6E0:
	// lbz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cf6d8
	if (!ctx.cr6.eq) goto loc_823CF6D8;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CF6C8) {
	__imp__sub_823CF6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF700) {
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
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf73c
	if (ctx.cr6.eq) goto loc_823CF73C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e7e98
	ctx.lr = 0x823CF728;
	sub_822E7E98(ctx, base);
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
loc_823CF73C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_823CF744:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cf774
	if (!ctx.cr6.eq) goto loc_823CF774;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// blt cr6,0x823cf744
	if (ctx.cr6.lt) goto loc_823CF744;
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
loc_823CF774:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822e7e98
	ctx.lr = 0x823CF788;
	sub_822E7E98(ctx, base);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cf7cc
	if (ctx.cr6.eq) goto loc_823CF7CC;
loc_823CF798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// beq cr6,0x823cf7c4
	if (ctx.cr6.eq) goto loc_823CF7C4;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823cf798
	if (!ctx.cr6.eq) goto loc_823CF798;
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
loc_823CF7C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_823CF7CC:
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

PPC_WEAK_FUNC(sub_823CF700) {
	__imp__sub_823CF700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF7E0) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// bne cr6,0x823cf808
	if (!ctx.cr6.eq) goto loc_823CF808;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_823CF808:
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cf828
	if (ctx.cr6.eq) goto loc_823CF828;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823CF828:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x823db1d0
	ctx.lr = 0x823CF850;
	sub_823DB1D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CF7E0) {
	__imp__sub_823CF7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cf878
	if (ctx.cr0.eq) goto loc_823CF878;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_823CF878:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf88c
	if (ctx.cr6.eq) goto loc_823CF88C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF88C:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf8a4
	if (ctx.cr6.eq) goto loc_823CF8A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF8A4:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf8bc
	if (ctx.cr6.eq) goto loc_823CF8BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF8BC:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf8d8
	if (ctx.cr6.eq) goto loc_823CF8D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF8D8:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// subfe r9,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r6,r6,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r5,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf910
	if (ctx.cr6.eq) goto loc_823CF910;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF910:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cf92c
	if (ctx.cr6.eq) goto loc_823CF92C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823CF92C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subfe r11,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// subfe r10,r4,r9
	temp.u8 = (~ctx.r4.u32 + ctx.r9.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x823cf95c
	if (ctx.cr6.eq) goto loc_823CF95C;
	// subf. r3,r8,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823cf964
	if (ctx.cr0.eq) goto loc_823CF964;
	// blr 
	return;
loc_823CF95C:
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_823CF964:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CF860) {
	__imp__sub_823CF860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CF96C) {
	__imp__sub_823CF96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CF970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823CF978;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821741f8
	ctx.lr = 0x823CF984;
	sub_821741F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821741f8
	ctx.lr = 0x823CF990;
	sub_821741F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf860
	ctx.lr = 0x823CF9AC;
	sub_823CF860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf9c0
	if (ctx.cr6.eq) goto loc_823CF9C0;
loc_823CF9B4:
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823CF9C0:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cf9d8
	if (!ctx.cr6.eq) goto loc_823CF9D8;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823cf9fc
	goto loc_823CF9FC;
loc_823CF9D8:
	// lbz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 60);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cf9f0
	if (ctx.cr6.eq) goto loc_823CF9F0;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823cf9fc
	goto loc_823CF9FC;
loc_823CF9F0:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
loc_823CF9FC:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cfa14
	if (!ctx.cr6.eq) goto loc_823CFA14;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823cfa38
	goto loc_823CFA38;
loc_823CFA14:
	// lbz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 60);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cfa2c
	if (ctx.cr6.eq) goto loc_823CFA2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823cfa38
	goto loc_823CFA38;
loc_823CFA2C:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r11,r9,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
loc_823CFA38:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cfa4c
	if (ctx.cr0.eq) goto loc_823CFA4C;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823CFA4C:
	// lbz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 60);
	// lbz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 60);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf. r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823cfa74
	if (ctx.cr0.eq) goto loc_823CFA74;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823CFA74:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cfb40
	if (ctx.cr6.eq) goto loc_823CFB40;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823CFA94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x823cfab8
	if (ctx.cr6.eq) goto loc_823CFAB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfa94
	if (ctx.cr6.eq) goto loc_823CFA94;
loc_823CFAB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cfc60
	if (!ctx.cr6.eq) goto loc_823CFC60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cfae0
	if (ctx.cr6.eq) goto loc_823CFAE0;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf7e0
	ctx.lr = 0x823CFAD8;
	sub_823CF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cf9b4
	if (!ctx.cr6.eq) goto loc_823CF9B4;
loc_823CFAE0:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823cf700
	ctx.lr = 0x823CFAF0;
	sub_823CF700(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823cf700
	ctx.lr = 0x823CFB00;
	sub_823CF700(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_823CFB08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823cfb2c
	if (ctx.cr6.eq) goto loc_823CFB2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfb08
	if (ctx.cr6.eq) goto loc_823CFB08;
loc_823CFB2C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfbf8
	if (ctx.cr6.eq) goto loc_823CFBF8;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823CFB40:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cfbf8
	if (ctx.cr6.eq) goto loc_823CFBF8;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823CFB60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823cfb84
	if (ctx.cr6.eq) goto loc_823CFB84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfb60
	if (ctx.cr6.eq) goto loc_823CFB60;
loc_823CFB84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cfc60
	if (!ctx.cr6.eq) goto loc_823CFC60;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf7e0
	ctx.lr = 0x823CFB9C;
	sub_823CF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cf9b4
	if (!ctx.cr6.eq) goto loc_823CF9B4;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823cf700
	ctx.lr = 0x823CFBB4;
	sub_823CF700(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823cf700
	ctx.lr = 0x823CFBC4;
	sub_823CF700(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_823CFBCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823cfbf0
	if (ctx.cr6.eq) goto loc_823CFBF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfbcc
	if (ctx.cr6.eq) goto loc_823CFBCC;
loc_823CFBF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cfc60
	if (!ctx.cr6.eq) goto loc_823CFC60;
loc_823CFBF8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_823CFC08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823cfc2c
	if (ctx.cr6.eq) goto loc_823CFC2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfc08
	if (ctx.cr6.eq) goto loc_823CFC08;
loc_823CFC2C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cfc60
	if (!ctx.cr6.eq) goto loc_823CFC60;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_823CFC3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823cfc60
	if (ctx.cr6.eq) goto loc_823CFC60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cfc3c
	if (ctx.cr6.eq) goto loc_823CFC3C;
loc_823CFC60:
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CF970) {
	__imp__sub_823CF970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823CFC6C) {
	__imp__sub_823CFC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFC70) {
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
	// bl 0x821741d8
	ctx.lr = 0x823CFC80;
	sub_821741D8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u16);
	// lwz r11,8324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8324, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823CFC70) {
	__imp__sub_823CFC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFCB0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8238fdf0
	ctx.lr = 0x823CFCD4;
	sub_8238FDF0(ctx, base);
	// lbz r9,58(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cfd08
	if (ctx.cr6.eq) goto loc_823CFD08;
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823CFCEC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823cfd24
	if (ctx.cr6.eq) goto loc_823CFD24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823cfcec
	if (ctx.cr6.lt) goto loc_823CFCEC;
loc_823CFD08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CFD0C:
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
loc_823CFD24:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x823cfd0c
	goto loc_823CFD0C;
}

PPC_WEAK_FUNC(sub_823CFCB0) {
	__imp__sub_823CFCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823CFD60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,8192
	ctx.r27.s64 = ctx.r29.s64 + 8192;
loc_823CFD78:
	// sth r31,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r31.u16);
	// lwz r11,8324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8324);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823cfdb8
	if (ctx.cr6.eq) goto loc_823CFDB8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823CFD90:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x821741f8
	ctx.lr = 0x823CFD98;
	sub_821741F8(ctx, base);
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823cfdb8
	if (!ctx.cr6.eq) goto loc_823CFDB8;
	// lwz r11,8324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8324);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823cfd90
	if (!ctx.cr6.eq) goto loc_823CFD90;
loc_823CFDB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplwi cr6,r28,63
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 63, ctx.xer);
	// blt cr6,0x823cfd78
	if (ctx.cr6.lt) goto loc_823CFD78;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,8192
	ctx.r10.s64 = ctx.r29.s64 + 8192;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CFD58) {
	__imp__sub_823CFD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823CFDE8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r6,r11,-1680
	ctx.r6.s64 = ctx.r11.s64 + -1680;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823d06c8
	ctx.lr = 0x823CFE14;
	sub_823D06C8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// beq cr6,0x823cff48
	if (ctx.cr6.eq) goto loc_823CFF48;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r27,r11,16386
	ctx.r27.s64 = ctx.r11.s64 + 16386;
loc_823CFE38:
	// lhz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// bl 0x821741f8
	ctx.lr = 0x823CFE40;
	sub_821741F8(ctx, base);
	// std r23,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r23.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rldicl r9,r10,57,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 57) & 0x7FFFFFFFFFFFFFFF;
	// rldicr r9,r9,0,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cfe70
	if (!ctx.cr6.eq) goto loc_823CFE70;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823cfe94
	goto loc_823CFE94;
loc_823CFE70:
	// lbz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cfe88
	if (ctx.cr6.eq) goto loc_823CFE88;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823cfe94
	goto loc_823CFE94;
loc_823CFE88:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// rlwinm r11,r8,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
loc_823CFE94:
	// li r12,-4
	ctx.r12.s64 = -4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r8,r26,32
	ctx.r8.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// rldimi r9,r11,42,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u64, 42) & 0xC0000000000) | (ctx.r9.u64 & 0xFFFFF3FFFFFFFFFF);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// rldicr r12,r12,25,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// and r6,r9,r12
	ctx.r6.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rldicr r4,r5,0,57
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// rldimi r4,r8,11,41
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 11) & 0x7FF800) | (ctx.r4.u64 & 0xFFFFFFFFFF8007FF);
	// rldicr r3,r4,19,44
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 19) & 0xFFFFFFFFFFF80000;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stbx r10,r26,r22
	PPC_STORE_U8(ctx.r26.u32 + ctx.r22.u32, ctx.r10.u8);
	// lbz r30,62(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823cff24
	if (ctx.cr6.eq) goto loc_823CFF24;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r30,-2(r27)
	PPC_STORE_U16(ctx.r27.u32 + -2, ctx.r30.u16);
	// beq cr6,0x823cff34
	if (ctx.cr6.eq) goto loc_823CFF34;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r28,r27,-2
	ctx.r28.s64 = ctx.r27.s64 + -2;
loc_823CFEFC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8238bd78
	ctx.lr = 0x823CFF0C;
	sub_8238BD78(ctx, base);
	// bl 0x821741d8
	ctx.lr = 0x823CFF10;
	sub_821741D8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sthu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823cfefc
	if (!ctx.cr0.eq) goto loc_823CFEFC;
	// b 0x823cff34
	goto loc_823CFF34;
loc_823CFF24:
	// sth r21,-2(r27)
	PPC_STORE_U16(ctx.r27.u32 + -2, ctx.r21.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821741d8
	ctx.lr = 0x823CFF30;
	sub_821741D8(ctx, base);
	// sth r3,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r3.u16);
loc_823CFF34:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823cfe38
	if (ctx.cr6.lt) goto loc_823CFE38;
loc_823CFF48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CFDE0) {
	__imp__sub_823CFDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFF50) {
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
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,4608
	ctx.r31.s64 = ctx.r10.s64 + 4608;
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-912
	ctx.r4.s64 = ctx.r9.s64 + -912;
	// stw r11,8324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8324, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822db160
	ctx.lr = 0x823CFF88;
	sub_822DB160(ctx, base);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8324);
	// addi r11,r8,-19840
	ctx.r11.s64 = ctx.r8.s64 + -19840;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x823cfde0
	ctx.lr = 0x823CFFA0;
	sub_823CFDE0(ctx, base);
	// bl 0x823cfd58
	ctx.lr = 0x823CFFA4;
	sub_823CFD58(ctx, base);
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

PPC_WEAK_FUNC(sub_823CFF50) {
	__imp__sub_823CFF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823CFFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823CFFC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// bge cr6,0x823d0034
	if (!ctx.cr6.lt) goto loc_823D0034;
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
loc_823CFFF0:
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lhzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x823D0004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0034
	if (ctx.cr6.eq) goto loc_823D0034;
	// lhzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
	// addze r29,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r29.s64 = temp.s64;
	// blt cr6,0x823cfff0
	if (ctx.cr6.lt) goto loc_823CFFF0;
loc_823D0034:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823CFFB8) {
	__imp__sub_823CFFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D0044) {
	__imp__sub_823D0044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D0050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0098
	if (ctx.cr6.eq) goto loc_823D0098;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823d0098
	if (ctx.cr6.eq) goto loc_823D0098;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_823D0098:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D00A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d00cc
	if (ctx.cr6.eq) goto loc_823D00CC;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823d00cc
	if (ctx.cr6.eq) goto loc_823D00CC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_823D00CC:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D00DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0100
	if (ctx.cr6.eq) goto loc_823D0100;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823d0100
	if (ctx.cr6.eq) goto loc_823D0100;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_823D0100:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D0048) {
	__imp__sub_823D0048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D0110;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823d0188
	if (!ctx.cr6.lt) goto loc_823D0188;
loc_823D013C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0164
	if (ctx.cr6.eq) goto loc_823D0164;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_823D0164:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lhzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// sthx r9,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u16);
	// blt cr6,0x823d013c
	if (ctx.cr6.lt) goto loc_823D013C;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_823D0188:
	// bne cr6,0x823d01a4
	if (!ctx.cr6.eq) goto loc_823D01A4;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lhz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sthx r8,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u16);
loc_823D01A4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cffb8
	ctx.lr = 0x823D01BC;
	sub_823CFFB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D0108) {
	__imp__sub_823D0108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D01C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D01C4) {
	__imp__sub_823D01C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D01C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D01D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x823d025c
	if (!ctx.cr6.gt) goto loc_823D025C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823d0048
	ctx.lr = 0x823D0214;
	sub_823D0048(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x823d0048
	ctx.lr = 0x823D0228;
	sub_823D0048(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x823d0048
	ctx.lr = 0x823D0240;
	sub_823D0048(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d0048
	ctx.lr = 0x823D0254;
	sub_823D0048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823D025C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d0048
	ctx.lr = 0x823D0268;
	sub_823D0048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D01C8) {
	__imp__sub_823D01C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D0278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x823d02c4
	if (!ctx.cr0.gt) goto loc_823D02C4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823D02A0:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lhzu r6,-2(r30)
	ea = -2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d0108
	ctx.lr = 0x823D02BC;
	sub_823D0108(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x823d02a0
	if (ctx.cr6.gt) goto loc_823D02A0;
loc_823D02C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D0270) {
	__imp__sub_823D0270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D02CC) {
	__imp__sub_823D02CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D02D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D02D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d03b0
	if (ctx.cr6.eq) goto loc_823D03B0;
	// addi r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d03b0
	if (ctx.cr6.eq) goto loc_823D03B0;
	// subfic r24,r3,2
	ctx.xer.ca = ctx.r3.u32 <= 2;
	ctx.r24.s64 = 2 - ctx.r3.s64;
loc_823D0300:
	// lhz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x823D031C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0358
	if (ctx.cr6.eq) goto loc_823D0358;
	// add r11,r24,r30
	ctx.r11.u64 = ctx.r24.u64 + ctx.r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823d0350
	if (!ctx.cr0.gt) goto loc_823D0350;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x823e0230
	ctx.lr = 0x823D0350;
	sub_823E0230(ctx, base);
loc_823D0350:
	// sth r25,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r25.u16);
	// b 0x823d03a4
	goto loc_823D03A4;
loc_823D0358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,-2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// addi r31,r30,-2
	ctx.r31.s64 = ctx.r30.s64 + -2;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x823D036C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d03a0
	if (ctx.cr6.eq) goto loc_823D03A0;
loc_823D0378:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lhzu r4,-2(r31)
	ea = -2 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// bctrl 
	ctx.lr = 0x823D0394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d0378
	if (!ctx.cr6.eq) goto loc_823D0378;
loc_823D03A0:
	// sth r25,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r25.u16);
loc_823D03A4:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823d0300
	if (!ctx.cr6.eq) goto loc_823D0300;
loc_823D03B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D02D0) {
	__imp__sub_823D02D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D03B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D03C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d01c8
	ctx.lr = 0x823D03FC;
	sub_823D01C8(ctx, base);
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823d0450
	if (!ctx.cr6.lt) goto loc_823D0450;
loc_823D0408:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// lhz r3,-2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823D041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0450
	if (!ctx.cr6.eq) goto loc_823D0450;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0450
	if (!ctx.cr6.eq) goto loc_823D0450;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823d0408
	if (ctx.cr6.lt) goto loc_823D0408;
loc_823D0450:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823d049c
	if (!ctx.cr6.lt) goto loc_823D049C;
loc_823D0458:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d049c
	if (!ctx.cr6.eq) goto loc_823D049C;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d049c
	if (!ctx.cr6.eq) goto loc_823D049C;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823d0458
	if (ctx.cr6.lt) goto loc_823D0458;
loc_823D049C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_823D04A4:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823d0510
	if (!ctx.cr6.lt) goto loc_823D0510;
loc_823D04AC:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D04BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0504
	if (!ctx.cr6.eq) goto loc_823D0504;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D04D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0510
	if (!ctx.cr6.eq) goto loc_823D0510;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d0504
	if (ctx.cr6.eq) goto loc_823D0504;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
loc_823D0504:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823d04ac
	if (ctx.cr6.lt) goto loc_823D04AC;
loc_823D0510:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823d0584
	if (!ctx.cr6.gt) goto loc_823D0584;
	// addi r30,r27,-2
	ctx.r30.s64 = ctx.r27.s64 + -2;
loc_823D051C:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D052C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0570
	if (!ctx.cr6.eq) goto loc_823D0570;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x823D0548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d0580
	if (!ctx.cr6.eq) goto loc_823D0580;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823d0570
	if (ctx.cr6.eq) goto loc_823D0570;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_823D0570:
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823d051c
	if (ctx.cr6.lt) goto loc_823D051C;
loc_823D0580:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_823D0584:
	// bne cr6,0x823d05e0
	if (!ctx.cr6.eq) goto loc_823D05E0;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x823d0648
	if (ctx.cr6.eq) goto loc_823D0648;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d05b0
	if (ctx.cr6.eq) goto loc_823D05B0;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823d05b0
	if (ctx.cr6.eq) goto loc_823D05B0;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
loc_823D05B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d04a4
	if (ctx.cr6.eq) goto loc_823D04A4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x823d04a4
	goto loc_823D04A4;
loc_823D05E0:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// bne cr6,0x823d0628
	if (!ctx.cr6.eq) goto loc_823D0628;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823d0608
	if (ctx.cr6.eq) goto loc_823D0608;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_823D0608:
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823d04a4
	if (ctx.cr6.eq) goto loc_823D04A4;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// b 0x823d04a4
	goto loc_823D04A4;
loc_823D0628:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823d0640
	if (ctx.cr6.eq) goto loc_823D0640;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
loc_823D0640:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x823d04a4
	goto loc_823D04A4;
loc_823D0648:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D03B8) {
	__imp__sub_823D03B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D065C) {
	__imp__sub_823D065C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D0668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d06bc
	if (!ctx.cr6.gt) goto loc_823D06BC;
	// addi r29,r3,-2
	ctx.r29.s64 = ctx.r3.s64 + -2;
loc_823D0688:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// lhzx r6,r29,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r11,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u16);
	// bl 0x823d0108
	ctx.lr = 0x823D06AC;
	sub_823D0108(ctx, base);
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823d0688
	if (ctx.cr6.gt) goto loc_823D0688;
loc_823D06BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D0660) {
	__imp__sub_823D0660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D06C4) {
	__imp__sub_823D06C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D06C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D06D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823d0780
	if (!ctx.cr6.gt) goto loc_823D0780;
loc_823D06F4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823d07a4
	if (!ctx.cr6.gt) goto loc_823D07A4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d03b8
	ctx.lr = 0x823D0710;
	sub_823D03B8(ctx, base);
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
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x823d0760
	if (!ctx.cr6.lt) goto loc_823D0760;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d06c8
	ctx.lr = 0x823D0758;
	sub_823D06C8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x823d0770
	goto loc_823D0770;
loc_823D0760:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d06c8
	ctx.lr = 0x823D076C;
	sub_823D06C8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_823D0770:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x823d06f4
	if (ctx.cr6.gt) goto loc_823D06F4;
loc_823D0780:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d079c
	if (!ctx.cr6.gt) goto loc_823D079C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d02d0
	ctx.lr = 0x823D079C;
	sub_823D02D0(ctx, base);
loc_823D079C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823D07A4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x823d0780
	if (!ctx.cr6.gt) goto loc_823D0780;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d07cc
	if (!ctx.cr6.gt) goto loc_823D07CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d0270
	ctx.lr = 0x823D07CC;
	sub_823D0270(ctx, base);
loc_823D07CC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d0660
	ctx.lr = 0x823D07DC;
	sub_823D0660(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D06C8) {
	__imp__sub_823D06C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D07E4) {
	__imp__sub_823D07E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r6,5484(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
loc_823D07F8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d07f8
	if (!ctx.cr0.eq) goto loc_823D07F8;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r4,72
	ctx.r4.s64 = 4718592;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D07E8) {
	__imp__sub_823D07E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f3,f2,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f6,f5,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f4,f3,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fadds f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D0830) {
	__imp__sub_823D0830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D08C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D08C4) {
	__imp__sub_823D08C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D08C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823D08D0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823ddff0
	ctx.lr = 0x823D08D8;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// bne cr6,0x823d0bbc
	if (!ctx.cr6.eq) goto loc_823D0BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,60(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfic r8,r29,-3
	ctx.xer.ca = ctx.r29.u32 <= 4294967293;
	ctx.r8.s64 = -3 - ctx.r29.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x822f19e8
	ctx.lr = 0x823D0938;
	sub_822F19E8(ctx, base);
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rotlwi r11,r4,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// add r25,r3,r11
	ctx.r25.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x823d0ba4
	if (ctx.cr6.eq) goto loc_823D0BA4;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// addi r27,r11,24448
	ctx.r27.s64 = ctx.r11.s64 + 24448;
loc_823D0964:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r9,r9,31,1,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFE0;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r9,r25
	ctx.r10.u64 = ctx.r9.u64 + ctx.r25.u64;
	// sth r8,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r8.u16);
	// lfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// sth r6,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r6.u16);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f13,f10
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f26,f11,f9
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f25,f8,f7
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f22,f6,f9
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f24,f11,f7
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f23,f13,f7
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f21,f0,f2
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f20,f3,f1
	ctx.f20.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fadds f19,f27,f26
	ctx.f19.f64 = double(float(ctx.f27.f64 + ctx.f26.f64));
	// fadds f27,f27,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// fadds f26,f26,f25
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fmuls f18,f5,f4
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fadds f25,f22,f23
	ctx.f25.f64 = double(float(ctx.f22.f64 + ctx.f23.f64));
	// fsubs f17,f24,f10
	ctx.f17.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fsubs f24,f9,f7
	ctx.f24.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fmuls f16,f3,f2
	ctx.f16.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fsubs f19,f31,f19
	ctx.f19.f64 = double(float(ctx.f31.f64 - ctx.f19.f64));
	// fsubs f27,f31,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// fmuls f15,f5,f2
	ctx.f15.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f14,f5,f1
	ctx.f14.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f25,f12,f25
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f17,f12,f17
	ctx.f17.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// fsubs f23,f23,f22
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f22.f64));
	// fadds f22,f18,f21
	ctx.f22.f64 = double(float(ctx.f18.f64 + ctx.f21.f64));
	// fmuls f2,f29,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmuls f1,f29,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// fmuls f7,f12,f19
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f19.f64));
	// fsubs f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fadds f26,f18,f20
	ctx.f26.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// fmuls f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmadds f25,f30,f24,f25
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f24.f64 + ctx.f25.f64));
	// fmadds f27,f30,f27,f17
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 + ctx.f17.f64));
	// fadds f24,f20,f21
	ctx.f24.f64 = double(float(ctx.f20.f64 + ctx.f21.f64));
	// fsubs f22,f31,f22
	ctx.f22.f64 = double(float(ctx.f31.f64 - ctx.f22.f64));
	// fadds f21,f14,f2
	ctx.f21.f64 = double(float(ctx.f14.f64 + ctx.f2.f64));
	// fsubs f20,f15,f1
	ctx.f20.f64 = double(float(ctx.f15.f64 - ctx.f1.f64));
	// fmadds f10,f30,f10,f7
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fadds f18,f1,f15
	ctx.f18.f64 = double(float(ctx.f1.f64 + ctx.f15.f64));
	// fsubs f26,f31,f26
	ctx.f26.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fadds f19,f4,f16
	ctx.f19.f64 = double(float(ctx.f4.f64 + ctx.f16.f64));
	// fnmadds f25,f28,f12,f25
	ctx.f25.f64 = double(float(-(ctx.f28.f64 * ctx.f12.f64 + ctx.f25.f64)));
	// fnmadds f27,f28,f9,f27
	ctx.f27.f64 = double(float(-(ctx.f28.f64 * ctx.f9.f64 + ctx.f27.f64)));
	// fsubs f30,f16,f4
	ctx.f30.f64 = double(float(ctx.f16.f64 - ctx.f4.f64));
	// fsubs f17,f14,f2
	ctx.f17.f64 = double(float(ctx.f14.f64 - ctx.f2.f64));
	// fmuls f9,f29,f8
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fnmadds f28,f28,f23,f10
	ctx.f28.f64 = double(float(-(ctx.f28.f64 * ctx.f23.f64 + ctx.f10.f64)));
	// fmuls f7,f29,f11
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f23,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f16,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f16.f64 = double(temp.f32);
	// fmsubs f1,f0,f6,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 - ctx.f9.f64));
	// lfs f15,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f24,f31,f24
	ctx.f24.f64 = double(float(ctx.f31.f64 - ctx.f24.f64));
	// fmsubs f12,f3,f6,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmadds f10,f29,f13,f4
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f9,f29,f6,f2
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fnmsubs f7,f3,f13,f1
	ctx.f7.f64 = double(float(-(ctx.f3.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fmadds f4,f0,f13,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f2,f5,f6,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fmadds f1,f3,f11,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f13,f5,f11,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f12,f5,f8,f4
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f8.f64 - ctx.f4.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f3,f8,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f10,f0,f8,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822da9b0
	ctx.lr = 0x823D0B0C;
	sub_822DA9B0(ctx, base);
	// fmuls f9,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fmuls f8,f22,f27
	ctx.f8.f64 = double(float(ctx.f22.f64 * ctx.f27.f64));
	// lis r5,6
	ctx.r5.s64 = 393216;
	// fmuls f7,f21,f27
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f27.f64));
	// lis r4,6
	ctx.r4.s64 = 393216;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// ori r11,r5,20776
	ctx.r11.u64 = ctx.r5.u64 | 20776;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// ori r10,r4,20780
	ctx.r10.u64 = ctx.r4.u64 | 20780;
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// ori r9,r3,20784
	ctx.r9.u64 = ctx.r3.u64 | 20784;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// lfsx f0,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f18,f25,f9
	ctx.f6.f64 = double(float(ctx.f18.f64 * ctx.f25.f64 + ctx.f9.f64));
	// lfsx f13,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f17,f25,f8
	ctx.f5.f64 = double(float(ctx.f17.f64 * ctx.f25.f64 + ctx.f8.f64));
	// lfsx f12,r27,r9
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f24,f25,f7
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f25.f64 + ctx.f7.f64));
	// fmadds f3,f28,f26,f6
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 + ctx.f6.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f19,f28,f5
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f20,f28,f4
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f28.f64 + ctx.f4.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f7,f3,f23
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f23.f64));
	// fadds f6,f1,f16
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f16.f64));
	// fadds f5,f10,f15
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f15.f64));
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfsu f2,32(r31)
	ea = 32 + ctx.r31.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bne 0x823d0964
	if (!ctx.cr0.eq) goto loc_823D0964;
loc_823D0BA4:
	// rlwinm r11,r24,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de03c
	ctx.lr = 0x823D0BB8;
	__restfpr_14(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823D0BBC:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de03c
	ctx.lr = 0x823D0BF4;
	__restfpr_14(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D08C8) {
	__imp__sub_823D08C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D0BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823D0C00;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12704(r1)
	ea = -12704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r5,12740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12740, ctx.r5.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// bl 0x822f19f0
	ctx.lr = 0x823D0C38;
	sub_822F19F0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// beq cr6,0x823d0fa4
	if (ctx.cr6.eq) goto loc_823D0FA4;
	// addi r17,r18,72
	ctx.r17.s64 = ctx.r18.s64 + 72;
	// li r16,-3
	ctx.r16.s64 = -3;
loc_823D0C80:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x823D0C8C;
	sub_822F1EB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82300b38
	ctx.lr = 0x823D0C94;
	sub_82300B38(ctx, base);
	// lbzx r11,r17,r21
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r21.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x823d0ed8
	if (ctx.cr6.lt) goto loc_823D0ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r23.u8);
	// bl 0x82300b40
	ctx.lr = 0x823D0CB4;
	sub_82300B40(ctx, base);
	// lwz r10,104(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 104);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r8,r10,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// sth r24,216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 216, ctx.r24.u16);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r22,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r22.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,214(r1)
	PPC_STORE_U16(ctx.r1.u32 + 214, ctx.r8.u16);
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// bl 0x82300a68
	ctx.lr = 0x823D0CE0;
	sub_82300A68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r30,r23,27
	ctx.r30.u64 = ctx.r23.u32 & 0x1F;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
	// rlwinm r25,r23,27,5,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 27) & 0x7FFFFFF;
	// subfic r27,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r27.s64 = 32 - ctx.r30.s64;
	// bl 0x822f2368
	ctx.lr = 0x823D0D00;
	sub_822F2368(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d0ed8
	if (ctx.cr6.eq) goto loc_823D0ED8;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r28,r11,104
	ctx.r28.s64 = ctx.r11.s64 + 104;
loc_823D0D10:
	// addi r11,r1,8164
	ctx.r11.s64 = ctx.r1.s64 + 8164;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823d0e5c
	if (ctx.cr6.gt) goto loc_823D0E5C;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// neg r11,r25
	ctx.r11.s64 = -ctx.r25.s64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// beq cr6,0x823d0de0
	if (ctx.cr6.eq) goto loc_823D0DE0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// slw r8,r3,r27
	ctx.r8.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r27.u8 & 0x3F));
	// lwzx r7,r9,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r6,r11,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r5,r9,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// srw r15,r10,r30
	ctx.r15.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r4,r9,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// slw r9,r11,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// slw r11,r10,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r27.u8 & 0x3F));
	// srw r10,r5,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r30.u8 & 0x3F));
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// srw r14,r7,r30
	ctx.r14.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r30.u8 & 0x3F));
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// slw r7,r7,r27
	ctx.r7.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r27.u8 & 0x3F));
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// srw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// srw r4,r4,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r30.u8 & 0x3F));
	// slw r5,r5,r27
	ctx.r5.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r27.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r9,r15,r9
	ctx.r9.u64 = ctx.r15.u64 | ctx.r9.u64;
	// or r8,r14,r3
	ctx.r8.u64 = ctx.r14.u64 | ctx.r3.u64;
	// or r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 | ctx.r5.u64;
	// b 0x823d0e10
	goto loc_823D0E10;
loc_823D0DE0:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// addi r15,r1,184
	ctx.r15.s64 = ctx.r1.s64 + 184;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r6,r6,r15
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r15.u32);
loc_823D0E10:
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// and r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 & ctx.r7.u64;
	// lwz r15,232(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// lwz r14,228(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// and r15,r15,r9
	ctx.r15.u64 = ctx.r15.u64 & ctx.r9.u64;
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// and r5,r14,r10
	ctx.r5.u64 = ctx.r14.u64 & ctx.r10.u64;
	// or r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 | ctx.r15.u64;
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & ctx.r11.u64;
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d0e68
	if (ctx.cr6.eq) goto loc_823D0E68;
loc_823D0E5C:
	// stw r16,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r16.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x823d0ecc
	goto loc_823D0ECC;
loc_823D0E68:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r15,108(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r28,-104
	ctx.r4.s64 = ctx.r28.s64 + -104;
	// lwz r14,112(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// or r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 | ctx.r15.u64;
	// or r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 | ctx.r14.u64;
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r14,124(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// or r3,r7,r15
	ctx.r3.u64 = ctx.r7.u64 | ctx.r15.u64;
	// or r11,r6,r14
	ctx.r11.u64 = ctx.r6.u64 | ctx.r14.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x823d08c8
	ctx.lr = 0x823D0EC8;
	sub_823D08C8(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_823D0ECC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,124
	ctx.r28.s64 = ctx.r28.s64 + 124;
	// bne 0x823d0d10
	if (!ctx.cr0.eq) goto loc_823D0D10;
loc_823D0ED8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x823d0c80
	if (ctx.cr6.lt) goto loc_823D0C80;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d0fa4
	if (ctx.cr6.eq) goto loc_823D0FA4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,5484(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
loc_823D0F04:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d0f04
	if (!ctx.cr0.eq) goto loc_823D0F04;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r4,72
	ctx.r4.s64 = 4718592;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823d0f3c
	if (ctx.cr6.gt) goto loc_823D0F3C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x823d0f48
	if (!ctx.cr6.lt) goto loc_823D0F48;
loc_823D0F3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,12704
	ctx.r1.s64 = ctx.r1.s64 + 12704;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_823D0F48:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823d0fa4
	if (ctx.cr6.eq) goto loc_823D0FA4;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_823D0F58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,-4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -4, ctx.xer);
	// bgt cr6,0x823d0f7c
	if (ctx.cr6.gt) goto loc_823D0F7C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// b 0x823d0fa0
	goto loc_823D0FA0;
loc_823D0F7C:
	// cmpwi cr6,r9,-3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -3, ctx.xer);
	// bne cr6,0x823d0f8c
	if (!ctx.cr6.eq) goto loc_823D0F8C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823d0fa0
	goto loc_823D0FA0;
loc_823D0F8C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_823D0FA0:
	// bdnz 0x823d0f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D0F58;
loc_823D0FA4:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// subf r5,r6,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r6.s64;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// addi r4,r11,5444
	ctx.r4.s64 = ctx.r11.s64 + 5444;
loc_823D0FB8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stwcx. r8,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d0fb8
	if (!ctx.cr0.eq) goto loc_823D0FB8;
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823d0f3c
	if (ctx.cr6.gt) goto loc_823D0F3C;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,14464
	ctx.r31.s64 = ctx.r11.s64 + 14464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,68(r18)
	PPC_STORE_U32(ctx.r18.u32 + 68, ctx.r31.u32);
	// bl 0x823de1f0
	ctx.lr = 0x823D1004;
	sub_823DE1F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d1028
	if (ctx.cr6.eq) goto loc_823D1028;
	// lwz r11,12740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 12740);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r3,22
	ctx.r3.s64 = 22;
	// sth r20,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r20.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x823D1028;
	sub_823B7AC8(ctx, base);
loc_823D1028:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,12704
	ctx.r1.s64 = ctx.r1.s64 + 12704;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D0BF8) {
	__imp__sub_823D0BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1034) {
	__imp__sub_823D1034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1038) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1038) {
	__imp__sub_823D1038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1048) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x823d10f0
	if (!ctx.cr6.lt) goto loc_823D10F0;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
loc_823D1078:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d109c
	if (!ctx.cr6.eq) goto loc_823D109C;
	// stwcx. r5,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d1078
	if (!ctx.cr0.eq) goto loc_823D1078;
	// b 0x823d10a4
	goto loc_823D10A4;
loc_823D109C:
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823D10A4:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823d10d8
	if (ctx.cr6.eq) goto loc_823D10D8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823d10f0
	if (ctx.cr6.eq) goto loc_823D10F0;
loc_823D10B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823d10b8
	if (ctx.cr6.eq) goto loc_823D10B8;
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
loc_823D10D8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0bf8
	ctx.lr = 0x823D10E4;
	sub_823D0BF8(ctx, base);
	// lwsync 
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_823D10F0:
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

PPC_WEAK_FUNC(sub_823D1048) {
	__imp__sub_823D1048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1104) {
	__imp__sub_823D1104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1108) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1108) {
	__imp__sub_823D1108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1110) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,16(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r6,20(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bl 0x822f2388
	ctx.lr = 0x823D1164;
	sub_822F2388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x821023f0
	ctx.lr = 0x823D1174;
	sub_821023F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x823D1180;
	sub_822F23E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_823D1110) {
	__imp__sub_823D1110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D119C) {
	__imp__sub_823D119C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D11A0) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D11A0) {
	__imp__sub_823D11A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D11B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D11B8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r3,40
	ctx.r27.s64 = ctx.r3.s64 + 40;
	// li r8,1
	ctx.r8.s64 = 1;
loc_823D11E8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823d120c
	if (!ctx.cr6.eq) goto loc_823D120C;
	// stwcx. r8,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d11e8
	if (!ctx.cr0.eq) goto loc_823D11E8;
	// b 0x823d1214
	goto loc_823D1214;
loc_823D120C:
	// stwcx. r11,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823D1214:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d125c
	if (ctx.cr6.eq) goto loc_823D125C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// bne cr6,0x823d1234
	if (!ctx.cr6.eq) goto loc_823D1234;
loc_823D122C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d1540
	goto loc_823D1540;
loc_823D1234:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823d1234
	if (ctx.cr6.eq) goto loc_823D1234;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823d122c
	if (ctx.cr6.eq) goto loc_823D122C;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// bl 0x822f2360
	ctx.lr = 0x823D1258;
	sub_822F2360(ctx, base);
	// b 0x823d1540
	goto loc_823D1540;
loc_823D125C:
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// addi r5,r29,72
	ctx.r5.s64 = ctx.r29.s64 + 72;
	// lwz r31,108(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1a00
	ctx.lr = 0x823D1278;
	sub_822F1A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d1290
	if (!ctx.cr6.eq) goto loc_823D1290;
loc_823D1280:
	// lwsync 
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d153c
	goto loc_823D153C;
loc_823D1290:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d1110
	ctx.lr = 0x823D12A0;
	sub_823D1110(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1280
	if (ctx.cr6.eq) goto loc_823D1280;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r10,r11,-5872
	ctx.r10.s64 = ctx.r11.s64 + -5872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822f1ca0
	ctx.lr = 0x823D12C8;
	sub_822F1CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1d00
	ctx.lr = 0x823D12D0;
	sub_822F1D00(ctx, base);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823d14f0
	if (!ctx.cr6.gt) goto loc_823D14F0;
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// addi r30,r5,24448
	ctx.r30.s64 = ctx.r5.s64 + 24448;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// addi r9,r9,-5792
	ctx.r9.s64 = ctx.r9.s64 + -5792;
	// ori r4,r4,20784
	ctx.r4.u64 = ctx.r4.u64 | 20784;
	// ori r3,r3,20780
	ctx.r3.u64 = ctx.r3.u64 | 20780;
	// ori r31,r31,20776
	ctx.r31.u64 = ctx.r31.u64 | 20776;
	// lfs f13,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lfsx f12,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfsx f11,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lfsx f10,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
loc_823D133C:
	// srawi r9,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 5;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 & ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d14d8
	if (ctx.cr6.eq) goto loc_823D14D8;
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f31,f9,f3
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// lvrx128 v61,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f30,f2,f4
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lvrx128 v58,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// fmuls f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// vor128 v60,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// fmuls f2,f9,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// vor128 v57,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vslw128 v56,v63,v63
	ctx.v56.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vslw128 v55,v63,v63
	ctx.v55.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// fadds f9,f8,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// fadds f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// vspltw128 v52,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// vspltw128 v12,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vslw128 v54,v63,v63
	ctx.v54.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f4,f31,f30
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f4,f30,f31
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v8,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v51,v8,v56
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// fsubs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f9,f0,f5
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v5,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v53,v63,v63
	ctx.v53.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v53.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v53.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v53.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lvx128 v7,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v11,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// lvx128 v6,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v9,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// vmaddfp v5,v0,v8,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v4,v52,v51
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vandc128 v0,v7,v55
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v12,v12,v7,v5
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vandc128 v8,v6,v54
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v0,v11,v0,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v12,v10,v6,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v50,v12,v127
	simde_mm_store_ps(ctx.v50.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vsubfp128 v49,v0,v126
	simde_mm_store_ps(ctx.v49.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)));
	// vor128 v126,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vxor128 v48,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vminfp128 v47,v50,v49
	simde_mm_store_ps(ctx.v47.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vmaxfp128 v46,v50,v48
	simde_mm_store_ps(ctx.v46.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v12,v46,v47
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vsubfp128 v11,v46,v47
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmaddfp128 v127,v12,v13,v127
	simde_mm_store_ps(ctx.v127.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v126,v11,v126,v0
	simde_mm_store_ps(ctx.v126.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v0.f32)));
loc_823D14D8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rotlwi r6,r6,31
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 31);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// bdnz 0x823d133c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D133C;
loc_823D14F0:
	// vspltw128 v45,v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xFF));
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// vspltw128 v44,v127,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xAA));
	// li r9,4
	ctx.r9.s64 = 4;
	// vspltw128 v43,v127,2
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x55));
	// li r10,8
	ctx.r10.s64 = 8;
	// vspltw128 v42,v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xFF));
	// vspltw128 v41,v126,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xAA));
	// vspltw128 v40,v126,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x55));
	// stvewx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stvewx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// lwsync 
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_823D153C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_823D1540:
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D11B0) {
	__imp__sub_823D11B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1560) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823d11b0
	ctx.lr = 0x823D1580;
	sub_823D11B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1560) {
	__imp__sub_823D1560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1590) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1590) {
	__imp__sub_823D1590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D15A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,16
	ctx.r6.s64 = 16;
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r28,r8,-30336
	ctx.r28.s64 = ctx.r8.s64 + -30336;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lvrx128 v59,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lvrx128 v58,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v57,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v56,v63,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r29,r9,-5808
	ctx.r29.s64 = ctx.r9.s64 + -5808;
	// addi r27,r8,-5824
	ctx.r27.s64 = ctx.r8.s64 + -5824;
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r11,-5840
	ctx.r26.s64 = ctx.r11.s64 + -5840;
	// vslw128 v55,v61,v61
	ctx.v55.u32[0] = ctx.v61.u32[0] << (ctx.v61.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v61.u32[1] << (ctx.v61.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v61.u32[2] << (ctx.v61.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v61.u32[3] << (ctx.v61.u8[12] & 0x1F);
	// vand128 v11,v57,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vand128 v54,v56,v62
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v59,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lvx128 v60,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lvx128 v58,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v10,v11,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vaddfp128 v13,v54,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v60.f32)));
	// beq cr6,0x823d1690
	if (ctx.cr6.eq) goto loc_823D1690;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// addi r7,r11,-30800
	ctx.r7.s64 = ctx.r11.s64 + -30800;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D163C:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v53,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v11,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// vmsum4fp128 v52,v53,v12
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v51,v53,v0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vcmpgtfp128 v50,v58,v52
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vminfp128 v63,v63,v51
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vand128 v49,v50,v61
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// stvewx128 v48,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bdnz 0x823d163c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D163C;
loc_823D1690:
	// vspltw128 v47,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvewx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823d1978
	if (!ctx.cr6.gt) goto loc_823D1978;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823d1740
	if (!ctx.cr6.eq) goto loc_823D1740;
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d16ec
	if (ctx.cr6.eq) goto loc_823D16EC;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_823D16E0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stbx r25,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r25.u8);
	// bdnz 0x823d16e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D16E0;
loc_823D16EC:
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1978
	if (ctx.cr6.eq) goto loc_823D1978;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x823d1978
	if (ctx.cr6.eq) goto loc_823D1978;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,36
	ctx.r8.s64 = 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_823D172C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stbx r25,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r25.u8);
	// bdnz 0x823d172c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D172C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D1740:
	// lhz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823d177c
	if (ctx.cr6.eq) goto loc_823D177C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x823d1978
	if (ctx.cr6.eq) goto loc_823D1978;
loc_823D175C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1598
	ctx.lr = 0x823D1768;
	sub_823D1598(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x823d175c
	if (!ctx.cr0.eq) goto loc_823D175C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D177C:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r10,13412
	ctx.r30.s64 = ctx.r10.s64 + 13412;
	// beq cr6,0x823d1878
	if (ctx.cr6.eq) goto loc_823D1878;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_823D17AC:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d186c
	if (!ctx.cr6.eq) goto loc_823D186C;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v63,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lvrx128 v46,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v44,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v43,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v40,v44,v62
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vand128 v13,v41,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vaddfp128 v12,v40,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v60.f32)));
	// beq cr6,0x823d1838
	if (ctx.cr6.eq) goto loc_823D1838;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_823D181C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v38,v39,v0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vminfp128 v63,v63,v38
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v38.f32)));
	// bdnz 0x823d181c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D181C;
loc_823D1838:
	// vcmpgtfp128 v37,v63,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stvewx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d186c
	if (ctx.cr6.eq) goto loc_823D186C;
	// stb r25,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r25.u8);
	// lvx128 v60,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lvx128 v58,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D186C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bne 0x823d17ac
	if (!ctx.cr0.eq) goto loc_823D17AC;
loc_823D1878:
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1978
	if (ctx.cr6.eq) goto loc_823D1978;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r8,72(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x823d1978
	if (ctx.cr6.eq) goto loc_823D1978;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,36
	ctx.r7.s64 = 36;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_823D18B4:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d196c
	if (!ctx.cr6.eq) goto loc_823D196C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// vor128 v63,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lvrx128 v35,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v33,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// lvrx128 v32,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v61,v32
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vand128 v56,v33,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vand128 v13,v57,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vaddfp128 v12,v56,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// beq cr6,0x823d1938
	if (ctx.cr6.eq) goto loc_823D1938;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_823D191C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v55,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v54,v55,v0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vminfp128 v63,v63,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// bdnz 0x823d191c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D191C;
loc_823D1938:
	// vcmpgtfp128 v53,v63,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// stvewx128 v52,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d196c
	if (ctx.cr6.eq) goto loc_823D196C;
	// stb r25,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r25.u8);
	// lvx128 v60,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lvx128 v59,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D196C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bne 0x823d18b4
	if (!ctx.cr0.eq) goto loc_823D18B4;
loc_823D1978:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1598) {
	__imp__sub_823D1598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvrx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lfs f12,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,-4(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f7,f12,f0,f13
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f9,f10,f0,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsel f8,f11,f0,f13
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1980) {
	__imp__sub_823D1980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D19E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D19E4) {
	__imp__sub_823D19E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D19E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d1a9c
	if (ctx.cr6.eq) goto loc_823D1A9C;
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823d1a90
	if (ctx.cr6.eq) goto loc_823D1A90;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
loc_823D1A40:
	// lvrx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f7,f12,f0,f13
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f9,f10,f0,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f8,f11,f0,f13
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823d1a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1A40;
loc_823D1A90:
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823d1598
	ctx.lr = 0x823D1A9C;
	sub_823D1598(ctx, base);
loc_823D1A9C:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D19E8) {
	__imp__sub_823D19E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1AAC) {
	__imp__sub_823D1AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1AB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,36
	ctx.r10.s64 = 36;
	// lwzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// b 0x823d19e8
	sub_823D19E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1AB0) {
	__imp__sub_823D1AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1AEC) {
	__imp__sub_823D1AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823D1AF8;
	__savegprlr_22(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r23,r10,4608
	ctx.r23.s64 = ctx.r10.s64 + 4608;
	// lwz r6,8456(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d1d14
	if (ctx.cr6.eq) goto loc_823D1D14;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r7,592(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 592);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,604(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 604);
	// li r9,16
	ctx.r9.s64 = 16;
	// add r22,r10,r8
	ctx.r22.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r7,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u32);
	// stwx r3,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u32);
	// ble cr6,0x823d1bbc
	if (!ctx.cr6.gt) goto loc_823D1BBC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r1,44
	ctx.r8.s64 = ctx.r1.s64 + 44;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
loc_823D1B6C:
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// lvrx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f11,f0,f13
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f7,f9,f0,f13
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 32, temp.u32);
	// stfs f8,36(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f7,40(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 40, temp.u32);
	// lvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823d1b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1B6C;
loc_823D1BBC:
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d1d14
	if (!ctx.cr6.gt) goto loc_823D1D14;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r10,-30336
	ctx.r27.s64 = ctx.r10.s64 + -30336;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r25,r11,-5840
	ctx.r25.s64 = ctx.r11.s64 + -5840;
	// addi r30,r10,-5808
	ctx.r30.s64 = ctx.r10.s64 + -5808;
	// addi r29,r8,-5824
	ctx.r29.s64 = ctx.r8.s64 + -5824;
	// addi r28,r7,13412
	ctx.r28.s64 = ctx.r7.s64 + 13412;
loc_823D1C04:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d1d00
	if (!ctx.cr6.gt) goto loc_823D1D00;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_823D1C24:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,616(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 616);
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d1ce4
	if (!ctx.cr6.eq) goto loc_823D1CE4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v59,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lvrx128 v58,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v53,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vand128 v52,v56,v62
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vand128 v13,v53,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vaddfp128 v12,v52,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v59.f32)));
	// beq cr6,0x823d1cb8
	if (ctx.cr6.eq) goto loc_823D1CB8;
	// addi r11,r1,48
	ctx.r11.s64 = ctx.r1.s64 + 48;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_823D1C9C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v51,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v50,v51,v0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vminfp128 v63,v63,v50
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v50.f32)));
	// bdnz 0x823d1c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1C9C;
loc_823D1CB8:
	// lvx128 v49,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// vcmpgtfp128 v48,v63,v49
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vspltw128 v47,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// stvewx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d1ce4
	if (ctx.cr6.eq) goto loc_823D1CE4;
	// stb r26,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r26.u8);
	// lvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,8456(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
loc_823D1CE4:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d1c24
	if (ctx.cr6.lt) goto loc_823D1C24;
loc_823D1D00:
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d1c04
	if (ctx.cr6.lt) goto loc_823D1C04;
loc_823D1D14:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1AF0) {
	__imp__sub_823D1AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1D1C) {
	__imp__sub_823D1D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D20) {
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

PPC_WEAK_FUNC(sub_823D1D20) {
	__imp__sub_823D1D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1D44) {
	__imp__sub_823D1D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// b 0x823d54e8
	sub_823D54E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1D48) {
	__imp__sub_823D1D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d1d78
	if (ctx.cr6.eq) goto loc_823D1D78;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823d1d7c
	goto loc_823D1D7C;
loc_823D1D78:
	// li r11,2
	ctx.r11.s64 = 2;
loc_823D1D7C:
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x823d54e8
	sub_823D54E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1D50) {
	__imp__sub_823D1D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1D84) {
	__imp__sub_823D1D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r3,5488
	ctx.r9.s64 = ctx.r3.s64 + 5488;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r3,4748
	ctx.r10.s64 = ctx.r3.s64 + 4748;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823D1DB4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x823d1db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1DB4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D1D88) {
	__imp__sub_823D1D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1DE8) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,5640(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5640);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d1e24
	if (ctx.cr6.eq) goto loc_823D1E24;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stw r10,5640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5640, ctx.r10.u32);
	// bl 0x823c7e40
	ctx.lr = 0x823D1E24;
	sub_823C7E40(ctx, base);
loc_823D1E24:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D1E30;
	sub_823C7D58(ctx, base);
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

PPC_WEAK_FUNC(sub_823D1DE8) {
	__imp__sub_823D1DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D1E44) {
	__imp__sub_823D1E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D1E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823D1E50;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ld r22,0(r3)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// std r22,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r22.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D1E70;
	sub_823D4EC0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r9,5640(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5640);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r21,0(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x823d1ea8
	if (ctx.cr6.eq) goto loc_823D1EA8;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stw r10,5640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5640, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D1EA8;
	sub_823C7E40(ctx, base);
loc_823D1EA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D1EB4;
	sub_823C7D58(ctx, base);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D1EC8;
	sub_823D54E8(ctx, base);
	// lwz r10,5692(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5692);
	// lwz r9,208(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d1ee8
	if (ctx.cr6.eq) goto loc_823D1EE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D1EE8;
	sub_823C85C8(ctx, base);
loc_823D1EE8:
	// lwz r11,4924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4924);
	// mulli r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 * 92;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// addi r26,r10,4928
	ctx.r26.s64 = ctx.r10.s64 + 4928;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r28,r28,14464
	ctx.r28.s64 = ctx.r28.s64 + 14464;
	// bl 0x823c92c8
	ctx.lr = 0x823D1F0C;
	sub_823C92C8(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r9,256
	ctx.r9.s64 = 256;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// and r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_823D1F38:
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d1f60
	if (!ctx.cr6.eq) goto loc_823D1F60;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d1ffc
	if (ctx.cr6.eq) goto loc_823D1FFC;
loc_823D1F60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d1f88
	if (ctx.cr6.eq) goto loc_823D1F88;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D1F84;
	sub_823C86E8(ctx, base);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
loc_823D1F88:
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1fe8
	if (ctx.cr6.eq) goto loc_823D1FE8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r29,5488
	ctx.r9.s64 = ctx.r29.s64 + 5488;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r10,r29,4748
	ctx.r10.s64 = ctx.r29.s64 + 4748;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823D1FB8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x823d1fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1FB8;
loc_823D1FE8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D1FF0;
	sub_823D4BE0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D1FF8;
	sub_823D4BA0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D1FFC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823d2030
	if (ctx.cr6.eq) goto loc_823D2030;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x823d1f38
	if (ctx.cr6.eq) goto loc_823D1F38;
loc_823D2030:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d2054
	if (ctx.cr6.eq) goto loc_823D2054;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r25,144
	ctx.r3.s64 = ctx.r25.s64 + 144;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D2054;
	sub_823C86E8(ctx, base);
loc_823D2054:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D1E48) {
	__imp__sub_823D1E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D205C) {
	__imp__sub_823D205C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2060) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D2060) {
	__imp__sub_823D2060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823D2070;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D208C;
	sub_823D4EC0(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r9,5640(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5640);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x823d20c0
	if (ctx.cr6.eq) goto loc_823D20C0;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stw r10,5640(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5640, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D20C0;
	sub_823C7E40(ctx, base);
loc_823D20C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D20CC;
	sub_823C7D58(ctx, base);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 152, ctx.r11.u32);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823d54e8
	ctx.lr = 0x823D20E4;
	sub_823D54E8(ctx, base);
	// lwz r10,5692(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5692);
	// lwz r9,208(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d2104
	if (ctx.cr6.eq) goto loc_823D2104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D2104;
	sub_823C85C8(ctx, base);
loc_823D2104:
	// lwz r11,4924(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4924);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r26,r11,5112
	ctx.r26.s64 = ctx.r11.s64 + 5112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823c92c8
	ctx.lr = 0x823D2118;
	sub_823C92C8(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r11,8448
	ctx.r11.s64 = 8448;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cmpwi cr6,r19,9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 9, ctx.xer);
	// beq cr6,0x823d2148
	if (ctx.cr6.eq) goto loc_823D2148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D2144;
	sub_823D4BE0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D2148:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// addi r21,r11,3224
	ctx.r21.s64 = ctx.r11.s64 + 3224;
	// b 0x823d2160
	goto loc_823D2160;
loc_823D215C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D2160:
	// cmpwi cr6,r19,9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 9, ctx.xer);
	// bne cr6,0x823d21d8
	if (!ctx.cr6.eq) goto loc_823D21D8;
	// lhz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d21d8
	if (ctx.cr6.eq) goto loc_823D21D8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d21b0
	if (ctx.cr6.eq) goto loc_823D21B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D218C;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D21A8;
	sub_823C86E8(ctx, base);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_823D21B0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x823b9690
	ctx.lr = 0x823D21C0;
	sub_823B9690(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,5(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bl 0x823c9758
	ctx.lr = 0x823D21CC;
	sub_823C9758(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D21D4;
	sub_823D4BE0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D21D8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823d2228
	if (ctx.cr6.eq) goto loc_823D2228;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d2224
	if (ctx.cr6.eq) goto loc_823D2224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D2204;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D2220;
	sub_823C86E8(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_823D2224:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_823D2228:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x823d2298
	if (ctx.cr6.eq) goto loc_823D2298;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x823d2298
	if (!ctx.cr6.eq) goto loc_823D2298;
	// bl 0x8236b940
	ctx.lr = 0x823D2260;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d215c
	if (!ctx.cr6.lt) goto loc_823D215C;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r21,96
	ctx.r10.s64 = ctx.r21.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d215c
	if (ctx.cr6.eq) goto loc_823D215C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d215c
	if (!ctx.cr0.lt) goto loc_823D215C;
	// bl 0x823905c8
	ctx.lr = 0x823D2294;
	sub_823905C8(ctx, base);
	// b 0x823d215c
	goto loc_823D215C;
loc_823D2298:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d22c4
	if (ctx.cr6.eq) goto loc_823D22C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D22A8;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D22C4;
	sub_823C86E8(ctx, base);
loc_823D22C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2068) {
	__imp__sub_823D2068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D22CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D22CC) {
	__imp__sub_823D22CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D22D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823D22D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D22F4;
	sub_823D4EC0(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r9,5640(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5640);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x823d2328
	if (ctx.cr6.eq) goto loc_823D2328;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stw r10,5640(r25)
	PPC_STORE_U32(ctx.r25.u32 + 5640, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D2328;
	sub_823C7E40(ctx, base);
loc_823D2328:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D2334;
	sub_823C7D58(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r11.u32);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x823d54e8
	ctx.lr = 0x823D234C;
	sub_823D54E8(ctx, base);
	// lwz r10,5692(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5692);
	// lwz r9,208(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d236c
	if (ctx.cr6.eq) goto loc_823D236C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D236C;
	sub_823C85C8(ctx, base);
loc_823D236C:
	// lwz r11,4924(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4924);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r11,5204
	ctx.r27.s64 = ctx.r11.s64 + 5204;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823c92c8
	ctx.lr = 0x823D2380;
	sub_823C92C8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r24,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r24.u16);
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r21,-31799
	ctx.r21.s64 = -2083979264;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
loc_823D23BC:
	// cmpwi cr6,r19,9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 9, ctx.xer);
	// bne cr6,0x823d2478
	if (!ctx.cr6.eq) goto loc_823D2478;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d2478
	if (ctx.cr6.eq) goto loc_823D2478;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d240c
	if (ctx.cr6.eq) goto loc_823D240C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D23E8;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D2404;
	sub_823C86E8(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
loc_823D240C:
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823d2440
	if (ctx.cr6.eq) goto loc_823D2440;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x823d2430
	if (!ctx.cr6.gt) goto loc_823D2430;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823d2430
	if (ctx.cr6.gt) goto loc_823D2430;
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// b 0x823d2458
	goto loc_823D2458;
loc_823D2430:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c96b0
	ctx.lr = 0x823D243C;
	sub_823C96B0(ctx, base);
	// b 0x823d2460
	goto loc_823D2460;
loc_823D2440:
	// lwz r11,13412(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13412);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mulli r10,r9,44
	ctx.r10.s64 = ctx.r9.s64 * 44;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,34(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
loc_823D2458:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823b9690
	ctx.lr = 0x823D2460;
	sub_823B9690(ctx, base);
loc_823D2460:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x823c9758
	ctx.lr = 0x823D246C;
	sub_823C9758(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D2474;
	sub_823D4BE0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D2478:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823d24c8
	if (ctx.cr6.eq) goto loc_823D24C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d24c4
	if (ctx.cr6.eq) goto loc_823D24C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D24A4;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D24C0;
	sub_823C86E8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823D24C4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_823D24C8:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x823d24fc
	if (ctx.cr6.eq) goto loc_823D24FC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x823d23bc
	if (ctx.cr6.eq) goto loc_823D23BC;
loc_823D24FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d2528
	if (ctx.cr6.eq) goto loc_823D2528;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D250C;
	sub_823D4BA0(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D2528;
	sub_823C86E8(ctx, base);
loc_823D2528:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D22D0) {
	__imp__sub_823D22D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4936(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4932(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,4952(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4952);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4948(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4948);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4944(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4944);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,4968(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4968);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4964(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4964);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4960(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4960);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f8,32(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D2530) {
	__imp__sub_823D2530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D257C) {
	__imp__sub_823D257C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D2588;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f30,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x823d25d8
	if (ctx.cr6.eq) goto loc_823D25D8;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x822d47f0
	ctx.lr = 0x823D25CC;
	sub_822D47F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823d25dc
	if (ctx.cr6.eq) goto loc_823D25DC;
loc_823D25D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D25DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2680
	if (!ctx.cr6.eq) goto loc_823D2680;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f13,f0,f31,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fdivs f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f6,f5,f10
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4ca8
	ctx.lr = 0x823D2668;
	sub_822D4CA8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x823d26b0
	if (!ctx.cr6.lt) goto loc_823D26B0;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x823d26b0
	if (!ctx.cr6.lt) goto loc_823D26B0;
loc_823D2680:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823D26B0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lfs f12,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f0,f31,f6
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f6,f2
	ctx.cr6.compare(ctx.f6.f64, ctx.f2.f64);
	// bge cr6,0x823d272c
	if (!ctx.cr6.lt) goto loc_823D272C;
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_823D272C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2580) {
	__imp__sub_823D2580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D273C) {
	__imp__sub_823D273C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D2748;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4932(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4932);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f12,4936(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4936);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,4944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4944);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,4948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4948);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4952);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4960);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4964);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	ctx.f6.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x823d2580
	ctx.lr = 0x823D27B0;
	sub_823D2580(ctx, base);
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r11,2672
	ctx.r8.s64 = ctx.r11.s64 + 2672;
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,6232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,67
	ctx.r10.s64 = ctx.r29.s64 + 67;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r7,r10,224
	ctx.r7.s64 = ctx.r10.s64 + 224;
	// addi r6,r10,2672
	ctx.r6.s64 = ctx.r10.s64 + 2672;
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lhzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sthx r4,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r4.u16);
	// lbz r4,45(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// lbz r5,47(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// lbz r3,46(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lhzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sthx r10,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u16);
	// bne cr6,0x823d2920
	if (!ctx.cr6.eq) goto loc_823D2920;
	// stfs f13,3680(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3680, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,3684(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3684, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f11,3688(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3688, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,3692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3692, temp.u32);
	// lhz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5356);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,5356(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5356, ctx.r7.u16);
	// lfs f12,8664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8664);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f13,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,4712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4712, temp.u32);
	// stfs f9,4708(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4708, temp.u32);
	// stfs f0,4716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4716, temp.u32);
	// stfs f8,4704(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4704, temp.u32);
	// lhz r11,5484(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5484);
	// lfs f7,5272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5272);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lfs f11,2424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2424);
	ctx.f11.f64 = double(temp.f32);
	// sth r4,5484(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5484, ctx.r4.u16);
	// stfs f0,4720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4720, temp.u32);
	// stfs f11,4728(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4728, temp.u32);
	// stfs f7,4732(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4732, temp.u32);
	// stfs f0,4724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4724, temp.u32);
	// lhz r11,5486(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5486);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5486(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5486, ctx.r11.u16);
loc_823D2920:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2740) {
	__imp__sub_823D2740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D2930;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r7,r11,6330
	ctx.r7.s64 = ctx.r11.s64 + 6330;
	// lwz r11,4924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4924);
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823d2740
	ctx.lr = 0x823D2978;
	sub_823D2740(ctx, base);
	// lwz r6,56(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d29a8
	if (ctx.cr6.eq) goto loc_823D29A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d2740
	ctx.lr = 0x823D2998;
	sub_823D2740(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d2740
	ctx.lr = 0x823D29A8;
	sub_823D2740(ctx, base);
loc_823D29A8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ec0
	ctx.lr = 0x823D29B0;
	sub_823D4EC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D29BC;
	sub_823C7D58(ctx, base);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D29D0;
	sub_823D54E8(ctx, base);
	// lwz r10,5692(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5692);
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d29f0
	if (ctx.cr6.eq) goto loc_823D29F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D29F0;
	sub_823C85C8(ctx, base);
loc_823D29F0:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,-19840
	ctx.r29.s64 = ctx.r11.s64 + -19840;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x823d2a50
	if (ctx.cr6.eq) goto loc_823D2A50;
	// addi r10,r29,196
	ctx.r10.s64 = ctx.r29.s64 + 196;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d2a30
	if (ctx.cr6.eq) goto loc_823D2A30;
	// addi r11,r29,196
	ctx.r11.s64 = ctx.r29.s64 + 196;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820c0f58
	ctx.lr = 0x823D2A30;
	sub_820C0F58(ctx, base);
loc_823D2A30:
	// addi r4,r29,164
	ctx.r4.s64 = ctx.r29.s64 + 164;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r27,6
	ctx.r27.s64 = 6;
	// bl 0x823c7530
	ctx.lr = 0x823D2A4C;
	sub_823C7530(ctx, base);
	// b 0x823d2a8c
	goto loc_823D2A8C;
loc_823D2A50:
	// addi r10,r29,132
	ctx.r10.s64 = ctx.r29.s64 + 132;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d2a70
	if (ctx.cr6.eq) goto loc_823D2A70;
	// addi r11,r29,132
	ctx.r11.s64 = ctx.r29.s64 + 132;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,132
	ctx.r4.s64 = ctx.r29.s64 + 132;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820c0f58
	ctx.lr = 0x823D2A70;
	sub_820C0F58(ctx, base);
loc_823D2A70:
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7530
	ctx.lr = 0x823D2A84;
	sub_823C7530(ctx, base);
	// li r29,4
	ctx.r29.s64 = 4;
	// li r27,2
	ctx.r27.s64 = 2;
loc_823D2A8C:
	// lwz r11,5640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5640);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823d2aa8
	if (ctx.cr6.eq) goto loc_823D2AA8;
	// stw r28,5640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5640, ctx.r28.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7e30
	ctx.lr = 0x823D2AA8;
	sub_823C7E30(ctx, base);
loc_823D2AA8:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2af8
	if (ctx.cr6.eq) goto loc_823D2AF8;
	// lwz r11,5644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5644);
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d2ad8
	if (ctx.cr6.eq) goto loc_823D2AD8;
	// stw r4,5644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5644, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7e60
	ctx.lr = 0x823D2AD8;
	sub_823C7E60(ctx, base);
loc_823D2AD8:
	// lwz r11,5648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d2af8
	if (ctx.cr6.eq) goto loc_823D2AF8;
	// stw r4,5648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5648, ctx.r4.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7e60
	ctx.lr = 0x823D2AF8;
	sub_823C7E60(ctx, base);
loc_823D2AF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D2B00;
	sub_823D4BE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D2B08;
	sub_823D4BA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// mullw r7,r11,r29
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c86e8
	ctx.lr = 0x823D2B3C;
	sub_823C86E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2928) {
	__imp__sub_823D2928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D2B44) {
	__imp__sub_823D2B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2B48) {
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
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r4,r4,68
	ctx.r4.s64 = ctx.r4.s64 + 68;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x823d2ba0
	if (ctx.cr6.eq) goto loc_823D2BA0;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c0f58
	ctx.lr = 0x823D2BA0;
	sub_820C0F58(ctx, base);
loc_823D2BA0:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4924);
	// lwz r11,5484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x823c7530
	ctx.lr = 0x823D2BC0;
	sub_823C7530(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c86e8
	ctx.lr = 0x823D2BCC;
	sub_823C86E8(ctx, base);
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

PPC_WEAK_FUNC(sub_823D2B48) {
	__imp__sub_823D2B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D2BE4) {
	__imp__sub_823D2BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x823d2b48
	sub_823D2B48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2BE8) {
	__imp__sub_823D2BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D2BF4) {
	__imp__sub_823D2BF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D2BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823D2C00;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r27,5660
	ctx.r4.s64 = ctx.r27.s64 + 5660;
	// lwz r11,5640(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5640);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r24,4924(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4924);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d2c40
	if (ctx.cr6.eq) goto loc_823D2C40;
	// stw r4,5640(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5640, ctx.r4.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D2C40;
	sub_823C7E40(ctx, base);
loc_823D2C40:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D2C54;
	sub_823D54E8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r8,r11,3616
	ctx.r8.s64 = ctx.r11.s64 + 3616;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r22,r11,49872
	ctx.r22.u64 = ctx.r11.u64 | 49872;
	// beq cr6,0x823d2f8c
	if (ctx.cr6.eq) goto loc_823D2F8C;
	// lhz r21,10(r31)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823d2ca8
	if (ctx.cr6.eq) goto loc_823D2CA8;
	// add r11,r21,r22
	ctx.r11.u64 = ctx.r21.u64 + ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r23,r10,0,30,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x823d2cb4
	goto loc_823D2CB4;
loc_823D2CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823D2CB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d5a38
	ctx.lr = 0x823D2CC0;
	sub_823D5A38(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ec0
	ctx.lr = 0x823D2CCC;
	sub_823D4EC0(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823d2cdc
	if (ctx.cr6.eq) goto loc_823D2CDC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4f60
	ctx.lr = 0x823D2CDC;
	sub_823D4F60(ctx, base);
loc_823D2CDC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D2CE8;
	sub_823C7D58(ctx, base);
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823d2d00
	if (ctx.cr6.eq) goto loc_823D2D00;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D2D00;
	sub_823C85C8(ctx, base);
loc_823D2D00:
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x823d2e74
	if (!ctx.cr6.eq) goto loc_823D2E74;
	// bl 0x823d4be0
	ctx.lr = 0x823D2D10;
	sub_823D4BE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rldicr r26,r29,0,39
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u64, 0) & 0xFFFFFFFFFF000000;
	// bl 0x823b9690
	ctx.lr = 0x823D2D20;
	sub_823B9690(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823b9728
	ctx.lr = 0x823D2D2C;
	sub_823B9728(ctx, base);
	// rldicl r11,r29,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823c9758
	ctx.lr = 0x823D2D3C;
	sub_823C9758(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D2D44;
	sub_823D4BA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823d2b48
	ctx.lr = 0x823D2D54;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3100
	if (ctx.cr6.eq) goto loc_823D3100;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
loc_823D2D74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r29,0,39
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u64, 0) & 0xFFFFFFFFFF000000;
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r26.u64, ctx.xer);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
	// bl 0x8236b940
	ctx.lr = 0x823D2D8C;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d2dc0
	if (!ctx.cr6.lt) goto loc_823D2DC0;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r28,96
	ctx.r11.s64 = ctx.r28.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2dc0
	if (ctx.cr6.eq) goto loc_823D2DC0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d2dc0
	if (!ctx.cr0.lt) goto loc_823D2DC0;
	// bl 0x823905c8
	ctx.lr = 0x823D2DC0;
	sub_823905C8(ctx, base);
loc_823D2DC0:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r10,r29,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000000;
	// addi r9,r11,3616
	ctx.r9.s64 = ctx.r11.s64 + 3616;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x823d2e10
	if (ctx.cr6.eq) goto loc_823D2E10;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x823d2e10
	if (ctx.cr6.eq) goto loc_823D2E10;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
loc_823D2E10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x823b9690
	ctx.lr = 0x823D2E1C;
	sub_823B9690(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823b9728
	ctx.lr = 0x823D2E28;
	sub_823B9728(ctx, base);
	// rldicl r11,r29,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823c9758
	ctx.lr = 0x823D2E38;
	sub_823C9758(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D2E40;
	sub_823D4BA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823d2b48
	ctx.lr = 0x823D2E50;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d2d74
	if (!ctx.cr6.eq) goto loc_823D2D74;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823D2E74:
	// bl 0x823d4be0
	ctx.lr = 0x823D2E78;
	sub_823D4BE0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D2E80;
	sub_823D4BA0(ctx, base);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// and r28,r29,r12
	ctx.r28.u64 = ctx.r29.u64 & ctx.r12.u64;
	// bl 0x823d2b48
	ctx.lr = 0x823D2E98;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3100
	if (ctx.cr6.eq) goto loc_823D3100;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
loc_823D2EB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r10,r31,r12
	ctx.r10.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
	// bl 0x8236b940
	ctx.lr = 0x823D2ED4;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d2f08
	if (!ctx.cr6.lt) goto loc_823D2F08;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r29,96
	ctx.r10.s64 = ctx.r29.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d2f08
	if (ctx.cr6.eq) goto loc_823D2F08;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d2f08
	if (!ctx.cr0.lt) goto loc_823D2F08;
	// bl 0x823905c8
	ctx.lr = 0x823D2F08;
	sub_823905C8(ctx, base);
loc_823D2F08:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r10,r31,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000000;
	// addi r9,r11,3616
	ctx.r9.s64 = ctx.r11.s64 + 3616;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x823d2f58
	if (ctx.cr6.eq) goto loc_823D2F58;
	// lhz r11,10(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x823d2f58
	if (ctx.cr6.eq) goto loc_823D2F58;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
loc_823D2F58:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x823d2b48
	ctx.lr = 0x823D2F68;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d2eb8
	if (!ctx.cr6.eq) goto loc_823D2EB8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823D2F8C:
	// lhz r26,10(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823d2fac
	if (ctx.cr6.eq) goto loc_823D2FAC;
	// add r11,r26,r22
	ctx.r11.u64 = ctx.r26.u64 + ctx.r22.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823d2fb4
	goto loc_823D2FB4;
loc_823D2FAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823D2FB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823d5a38
	ctx.lr = 0x823D2FC0;
	sub_823D5A38(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ec0
	ctx.lr = 0x823D2FCC;
	sub_823D4EC0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823d2fdc
	if (ctx.cr6.eq) goto loc_823D2FDC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4f60
	ctx.lr = 0x823D2FDC;
	sub_823D4F60(ctx, base);
loc_823D2FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D2FE8;
	sub_823C7D58(ctx, base);
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823d3000
	if (ctx.cr6.eq) goto loc_823D3000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D3000;
	sub_823C85C8(ctx, base);
loc_823D3000:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D3008;
	sub_823D4BE0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D3010;
	sub_823D4BA0(ctx, base);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// and r28,r29,r12
	ctx.r28.u64 = ctx.r29.u64 & ctx.r12.u64;
	// bl 0x823d2b48
	ctx.lr = 0x823D3028;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3100
	if (ctx.cr6.eq) goto loc_823D3100;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
loc_823D3048:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r10,r31,r12
	ctx.r10.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
	// bl 0x8236b940
	ctx.lr = 0x823D3064;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d3098
	if (!ctx.cr6.lt) goto loc_823D3098;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r29,96
	ctx.r10.s64 = ctx.r29.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3098
	if (ctx.cr6.eq) goto loc_823D3098;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d3098
	if (!ctx.cr0.lt) goto loc_823D3098;
	// bl 0x823905c8
	ctx.lr = 0x823D3098;
	sub_823905C8(ctx, base);
loc_823D3098:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r10,r31,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000000;
	// addi r9,r11,3616
	ctx.r9.s64 = ctx.r11.s64 + 3616;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x823d30d8
	if (ctx.cr6.eq) goto loc_823D30D8;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823d30d8
	if (ctx.cr6.eq) goto loc_823D30D8;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823d3100
	if (!ctx.cr6.eq) goto loc_823D3100;
loc_823D30D8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x823d2b48
	ctx.lr = 0x823D30E8;
	sub_823D2B48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d3048
	if (!ctx.cr6.eq) goto loc_823D3048;
loc_823D3100:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D2BF8) {
	__imp__sub_823D2BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D310C) {
	__imp__sub_823D310C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D3118;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// ld r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,4924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4924);
	// stw r9,5640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5640, ctx.r9.u32);
	// beq cr6,0x823d323c
	if (ctx.cr6.eq) goto loc_823D323C;
	// rlwinm r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823d3198
	if (ctx.cr6.eq) goto loc_823D3198;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,3616
	ctx.r10.s64 = ctx.r10.s64 + 3616;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-15664
	ctx.r8.s64 = ctx.r8.s64 + -15664;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r31,r7,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// b 0x823d31a4
	goto loc_823D31A4;
loc_823D3198:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_823D31A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d5a38
	ctx.lr = 0x823D31AC;
	sub_823D5A38(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d4ec0
	ctx.lr = 0x823D31B8;
	sub_823D4EC0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823d31c8
	if (ctx.cr6.eq) goto loc_823D31C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d4f60
	ctx.lr = 0x823D31C8;
	sub_823D4F60(ctx, base);
loc_823D31C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D31D4;
	sub_823C7D58(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D31E8;
	sub_823D54E8(ctx, base);
	// lwz r10,208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d3200
	if (ctx.cr6.eq) goto loc_823D3200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D3200;
	sub_823C85C8(ctx, base);
loc_823D3200:
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x823d3224
	if (!ctx.cr6.eq) goto loc_823D3224;
	// bl 0x823d4be0
	ctx.lr = 0x823D3210;
	sub_823D4BE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dcc38
	ctx.lr = 0x823D321C;
	sub_823DCC38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D3224:
	// bl 0x823d4be0
	ctx.lr = 0x823D3228;
	sub_823D4BE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dcd70
	ctx.lr = 0x823D3234;
	sub_823DCD70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D323C:
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d4ec0
	ctx.lr = 0x823D3244;
	sub_823D4EC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D3250;
	sub_823C7D58(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D3264;
	sub_823D54E8(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823d327c
	if (ctx.cr6.eq) goto loc_823D327C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D327C;
	sub_823C85C8(ctx, base);
loc_823D327C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D3284;
	sub_823D4BE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dce50
	ctx.lr = 0x823D3290;
	sub_823DCE50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3110) {
	__imp__sub_823D3110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D32A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D32C0;
	sub_823D4EC0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5640, ctx.r11.u32);
	// bl 0x823c7d58
	ctx.lr = 0x823D32D8;
	sub_823C7D58(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D32EC;
	sub_823D54E8(ctx, base);
	// lwz r9,5692(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5692);
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823d330c
	if (ctx.cr6.eq) goto loc_823D330C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D330C;
	sub_823C85C8(ctx, base);
loc_823D330C:
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x823d3334
	if (!ctx.cr6.eq) goto loc_823D3334;
	// bl 0x823d4be0
	ctx.lr = 0x823D331C;
	sub_823D4BE0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823dda20
	ctx.lr = 0x823D332C;
	sub_823DDA20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823D3334:
	// bl 0x823d4be0
	ctx.lr = 0x823D3338;
	sub_823D4BE0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ddae0
	ctx.lr = 0x823D3348;
	sub_823DDAE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3298) {
	__imp__sub_823D3298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D3358;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D337C;
	sub_823D4EC0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r9,5640(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5640);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d33ac
	if (ctx.cr6.eq) goto loc_823D33AC;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// stw r10,5640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5640, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D33AC;
	sub_823C7E40(ctx, base);
loc_823D33AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D33B8;
	sub_823C7D58(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d33e4
	if (ctx.cr6.eq) goto loc_823D33E4;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823d33e8
	goto loc_823D33E8;
loc_823D33E4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_823D33E8:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d54e8
	ctx.lr = 0x823D33F4;
	sub_823D54E8(ctx, base);
	// lwz r11,5692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5692);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d3414
	if (ctx.cr6.eq) goto loc_823D3414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D3414;
	sub_823C85C8(ctx, base);
loc_823D3414:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// lwz r10,3216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d343c
	if (ctx.cr6.eq) goto loc_823D343C;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820c0f58
	ctx.lr = 0x823D343C;
	sub_820C0F58(ctx, base);
loc_823D343C:
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 9, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x823d3470
	if (!ctx.cr6.eq) goto loc_823D3470;
	// bl 0x823d4be0
	ctx.lr = 0x823D344C;
	sub_823D4BE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D3454;
	sub_823D4BA0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c73d0
	ctx.lr = 0x823D3468;
	sub_823C73D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D3470:
	// bl 0x823d4be0
	ctx.lr = 0x823D3474;
	sub_823D4BE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D347C;
	sub_823D4BA0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c74c8
	ctx.lr = 0x823D3490;
	sub_823C74C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3350) {
	__imp__sub_823D3350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823D34A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,4924(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4924);
	// bl 0x823c7d58
	ctx.lr = 0x823D34CC;
	sub_823C7D58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4ec0
	ctx.lr = 0x823D34D4;
	sub_823D4EC0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823d3500
	if (ctx.cr6.eq) goto loc_823D3500;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823d3504
	goto loc_823D3504;
loc_823D3500:
	// li r11,2
	ctx.r11.s64 = 2;
loc_823D3504:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d54e8
	ctx.lr = 0x823D3510;
	sub_823D54E8(ctx, base);
	// lwz r11,5692(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5692);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d3530
	if (ctx.cr6.eq) goto loc_823D3530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D3530;
	sub_823C85C8(ctx, base);
loc_823D3530:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r28,r31,144
	ctx.r28.s64 = ctx.r31.s64 + 144;
	// lwz r11,3216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3216);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d3558
	if (ctx.cr6.eq) goto loc_823D3558;
	// stw r4,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820c0f58
	ctx.lr = 0x823D3558;
	sub_820C0F58(ctx, base);
loc_823D3558:
	// cmpwi cr6,r21,9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 9, ctx.xer);
	// beq cr6,0x823d3568
	if (ctx.cr6.eq) goto loc_823D3568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D3568;
	sub_823D4BE0(ctx, base);
loc_823D3568:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// and r23,r31,r12
	ctx.r23.u64 = ctx.r31.u64 & ctx.r12.u64;
	// addi r24,r11,3224
	ctx.r24.s64 = ctx.r11.s64 + 3224;
loc_823D3584:
	// cmpwi cr6,r21,9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 9, ctx.xer);
	// bne cr6,0x823d35c4
	if (!ctx.cr6.eq) goto loc_823D35C4;
	// rldicr r30,r31,0,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// cmpld cr6,r30,r25
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r25.u64, ctx.xer);
	// beq cr6,0x823d35c4
	if (ctx.cr6.eq) goto loc_823D35C4;
	// rldicl r11,r31,39,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 39) & 0x7FFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x823c96b0
	ctx.lr = 0x823D35A8;
	sub_823C96B0(ctx, base);
	// rldicl r10,r31,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x823c9758
	ctx.lr = 0x823D35B8;
	sub_823C9758(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D35C0;
	sub_823D4BE0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_823D35C4:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,5640(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5640);
	// addi r9,r11,3616
	ctx.r9.s64 = ctx.r11.s64 + 3616;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwzx r4,r11,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d35f0
	if (ctx.cr6.eq) goto loc_823D35F0;
	// stw r4,5640(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5640, ctx.r4.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c7e50
	ctx.lr = 0x823D35F0;
	sub_823C7E50(ctx, base);
loc_823D35F0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x823c6f70
	ctx.lr = 0x823D3610;
	sub_823C6F70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D3618;
	sub_823D4BA0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D362C;
	sub_823C86E8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823d3694
	if (ctx.cr6.eq) goto loc_823D3694;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// and r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r11,r23
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r23.u64, ctx.xer);
	// bne cr6,0x823d3694
	if (!ctx.cr6.eq) goto loc_823D3694;
	// bl 0x8236b940
	ctx.lr = 0x823D365C;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d3584
	if (!ctx.cr6.lt) goto loc_823D3584;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r24,96
	ctx.r10.s64 = ctx.r24.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3584
	if (ctx.cr6.eq) goto loc_823D3584;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d3584
	if (!ctx.cr0.lt) goto loc_823D3584;
	// bl 0x823905c8
	ctx.lr = 0x823D3690;
	sub_823905C8(ctx, base);
	// b 0x823d3584
	goto loc_823D3584;
loc_823D3694:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3498) {
	__imp__sub_823D3498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D369C) {
	__imp__sub_823D369C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D36A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823D36A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x823d4ec0
	ctx.lr = 0x823D36C0;
	sub_823D4EC0(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r23,r11,-19840
	ctx.r23.s64 = ctx.r11.s64 + -19840;
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// lwz r10,5640(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5640);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d36f0
	if (ctx.cr6.eq) goto loc_823D36F0;
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// addi r4,r23,64
	ctx.r4.s64 = ctx.r23.s64 + 64;
	// stw r11,5640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5640, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c7e40
	ctx.lr = 0x823D36F0;
	sub_823C7E40(ctx, base);
loc_823D36F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823D36FC;
	sub_823C7D58(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x823d54e8
	ctx.lr = 0x823D3710;
	sub_823D54E8(ctx, base);
	// lwz r10,5692(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5692);
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d3730
	if (ctx.cr6.eq) goto loc_823D3730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823D3730;
	sub_823C85C8(ctx, base);
loc_823D3730:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r25,4924(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4924);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// ori r9,r11,36864
	ctx.r9.u64 = ctx.r11.u64 | 36864;
	// addi r27,r25,5296
	ctx.r27.s64 = ctx.r25.s64 + 5296;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r24,r27,52
	ctx.r24.s64 = ctx.r27.s64 + 52;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lhz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_823D3760:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r10,r23,196
	ctx.r10.s64 = ctx.r23.s64 + 196;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,5000
	ctx.r11.s64 = ctx.r11.s64 + 5000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// beq cr6,0x823d379c
	if (ctx.cr6.eq) goto loc_823D379C;
	// addi r11,r23,196
	ctx.r11.s64 = ctx.r23.s64 + 196;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r23,196
	ctx.r4.s64 = ctx.r23.s64 + 196;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x820c0f58
	ctx.lr = 0x823D379C;
	sub_820C0F58(ctx, base);
loc_823D379C:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x823c7530
	ctx.lr = 0x823D37B8;
	sub_823C7530(ctx, base);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d2740
	ctx.lr = 0x823D37CC;
	sub_823D2740(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823D37D4;
	sub_823D4BE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823D37DC;
	sub_823D4BA0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823D37F0;
	sub_823C86E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823d381c
	if (ctx.cr6.eq) goto loc_823D381C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x823d3760
	if (ctx.cr6.eq) goto loc_823D3760;
loc_823D381C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D36A0) {
	__imp__sub_823D36A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3824) {
	__imp__sub_823D3824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3828) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3828) {
	__imp__sub_823D3828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3830) {
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

PPC_WEAK_FUNC(sub_823D3830) {
	__imp__sub_823D3830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3858) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r3,r8,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3858) {
	__imp__sub_823D3858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3870) {
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

PPC_WEAK_FUNC(sub_823D3870) {
	__imp__sub_823D3870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3884) {
	__imp__sub_823D3884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3888) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3888) {
	__imp__sub_823D3888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D38C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D38C8) {
	__imp__sub_823D38C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3908) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3908) {
	__imp__sub_823D3908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3948) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwimi r10,r5,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3948) {
	__imp__sub_823D3948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D398C) {
	__imp__sub_823D398C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r7,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r5,r8,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// lwz r4,1172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// srd r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwimi r7,r4,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r7.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3990) {
	__imp__sub_823D3990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D39DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D39DC) {
	__imp__sub_823D39DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D39E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwimi r10,r5,3,27,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r10,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D39E0) {
	__imp__sub_823D39E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3A24) {
	__imp__sub_823D3A24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3A28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwimi r10,r5,22,5,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r10.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3A28) {
	__imp__sub_823D3A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3A6C) {
	__imp__sub_823D3A6C(ctx, base);
}

