#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82143470) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82372b90
	ctx.lr = 0x8214348C;
	sub_82372B90(ctx, base);
	// cmpwi cr6,r3,1245
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1245, ctx.xer);
	// beq cr6,0x821434a4
	if (ctx.cr6.eq) goto loc_821434A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821434a8
	if (!ctx.cr6.eq) goto loc_821434A8;
loc_821434A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821434A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82143470) {
	__imp__sub_82143470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821434C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821434C4) {
	__imp__sub_821434C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821434C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,153(r9)
	PPC_STORE_U8(ctx.r9.u32 + 153, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821434C8) {
	__imp__sub_821434C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821434E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821434E4) {
	__imp__sub_821434E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821434E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,153(r9)
	PPC_STORE_U8(ctx.r9.u32 + 153, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821434E8) {
	__imp__sub_821434E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143504) {
	__imp__sub_82143504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143508) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,26437
	ctx.r10.s64 = 1732575232;
	// lis r9,-4147
	ctx.r9.s64 = -271777792;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r8,-26438
	ctx.r8.s64 = -1732640768;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r7,4146
	ctx.r7.s64 = 271712256;
	// ori r6,r10,8961
	ctx.r6.u64 = ctx.r10.u64 | 8961;
	// ori r5,r9,43913
	ctx.r5.u64 = ctx.r9.u64 | 43913;
	// ori r4,r8,56574
	ctx.r4.u64 = ctx.r8.u64 | 56574;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// ori r11,r7,21622
	ctx.r11.u64 = ctx.r7.u64 | 21622;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82143508) {
	__imp__sub_82143508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82143568:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82143568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82143568;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82143548) {
	__imp__sub_82143548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143594) {
	__imp__sub_82143594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821435B8:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r7,r6,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821435b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821435B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82143598) {
	__imp__sub_82143598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821435E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821435E4) {
	__imp__sub_821435E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821435E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// not r9,r5
	ctx.r9.u64 = ~ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82143698
	if (ctx.cr6.eq) goto loc_82143698;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-4680
	ctx.r11.s64 = -306708480;
	// ori r11,r11,33568
	ctx.r11.u64 = ctx.r11.u64 | 33568;
loc_8214360C:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// xor r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r8,r3,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r9,r4,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r8,r3,r11
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// bdnz 0x8214360c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214360C;
loc_82143698:
	// not r3,r9
	ctx.r3.u64 = ~ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821435E8) {
	__imp__sub_821435E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821436A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821436A8;
	__savegprlr_14(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_821436C8:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821436c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821436C8;
	// and r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 & ctx.r8.u64;
	// lwz r29,-224(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// andc r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// lwz r28,-220(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r27,-216(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r26,-212(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r25,-208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r23,-204(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r4,-196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r22,-188(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// and r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r21,-184(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// andc r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rotlwi r10,r7,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// andc r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rotlwi r9,r7,11
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 11);
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rotlwi r7,r6,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 19);
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// and r20,r9,r7
	ctx.r20.u64 = ctx.r9.u64 & ctx.r7.u64;
	// or r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 | ctx.r20.u64;
	// add r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 + ctx.r25.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// andc r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// and r20,r7,r11
	ctx.r20.u64 = ctx.r7.u64 & ctx.r11.u64;
	// or r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 | ctx.r20.u64;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + ctx.r23.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r10,r10,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// andc r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// and r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 & ctx.r11.u64;
	// or r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 | ctx.r20.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rotlwi r9,r5,11
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 11);
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// andc r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rotlwi r7,r4,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 19);
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + ctx.r24.u64;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rotlwi r11,r4,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// andc r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + ctx.r22.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r6,r4,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// andc r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r4,11
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 11);
	// lwz r4,-180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// or r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lwz r21,-176(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r19,-172(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lis r20,23170
	ctx.r20.s64 = 1518469120;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r18,-168(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r4,-164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// ori r10,r20,31129
	ctx.r10.u64 = ctx.r20.u64 | 31129;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lis r20,28377
	ctx.r20.s64 = 1859715072;
	// rotlwi r7,r7,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r16,r6,r7
	ctx.r16.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// or r5,r16,r5
	ctx.r5.u64 = ctx.r16.u64 | ctx.r5.u64;
	// add r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 + ctx.r21.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// andc r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// and r16,r7,r5
	ctx.r16.u64 = ctx.r7.u64 & ctx.r5.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | ctx.r16.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rotlwi r6,r6,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// and r19,r6,r5
	ctx.r19.u64 = ctx.r6.u64 & ctx.r5.u64;
	// andc r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// or r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 | ctx.r19.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rotlwi r11,r9,11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 11);
	// and r19,r6,r11
	ctx.r19.u64 = ctx.r6.u64 & ctx.r11.u64;
	// andc r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// or r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 | ctx.r19.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r7,r7,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// or r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 | ctx.r7.u64;
	// and r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 & ctx.r6.u64;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// or r19,r7,r5
	ctx.r19.u64 = ctx.r7.u64 | ctx.r5.u64;
	// and r18,r7,r5
	ctx.r18.u64 = ctx.r7.u64 & ctx.r5.u64;
	// and r4,r19,r11
	ctx.r4.u64 = ctx.r19.u64 & ctx.r11.u64;
	// or r9,r4,r18
	ctx.r9.u64 = ctx.r4.u64 | ctx.r18.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r4,r6,5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// and r9,r19,r4
	ctx.r9.u64 = ctx.r19.u64 & ctx.r4.u64;
	// or r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 | ctx.r18.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r9,r11,9
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 9);
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 & ctx.r4.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r7,r7,13
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 13);
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// and r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ctx.r7.u64;
	// and r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 & ctx.r4.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ori r11,r20,60321
	ctx.r11.u64 = ctx.r20.u64 | 60321;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// or r21,r7,r6
	ctx.r21.u64 = ctx.r7.u64 | ctx.r6.u64;
	// and r20,r7,r6
	ctx.r20.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r5,r21,r9
	ctx.r5.u64 = ctx.r21.u64 & ctx.r9.u64;
	// or r5,r5,r20
	ctx.r5.u64 = ctx.r5.u64 | ctx.r20.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lwz r23,-172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// std r8,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r8.u64);
	// std r30,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.r30.u64);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// std r3,-264(r1)
	PPC_STORE_U64(ctx.r1.u32 + -264, ctx.r3.u64);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// rotlwi r5,r5,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// lwz r18,-200(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r16,-184(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// and r21,r21,r5
	ctx.r21.u64 = ctx.r21.u64 & ctx.r5.u64;
	// lwz r14,-168(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r4.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// or r4,r21,r20
	ctx.r4.u64 = ctx.r21.u64 | ctx.r20.u64;
	// lwz r19,-272(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// std r31,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.r31.u64);
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// lwz r31,-180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rotlwi r10,r10,9
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 9);
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// and r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r7,r20
	ctx.r4.u64 = ctx.r7.u64 + ctx.r20.u64;
	// rotlwi r7,r4,13
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 13);
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 + ctx.r20.u64;
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// and r23,r7,r9
	ctx.r23.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 | ctx.r23.u64;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r6,r5,r20
	ctx.r6.u64 = ctx.r5.u64 + ctx.r20.u64;
	// rotlwi r6,r6,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// and r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 & ctx.r6.u64;
	// or r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 | ctx.r23.u64;
	// add r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 + ctx.r16.u64;
	// add r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r4,r20
	ctx.r10.u64 = ctx.r4.u64 + ctx.r20.u64;
	// rotlwi r10,r10,9
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 9);
	// or r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r5,r5,r14
	ctx.r5.u64 = ctx.r5.u64 + ctx.r14.u64;
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r4,r20
	ctx.r7.u64 = ctx.r4.u64 + ctx.r20.u64;
	// rotlwi r7,r7,13
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 13);
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r4,r20
	ctx.r9.u64 = ctx.r4.u64 + ctx.r20.u64;
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// and r23,r7,r9
	ctx.r23.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 | ctx.r23.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + ctx.r19.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r6,r20
	ctx.r5.u64 = ctx.r6.u64 + ctx.r20.u64;
	// rotlwi r5,r5,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// rotlwi r22,r16,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// lwz r16,-188(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// and r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
	// rotlwi r19,r18,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// or r6,r4,r23
	ctx.r6.u64 = ctx.r4.u64 | ctx.r23.u64;
	// lwz r4,-164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r23,-176(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rotlwi r17,r14,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r14,-204(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// rotlwi r10,r10,9
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 9);
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	// xor r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r4,r20
	ctx.r7.u64 = ctx.r4.u64 + ctx.r20.u64;
	// rotlwi r6,r7,13
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 13);
	// xor r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// xor r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r7,r7,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// xor r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r4,r4,9
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 9);
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r5,r10,11
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 11);
	// xor r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r10,r29,r7
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r9,r6,15
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 15);
	// xor r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// xor r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r7,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// xor r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rotlwi r6,r4,9
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 9);
	// xor r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + ctx.r19.u64;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r7,r4,11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 11);
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 + ctx.r17.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r9,r5,15
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 15);
	// xor r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// xor r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r5,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// xor r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 + ctx.r16.u64;
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,-172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// ld r3,-264(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// rotlwi r6,r6,9
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// lwz r27,-196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r24,-164(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// xor r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// ld r30,-256(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// rotlwi r28,r31,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// ld r31,-248(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// ld r8,-240(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// add r5,r5,r14
	ctx.r5.u64 = ctx.r5.u64 + ctx.r14.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rotlwi r7,r5,11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 11);
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r4,r25
	ctx.r11.u64 = ctx.r4.u64 + ctx.r25.u64;
	// rotlwi r11,r11,15
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 15);
	// xor r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r4,r25
	ctx.r10.u64 = ctx.r4.u64 + ctx.r25.u64;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + ctx.r28.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + ctx.r25.u64;
	// rotlwi r9,r6,9
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// add r4,r30,r9
	ctx.r4.u64 = ctx.r30.u64 + ctx.r9.u64;
	// xor r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 + ctx.r25.u64;
	// rotlwi r7,r6,11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 11);
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// add r4,r31,r7
	ctx.r4.u64 = ctx.r31.u64 + ctx.r7.u64;
	// xor r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rotlwi r11,r10,15
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821436A0) {
	__imp__sub_821436A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143CE4) {
	__imp__sub_82143CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82143CF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r11,r11,29,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82143d2c
	if (!ctx.cr6.lt) goto loc_82143D2C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82143D2C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x7;
	// subfic r28,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r28.s64 = 64 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x82143d9c
	if (ctx.cr6.lt) goto loc_82143D9C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823de1f0
	ctx.lr = 0x82143D5C;
	sub_823DE1F0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821436a0
	ctx.lr = 0x82143D68;
	sub_821436A0(ctx, base);
	// addi r29,r28,63
	ctx.r29.s64 = ctx.r28.s64 + 63;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82143d94
	if (!ctx.cr6.lt) goto loc_82143D94;
	// addi r27,r26,-63
	ctx.r27.s64 = ctx.r26.s64 + -63;
loc_82143D78:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821436a0
	ctx.lr = 0x82143D84;
	sub_821436A0(ctx, base);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82143d78
	if (ctx.cr6.lt) goto loc_82143D78;
loc_82143D94:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82143da0
	goto loc_82143DA0;
loc_82143D9C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82143DA0:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r28,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r28.s64;
	// add r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823de1f0
	ctx.lr = 0x82143DB4;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143CE8) {
	__imp__sub_82143CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143DBC) {
	__imp__sub_82143DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143DC0) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82143DF0:
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r7,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r7.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// bdnz 0x82143df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82143DF0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,29,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3F;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// subfic r5,r11,56
	ctx.xer.ca = ctx.r11.u32 <= 56;
	ctx.r5.s64 = 56 - ctx.r11.s64;
	// blt cr6,0x82143e3c
	if (ctx.cr6.lt) goto loc_82143E3C;
	// subfic r5,r11,120
	ctx.xer.ca = ctx.r11.u32 <= 120;
	ctx.r5.s64 = 120 - ctx.r11.s64;
loc_82143E3C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4696
	ctx.r4.s64 = ctx.r11.s64 + 4696;
	// bl 0x82143ce8
	ctx.lr = 0x82143E4C;
	sub_82143CE8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143ce8
	ctx.lr = 0x82143E5C;
	sub_82143CE8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82143E6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82143e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82143E6C;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x82143EA4;
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

PPC_WEAK_FUNC(sub_82143DC0) {
	__imp__sub_82143DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143EBC) {
	__imp__sub_82143EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82143EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,26437
	ctx.r10.s64 = 1732575232;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// lis r9,-4147
	ctx.r9.s64 = -271777792;
	// lis r8,-26438
	ctx.r8.s64 = -1732640768;
	// lis r7,4146
	ctx.r7.s64 = 271712256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r9,43913
	ctx.r5.u64 = ctx.r9.u64 | 43913;
	// ori r4,r8,56574
	ctx.r4.u64 = ctx.r8.u64 | 56574;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r3,r7,21622
	ctx.r3.u64 = ctx.r7.u64 | 21622;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ori r6,r10,8961
	ctx.r6.u64 = ctx.r10.u64 | 8961;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82143ce8
	ctx.lr = 0x82143F28;
	sub_82143CE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82143ce8
	ctx.lr = 0x82143F38;
	sub_82143CE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82143dc0
	ctx.lr = 0x82143F44;
	sub_82143DC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143EC0) {
	__imp__sub_82143EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143F4C) {
	__imp__sub_82143F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82143F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lis r10,26437
	ctx.r10.s64 = 1732575232;
	// lis r9,-4147
	ctx.r9.s64 = -271777792;
	// lis r8,-26438
	ctx.r8.s64 = -1732640768;
	// lis r7,4146
	ctx.r7.s64 = 271712256;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ori r5,r9,43913
	ctx.r5.u64 = ctx.r9.u64 | 43913;
	// ori r6,r10,8961
	ctx.r6.u64 = ctx.r10.u64 | 8961;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ori r10,r8,56574
	ctx.r10.u64 = ctx.r8.u64 | 56574;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ori r9,r7,21622
	ctx.r9.u64 = ctx.r7.u64 | 21622;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82143ce8
	ctx.lr = 0x82143FB4;
	sub_82143CE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82143ce8
	ctx.lr = 0x82143FC4;
	sub_82143CE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82143dc0
	ctx.lr = 0x82143FD0;
	sub_82143DC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143F50) {
	__imp__sub_82143F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143FD8) {
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
	// lis r10,26437
	ctx.r10.s64 = 1732575232;
	// lis r9,-4147
	ctx.r9.s64 = -271777792;
	// lis r8,-26438
	ctx.r8.s64 = -1732640768;
	// lis r7,4146
	ctx.r7.s64 = 271712256;
	// ori r5,r9,43913
	ctx.r5.u64 = ctx.r9.u64 | 43913;
	// ori r6,r10,8961
	ctx.r6.u64 = ctx.r10.u64 | 8961;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// ori r10,r8,56574
	ctx.r10.u64 = ctx.r8.u64 | 56574;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// ori r9,r7,21622
	ctx.r9.u64 = ctx.r7.u64 | 21622;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82143ce8
	ctx.lr = 0x82144030;
	sub_82143CE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82143dc0
	ctx.lr = 0x8214403C;
	sub_82143DC0(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82143FD8) {
	__imp__sub_82143FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144068) {
	__imp__sub_82144068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144074) {
	__imp__sub_82144074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144078) {
	__imp__sub_82144078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144084) {
	__imp__sub_82144084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144088) {
	__imp__sub_82144088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144094) {
	__imp__sub_82144094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144098) {
	__imp__sub_82144098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440A4) {
	__imp__sub_821440A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440A8) {
	__imp__sub_821440A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440B4) {
	__imp__sub_821440B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440B8) {
	__imp__sub_821440B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440C4) {
	__imp__sub_821440C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440C8) {
	__imp__sub_821440C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440D4) {
	__imp__sub_821440D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440D8) {
	__imp__sub_821440D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440E4) {
	__imp__sub_821440E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440E8) {
	__imp__sub_821440E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821440F4) {
	__imp__sub_821440F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821440F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821440F8) {
	__imp__sub_821440F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144104) {
	__imp__sub_82144104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144108) {
	__imp__sub_82144108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144114) {
	__imp__sub_82144114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144118) {
	__imp__sub_82144118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144124) {
	__imp__sub_82144124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144128) {
	__imp__sub_82144128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144134) {
	__imp__sub_82144134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144138) {
	__imp__sub_82144138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144144) {
	__imp__sub_82144144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144148) {
	__imp__sub_82144148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144154) {
	__imp__sub_82144154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144158) {
	__imp__sub_82144158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144164) {
	__imp__sub_82144164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144168) {
	__imp__sub_82144168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144174) {
	__imp__sub_82144174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144178) {
	__imp__sub_82144178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144184) {
	__imp__sub_82144184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144188) {
	__imp__sub_82144188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144194) {
	__imp__sub_82144194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144198) {
	__imp__sub_82144198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441A4) {
	__imp__sub_821441A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441A8) {
	__imp__sub_821441A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441B4) {
	__imp__sub_821441B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441B8) {
	__imp__sub_821441B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441C4) {
	__imp__sub_821441C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441C8) {
	__imp__sub_821441C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441D4) {
	__imp__sub_821441D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441D8) {
	__imp__sub_821441D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441E4) {
	__imp__sub_821441E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441E8) {
	__imp__sub_821441E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821441F4) {
	__imp__sub_821441F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821441F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821441F8) {
	__imp__sub_821441F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144204) {
	__imp__sub_82144204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144208) {
	__imp__sub_82144208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144214) {
	__imp__sub_82144214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144218) {
	__imp__sub_82144218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144224) {
	__imp__sub_82144224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144228) {
	__imp__sub_82144228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144234) {
	__imp__sub_82144234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144238) {
	__imp__sub_82144238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144244) {
	__imp__sub_82144244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144248) {
	__imp__sub_82144248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144254) {
	__imp__sub_82144254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144258) {
	__imp__sub_82144258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144264) {
	__imp__sub_82144264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144268) {
	__imp__sub_82144268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144274) {
	__imp__sub_82144274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144278) {
	__imp__sub_82144278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144284) {
	__imp__sub_82144284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144288) {
	__imp__sub_82144288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144294) {
	__imp__sub_82144294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144298) {
	__imp__sub_82144298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442A4) {
	__imp__sub_821442A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442A8) {
	__imp__sub_821442A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442B4) {
	__imp__sub_821442B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442B8) {
	__imp__sub_821442B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442C4) {
	__imp__sub_821442C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442C8) {
	__imp__sub_821442C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442D4) {
	__imp__sub_821442D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442D8) {
	__imp__sub_821442D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442E4) {
	__imp__sub_821442E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442E8) {
	__imp__sub_821442E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821442F4) {
	__imp__sub_821442F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821442F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821442F8) {
	__imp__sub_821442F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144304) {
	__imp__sub_82144304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144308) {
	__imp__sub_82144308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144314) {
	__imp__sub_82144314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144318) {
	__imp__sub_82144318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144324) {
	__imp__sub_82144324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144328) {
	__imp__sub_82144328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144334) {
	__imp__sub_82144334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144338) {
	__imp__sub_82144338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144344) {
	__imp__sub_82144344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144348) {
	__imp__sub_82144348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144354) {
	__imp__sub_82144354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144358) {
	__imp__sub_82144358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144364) {
	__imp__sub_82144364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144368) {
	__imp__sub_82144368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144374) {
	__imp__sub_82144374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144378) {
	__imp__sub_82144378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144384) {
	__imp__sub_82144384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144388) {
	__imp__sub_82144388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144394) {
	__imp__sub_82144394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144398) {
	__imp__sub_82144398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443A4) {
	__imp__sub_821443A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443A8) {
	__imp__sub_821443A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443B4) {
	__imp__sub_821443B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443B8) {
	__imp__sub_821443B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443C4) {
	__imp__sub_821443C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443C8) {
	__imp__sub_821443C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443D4) {
	__imp__sub_821443D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443D8) {
	__imp__sub_821443D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443E4) {
	__imp__sub_821443E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443E8) {
	__imp__sub_821443E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821443F4) {
	__imp__sub_821443F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821443F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821443F8) {
	__imp__sub_821443F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144404) {
	__imp__sub_82144404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144408) {
	__imp__sub_82144408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144414) {
	__imp__sub_82144414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144418) {
	__imp__sub_82144418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144424) {
	__imp__sub_82144424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144428) {
	__imp__sub_82144428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144434) {
	__imp__sub_82144434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144438) {
	__imp__sub_82144438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144444) {
	__imp__sub_82144444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144448) {
	__imp__sub_82144448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144454) {
	__imp__sub_82144454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144458) {
	__imp__sub_82144458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144464) {
	__imp__sub_82144464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144468) {
	__imp__sub_82144468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144474) {
	__imp__sub_82144474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144478) {
	__imp__sub_82144478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144484) {
	__imp__sub_82144484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144488) {
	__imp__sub_82144488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144494) {
	__imp__sub_82144494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144498) {
	__imp__sub_82144498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821444A4) {
	__imp__sub_821444A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821444A8) {
	__imp__sub_821444A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821444B4) {
	__imp__sub_821444B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821444B8) {
	__imp__sub_821444B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821444C4) {
	__imp__sub_821444C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4928
	ctx.r9.s64 = ctx.r11.s64 + 4928;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_821444C8) {
	__imp__sub_821444C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821444E4) {
	__imp__sub_821444E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821444E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,4928
	ctx.r9.s64 = ctx.r10.s64 + 4928;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_821444E8) {
	__imp__sub_821444E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,5096
	ctx.r9.s64 = ctx.r10.s64 + 5096;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82144508) {
	__imp__sub_82144508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5264
	ctx.r9.s64 = ctx.r11.s64 + 5264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82144528) {
	__imp__sub_82144528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144540) {
	__imp__sub_82144540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144554) {
	__imp__sub_82144554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144558) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144558) {
	__imp__sub_82144558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144560) {
	PPC_FUNC_PROLOGUE();
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144560) {
	__imp__sub_82144560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144568) {
	PPC_FUNC_PROLOGUE();
	// li r3,88
	ctx.r3.s64 = 88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144568) {
	__imp__sub_82144568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144570) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144570) {
	__imp__sub_82144570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144578) {
	PPC_FUNC_PROLOGUE();
	// li r3,288
	ctx.r3.s64 = 288;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144578) {
	__imp__sub_82144578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144580) {
	PPC_FUNC_PROLOGUE();
	// li r3,88
	ctx.r3.s64 = 88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144580) {
	__imp__sub_82144580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144588) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144588) {
	__imp__sub_82144588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144590) {
	PPC_FUNC_PROLOGUE();
	// li r3,144
	ctx.r3.s64 = 144;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144590) {
	__imp__sub_82144590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144598) {
	PPC_FUNC_PROLOGUE();
	// li r3,112
	ctx.r3.s64 = 112;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144598) {
	__imp__sub_82144598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445A0) {
	__imp__sub_821445A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,136
	ctx.r3.s64 = 136;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445A8) {
	__imp__sub_821445A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,160
	ctx.r3.s64 = 160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445B0) {
	__imp__sub_821445B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445B8) {
	__imp__sub_821445B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445C0) {
	__imp__sub_821445C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445C8) {
	__imp__sub_821445C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445D0) {
	__imp__sub_821445D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445D8) {
	__imp__sub_821445D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,116
	ctx.r3.s64 = 116;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445E0) {
	__imp__sub_821445E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,712
	ctx.r3.s64 = 712;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445E8) {
	__imp__sub_821445E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445F0) {
	__imp__sub_821445F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821445F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821445F8) {
	__imp__sub_821445F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144600) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144600) {
	__imp__sub_82144600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144608) {
	PPC_FUNC_PROLOGUE();
	// li r3,752
	ctx.r3.s64 = 752;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144608) {
	__imp__sub_82144608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144610) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144610) {
	__imp__sub_82144610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144618) {
	PPC_FUNC_PROLOGUE();
	// li r3,1668
	ctx.r3.s64 = 1668;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144618) {
	__imp__sub_82144618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144620) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144620) {
	__imp__sub_82144620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144628) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144628) {
	__imp__sub_82144628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144630) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144630) {
	__imp__sub_82144630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144638) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144638) {
	__imp__sub_82144638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144640) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144640) {
	__imp__sub_82144640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144648) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144648) {
	__imp__sub_82144648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144650) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144650) {
	__imp__sub_82144650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144658) {
	PPC_FUNC_PROLOGUE();
	// li r3,112
	ctx.r3.s64 = 112;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144658) {
	__imp__sub_82144658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144660) {
	PPC_FUNC_PROLOGUE();
	// li r3,720
	ctx.r3.s64 = 720;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144660) {
	__imp__sub_82144660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144668) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144668) {
	__imp__sub_82144668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144670) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x82316f48
	ctx.lr = 0x82144694;
	sub_82316F48(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r10,12860
	ctx.r4.s64 = ctx.r10.s64 + 12860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313e58
	ctx.lr = 0x821446A8;
	sub_82313E58(ctx, base);
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

PPC_WEAK_FUNC(sub_82144670) {
	__imp__sub_82144670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821446BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821446BC) {
	__imp__sub_821446BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821446C0) {
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
	// bl 0x82313c80
	ctx.lr = 0x821446D0;
	sub_82313C80(ctx, base);
	// bl 0x82316f68
	ctx.lr = 0x821446D4;
	sub_82316F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821446C0) {
	__imp__sub_821446C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821446E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821446E4) {
	__imp__sub_821446E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821446E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821446fc
	if (!ctx.cr6.eq) goto loc_821446FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821446FC:
	// b 0x82313e68
	sub_82313E68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821446E8) {
	__imp__sub_821446E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144700) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r3,r11,-16500
	ctx.r3.s64 = ctx.r11.s64 + -16500;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,26460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26460, ctx.r3.u32);
	// bl 0x82145608
	ctx.lr = 0x82144730;
	sub_82145608(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82144738;
	sub_82177758(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27824, ctx.r11.u32);
	// bl 0x82147508
	ctx.lr = 0x8214474C;
	sub_82147508(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82144750;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82144700) {
	__imp__sub_82144700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144764) {
	__imp__sub_82144764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82144770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,25868(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25868);
	// bl 0x821778d8
	ctx.lr = 0x8214478C;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25868(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25868);
	// ble cr6,0x821447b0
	if (!ctx.cr6.gt) goto loc_821447B0;
loc_82144798:
	// stw r30,25868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25868, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82171668
	ctx.lr = 0x821447A4;
	sub_82171668(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82144798
	if (!ctx.cr0.eq) goto loc_82144798;
loc_821447B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82144768) {
	__imp__sub_82144768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821447B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821447C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82144f88
	ctx.lr = 0x821447D8;
	sub_82144F88(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82145538
	ctx.lr = 0x821447E4;
	sub_82145538(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,13080
	ctx.r10.s64 = ctx.r10.s64 + 13080;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_821447F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82144814
	if (!ctx.cr0.eq) goto loc_82144814;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821447f4
	if (!ctx.cr6.eq) goto loc_821447F4;
loc_82144814:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r11,13068
	ctx.r25.s64 = ctx.r11.s64 + 13068;
	// beq cr6,0x8214485c
	if (ctx.cr6.eq) goto loc_8214485C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82144830:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82144850
	if (!ctx.cr0.eq) goto loc_82144850;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82144830
	if (!ctx.cr6.eq) goto loc_82144830;
loc_82144850:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8214485c
	if (ctx.cr6.eq) goto loc_8214485C;
	// bl 0x82144f48
	ctx.lr = 0x8214485C;
	sub_82144F48(ctx, base);
loc_8214485C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82145538
	ctx.lr = 0x82144868;
	sub_82145538(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,269
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 269, ctx.xer);
	// beq cr6,0x8214489c
	if (ctx.cr6.eq) goto loc_8214489C;
	// li r7,269
	ctx.r7.s64 = 269;
	// addi r5,r22,4
	ctx.r5.s64 = ctx.r22.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82144890
	if (!ctx.cr6.lt) goto loc_82144890;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,13000
	ctx.r4.s64 = ctx.r11.s64 + 13000;
	// b 0x82144898
	goto loc_82144898;
loc_82144890:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
loc_82144898:
	// bl 0x822830e8
	ctx.lr = 0x8214489C;
	sub_822830E8(ctx, base);
loc_8214489C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82145538
	ctx.lr = 0x821448A8;
	sub_82145538(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82145538
	ctx.lr = 0x821448B4;
	sub_82145538(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82145538
	ctx.lr = 0x821448C0;
	sub_82145538(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82145538
	ctx.lr = 0x821448CC;
	sub_82145538(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,-16464
	ctx.r27.s64 = ctx.r11.s64 + -16464;
	// lwz r6,-8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821448ec
	if (!ctx.cr6.eq) goto loc_821448EC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r5,-8(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8, ctx.r5.u32);
loc_821448EC:
	// and r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82144910
	if (!ctx.cr6.eq) goto loc_82144910;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,12868
	ctx.r4.s64 = ctx.r11.s64 + 12868;
	// bl 0x822830e8
	ctx.lr = 0x82144908;
	sub_822830E8(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,-8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
loc_82144910:
	// lis r23,-32191
	ctx.r23.s64 = -2109669376;
	// lis r7,-32103
	ctx.r7.s64 = -2103902208;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,5504(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5504, ctx.r26.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r26,27660(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27660, ctx.r26.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214493C:
	// and r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82144958
	if (ctx.cr6.eq) goto loc_82144958;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82144954
	if (!ctx.cr6.eq) goto loc_82144954;
	// stw r11,27660(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27660, ctx.r11.u32);
loc_82144954:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82144958:
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bdnz 0x8214493c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214493C;
	// stw r11,5504(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5504, ctx.r11.u32);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r29,r11,24496
	ctx.r29.s64 = ctx.r11.s64 + 24496;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82145538
	ctx.lr = 0x82144978;
	sub_82145538(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// ble cr6,0x8214498c
	if (!ctx.cr6.gt) goto loc_8214498C;
	// bl 0x82144f48
	ctx.lr = 0x82144988;
	sub_82144F48(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8214498C:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82144990:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r10,r24,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r28.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821449fc
	if (ctx.cr6.eq) goto loc_821449FC;
	// lwz r9,-8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821449cc
	if (ctx.cr6.eq) goto loc_821449CC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82145538
	ctx.lr = 0x821449C4;
	sub_82145538(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x821449fc
	goto loc_821449FC;
loc_821449CC:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821449fc
	if (ctx.cr6.eq) goto loc_821449FC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_821449DC:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145538
	ctx.lr = 0x821449E8;
	sub_82145538(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821449dc
	if (ctx.cr6.lt) goto loc_821449DC;
loc_821449FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// blt cr6,0x82144990
	if (ctx.cr6.lt) goto loc_82144990;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82145538
	ctx.lr = 0x82144A14;
	sub_82145538(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82145538
	ctx.lr = 0x82144A20;
	sub_82145538(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82144A34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82144a54
	if (!ctx.cr0.eq) goto loc_82144A54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82144a34
	if (!ctx.cr6.eq) goto loc_82144A34;
loc_82144A54:
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82145460
	ctx.lr = 0x82144A60;
	sub_82145460(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82145608
	ctx.lr = 0x82144A70;
	sub_82145608(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r30,r11,-16504
	ctx.r30.s64 = ctx.r11.s64 + -16504;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82144b34
	if (ctx.cr6.eq) goto loc_82144B34;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82144b34
	if (ctx.cr6.lt) goto loc_82144B34;
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lwz r8,24588(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24588);
	// lwz r10,-16468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16468);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,-16480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16480, ctx.r7.u32);
	// lwz r10,-16480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// bne cr6,0x82144aec
	if (!ctx.cr6.eq) goto loc_82144AEC;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,-16480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// lwz r9,-16480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,-16480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16480, ctx.r4.u32);
	// b 0x82144b08
	goto loc_82144B08;
loc_82144AEC:
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,-16480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r4,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 4;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,-16480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16480, ctx.r3.u32);
loc_82144B08:
	// stw r26,24588(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24588, ctx.r26.u32);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// subf r6,r8,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r11,24584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24584, ctx.r11.u32);
	// stw r24,-9420(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9420, ctx.r24.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82144B34:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82171ad0
	ctx.lr = 0x82144B44;
	sub_82171AD0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821776b0
	ctx.lr = 0x82144B4C;
	sub_821776B0(ctx, base);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,26460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26460, ctx.r11.u32);
	// bl 0x82145608
	ctx.lr = 0x82144B68;
	sub_82145608(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82144B70;
	sub_82177758(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27824, ctx.r11.u32);
	// bl 0x82147508
	ctx.lr = 0x82144B84;
	sub_82147508(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82144B88;
	sub_821777E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82144B90;
	sub_82177758(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82144bf0
	if (ctx.cr6.eq) goto loc_82144BF0;
	// bl 0x82166fb0
	ctx.lr = 0x82144BA4;
	sub_82166FB0(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,25868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25868, ctx.r4.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x82144BCC;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,25868(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25868);
	// ble cr6,0x82144bf0
	if (!ctx.cr6.gt) goto loc_82144BF0;
loc_82144BD8:
	// stw r31,25868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25868, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82171668
	ctx.lr = 0x82144BE4;
	sub_82171668(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82144bd8
	if (!ctx.cr0.eq) goto loc_82144BD8;
loc_82144BF0:
	// bl 0x821777e0
	ctx.lr = 0x82144BF4;
	sub_821777E0(ctx, base);
	// bl 0x82144f38
	ctx.lr = 0x82144BF8;
	sub_82144F38(ctx, base);
	// bl 0x82145260
	ctx.lr = 0x82144BFC;
	sub_82145260(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,5504(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5504, ctx.r24.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821447B8) {
	__imp__sub_821447B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144C0C) {
	__imp__sub_82144C0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144C10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// addi r8,r10,-16504
	ctx.r8.s64 = ctx.r10.s64 + -16504;
	// lis r7,-32150
	ctx.r7.s64 = -2106982400;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r11,24588(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24588, ctx.r11.u32);
	// stw r11,24496(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24496, ctx.r11.u32);
	// stw r3,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r3.u32);
	// stw r11,-16504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16504, ctx.r11.u32);
	// stw r11,24584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24584, ctx.r11.u32);
	// stw r4,-16468(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16468, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144C10) {
	__imp__sub_82144C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144C4C) {
	__imp__sub_82144C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lwz r10,-16480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82144c6c
	if (!ctx.cr6.eq) goto loc_82144C6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82144C6C:
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r8,-16480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// lwz r9,24588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24588);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82144c84
	if (!ctx.cr6.gt) goto loc_82144C84;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82144C84:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lwz r10,24496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	// lwz r11,-16504(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -16504);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82144ca0
	if (!ctx.cr6.gt) goto loc_82144CA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82144CA0:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144C50) {
	__imp__sub_82144C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144CD4) {
	__imp__sub_82144CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144CD8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82144cf0
	if (!ctx.cr6.eq) goto loc_82144CF0;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r11,24584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24584, ctx.r11.u32);
	// blr 
	return;
loc_82144CF0:
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r8,-16480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// lwz r9,24588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24588);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82144d0c
	if (!ctx.cr6.gt) goto loc_82144D0C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82144D0C:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lwz r10,24496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	// lwz r11,-16504(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -16504);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82144d28
	if (!ctx.cr6.gt) goto loc_82144D28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82144D28:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// fdiv f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 / ctx.f13.f64;
	// lfd f0,13096(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 13096);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,24584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24584, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144CD8) {
	__imp__sub_82144CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144D7C) {
	__imp__sub_82144D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r7,r11,-16504
	ctx.r7.s64 = ctx.r11.s64 + -16504;
loc_82144D88:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82144d88
	if (!ctx.cr0.eq) goto loc_82144D88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144D80) {
	__imp__sub_82144D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// addi r9,r7,-16464
	ctx.r9.s64 = ctx.r7.s64 + -16464;
	// lwz r11,24500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24500);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,24500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24500, ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144DA8) {
	__imp__sub_82144DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144DD4) {
	__imp__sub_82144DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r10,24832
	ctx.r7.s64 = ctx.r10.s64 + 24832;
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r3,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r3.u32);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144DD8) {
	__imp__sub_82144DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144DF8) {
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
	// bl 0x8228b418
	ctx.lr = 0x82144E10;
	sub_8228B418(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82144e2c
	if (!ctx.cr6.gt) goto loc_82144E2C;
	// lis r30,4
	ctx.r30.s64 = 262144;
loc_82144E2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8228c4e0
	ctx.lr = 0x82144E54;
	sub_8228C4E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// stw r11,24576(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24576, ctx.r11.u32);
	// addi r7,r3,19928
	ctx.r7.s64 = ctx.r3.s64 + 19928;
	// stw r5,24592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24592, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8236b6a0
	ctx.lr = 0x82144E8C;
	sub_8236B6A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82144eb8
	if (!ctx.cr6.eq) goto loc_82144EB8;
	// bl 0x8236b698
	ctx.lr = 0x82144E98;
	sub_8236B698(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82144ec0
	if (ctx.cr6.eq) goto loc_82144EC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,13104
	ctx.r3.s64 = ctx.r10.s64 + 13104;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8230d720
	ctx.lr = 0x82144EB4;
	sub_8230D720(ctx, base);
	// b 0x82144ec0
	goto loc_82144EC0;
loc_82144EB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82144EC0:
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

PPC_WEAK_FUNC(sub_82144DF8) {
	__imp__sub_82144DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144ED8) {
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
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,24832
	ctx.r9.s64 = ctx.r10.s64 + 24832;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x823a5548
	ctx.lr = 0x82144F00;
	sub_823A5548(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82144f18
	if (!ctx.cr6.eq) goto loc_82144F18;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236b730
	ctx.lr = 0x82144F18;
	sub_8236B730(ctx, base);
loc_82144F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144ED8) {
	__imp__sub_82144ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r3,24832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24832);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144F28) {
	__imp__sub_82144F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144F34) {
	__imp__sub_82144F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r11,r11,24832
	ctx.r11.s64 = ctx.r11.s64 + 24832;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x821446c0
	sub_821446C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82144F38) {
	__imp__sub_82144F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F48) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r10,13128
	ctx.r4.s64 = ctx.r10.s64 + 13128;
	// lwz r11,24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24832);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82280900
	ctx.lr = 0x82144F70;
	sub_82280900(ctx, base);
	// bl 0x823ad918
	ctx.lr = 0x82144F74;
	sub_823AD918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82144F48) {
	__imp__sub_82144F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82144F84) {
	__imp__sub_82144F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82144F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82144F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,24832
	ctx.r28.s64 = ctx.r29.s64 + 24832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823de090
	ctx.lr = 0x82144FB4;
	sub_823DE090(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r31,24832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24832, ctx.r31.u32);
	// addi r11,r11,24704
	ctx.r11.s64 = ctx.r11.s64 + 24704;
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x82144df8
	ctx.lr = 0x82144FDC;
	sub_82144DF8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144ffc
	if (!ctx.cr6.eq) goto loc_82144FFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,13156
	ctx.r4.s64 = ctx.r11.s64 + 13156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82144FFC;
	sub_822830E8(ctx, base);
loc_82144FFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82144F88) {
	__imp__sub_82144F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82145004) {
	__imp__sub_82145004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r11,r11,24832
	ctx.r11.s64 = ctx.r11.s64 + 24832;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82145048
	if (ctx.cr6.eq) goto loc_82145048;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blr 
	return;
loc_82145048:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145008) {
	__imp__sub_82145008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214505C) {
	__imp__sub_8214505C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145060) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821450a8
	if (ctx.cr6.eq) goto loc_821450A8;
	// bl 0x82144df8
	ctx.lr = 0x82145088;
	sub_82144DF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821450a8
	if (!ctx.cr6.eq) goto loc_821450A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,13104
	ctx.r3.s64 = ctx.r10.s64 + 13104;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8230d720
	ctx.lr = 0x821450A8;
	sub_8230D720(ctx, base);
loc_821450A8:
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

PPC_WEAK_FUNC(sub_82145060) {
	__imp__sub_82145060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821450BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821450BC) {
	__imp__sub_821450BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821450C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r11,r11,24832
	ctx.r11.s64 = ctx.r11.s64 + 24832;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821450dc
	if (!ctx.cr6.eq) goto loc_821450DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821450DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821450C0) {
	__imp__sub_821450C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821450F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821450F4) {
	__imp__sub_821450F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821450F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82145140
	if (!ctx.cr6.eq) goto loc_82145140;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82145120
	if (ctx.cr6.gt) goto loc_82145120;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82145128
	if (!ctx.cr6.gt) goto loc_82145128;
loc_82145120:
	// rlwinm r11,r3,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
loc_82145128:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32767
	ctx.r11.s64 = ctx.r11.s64 + 32767;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// blr 
	return;
loc_82145140:
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r3,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// addis r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 524288;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82145128
	if (!ctx.cr6.gt) goto loc_82145128;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821450F8) {
	__imp__sub_821450F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214515C) {
	__imp__sub_8214515C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82145168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,24832
	ctx.r29.s64 = ctx.r30.s64 + 24832;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de090
	ctx.lr = 0x82145188;
	sub_823DE090(ctx, base);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,24832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24832, ctx.r31.u32);
	// addi r10,r10,24704
	ctx.r10.s64 = ctx.r10.s64 + 24704;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145160) {
	__imp__sub_82145160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821451AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821451AC) {
	__imp__sub_821451AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821451B0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82145208
	if (ctx.cr6.eq) goto loc_82145208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823a5548
	ctx.lr = 0x821451EC;
	sub_823A5548(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82145204
	if (!ctx.cr6.eq) goto loc_82145204;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236b730
	ctx.lr = 0x82145204;
	sub_8236B730(ctx, base);
loc_82145204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82145208:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821451B0) {
	__imp__sub_821451B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145220) {
	__imp__sub_82145220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145230) {
	__imp__sub_82145230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145240) {
	__imp__sub_82145240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145250) {
	__imp__sub_82145250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145260) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821452b8
	if (ctx.cr6.eq) goto loc_821452B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823a5548
	ctx.lr = 0x8214529C;
	sub_823A5548(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821452b4
	if (!ctx.cr6.eq) goto loc_821452B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236b730
	ctx.lr = 0x821452B4;
	sub_8236B730(ctx, base);
loc_821452B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821452B8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82145260) {
	__imp__sub_82145260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821452D0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82145310
	if (!ctx.cr6.eq) goto loc_82145310;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r10,13128
	ctx.r4.s64 = ctx.r10.s64 + 13128;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82280900
	ctx.lr = 0x8214530C;
	sub_82280900(ctx, base);
	// bl 0x823ad918
	ctx.lr = 0x82145310;
	sub_823AD918(ctx, base);
loc_82145310:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823a5548
	ctx.lr = 0x82145328;
	sub_823A5548(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82145340
	if (!ctx.cr6.eq) goto loc_82145340;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236b730
	ctx.lr = 0x82145340;
	sub_8236B730(ctx, base);
loc_82145340:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145368
	if (ctx.cr6.eq) goto loc_82145368;
	// addi r10,r11,-38
	ctx.r10.s64 = ctx.r11.s64 + -38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8214536c
	goto loc_8214536C;
loc_82145368:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_8214536C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82145390
	if (!ctx.cr6.eq) goto loc_82145390;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x82145394
	goto loc_82145394;
loc_82145390:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82145394:
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r9,r9,24704
	ctx.r9.s64 = ctx.r9.s64 + 24704;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addis r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 524288;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821453d8
	if (!ctx.cr6.eq) goto loc_821453D8;
	// addi r11,r9,128
	ctx.r11.s64 = ctx.r9.s64 + 128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821453D8:
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r7,8192
	ctx.r7.s64 = 536870912;
	// lwz r9,24588(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24588);
	// lwz r10,24584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24584);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,24588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24588, ctx.r6.u32);
	// lwz r5,24588(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24588);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82145408
	if (ctx.cr6.lt) goto loc_82145408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24584, ctx.r10.u32);
loc_82145408:
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

PPC_WEAK_FUNC(sub_821452D0) {
	__imp__sub_821452D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214541C) {
	__imp__sub_8214541C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145420) {
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
	// bl 0x821452d0
	ctx.lr = 0x82145430;
	sub_821452D0(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r10,r11,24832
	ctx.r10.s64 = ctx.r11.s64 + 24832;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145448
	if (ctx.cr6.eq) goto loc_82145448;
	// bl 0x82144df8
	ctx.lr = 0x82145448;
	sub_82144DF8(ctx, base);
loc_82145448:
	// bl 0x8228bd80
	ctx.lr = 0x8214544C;
	sub_8228BD80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145420) {
	__imp__sub_82145420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214545C) {
	__imp__sub_8214545C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145460) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// bne cr6,0x8214549c
	if (!ctx.cr6.eq) goto loc_8214549C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82144670
	ctx.lr = 0x82145494;
	sub_82144670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821454b8
	if (ctx.cr6.eq) goto loc_821454B8;
loc_8214549C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r10,13128
	ctx.r4.s64 = ctx.r10.s64 + 13128;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82280900
	ctx.lr = 0x821454B4;
	sub_82280900(ctx, base);
	// bl 0x823ad918
	ctx.lr = 0x821454B8;
	sub_823AD918(ctx, base);
loc_821454B8:
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

PPC_WEAK_FUNC(sub_82145460) {
	__imp__sub_82145460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821454CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821454CC) {
	__imp__sub_821454CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821454D0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwz r11,24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24832);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82144670
	ctx.lr = 0x821454FC;
	sub_82144670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145520
	if (ctx.cr6.eq) goto loc_82145520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r10,13128
	ctx.r4.s64 = ctx.r10.s64 + 13128;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82280900
	ctx.lr = 0x8214551C;
	sub_82280900(ctx, base);
	// bl 0x823ad918
	ctx.lr = 0x82145520;
	sub_823AD918(ctx, base);
loc_82145520:
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

PPC_WEAK_FUNC(sub_821454D0) {
	__imp__sub_821454D0(ctx, base);
}

