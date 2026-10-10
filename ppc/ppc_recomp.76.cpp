#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822E5B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r11,r4,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// lis r10,130
	ctx.r10.s64 = 8519680;
	// bne cr6,0x822e5b48
	if (!ctx.cr6.eq) goto loc_822E5B48;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,8448
	ctx.r9.s64 = 8448;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// blr 
	return;
loc_822E5B48:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e5b58
	if (ctx.cr6.eq) goto loc_822E5B58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E5B58:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e5b74
	if (ctx.cr6.eq) goto loc_822E5B74;
	// li r3,2400
	ctx.r3.s64 = 2400;
	// blr 
	return;
loc_822E5B74:
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5B18) {
	__imp__sub_822E5B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5B7C) {
	__imp__sub_822E5B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5B80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r11,r4,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// lis r10,130
	ctx.r10.s64 = 8519680;
	// bne cr6,0x822e5ba4
	if (!ctx.cr6.eq) goto loc_822E5BA4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822e4d08
	sub_822E4D08(ctx, base);
	return;
loc_822E5BA4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822e4dc8
	sub_822E4DC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5B80) {
	__imp__sub_822E5B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5BC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5BC4) {
	__imp__sub_822E5BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5BC8) {
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
	// lis r3,6
	ctx.r3.s64 = 393216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// ori r3,r3,46080
	ctx.r3.u64 = ctx.r3.u64 | 46080;
	// bl 0x822e5290
	ctx.lr = 0x822E5BEC;
	sub_822E5290(ctx, base);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// stw r3,31672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5BC8) {
	__imp__sub_822E5BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5C04) {
	__imp__sub_822E5C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C08) {
	PPC_FUNC_PROLOGUE();
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// beq 0x822e5c44
	if (ctx.cr0.eq) goto loc_822E5C44;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822E5C34:
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bdnz 0x822e5c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E5C34;
loc_822E5C44:
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5C08) {
	__imp__sub_822E5C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5C54) {
	__imp__sub_822E5C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e5c6c
	if (!ctx.cr6.eq) goto loc_822E5C6C;
	// blr 
	return;
loc_822E5C6C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5C58) {
	__imp__sub_822E5C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5C84) {
	__imp__sub_822E5C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5C88) {
	__imp__sub_822E5C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5CA4) {
	__imp__sub_822E5CA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E5CB8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e5cb8
	if (!ctx.cr6.eq) goto loc_822E5CB8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5CA8) {
	__imp__sub_822E5CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5CCC) {
	__imp__sub_822E5CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5CD0) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822E5CE0;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5d04
	if (ctx.cr6.eq) goto loc_822E5D04;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E5D04:
	// bl 0x8228bc50
	ctx.lr = 0x822E5D08;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5d30
	if (ctx.cr6.eq) goto loc_822E5D30;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// addi r11,r11,26168
	ctx.r11.s64 = ctx.r11.s64 + 26168;
	// addi r3,r11,17932
	ctx.r3.s64 = ctx.r11.s64 + 17932;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E5D30:
	// bl 0x8228b728
	ctx.lr = 0x822E5D34;
	sub_8228B728(ctx, base);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,26168
	ctx.r9.s64 = ctx.r11.s64 + 26168;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r11,-29672
	ctx.r5.s64 = ctx.r11.s64 + -29672;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5CD0) {
	__imp__sub_822E5CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5D64) {
	__imp__sub_822E5D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5D68) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-28736
	ctx.r8.s64 = ctx.r9.s64 + -28736;
	// stb r11,1028(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1028, ctx.r11.u8);
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
	// stw r8,1036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1036, ctx.r8.u32);
	// stb r10,1029(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1029, ctx.r10.u8);
	// stb r11,1030(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1030, ctx.r11.u8);
	// stb r11,1031(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1031, ctx.r11.u8);
	// stb r11,1032(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1032, ctx.r11.u8);
	// stw r8,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r8.u32);
	// stw r11,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r11.u32);
	// stw r11,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5D68) {
	__imp__sub_822E5D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5DA4) {
	__imp__sub_822E5DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5DA8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31844
	ctx.r10.s64 = -2086928384;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r8,r11,-28736
	ctx.r8.s64 = ctx.r11.s64 + -28736;
	// addi r7,r10,26168
	ctx.r7.s64 = ctx.r10.s64 + 26168;
	// ori r4,r6,36900
	ctx.r4.u64 = ctx.r6.u64 | 36900;
	// ori r3,r5,36904
	ctx.r3.u64 = ctx.r5.u64 | 36904;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r8,1036(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1036, ctx.r8.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r8,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r8,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u32);
	// stw r8,1040(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1040, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,18972(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18972, ctx.r8.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r8,18968(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18968, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stb r9,1029(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1029, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,1028(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1028, ctx.r10.u8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stb r10,1031(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1031, ctx.r10.u8);
	// ori r6,r8,36893
	ctx.r6.u64 = ctx.r8.u64 | 36893;
	// stw r10,1048(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1048, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1024(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1024, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,1032(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1032, ctx.r9.u8);
	// ori r8,r5,36888
	ctx.r8.u64 = ctx.r5.u64 | 36888;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,18961(r7)
	PPC_STORE_U8(ctx.r7.u32 + 18961, ctx.r10.u8);
	// ori r5,r4,36892
	ctx.r5.u64 = ctx.r4.u64 | 36892;
	// stb r11,1030(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1030, ctx.r11.u8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,1044(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1044, ctx.r11.u32);
	// stb r11,18960(r7)
	PPC_STORE_U8(ctx.r7.u32 + 18960, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,18963(r7)
	PPC_STORE_U8(ctx.r7.u32 + 18963, ctx.r11.u8);
	// ori r4,r3,36896
	ctx.r4.u64 = ctx.r3.u64 | 36896;
	// stw r11,18980(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18980, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,18956(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18956, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,18964(r7)
	PPC_STORE_U8(ctx.r7.u32 + 18964, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r11,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stbx r9,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r31,0
	ctx.r31.s64 = 0;
	// stbx r11,r7,r4
	PPC_STORE_U8(ctx.r7.u32 + ctx.r4.u32, ctx.r11.u8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stb r9,18962(r7)
	PPC_STORE_U8(ctx.r7.u32 + 18962, ctx.r9.u8);
	// ori r8,r6,36895
	ctx.r8.u64 = ctx.r6.u64 | 36895;
	// stw r9,18976(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18976, ctx.r9.u32);
	// ori r3,r3,36894
	ctx.r3.u64 = ctx.r3.u64 | 36894;
	// ori r6,r31,36908
	ctx.r6.u64 = ctx.r31.u64 | 36908;
	// ori r4,r5,36912
	ctx.r4.u64 = ctx.r5.u64 | 36912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
	// stbx r10,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u8);
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5DA8) {
	__imp__sub_822E5DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5ECC) {
	__imp__sub_822E5ECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E5ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E5EE4;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x822e5f5c
	if (!ctx.cr6.eq) goto loc_822E5F5C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// bl 0x82280900
	ctx.lr = 0x822E5F08;
	sub_82280900(ctx, base);
	// lwz r10,16896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822e5f48
	if (!ctx.cr6.gt) goto loc_822E5F48;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// addi r27,r11,-2476
	ctx.r27.s64 = ctx.r11.s64 + -2476;
loc_822E5F24:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzu r6,1056(r28)
	ea = 1056 + ctx.r28.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x822E5F38;
	sub_82280900(ctx, base);
	// lwz r11,16896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e5f24
	if (ctx.cr6.lt) goto loc_822E5F24;
loc_822E5F48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-2540
	ctx.r4.s64 = ctx.r11.s64 + -2540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x822E5F5C;
	sub_822830E8(ctx, base);
loc_822E5F5C:
	// lwz r11,16896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// mulli r10,r11,1056
	ctx.r10.s64 = ctx.r11.s64 * 1056;
	// stw r11,16896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16896, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// stb r29,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r29.u8);
	// stb r9,1029(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1029, ctx.r9.u8);
	// stb r29,1030(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1030, ctx.r29.u8);
	// stb r29,1031(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1031, ctx.r29.u8);
	// stb r29,1032(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1032, ctx.r29.u8);
	// stw r8,1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1036, ctx.r8.u32);
	// stw r8,1040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1040, ctx.r8.u32);
	// stw r29,1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1044, ctx.r29.u32);
	// stw r29,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r29.u32);
	// stw r26,1052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1052, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5ED0) {
	__imp__sub_822E5ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5FB0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E5FC4;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e5fe4
	if (!ctx.cr6.eq) goto loc_822E5FE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-2448
	ctx.r4.s64 = ctx.r11.s64 + -2448;
	// bl 0x822830e8
	ctx.lr = 0x822E5FE4;
	sub_822830E8(ctx, base);
loc_822E5FE4:
	// lwz r11,16896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16896, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822E5FB0) {
	__imp__sub_822E5FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6004) {
	__imp__sub_822E6004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6008) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6018;
	sub_822E5CD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6008) {
	__imp__sub_822E6008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6030) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6048;
	sub_822E5CD0(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// subfe r10,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,1029(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1029, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822E6030) {
	__imp__sub_822E6030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6074) {
	__imp__sub_822E6074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6078) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6090;
	sub_822E5CD0(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// subfe r10,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,1030(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1030, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822E6078) {
	__imp__sub_822E6078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E60BC) {
	__imp__sub_822E60BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E60C0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E60D8;
	sub_822E5CD0(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// subfe r10,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,1031(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1031, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822E60C0) {
	__imp__sub_822E60C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6104) {
	__imp__sub_822E6104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6108) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6120;
	sub_822E5CD0(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// subfe r10,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,1032(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1032, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822E6108) {
	__imp__sub_822E6108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E614C) {
	__imp__sub_822E614C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6150) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6160;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6150) {
	__imp__sub_822E6150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6180) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6198;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r31,1036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1036, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822E6180) {
	__imp__sub_822E6180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E61BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E61BC) {
	__imp__sub_822E61BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E61C0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E61D8;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r31,1040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1040, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822E61C0) {
	__imp__sub_822E61C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E61FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E61FC) {
	__imp__sub_822E61FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6200) {
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
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E623C;
	sub_822E5CD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// addi r10,r1,4248
	ctx.r10.s64 = ctx.r1.s64 + 4248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823e06d0
	ctx.lr = 0x822E626C;
	sub_823E06D0(ctx, base);
	// lwz r8,16896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x822e629c
	if (ctx.cr6.eq) goto loc_822E629C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,1024(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r6,1052(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// addi r4,r11,-2408
	ctx.r4.s64 = ctx.r11.s64 + -2408;
	// lwz r5,1036(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	// bl 0x822830e8
	ctx.lr = 0x822E6298;
	sub_822830E8(ctx, base);
	// b 0x822e62ac
	goto loc_822E62AC;
loc_822E629C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5272
	ctx.r4.s64 = ctx.r11.s64 + -5272;
	// bl 0x822830e8
	ctx.lr = 0x822E62AC;
	sub_822830E8(ctx, base);
loc_822E62AC:
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

PPC_WEAK_FUNC(sub_822E6200) {
	__imp__sub_822E6200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E62C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E62C4) {
	__imp__sub_822E62C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E62C8) {
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
	// stwu r1,-4224(r1)
	ea = -4224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E6304;
	sub_822E5CD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// addi r10,r1,4248
	ctx.r10.s64 = ctx.r1.s64 + 4248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823e06d0
	ctx.lr = 0x822E6334;
	sub_823E06D0(ctx, base);
	// lwz r8,16896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16896);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,23
	ctx.r3.s64 = 23;
	// beq cr6,0x822e6364
	if (ctx.cr6.eq) goto loc_822E6364;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,1024(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r6,1052(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// addi r4,r11,-2384
	ctx.r4.s64 = ctx.r11.s64 + -2384;
	// lwz r5,1040(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// bl 0x82280b08
	ctx.lr = 0x822E6360;
	sub_82280B08(ctx, base);
	// b 0x822e6374
	goto loc_822E6374;
loc_822E6364:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// bl 0x82280b08
	ctx.lr = 0x822E6374;
	sub_82280B08(ctx, base);
loc_822E6374:
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

PPC_WEAK_FUNC(sub_822E62C8) {
	__imp__sub_822E62C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E638C) {
	__imp__sub_822E638C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6390) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E63A8;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e63d0
	if (ctx.cr6.eq) goto loc_822E63D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
	// bl 0x822e6200
	ctx.lr = 0x822E63D0;
	sub_822E6200(ctx, base);
loc_822E63D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1028(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1028, ctx.r11.u8);
	// lwz r10,16904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16904);
	// stw r10,16900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16900, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822E6390) {
	__imp__sub_822E6390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E63F8) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6418;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lbz r8,1028(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,1044(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// lwz r6,1048(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_822E63F8) {
	__imp__sub_822E63F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6464) {
	__imp__sub_822E6464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E6488;
	sub_822E5CD0(ctx, base);
	// lwz r9,16896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r9,1056
	ctx.r11.s64 = ctx.r9.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r5,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r5.u8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r4,1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1044, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822E6468) {
	__imp__sub_822E6468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E64DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E64DC) {
	__imp__sub_822E64DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E64E0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6500;
	sub_822E5CD0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r10,16896(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 * 1056;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bgt cr6,0x822e6550
	if (ctx.cr6.gt) goto loc_822E6550;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E6520:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e656c
	if (ctx.cr6.eq) goto loc_822E656C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822e6540
	if (!ctx.cr6.eq) goto loc_822E6540;
	// lwz r11,1024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1024, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_822E6540:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x822e6520
	if (!ctx.cr6.gt) goto loc_822E6520;
loc_822E6550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822E6554:
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
loc_822E656C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e6554
	goto loc_822E6554;
}

PPC_WEAK_FUNC(sub_822E64E0) {
	__imp__sub_822E64E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6574) {
	__imp__sub_822E6574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e6674
	if (ctx.cr6.eq) goto loc_822E6674;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e6674
	if (ctx.cr6.eq) goto loc_822E6674;
	// li r7,10
	ctx.r7.s64 = 10;
loc_822E65A0:
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x822e6654
	if (ctx.cr6.eq) goto loc_822E6654;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x822e6654
	if (ctx.cr6.eq) goto loc_822E6654;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822e6654
	if (!ctx.cr6.eq) goto loc_822E6654;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822e65f4
	if (!ctx.cr6.eq) goto loc_822E65F4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e6664
	if (ctx.cr6.eq) goto loc_822E6664;
loc_822E65D8:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x822e6664
	if (ctx.cr6.eq) goto loc_822E6664;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e65d8
	if (!ctx.cr6.eq) goto loc_822E65D8;
	// b 0x822e6664
	goto loc_822E6664;
loc_822E65F4:
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// bne cr6,0x822e6654
	if (!ctx.cr6.eq) goto loc_822E6654;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e6664
	if (ctx.cr6.eq) goto loc_822E6664;
loc_822E660C:
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// bne cr6,0x822e6620
	if (!ctx.cr6.eq) goto loc_822E6620;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r6,47
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 47, ctx.xer);
	// beq cr6,0x822e6644
	if (ctx.cr6.eq) goto loc_822E6644;
loc_822E6620:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x822e6634
	if (!ctx.cr6.eq) goto loc_822E6634;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822E6634:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e660c
	if (!ctx.cr6.eq) goto loc_822E660C;
loc_822E6644:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e6664
	if (ctx.cr6.eq) goto loc_822E6664;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x822e6664
	goto loc_822E6664;
loc_822E6654:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822E6664:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e65a0
	if (!ctx.cr6.eq) goto loc_822E65A0;
loc_822E6674:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6578) {
	__imp__sub_822E6578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6680) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6690;
	sub_822E5CD0(ctx, base);
	// lwz r3,16900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16900);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E6680) {
	__imp__sub_822E6680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E66A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E66A4) {
	__imp__sub_822E66A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E66A8) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E66C8;
	sub_822E5CD0(ctx, base);
	// lwz r8,16896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mulli r8,r8,1056
	ctx.r8.s64 = ctx.r8.s64 * 1056;
	// stbx r6,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// bne cr6,0x822e6720
	if (!ctx.cr6.eq) goto loc_822E6720;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x822e6708
	if (ctx.cr6.eq) goto loc_822E6708;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x822e6740
	if (!ctx.cr6.eq) goto loc_822E6740;
loc_822E6708:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x822e67d8
	if (!ctx.cr6.eq) goto loc_822E67D8;
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// b 0x822e67d8
	goto loc_822E67D8;
loc_822E6720:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x822e6738
	if (ctx.cr6.eq) goto loc_822E6738;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x822e6740
	if (!ctx.cr6.eq) goto loc_822E6740;
loc_822E6738:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x822e6720
	goto loc_822E6720;
loc_822E6740:
	// lwz r8,16900(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16900);
	// stw r10,16900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16900, ctx.r10.u32);
	// stw r8,16904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16904, ctx.r8.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e67b8
	if (ctx.cr6.eq) goto loc_822E67B8;
	// li r7,34
	ctx.r7.s64 = 34;
loc_822E6760:
	// cmpwi cr6,r9,44
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 44, ctx.xer);
	// beq cr6,0x822e67a4
	if (ctx.cr6.eq) goto loc_822E67A4;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x822e67a4
	if (ctx.cr6.eq) goto loc_822E67A4;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x822e6790
	if (ctx.cr6.eq) goto loc_822E6790;
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x822e67f0
	if (ctx.cr6.eq) goto loc_822E67F0;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bge cr6,0x822e6790
	if (!ctx.cr6.lt) goto loc_822E6790;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E6790:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822E6794:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e6760
	if (!ctx.cr6.eq) goto loc_822E6760;
loc_822E67A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e67b8
	if (ctx.cr6.eq) goto loc_822E67B8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x822e67b8
	if (ctx.cr6.eq) goto loc_822E67B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822E67B8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e67d0
	if (!ctx.cr6.eq) goto loc_822E67D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e67d0
	if (!ctx.cr6.eq) goto loc_822E67D0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_822E67D0:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
loc_822E67D8:
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
loc_822E67F0:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
loc_822E67F4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x822e6828
	if (!ctx.cr6.eq) goto loc_822E6828;
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// bne cr6,0x822e6794
	if (!ctx.cr6.eq) goto loc_822E6794;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bge cr6,0x822e6820
	if (!ctx.cr6.lt) goto loc_822E6820;
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E6820:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x822e67f4
	goto loc_822E67F4;
loc_822E6828:
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// bge cr6,0x822e6838
	if (!ctx.cr6.lt) goto loc_822E6838;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E6838:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x822e67f4
	goto loc_822E67F4;
}

PPC_WEAK_FUNC(sub_822E66A8) {
	__imp__sub_822E66A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822E6848;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x822e5cd0
	ctx.lr = 0x822E6860;
	sub_822E5CD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,16896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// stbx r26,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r26.u8);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x822e69a0
	if (ctx.cr6.eq) goto loc_822E69A0;
	// lwz r11,1024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1024);
	// lbz r10,1031(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1031);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1044(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1044, ctx.r11.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r9,1048(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1048, ctx.r9.u32);
	// beq cr6,0x822e68b4
	if (ctx.cr6.eq) goto loc_822E68B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e66a8
	ctx.lr = 0x822E68AC;
	sub_822E66A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E68B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e64e0
	ctx.lr = 0x822E68BC;
	sub_822E64E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e69a0
	if (ctx.cr6.eq) goto loc_822E69A0;
loc_822E68C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e68dc
	if (ctx.cr6.eq) goto loc_822E68DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822e6d04
	if (ctx.cr6.eq) goto loc_822E6D04;
loc_822E68DC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822e69b0
	if (!ctx.cr6.eq) goto loc_822E69B0;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r8,47
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 47, ctx.xer);
	// bne cr6,0x822e6924
	if (!ctx.cr6.eq) goto loc_822E6924;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6988
	if (ctx.cr6.eq) goto loc_822E6988;
loc_822E6908:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822e6988
	if (ctx.cr6.eq) goto loc_822E6988;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e6908
	if (!ctx.cr6.eq) goto loc_822E6908;
	// b 0x822e6988
	goto loc_822E6988;
loc_822E6924:
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822e69b0
	if (!ctx.cr6.eq) goto loc_822E69B0;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r8,42
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 42, ctx.xer);
	// bne cr6,0x822e69b0
	if (!ctx.cr6.eq) goto loc_822E69B0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6988
	if (ctx.cr6.eq) goto loc_822E6988;
loc_822E6944:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x822e6958
	if (!ctx.cr6.eq) goto loc_822E6958;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x822e697c
	if (ctx.cr6.eq) goto loc_822E697C;
loc_822E6958:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822e696c
	if (!ctx.cr6.eq) goto loc_822E696C;
	// lwz r11,1024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1024);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1024, ctx.r11.u32);
loc_822E696C:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e6944
	if (!ctx.cr6.eq) goto loc_822E6944;
loc_822E697C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e6988
	if (ctx.cr6.eq) goto loc_822E6988;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_822E6988:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e64e0
	ctx.lr = 0x822E6994;
	sub_822E64E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e68c8
	if (!ctx.cr6.eq) goto loc_822E68C8;
loc_822E69A0:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E69B0:
	// lwz r11,16900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16900);
	// cmpwi cr6,r10,34
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 34, ctx.xer);
	// stw r30,16900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16900, ctx.r30.u32);
	// stw r11,16904(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16904, ctx.r11.u32);
	// bne cr6,0x822e6a7c
	if (!ctx.cr6.eq) goto loc_822E6A7C;
	// lbz r11,1030(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1030);
	// li r6,34
	ctx.r6.s64 = 34;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e69dc
	if (ctx.cr6.eq) goto loc_822E69DC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r6,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r6.u8);
loc_822E69DC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
loc_822E69E0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x822e6a18
	if (!ctx.cr6.eq) goto loc_822E6A18;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x822e6a0c
	if (ctx.cr6.eq) goto loc_822E6A0C;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x822e6a18
	if (!ctx.cr6.eq) goto loc_822E6A18;
loc_822E6A0C:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822e6a40
	goto loc_822E6A40;
loc_822E6A18:
	// cmpwi cr6,r8,34
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 34, ctx.xer);
	// beq cr6,0x822e6a54
	if (ctx.cr6.eq) goto loc_822E6A54;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e6a54
	if (ctx.cr6.eq) goto loc_822E6A54;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x822e6a40
	if (!ctx.cr6.eq) goto loc_822E6A40;
	// lwz r10,1024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1024, ctx.r10.u32);
loc_822E6A40:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e69e0
	if (!ctx.cr6.lt) goto loc_822E69E0;
	// stbx r7,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822e69e0
	goto loc_822E69E0;
loc_822E6A54:
	// lbz r10,1030(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1030);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e6a68
	if (ctx.cr6.eq) goto loc_822E6A68;
	// stbx r6,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6A68:
	// stbx r26,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E6A7C:
	// lbz r11,1029(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1029);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e6aac
	if (ctx.cr6.eq) goto loc_822E6AAC;
loc_822E6A88:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6a98
	if (!ctx.cr6.lt) goto loc_822E6A98;
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6A98:
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x822e6a88
	if (ctx.cr6.gt) goto loc_822E6A88;
	// b 0x822e6cec
	goto loc_822E6CEC;
loc_822E6AAC:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x822e6abc
	if (ctx.cr6.lt) goto loc_822E6ABC;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x822e6b08
	if (!ctx.cr6.gt) goto loc_822E6B08;
loc_822E6ABC:
	// lbz r11,1032(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e6ae8
	if (ctx.cr6.eq) goto loc_822E6AE8;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x822e6ae8
	if (!ctx.cr6.eq) goto loc_822E6AE8;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822e6ae8
	if (ctx.cr6.lt) goto loc_822E6AE8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x822e6b08
	if (!ctx.cr6.gt) goto loc_822E6B08;
loc_822E6AE8:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// bne cr6,0x822e6bb0
	if (!ctx.cr6.eq) goto loc_822E6BB0;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822e6bb0
	if (ctx.cr6.lt) goto loc_822E6BB0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822e6bb0
	if (ctx.cr6.gt) goto loc_822E6BB0;
loc_822E6B08:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6b18
	if (!ctx.cr6.lt) goto loc_822E6B18;
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6B18:
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822e6b30
	if (ctx.cr6.lt) goto loc_822E6B30;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x822e6b08
	if (!ctx.cr6.gt) goto loc_822E6B08;
loc_822E6B30:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x822e6b08
	if (ctx.cr6.eq) goto loc_822E6B08;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x822e6b48
	if (ctx.cr6.eq) goto loc_822E6B48;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// bne cr6,0x822e6cec
	if (!ctx.cr6.eq) goto loc_822E6CEC;
loc_822E6B48:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6b58
	if (!ctx.cr6.lt) goto loc_822E6B58;
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6B58:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// beq cr6,0x822e6b70
	if (ctx.cr6.eq) goto loc_822E6B70;
	// cmpwi cr6,r10,43
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 43, ctx.xer);
	// bne cr6,0x822e6b84
	if (!ctx.cr6.eq) goto loc_822E6B84;
loc_822E6B70:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6b80
	if (!ctx.cr6.lt) goto loc_822E6B80;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6B80:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
loc_822E6B84:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6b94
	if (!ctx.cr6.lt) goto loc_822E6B94;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6B94:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x822e6cec
	if (ctx.cr6.lt) goto loc_822E6CEC;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x822e6b84
	if (!ctx.cr6.gt) goto loc_822E6B84;
	// b 0x822e6cec
	goto loc_822E6CEC;
loc_822E6BB0:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x822e6bc0
	if (ctx.cr6.lt) goto loc_822E6BC0;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// ble cr6,0x822e6c9c
	if (!ctx.cr6.gt) goto loc_822E6C9C;
loc_822E6BC0:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x822e6bd0
	if (ctx.cr6.lt) goto loc_822E6BD0;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// ble cr6,0x822e6c9c
	if (!ctx.cr6.gt) goto loc_822E6C9C;
loc_822E6BD0:
	// cmpwi cr6,r10,95
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 95, ctx.xer);
	// beq cr6,0x822e6c9c
	if (ctx.cr6.eq) goto loc_822E6C9C;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x822e6c9c
	if (ctx.cr6.eq) goto loc_822E6C9C;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x822e6c9c
	if (ctx.cr6.eq) goto loc_822E6C9C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r9,r11,19420
	ctx.r9.s64 = ctx.r11.s64 + 19420;
	// lwz r4,19420(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19420);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e6c58
	if (ctx.cr6.eq) goto loc_822E6C58;
loc_822E6BFC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822E6C00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e6c00
	if (!ctx.cr6.eq) goto loc_822E6C00;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e6c44
	if (!ctx.cr6.gt) goto loc_822E6C44;
loc_822E6C28:
	// lbzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e6c44
	if (!ctx.cr6.eq) goto loc_822E6C44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822e6c28
	if (ctx.cr6.lt) goto loc_822E6C28;
loc_822E6C44:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x822e6c78
	if (ctx.cr6.eq) goto loc_822E6C78;
	// lwzu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822e6bfc
	if (!ctx.cr6.eq) goto loc_822E6BFC;
loc_822E6C58:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stb r26,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r26.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E6C78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E6C84;
	sub_823DE1F0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stbx r26,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E6C9C:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bge cr6,0x822e6cac
	if (!ctx.cr6.lt) goto loc_822E6CAC;
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E6CAC:
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x822e6cc4
	if (ctx.cr6.lt) goto loc_822E6CC4;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x822e6c9c
	if (!ctx.cr6.gt) goto loc_822E6C9C;
loc_822E6CC4:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x822e6cd4
	if (ctx.cr6.lt) goto loc_822E6CD4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x822e6c9c
	if (!ctx.cr6.gt) goto loc_822E6C9C;
loc_822E6CD4:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x822e6c9c
	if (ctx.cr6.eq) goto loc_822E6C9C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822e6cec
	if (ctx.cr6.lt) goto loc_822E6CEC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x822e6c9c
	if (!ctx.cr6.gt) goto loc_822E6C9C;
loc_822E6CEC:
	// addi r11,r31,-1024
	ctx.r11.s64 = ctx.r31.s64 + -1024;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// stbx r26,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r26.u8);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
loc_822E6D04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6840) {
	__imp__sub_822E6840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6D10) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6D28;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e6d58
	if (ctx.cr6.eq) goto loc_822E6D58;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E6D58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E6D64;
	sub_822E6840(ctx, base);
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

PPC_WEAK_FUNC(sub_822E6D10) {
	__imp__sub_822E6D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6D78) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6D90;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e6dcc
	if (ctx.cr6.eq) goto loc_822E6DCC;
	// lbz r11,1029(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1029);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,1028(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1028, ctx.r10.u8);
	// beq cr6,0x822e6dd8
	if (ctx.cr6.eq) goto loc_822E6DD8;
	// lwz r11,1048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,1044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// stw r10,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r10.u32);
loc_822E6DCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E6DD8;
	sub_822E6840(ctx, base);
loc_822E6DD8:
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

PPC_WEAK_FUNC(sub_822E6D78) {
	__imp__sub_822E6D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6DEC) {
	__imp__sub_822E6DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E6DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E6E0C;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e6e3c
	if (ctx.cr6.eq) goto loc_822E6E3C;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E6E3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E6E48;
	sub_822E6840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E6E54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e6e78
	if (ctx.cr6.eq) goto loc_822E6E78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e6e54
	if (ctx.cr6.eq) goto loc_822E6E54;
loc_822E6E78:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e6e8c
	if (!ctx.cr6.eq) goto loc_822E6E8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E6E8C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// beq cr6,0x822e6eb0
	if (ctx.cr6.eq) goto loc_822E6EB0;
	// bl 0x822e62c8
	ctx.lr = 0x822E6EA4;
	sub_822E62C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E6EB0:
	// bl 0x822e6200
	ctx.lr = 0x822E6EB4;
	sub_822E6200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6DF0) {
	__imp__sub_822E6DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E6EC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r31,r11,26168
	ctx.r31.s64 = ctx.r11.s64 + 26168;
loc_822E6EE8:
	// bl 0x8228bcc0
	ctx.lr = 0x822E6EEC;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e6f00
	if (ctx.cr6.eq) goto loc_822E6F00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x822e6f34
	goto loc_822E6F34;
loc_822E6F00:
	// bl 0x8228bc50
	ctx.lr = 0x822E6F04;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e6f18
	if (ctx.cr6.eq) goto loc_822E6F18;
	// addi r11,r31,17932
	ctx.r11.s64 = ctx.r31.s64 + 17932;
	// b 0x822e6f34
	goto loc_822E6F34;
loc_822E6F18:
	// bl 0x8228b728
	ctx.lr = 0x822E6F1C;
	sub_8228B728(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r7,r11,-29672
	ctx.r7.s64 = ctx.r11.s64 + -29672;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_822E6F34:
	// lwz r10,16896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16896);
	// mulli r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e6f60
	if (ctx.cr6.eq) goto loc_822E6F60;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stb r26,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r26.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,1044(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
loc_822E6F60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E6F6C;
	sub_822E6840(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e6fac
	if (!ctx.cr6.eq) goto loc_822E6FAC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x822e6fa0
	if (!ctx.cr6.eq) goto loc_822E6FA0;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822e6f98
	if (!ctx.cr6.eq) goto loc_822E6F98;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x822e6fac
	goto loc_822E6FAC;
loc_822E6F98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x822e6fac
	goto loc_822E6FAC;
loc_822E6FA0:
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x822e6fac
	if (!ctx.cr6.eq) goto loc_822E6FAC;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_822E6FAC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e6fc0
	if (ctx.cr6.eq) goto loc_822E6FC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e6ee8
	if (!ctx.cr6.eq) goto loc_822E6EE8;
loc_822E6FC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E6EC0) {
	__imp__sub_822E6EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E6FCC) {
	__imp__sub_822E6FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E6FD0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E6FE8;
	sub_822E5CD0(ctx, base);
	// lwz r10,16896(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 * 1056;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq cr6,0x822e7040
	if (ctx.cr6.eq) goto loc_822E7040;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e703c
	if (ctx.cr6.eq) goto loc_822E703C;
loc_822E7010:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x822e7030
	if (ctx.cr6.eq) goto loc_822E7030;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e7010
	if (!ctx.cr6.eq) goto loc_822E7010;
	// b 0x822e703c
	goto loc_822E703C;
loc_822E7030:
	// lwz r10,1024(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1024(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1024, ctx.r10.u32);
loc_822E703C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822E7040:
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

PPC_WEAK_FUNC(sub_822E6FD0) {
	__imp__sub_822E6FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7054) {
	__imp__sub_822E7054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E7060;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E706C;
	sub_822E5CD0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,16896(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mulli r11,r10,1056
	ctx.r11.s64 = ctx.r10.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// lbz r8,1028(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// lwz r7,1044(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// lwz r6,1048(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r29,r11,26168
	ctx.r29.s64 = ctx.r11.s64 + 26168;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_822E70B0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822E70B4:
	// bl 0x8228bcc0
	ctx.lr = 0x822E70B8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e70cc
	if (ctx.cr6.eq) goto loc_822E70CC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x822e7100
	goto loc_822E7100;
loc_822E70CC:
	// bl 0x8228bc50
	ctx.lr = 0x822E70D0;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e70e4
	if (ctx.cr6.eq) goto loc_822E70E4;
	// addi r11,r29,17932
	ctx.r11.s64 = ctx.r29.s64 + 17932;
	// b 0x822e7100
	goto loc_822E7100;
loc_822E70E4:
	// bl 0x8228b728
	ctx.lr = 0x822E70E8;
	sub_8228B728(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r7,r11,-29672
	ctx.r7.s64 = ctx.r11.s64 + -29672;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_822E7100:
	// lwz r10,16896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16896);
	// mulli r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e7138
	if (ctx.cr6.eq) goto loc_822E7138;
	// lbz r10,1029(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1029);
	// stb r27,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r27.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7148
	if (ctx.cr6.eq) goto loc_822E7148;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,1044(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
loc_822E7138:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E7144;
	sub_822E6840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E7148:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7178
	if (!ctx.cr6.eq) goto loc_822E7178;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x822e70b4
	if (!ctx.cr6.gt) goto loc_822E70B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e6468
	ctx.lr = 0x822E716C;
	sub_822E6468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E7178:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x822e70b0
	goto loc_822E70B0;
}

PPC_WEAK_FUNC(sub_822E7058) {
	__imp__sub_822E7058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7184) {
	__imp__sub_822E7184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E7190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e5cd0
	ctx.lr = 0x822E719C;
	sub_822E5CD0(ctx, base);
	// addi r29,r3,16908
	ctx.r29.s64 = ctx.r3.s64 + 16908;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-31844
	ctx.r11.s64 = -2086928384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,26168
	ctx.r30.s64 = ctx.r11.s64 + 26168;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
	// addi r27,r10,-6372
	ctx.r27.s64 = ctx.r10.s64 + -6372;
loc_822E71B8:
	// bl 0x8228bcc0
	ctx.lr = 0x822E71BC;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e71d0
	if (ctx.cr6.eq) goto loc_822E71D0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822e7204
	goto loc_822E7204;
loc_822E71D0:
	// bl 0x8228bc50
	ctx.lr = 0x822E71D4;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e71e8
	if (ctx.cr6.eq) goto loc_822E71E8;
	// addi r11,r30,17932
	ctx.r11.s64 = ctx.r30.s64 + 17932;
	// b 0x822e7204
	goto loc_822E7204;
loc_822E71E8:
	// bl 0x8228b728
	ctx.lr = 0x822E71EC;
	sub_8228B728(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r7,r11,-29672
	ctx.r7.s64 = ctx.r11.s64 + -29672;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_822E7204:
	// lwz r10,16896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16896);
	// mulli r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e7244
	if (ctx.cr6.eq) goto loc_822E7244;
	// lbz r10,1029(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1029);
	// stb r26,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r26.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e7234
	if (!ctx.cr6.eq) goto loc_822E7234;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x822e7254
	goto loc_822E7254;
loc_822E7234:
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,1044(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
loc_822E7244:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E7250;
	sub_822E6840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822E7254:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7290
	if (ctx.cr6.eq) goto loc_822E7290;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e727c
	if (ctx.cr6.eq) goto loc_822E727C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8280
	ctx.lr = 0x822E727C;
	sub_822E8280(ctx, base);
loc_822E727C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8280
	ctx.lr = 0x822E728C;
	sub_822E8280(ctx, base);
	// b 0x822e71b8
	goto loc_822E71B8;
loc_822E7290:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E7188) {
	__imp__sub_822E7188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E729C) {
	__imp__sub_822E729C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E72A0) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E72B8;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e72e8
	if (ctx.cr6.eq) goto loc_822E72E8;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E72E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E72F4;
	sub_822E6840(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822E72F8;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
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

PPC_WEAK_FUNC(sub_822E72A0) {
	__imp__sub_822E72A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7310) {
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
	// bl 0x822e6d78
	ctx.lr = 0x822E7320;
	sub_822E6D78(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822E7324;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7310) {
	__imp__sub_822E7310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7338) {
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
	// bl 0x822e5cd0
	ctx.lr = 0x822E7350;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7380
	if (ctx.cr6.eq) goto loc_822E7380;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E7380:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E738C;
	sub_822E6840(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822E7390;
	sub_823DEAF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E7338) {
	__imp__sub_822E7338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E73A4) {
	__imp__sub_822E73A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E73A8) {
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
	// bl 0x822e6d78
	ctx.lr = 0x822E73B8;
	sub_822E6D78(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822E73BC;
	sub_823DEAF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E73A8) {
	__imp__sub_822E73A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E73CC) {
	__imp__sub_822E73CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E73D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E73D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-8680
	ctx.r4.s64 = ctx.r11.s64 + -8680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e6df0
	ctx.lr = 0x822E73F8;
	sub_822E6DF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822e7458
	if (!ctx.cr6.gt) goto loc_822E7458;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_822E7408:
	// bl 0x822e5cd0
	ctx.lr = 0x822E740C;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7438
	if (ctx.cr6.eq) goto loc_822E7438;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stb r28,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r28.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,1044(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
loc_822E7438:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E7444;
	sub_822E6840(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822E7448;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822e7408
	if (!ctx.cr0.eq) goto loc_822E7408;
loc_822E7458:
	// bl 0x822e5cd0
	ctx.lr = 0x822E745C;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7488
	if (ctx.cr6.eq) goto loc_822E7488;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// stb r28,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r28.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,1044(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
loc_822E7488:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E7494;
	sub_822E6840(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-16564
	ctx.r5.s64 = ctx.r11.s64 + -16564;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822E74A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e74cc
	if (ctx.cr6.eq) goto loc_822E74CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e74a8
	if (ctx.cr6.eq) goto loc_822E74A8;
loc_822E74CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e74e0
	if (ctx.cr6.eq) goto loc_822E74E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// bl 0x822e6200
	ctx.lr = 0x822E74E0;
	sub_822E6200(ctx, base);
loc_822E74E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E73D0) {
	__imp__sub_822E73D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E74E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E74F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-8680
	ctx.r4.s64 = ctx.r11.s64 + -8680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822e6df0
	ctx.lr = 0x822E7514;
	sub_822E6DF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e753c
	if (!ctx.cr6.gt) goto loc_822E753C;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_822E7520:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e73d0
	ctx.lr = 0x822E7530;
	sub_822E73D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bne 0x822e7520
	if (!ctx.cr0.eq) goto loc_822E7520;
loc_822E753C:
	// bl 0x822e5cd0
	ctx.lr = 0x822E7540;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7570
	if (ctx.cr6.eq) goto loc_822E7570;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E7570:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E757C;
	sub_822E6840(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-16564
	ctx.r5.s64 = ctx.r11.s64 + -16564;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822E7590:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e75b4
	if (ctx.cr6.eq) goto loc_822E75B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e7590
	if (ctx.cr6.eq) goto loc_822E7590;
loc_822E75B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e75c8
	if (ctx.cr6.eq) goto loc_822E75C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// bl 0x822e6200
	ctx.lr = 0x822E75C8;
	sub_822E6200(ctx, base);
loc_822E75C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E74E8) {
	__imp__sub_822E74E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E75D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E75D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-8680
	ctx.r4.s64 = ctx.r11.s64 + -8680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822e6df0
	ctx.lr = 0x822E7600;
	sub_822E6DF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822e7630
	if (!ctx.cr6.gt) goto loc_822E7630;
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822E7610:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e74e8
	ctx.lr = 0x822E7624;
	sub_822E74E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bne 0x822e7610
	if (!ctx.cr0.eq) goto loc_822E7610;
loc_822E7630:
	// bl 0x822e5cd0
	ctx.lr = 0x822E7634;
	sub_822E5CD0(ctx, base);
	// lwz r11,16896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16896);
	// mulli r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 * 1056;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e7664
	if (ctx.cr6.eq) goto loc_822E7664;
	// lwz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1028, ctx.r9.u8);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r8,1044(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// stw r8,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r8.u32);
loc_822E7664:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e6840
	ctx.lr = 0x822E7670;
	sub_822E6840(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-16564
	ctx.r5.s64 = ctx.r11.s64 + -16564;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822E7684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e76a8
	if (ctx.cr6.eq) goto loc_822E76A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e7684
	if (ctx.cr6.eq) goto loc_822E7684;
loc_822E76A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e76bc
	if (ctx.cr6.eq) goto loc_822E76BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// bl 0x822e6200
	ctx.lr = 0x822E76BC;
	sub_822E6200(ctx, base);
loc_822E76BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E75D0) {
	__imp__sub_822E75D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E76C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E76C4) {
	__imp__sub_822E76C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E76C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x822e76e0
	if (ctx.cr6.lt) goto loc_822E76E0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822E76E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E76C8) {
	__imp__sub_822E76C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E76E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E76FC:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x822e770c
	if (ctx.cr6.eq) goto loc_822E770C;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x822e7710
	if (!ctx.cr6.eq) goto loc_822E7710;
loc_822E770C:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
loc_822E7710:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e76fc
	if (!ctx.cr6.eq) goto loc_822E76FC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E76E8) {
	__imp__sub_822E76E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7724) {
	__imp__sub_822E7724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822E7730;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E7748:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e7748
	if (!ctx.cr6.eq) goto loc_822E7748;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822E7768:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e7768
	if (!ctx.cr6.eq) goto loc_822E7768;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822E7788:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e7788
	if (!ctx.cr6.eq) goto loc_822E7788;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822e77d4
	if (ctx.cr6.lt) goto loc_822E77D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E77D4;
	sub_822830E8(ctx, base);
loc_822E77D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E77E4;
	sub_823DE1F0(ctx, base);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E77F8;
	sub_823DE1F0(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E7808;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E7728) {
	__imp__sub_822E7728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E7824:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x822e7834
	if (!ctx.cr6.eq) goto loc_822E7834;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822e7848
	goto loc_822E7848;
loc_822E7834:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x822e7844
	if (ctx.cr6.eq) goto loc_822E7844;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x822e7848
	if (!ctx.cr6.eq) goto loc_822E7848;
loc_822E7844:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E7848:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e7824
	if (!ctx.cr6.eq) goto loc_822E7824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7810) {
	__imp__sub_822E7810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7868) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x822e7810
	ctx.lr = 0x822E787C;
	sub_822E7810(ctx, base);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822e78a0
	if (ctx.cr6.eq) goto loc_822E78A0;
	// subf r10,r9,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E7890:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x822e7890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E7890;
loc_822E78A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7868) {
	__imp__sub_822E7868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E78B8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e790c
	if (ctx.cr6.eq) goto loc_822E790C;
loc_822E78E8:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x822e78f8
	if (ctx.cr6.eq) goto loc_822E78F8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x822e78fc
	if (!ctx.cr6.eq) goto loc_822E78FC;
loc_822E78F8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
loc_822E78FC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e78e8
	if (!ctx.cr6.eq) goto loc_822E78E8;
loc_822E790C:
	// subf r30,r3,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E7920;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_822E78B8) {
	__imp__sub_822E78B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11512);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7940) {
	__imp__sub_822E7940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7950) {
	__imp__sub_822E7950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7960) {
	__imp__sub_822E7960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7970) {
	__imp__sub_822E7970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11488);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7980) {
	__imp__sub_822E7980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// lwz r10,11504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11504);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_822E7990) {
	__imp__sub_822E7990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79A0) {
	PPC_FUNC_PROLOGUE();
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// rlwinm r11,r3,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E79A0) {
	__imp__sub_822E79A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E79B8) {
	__imp__sub_822E79B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E79BC) {
	__imp__sub_822E79BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79C0) {
	PPC_FUNC_PROLOGUE();
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// rlwinm r11,r3,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r7,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 24;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E79C0) {
	__imp__sub_822E79C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E79F4) {
	__imp__sub_822E79F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E79F8) {
	__imp__sub_822E79F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E79FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E79FC) {
	__imp__sub_822E79FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7A00) {
	PPC_FUNC_PROLOGUE();
	// rldicl r10,r3,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r11,r3,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r7,r3,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rldicr r11,r6,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r4,r3,40,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r9,r3,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// rldicr r11,r8,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r6,r3,24,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 24) & 0xFFFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r9,r3,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// rldicr r11,r8,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r6,r3,8,56
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7A00) {
	__imp__sub_822E7A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7A70) {
	__imp__sub_822E7A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7A74) {
	__imp__sub_822E7A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lbz r10,22(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// lbz r9,21(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// lbz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r11,23(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7A78) {
	__imp__sub_822E7A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7AA4) {
	__imp__sub_822E7AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7AA8) {
	__imp__sub_822E7AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7AB4) {
	__imp__sub_822E7AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lbz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lbz r9,-15(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r11,-13(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7AB8) {
	__imp__sub_822E7AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7AE4) {
	__imp__sub_822E7AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7AE8) {
	__imp__sub_822E7AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7AF4) {
	__imp__sub_822E7AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7AF8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r3,-31842
	ctx.r3.s64 = -2086797312;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r3,11504
	ctx.r31.s64 = ctx.r3.s64 + 11504;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,31136
	ctx.r11.s64 = ctx.r11.s64 + 31136;
	// addi r10,r10,31160
	ctx.r10.s64 = ctx.r10.s64 + 31160;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r9,r9,31168
	ctx.r9.s64 = ctx.r9.s64 + 31168;
	// addi r11,r4,31224
	ctx.r11.s64 = ctx.r4.s64 + 31224;
	// addi r10,r5,31344
	ctx.r10.s64 = ctx.r5.s64 + 31344;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r9,r6,31232
	ctx.r9.s64 = ctx.r6.s64 + 31232;
	// addi r11,r7,31400
	ctx.r11.s64 = ctx.r7.s64 + 31400;
	// addi r10,r8,31464
	ctx.r10.s64 = ctx.r8.s64 + 31464;
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// stw r10,11504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11504, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7AF8) {
	__imp__sub_822E7AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7B6C) {
	__imp__sub_822E7B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7B70) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r3,-31842
	ctx.r3.s64 = -2086797312;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r31,r3,11504
	ctx.r31.s64 = ctx.r3.s64 + 11504;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,31160
	ctx.r11.s64 = ctx.r11.s64 + 31160;
	// addi r10,r10,31136
	ctx.r10.s64 = ctx.r10.s64 + 31136;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r9,r9,31224
	ctx.r9.s64 = ctx.r9.s64 + 31224;
	// addi r11,r4,31168
	ctx.r11.s64 = ctx.r4.s64 + 31168;
	// addi r10,r5,31232
	ctx.r10.s64 = ctx.r5.s64 + 31232;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r9,r6,31344
	ctx.r9.s64 = ctx.r6.s64 + 31344;
	// addi r11,r7,31352
	ctx.r11.s64 = ctx.r7.s64 + 31352;
	// addi r10,r8,31416
	ctx.r10.s64 = ctx.r8.s64 + 31416;
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// stw r10,11504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11504, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7B70) {
	__imp__sub_822E7B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7BE4) {
	__imp__sub_822E7BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7BE8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r3,-31842
	ctx.r3.s64 = -2086797312;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// addi r31,r3,11504
	ctx.r31.s64 = ctx.r3.s64 + 11504;
	// bne cr6,0x822e7c78
	if (!ctx.cr6.eq) goto loc_822E7C78;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,31136
	ctx.r11.s64 = ctx.r11.s64 + 31136;
	// addi r10,r10,31160
	ctx.r10.s64 = ctx.r10.s64 + 31160;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// addi r9,r9,31168
	ctx.r9.s64 = ctx.r9.s64 + 31168;
	// addi r11,r4,31224
	ctx.r11.s64 = ctx.r4.s64 + 31224;
	// addi r10,r5,31344
	ctx.r10.s64 = ctx.r5.s64 + 31344;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r9,r6,31232
	ctx.r9.s64 = ctx.r6.s64 + 31232;
	// addi r11,r7,31400
	ctx.r11.s64 = ctx.r7.s64 + 31400;
	// addi r10,r8,31464
	ctx.r10.s64 = ctx.r8.s64 + 31464;
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// stw r10,11504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11504, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822E7C78:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,31160
	ctx.r11.s64 = ctx.r11.s64 + 31160;
	// addi r10,r10,31136
	ctx.r10.s64 = ctx.r10.s64 + 31136;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// addi r9,r9,31224
	ctx.r9.s64 = ctx.r9.s64 + 31224;
	// addi r11,r4,31168
	ctx.r11.s64 = ctx.r4.s64 + 31168;
	// addi r10,r5,31232
	ctx.r10.s64 = ctx.r5.s64 + 31232;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r9,r6,31344
	ctx.r9.s64 = ctx.r6.s64 + 31344;
	// addi r11,r7,31352
	ctx.r11.s64 = ctx.r7.s64 + 31352;
	// addi r10,r8,31416
	ctx.r10.s64 = ctx.r8.s64 + 31416;
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// stw r10,11504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11504, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7BE8) {
	__imp__sub_822E7BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7CE0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822e7cf4
	if (ctx.cr6.lt) goto loc_822E7CF4;
	// cmpwi cr6,r3,126
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 126, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7cf8
	if (!ctx.cr6.gt) goto loc_822E7CF8;
loc_822E7CF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7CF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7CE0) {
	__imp__sub_822E7CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7D00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x822e7d14
	if (ctx.cr6.lt) goto loc_822E7D14;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7d18
	if (!ctx.cr6.gt) goto loc_822E7D18;
loc_822E7D14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7D18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7D00) {
	__imp__sub_822E7D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7D20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x822e7d34
	if (ctx.cr6.lt) goto loc_822E7D34;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7d38
	if (!ctx.cr6.gt) goto loc_822E7D38;
loc_822E7D34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7D38:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7D20) {
	__imp__sub_822E7D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7D40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x822e7d50
	if (ctx.cr6.lt) goto loc_822E7D50;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// ble cr6,0x822e7d60
	if (!ctx.cr6.gt) goto loc_822E7D60;
loc_822E7D50:
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x822e7d6c
	if (ctx.cr6.lt) goto loc_822E7D6C;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgt cr6,0x822e7d6c
	if (ctx.cr6.gt) goto loc_822E7D6C;
loc_822E7D60:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_822E7D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7D40) {
	__imp__sub_822E7D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7D78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,48
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 48, ctx.xer);
	// blt cr6,0x822e7d8c
	if (ctx.cr6.lt) goto loc_822E7D8C;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7d90
	if (!ctx.cr6.gt) goto loc_822E7D90;
loc_822E7D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7D90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7D78) {
	__imp__sub_822E7D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7D98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x822e7da8
	if (ctx.cr6.lt) goto loc_822E7DA8;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// ble cr6,0x822e7db8
	if (!ctx.cr6.gt) goto loc_822E7DB8;
loc_822E7DA8:
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x822e7dc0
	if (ctx.cr6.lt) goto loc_822E7DC0;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgt cr6,0x822e7dc0
	if (ctx.cr6.gt) goto loc_822E7DC0;
loc_822E7DB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822e7dc4
	goto loc_822E7DC4;
loc_822E7DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7df8
	if (!ctx.cr6.eq) goto loc_822E7DF8;
	// cmpwi cr6,r3,48
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 48, ctx.xer);
	// blt cr6,0x822e7de4
	if (ctx.cr6.lt) goto loc_822E7DE4;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7de8
	if (!ctx.cr6.gt) goto loc_822E7DE8;
loc_822E7DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822e7dfc
	if (ctx.cr6.eq) goto loc_822E7DFC;
loc_822E7DF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822E7DFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7D98) {
	__imp__sub_822E7D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7E04) {
	__imp__sub_822E7E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7E08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x822e7e18
	if (ctx.cr6.lt) goto loc_822E7E18;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// ble cr6,0x822e7e28
	if (!ctx.cr6.gt) goto loc_822E7E28;
loc_822E7E18:
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x822e7e30
	if (ctx.cr6.lt) goto loc_822E7E30;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgt cr6,0x822e7e30
	if (ctx.cr6.gt) goto loc_822E7E30;
loc_822E7E28:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822e7e34
	goto loc_822E7E34;
loc_822E7E30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7E34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7e68
	if (!ctx.cr6.eq) goto loc_822E7E68;
	// cmpwi cr6,r3,48
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 48, ctx.xer);
	// blt cr6,0x822e7e54
	if (ctx.cr6.lt) goto loc_822E7E54;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7e58
	if (!ctx.cr6.gt) goto loc_822E7E58;
loc_822E7E54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7E58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822e7e6c
	if (ctx.cr6.eq) goto loc_822E7E6C;
loc_822E7E68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822E7E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7e88
	if (!ctx.cr6.eq) goto loc_822E7E88;
	// cmpwi cr6,r3,95
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 95, ctx.xer);
	// beq cr6,0x822e7e88
	if (ctx.cr6.eq) goto loc_822E7E88;
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// bne cr6,0x822e7e8c
	if (!ctx.cr6.eq) goto loc_822E7E8C;
loc_822E7E88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822E7E8C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7E08) {
	__imp__sub_822E7E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7E94) {
	__imp__sub_822E7E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7E98) {
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
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822E7EBC;
	sub_823DFA38(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_822E7E98) {
	__imp__sub_822E7E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
loc_822E7EE8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbzu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x822e7f64
	if (ctx.cr6.eq) goto loc_822E7F64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e7f5c
	if (ctx.cr6.eq) goto loc_822E7F5C;
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// blt cr6,0x822e7f18
	if (ctx.cr6.lt) goto loc_822E7F18;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7f1c
	if (!ctx.cr6.gt) goto loc_822E7F1C;
loc_822E7F18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7F1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7f2c
	if (ctx.cr6.eq) goto loc_822E7F2C;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
loc_822E7F2C:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x822e7f40
	if (ctx.cr6.lt) goto loc_822E7F40;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e7f44
	if (!ctx.cr6.gt) goto loc_822E7F44;
loc_822E7F40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7F44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7f54
	if (ctx.cr6.eq) goto loc_822E7F54;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_822E7F54:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e7f6c
	if (!ctx.cr6.eq) goto loc_822E7F6C;
loc_822E7F5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e7ee8
	if (!ctx.cr6.eq) goto loc_822E7EE8;
loc_822E7F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E7F68:
	// blr 
	return;
loc_822E7F6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x822e7f68
	if (ctx.cr6.lt) goto loc_822E7F68;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7EE0) {
	__imp__sub_822E7EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7F7C) {
	__imp__sub_822E7F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
loc_822E7F88:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// beq cr6,0x822e7fb4
	if (ctx.cr6.eq) goto loc_822E7FB4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e7fbc
	if (!ctx.cr6.eq) goto loc_822E7FBC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e7f88
	if (!ctx.cr6.eq) goto loc_822E7F88;
loc_822E7FB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E7FB8:
	// blr 
	return;
loc_822E7FBC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x822e7fb8
	if (ctx.cr6.lt) goto loc_822E7FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E7F80) {
	__imp__sub_822E7F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E7FCC) {
	__imp__sub_822E7FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E7FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8040
	if (ctx.cr6.eq) goto loc_822E8040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822E7FF8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822E7FFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e804c
	if (ctx.cr6.eq) goto loc_822E804C;
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822E8018;
	sub_823DFA20(ctx, base);
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822E8028;
	sub_823DFA20(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822e7ffc
	if (ctx.cr6.eq) goto loc_822E7FFC;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7ff8
	if (!ctx.cr6.eq) goto loc_822E7FF8;
loc_822E8040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822E804C:
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E7FD0) {
	__imp__sub_822E7FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8058) {
	PPC_FUNC_PROLOGUE();
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// b 0x822e7ee0
	sub_822E7EE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8058) {
	__imp__sub_822E8058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8064) {
	__imp__sub_822E8064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_822E8078:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x822e80a8
	if (ctx.cr6.eq) goto loc_822E80A8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822e80b0
	if (!ctx.cr6.eq) goto loc_822E80B0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e8078
	if (!ctx.cr6.eq) goto loc_822E8078;
loc_822E80A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E80B0:
	// bge cr6,0x822e80bc
	if (!ctx.cr6.lt) goto loc_822E80BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822E80BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8068) {
	__imp__sub_822E8068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E80C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E80C4) {
	__imp__sub_822E80C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E80C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E80D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_822E80DC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bne cr6,0x822e8128
	if (!ctx.cr6.eq) goto loc_822E8128;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e811c
	if (ctx.cr6.eq) goto loc_822E811C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e815c
	if (ctx.cr6.eq) goto loc_822E815C;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// bl 0x822e80c8
	ctx.lr = 0x822E8114;
	sub_822E80C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e815c
	if (!ctx.cr6.eq) goto loc_822E815C;
loc_822E811C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E8120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E8128:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822e815c
	if (ctx.cr6.eq) goto loc_822E815C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// beq cr6,0x822e815c
	if (ctx.cr6.eq) goto loc_822E815C;
	// bl 0x823dfa20
	ctx.lr = 0x822E8148;
	sub_823DFA20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa20
	ctx.lr = 0x822E8154;
	sub_823DFA20(ctx, base);
	// subf. r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e8170
	if (!ctx.cr0.eq) goto loc_822E8170;
loc_822E815C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822e80dc
	if (!ctx.cr6.eq) goto loc_822E80DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E8170:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x822e8120
	if (ctx.cr6.lt) goto loc_822E8120;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E80C8) {
	__imp__sub_822E80C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E8198:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// blt cr6,0x822e81b4
	if (ctx.cr6.lt) goto loc_822E81B4;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e81b8
	if (!ctx.cr6.gt) goto loc_822E81B8;
loc_822E81B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E81B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e81cc
	if (ctx.cr6.eq) goto loc_822E81CC;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_822E81CC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e8198
	if (!ctx.cr6.eq) goto loc_822E8198;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8188) {
	__imp__sub_822E8188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E81DC) {
	__imp__sub_822E81DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E81E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E81F0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// blt cr6,0x822e820c
	if (ctx.cr6.lt) goto loc_822E820C;
	// cmpwi cr6,r9,122
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 122, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822e8210
	if (!ctx.cr6.gt) goto loc_822E8210;
loc_822E820C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E8210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8224
	if (ctx.cr6.eq) goto loc_822E8224;
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_822E8224:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e81f0
	if (!ctx.cr6.eq) goto loc_822E81F0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E81E0) {
	__imp__sub_822E81E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8234) {
	__imp__sub_822E8234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8238) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x822e8250
	if (ctx.cr6.lt) goto loc_822E8250;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// bgt cr6,0x822e8250
	if (ctx.cr6.gt) goto loc_822E8250;
loc_822E8248:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822E8250:
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x822e8260
	if (ctx.cr6.lt) goto loc_822E8260;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// ble cr6,0x822e8248
	if (!ctx.cr6.gt) goto loc_822E8248;
loc_822E8260:
	// cmpwi cr6,r3,48
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 48, ctx.xer);
	// blt cr6,0x822e8270
	if (ctx.cr6.lt) goto loc_822E8270;
	// cmpwi cr6,r3,57
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 57, ctx.xer);
	// ble cr6,0x822e8248
	if (!ctx.cr6.gt) goto loc_822E8248;
loc_822E8270:
	// addi r11,r3,-95
	ctx.r11.s64 = ctx.r3.s64 + -95;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8238) {
	__imp__sub_822E8238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E8288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E829C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e829c
	if (!ctx.cr6.eq) goto loc_822E829C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822e82d0
	if (ctx.cr6.lt) goto loc_822E82D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-1832
	ctx.r4.s64 = ctx.r11.s64 + -1832;
	// bl 0x822830e8
	ctx.lr = 0x822E82D0;
	sub_822830E8(ctx, base);
loc_822E82D0:
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822E82E8;
	sub_823DFA38(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8280) {
	__imp__sub_822E8280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E82FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E82FC) {
	__imp__sub_822E82FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8300) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E8314:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,94
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 94, ctx.xer);
	// bne cr6,0x822e8350
	if (!ctx.cr6.eq) goto loc_822E8350;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e8350
	if (ctx.cr6.eq) goto loc_822E8350;
	// cmpwi cr6,r10,94
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 94, ctx.xer);
	// beq cr6,0x822e8350
	if (ctx.cr6.eq) goto loc_822E8350;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x822e8350
	if (ctx.cr6.lt) goto loc_822E8350;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x822e8350
	if (ctx.cr6.gt) goto loc_822E8350;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x822e8358
	goto loc_822E8358;
loc_822E8350:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E8358:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e8314
	if (!ctx.cr6.eq) goto loc_822E8314;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8300) {
	__imp__sub_822E8300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8368) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x822E83AC;
	sub_823E06D0(ctx, base);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r8.u8);
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

PPC_WEAK_FUNC(sub_822E8368) {
	__imp__sub_822E8368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E83D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E83D8;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r28,r4,-1
	ctx.r28.s64 = ctx.r4.s64 + -1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822e840c
	if (ctx.cr6.lt) goto loc_822E840C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E840C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r31,r11,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x822E8434;
	sub_823E06D0(ctx, base);
	// add r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// stb r7,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r7.u8);
	// beq cr6,0x822e8464
	if (ctx.cr6.eq) goto loc_822E8464;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e8464
	if (ctx.cr6.eq) goto loc_822E8464;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E8464:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E83D0) {
	__imp__sub_822E83D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8470) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e84b4
	if (ctx.cr6.lt) goto loc_822E84B4;
	// addi r11,r1,8272
	ctx.r11.s64 = ctx.r1.s64 + 8272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e84b4
	if (!ctx.cr6.lt) goto loc_822E84B4;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_822E84B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228bd10
	ctx.lr = 0x822E84BC;
	sub_8228BD10(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x822e84d4
	if (ctx.cr6.lt) goto loc_822E84D4;
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822e84d8
	if (!ctx.cr6.gt) goto loc_822E84D8;
loc_822E84D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822E84D8:
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

PPC_WEAK_FUNC(sub_822E8470) {
	__imp__sub_822E8470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E84EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E84EC) {
	__imp__sub_822E84EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E84F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8228bd10
	ctx.lr = 0x822E8534;
	sub_8228BD10(ctx, base);
	// lwz r10,2048(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,2048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2048, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e06d0
	ctx.lr = 0x822E856C;
	sub_823E06D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r10,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r10.u8);
	// blt cr6,0x822e8584
	if (ctx.cr6.lt) goto loc_822E8584;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// blt cr6,0x822e8594
	if (ctx.cr6.lt) goto loc_822E8594;
loc_822E8584:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-1800
	ctx.r4.s64 = ctx.r11.s64 + -1800;
	// bl 0x822830e8
	ctx.lr = 0x822E8594;
	sub_822830E8(ctx, base);
loc_822E8594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822E84F0) {
	__imp__sub_822E84F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E85AC) {
	__imp__sub_822E85AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E85B0) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,2052
	ctx.r10.s64 = ctx.r3.s64 * 2052;
	// addi r11,r11,11528
	ctx.r11.s64 = ctx.r11.s64 + 11528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8228bcf8
	ctx.lr = 0x822E85DC;
	sub_8228BCF8(ctx, base);
	// lis r9,-31842
	ctx.r9.s64 = -2086797312;
	// mulli r10,r31,1344
	ctx.r10.s64 = ctx.r31.s64 * 1344;
	// addi r11,r9,-1952
	ctx.r11.s64 = ctx.r9.s64 + -1952;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8228bcf8
	ctx.lr = 0x822E85F4;
	sub_8228BCF8(ctx, base);
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,32048
	ctx.r10.s64 = ctx.r8.s64 + 32048;
	// li r3,3
	ctx.r3.s64 = 3;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8228bcf8
	ctx.lr = 0x822E860C;
	sub_8228BCF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E85B0) {
	__imp__sub_822E85B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r3,r11,-1752
	ctx.r3.s64 = ctx.r11.s64 + -1752;
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfd f10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f10.u64);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822e84f0
	ctx.lr = 0x822E8668;
	sub_822E84F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8620) {
	__imp__sub_822E8620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822E8680;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8352(r1)
	ea = -8352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e881c
	if (ctx.cr6.eq) goto loc_822E881C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e881c
	if (ctx.cr6.eq) goto loc_822E881C;
	// lis r26,-31842
	ctx.r26.s64 = -2086797312;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// lwz r11,32128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32128);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,32128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32128, ctx.r11.u32);
	// bne cr6,0x822e86c4
	if (!ctx.cr6.eq) goto loc_822E86C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E86C4:
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r11,14432
	ctx.r27.s64 = ctx.r11.s64 + 14432;
	// addi r24,r10,-1740
	ctx.r24.s64 = ctx.r10.s64 + -1740;
loc_822E86D8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x822e8730
	if (ctx.cr6.eq) goto loc_822E8730;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_822E86F0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e881c
	if (ctx.cr6.eq) goto loc_822E881C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8192, ctx.xer);
	// blt cr6,0x822e8720
	if (ctx.cr6.lt) goto loc_822E8720;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E8720;
	sub_822830E8(ctx, base);
loc_822E8720:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x822e86f0
	if (!ctx.cr6.eq) goto loc_822E86F0;
loc_822E8730:
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// bl 0x8228bcc0
	ctx.lr = 0x822E873C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8758
	if (ctx.cr6.eq) goto loc_822E8758;
	// lwz r11,32128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32128);
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x822e8784
	goto loc_822E8784;
loc_822E8758:
	// bl 0x8228b728
	ctx.lr = 0x822E875C;
	sub_8228B728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32128);
	// rlwinm r11,r11,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// beq cr6,0x822e877c
	if (ctx.cr6.eq) goto loc_822E877C;
	// addis r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// b 0x822e8780
	goto loc_822E8780;
loc_822E877C:
	// addi r10,r27,16384
	ctx.r10.s64 = ctx.r27.s64 + 16384;
loc_822E8780:
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822E8784:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x822e87dc
	if (ctx.cr6.eq) goto loc_822E87DC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822E879C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e87dc
	if (ctx.cr6.eq) goto loc_822E87DC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r31,8192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8192, ctx.xer);
	// blt cr6,0x822e87cc
	if (ctx.cr6.lt) goto loc_822E87CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E87CC;
	sub_822830E8(ctx, base);
loc_822E87CC:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x822e879c
	if (!ctx.cr6.eq) goto loc_822E879C;
loc_822E87DC:
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x822E87F4;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e8810
	if (ctx.cr6.eq) goto loc_822E8810;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e881c
	if (ctx.cr6.eq) goto loc_822E881C;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// b 0x822e86d8
	goto loc_822E86D8;
loc_822E8810:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,8352
	ctx.r1.s64 = ctx.r1.s64 + 8352;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822E881C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,8352
	ctx.r1.s64 = ctx.r1.s64 + 8352;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8678) {
	__imp__sub_822E8678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E882C) {
	__imp__sub_822E882C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x822e8848
	if (!ctx.cr6.eq) goto loc_822E8848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E8848:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r7,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// beq cr6,0x822e8884
	if (ctx.cr6.eq) goto loc_822E8884;
loc_822E8864:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e88c8
	if (ctx.cr6.eq) goto loc_822E88C8;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x822e8864
	if (!ctx.cr6.eq) goto loc_822E8864;
loc_822E8884:
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// beq cr6,0x822e88bc
	if (ctx.cr6.eq) goto loc_822E88BC;
loc_822E889C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e88bc
	if (ctx.cr6.eq) goto loc_822E88BC;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x822e889c
	if (!ctx.cr6.eq) goto loc_822E889C;
loc_822E88BC:
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822E88C8:
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E8830) {
	__imp__sub_822E8830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E88D4) {
	__imp__sub_822E88D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E88D8) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E88F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e88f8
	if (!ctx.cr6.eq) goto loc_822E88F8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// blt cr6,0x822e892c
	if (ctx.cr6.lt) goto loc_822E892C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-1704
	ctx.r4.s64 = ctx.r11.s64 + -1704;
	// bl 0x822830e8
	ctx.lr = 0x822E892C;
	sub_822830E8(ctx, base);
loc_822E892C:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8938;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e8a24
	if (!ctx.cr6.eq) goto loc_822E8A24;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E8944:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x822e8958
	if (!ctx.cr6.eq) goto loc_822E8958;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E8958:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// beq cr6,0x822e898c
	if (ctx.cr6.eq) goto loc_822E898C;
loc_822E896C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e8a24
	if (ctx.cr6.eq) goto loc_822E8A24;
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
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x822e896c
	if (!ctx.cr6.eq) goto loc_822E896C;
loc_822E898C:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// beq cr6,0x822e89c4
	if (ctx.cr6.eq) goto loc_822E89C4;
loc_822E89A4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e89c4
	if (ctx.cr6.eq) goto loc_822E89C4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x822e89a4
	if (!ctx.cr6.eq) goto loc_822E89A4;
loc_822E89C4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E89D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// beq cr6,0x822e89f4
	if (ctx.cr6.eq) goto loc_822E89F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e89d0
	if (ctx.cr6.eq) goto loc_822E89D0;
loc_822E89F4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e8a08
	if (ctx.cr6.eq) goto loc_822E8A08;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822e8944
	if (!ctx.cr6.eq) goto loc_822E8944;
	// b 0x822e8a24
	goto loc_822E8A24;
loc_822E8A08:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r31.s64;
loc_822E8A10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822e8a10
	if (!ctx.cr6.eq) goto loc_822E8A10;
loc_822E8A24:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

PPC_WEAK_FUNC(sub_822E88D8) {
	__imp__sub_822E88D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8A3C) {
	__imp__sub_822E8A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8A40) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16496(r1)
	ea = -16496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E8A70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e8a70
	if (!ctx.cr6.eq) goto loc_822E8A70;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// blt cr6,0x822e8aa4
	if (ctx.cr6.lt) goto loc_822E8AA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-1664
	ctx.r4.s64 = ctx.r11.s64 + -1664;
	// bl 0x822830e8
	ctx.lr = 0x822E8AA4;
	sub_822830E8(ctx, base);
loc_822E8AA4:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8AB0;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e8b9c
	if (!ctx.cr6.eq) goto loc_822E8B9C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E8ABC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x822e8ad0
	if (!ctx.cr6.eq) goto loc_822E8AD0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822E8AD0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// beq cr6,0x822e8b04
	if (ctx.cr6.eq) goto loc_822E8B04;
loc_822E8AE4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e8b9c
	if (ctx.cr6.eq) goto loc_822E8B9C;
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
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// bne cr6,0x822e8ae4
	if (!ctx.cr6.eq) goto loc_822E8AE4;
loc_822E8B04:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r1,8272
	ctx.r10.s64 = ctx.r1.s64 + 8272;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// beq cr6,0x822e8b3c
	if (ctx.cr6.eq) goto loc_822E8B3C;
loc_822E8B1C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822e8b3c
	if (ctx.cr6.eq) goto loc_822E8B3C;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,92
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 92, ctx.xer);
	// bne cr6,0x822e8b1c
	if (!ctx.cr6.eq) goto loc_822E8B1C;
loc_822E8B3C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E8B48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// beq cr6,0x822e8b6c
	if (ctx.cr6.eq) goto loc_822E8B6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e8b48
	if (ctx.cr6.eq) goto loc_822E8B48;
loc_822E8B6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e8b80
	if (ctx.cr6.eq) goto loc_822E8B80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822e8abc
	if (!ctx.cr6.eq) goto loc_822E8ABC;
	// b 0x822e8b9c
	goto loc_822E8B9C;
loc_822E8B80:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r31.s64;
loc_822E8B88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822e8b88
	if (!ctx.cr6.eq) goto loc_822E8B88;
loc_822E8B9C:
	// addi r1,r1,16496
	ctx.r1.s64 = ctx.r1.s64 + 16496;
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

PPC_WEAK_FUNC(sub_822E8A40) {
	__imp__sub_822E8A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8BB4) {
	__imp__sub_822E8BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8BB8) {
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
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8BD4;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8bf4
	if (ctx.cr6.eq) goto loc_822E8BF4;
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
loc_822E8BF4:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8C00;
	sub_823DFB30(ctx, base);
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

PPC_WEAK_FUNC(sub_822E8BB8) {
	__imp__sub_822E8BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E8C1C) {
	__imp__sub_822E8C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E8C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E8C3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e8c3c
	if (!ctx.cr6.eq) goto loc_822E8C3C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// blt cr6,0x822e8c78
	if (ctx.cr6.lt) goto loc_822E8C78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1312
	ctx.r4.s64 = ctx.r11.s64 + -1312;
	// bl 0x82280900
	ctx.lr = 0x822E8C70;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8C78:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_822E8C88:
	// lbzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e8cc4
	if (ctx.cr6.eq) goto loc_822E8CC4;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x822e8cb8
	if (ctx.cr6.eq) goto loc_822E8CB8;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x822e8cb8
	if (ctx.cr6.eq) goto loc_822E8CB8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x822e8cb8
	if (ctx.cr6.eq) goto loc_822E8CB8;
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822E8CB8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,1023
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1023, ctx.xer);
	// blt cr6,0x822e8c88
	if (ctx.cr6.lt) goto loc_822E8C88;
loc_822E8CC4:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x823dfb30
	ctx.lr = 0x822E8CDC;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8d04
	if (ctx.cr6.eq) goto loc_822E8D04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1360
	ctx.r4.s64 = ctx.r11.s64 + -1360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8CFC;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8D04:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8D10;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8d38
	if (ctx.cr6.eq) goto loc_822E8D38;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8D30;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8D38:
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8D44;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8d6c
	if (ctx.cr6.eq) goto loc_822E8D6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1464
	ctx.r4.s64 = ctx.r11.s64 + -1464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8D64;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8D6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e88d8
	ctx.lr = 0x822E8D78;
	sub_822E88D8(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8e68
	if (ctx.cr6.eq) goto loc_822E8E68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-1472
	ctx.r5.s64 = ctx.r11.s64 + -1472;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x822e8368
	ctx.lr = 0x822E8DA0;
	sub_822E8368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822e8dc0
	if (ctx.cr6.gt) goto loc_822E8DC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1544
	ctx.r4.s64 = ctx.r11.s64 + -1544;
	// bl 0x82280900
	ctx.lr = 0x822E8DB8;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8DC0:
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E8DC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e8dc8
	if (!ctx.cr6.eq) goto loc_822E8DC8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822E8DE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e8de8
	if (!ctx.cr6.eq) goto loc_822E8DE8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// ble cr6,0x822e8e34
	if (!ctx.cr6.gt) goto loc_822E8E34;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-1616
	ctx.r4.s64 = ctx.r11.s64 + -1616;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8E2C;
	sub_82280900(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8E34:
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822E8E3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e8e3c
	if (!ctx.cr6.eq) goto loc_822E8E3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822E8E50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822e8e50
	if (!ctx.cr6.eq) goto loc_822E8E50;
loc_822E8E68:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8C20) {
	__imp__sub_822E8C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E8E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E8E78;
	__savegprlr_29(ctx, base);
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E8E9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e8e9c
	if (!ctx.cr6.eq) goto loc_822E8E9C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// blt cr6,0x822e8ed8
	if (ctx.cr6.lt) goto loc_822E8ED8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1312
	ctx.r4.s64 = ctx.r11.s64 + -1312;
	// bl 0x82280900
	ctx.lr = 0x822E8ED0;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8ED8:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_822E8EE8:
	// lbzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e8f24
	if (ctx.cr6.eq) goto loc_822E8F24;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x822e8f18
	if (ctx.cr6.eq) goto loc_822E8F18;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x822e8f18
	if (ctx.cr6.eq) goto loc_822E8F18;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x822e8f18
	if (ctx.cr6.eq) goto loc_822E8F18;
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822E8F18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,8191
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8191, ctx.xer);
	// blt cr6,0x822e8ee8
	if (ctx.cr6.lt) goto loc_822E8EE8;
loc_822E8F24:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x823dfb30
	ctx.lr = 0x822E8F3C;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8f64
	if (ctx.cr6.eq) goto loc_822E8F64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1360
	ctx.r4.s64 = ctx.r11.s64 + -1360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8F5C;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8F64:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8F70;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8f98
	if (ctx.cr6.eq) goto loc_822E8F98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8F90;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8F98:
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822E8FA4;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8fcc
	if (ctx.cr6.eq) goto loc_822E8FCC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-1464
	ctx.r4.s64 = ctx.r11.s64 + -1464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E8FC4;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E8FCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8a40
	ctx.lr = 0x822E8FD8;
	sub_822E8A40(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e90c8
	if (ctx.cr6.eq) goto loc_822E90C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-1472
	ctx.r5.s64 = ctx.r11.s64 + -1472;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r1,8320
	ctx.r3.s64 = ctx.r1.s64 + 8320;
	// bl 0x822e8368
	ctx.lr = 0x822E9000;
	sub_822E8368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822e9020
	if (ctx.cr6.gt) goto loc_822E9020;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1544
	ctx.r4.s64 = ctx.r11.s64 + -1544;
	// bl 0x82280900
	ctx.lr = 0x822E9018;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9020:
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E9028:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e9028
	if (!ctx.cr6.eq) goto loc_822E9028;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822E9048:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e9048
	if (!ctx.cr6.eq) goto loc_822E9048;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// ble cr6,0x822e9094
	if (!ctx.cr6.gt) goto loc_822E9094;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-1264
	ctx.r4.s64 = ctx.r11.s64 + -1264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E908C;
	sub_82280900(ctx, base);
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9094:
	// addi r10,r1,8320
	ctx.r10.s64 = ctx.r1.s64 + 8320;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822E909C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e909c
	if (!ctx.cr6.eq) goto loc_822E909C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822E90B0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822e90b0
	if (!ctx.cr6.eq) goto loc_822E90B0;
loc_822E90C8:
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E8E70) {
	__imp__sub_822E8E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E90D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E90D8;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8304(r1)
	ea = -8304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x822e9340
	if (ctx.cr6.gt) goto loc_822E9340;
	// lis r12,-32209
	ctx.r12.s64 = -2110849024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28392
	ctx.r12.s64 = ctx.r12.s64 + -28392;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822E9154;
	case 1:
		goto loc_822E9170;
	case 2:
		goto loc_822E9198;
	case 3:
		goto loc_822E91C0;
	case 4:
		goto loc_822E91E8;
	case 5:
		goto loc_822E91FC;
	case 6:
		goto loc_822E9218;
	case 7:
		goto loc_822E9234;
	case 8:
		goto loc_822E924C;
	case 9:
		goto loc_822E9270;
	case 10:
		goto loc_822E9298;
	case 11:
		goto loc_822E92AC;
	case 12:
		goto loc_822E92EC;
	case 13:
		goto loc_822E9304;
	case 14:
		goto loc_822E9318;
	default:
		return;
	}
	// lwz r17,-28332(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28332);
	// lwz r17,-28304(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28304);
	// lwz r17,-28264(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28264);
	// lwz r17,-28224(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28224);
	// lwz r17,-28184(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28184);
	// lwz r17,-28164(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28164);
	// lwz r17,-28136(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28136);
	// lwz r17,-28108(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28108);
	// lwz r17,-28084(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28084);
	// lwz r17,-28048(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28048);
	// lwz r17,-28008(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -28008);
	// lwz r17,-27988(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -27988);
	// lwz r17,-27924(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -27924);
	// lwz r17,-27900(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -27900);
	// lwz r17,-27880(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + -27880);
loc_822E9154:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822E9168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9170:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822E9188;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9198:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,63
	ctx.r5.s64 = 63;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822E91B0;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E91C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822E91D8;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,255(r31)
	PPC_STORE_U8(ctx.r31.u32 + 255, ctx.r11.u8);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E91E8:
	// bl 0x823deaf8
	ctx.lr = 0x822E91EC;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E91FC:
	// bl 0x823deaf8
	ctx.lr = 0x822E9200;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9218:
	// bl 0x823deaf8
	ctx.lr = 0x822E921C;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9234:
	// bl 0x823dec00
	ctx.lr = 0x822E9238;
	sub_823DEC00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E924C:
	// bl 0x823dec00
	ctx.lr = 0x822E9250;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,5624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r10,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9270:
	// bl 0x823dec00
	ctx.lr = 0x822E9274;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.f11.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9298:
	// bl 0x82198070
	ctx.lr = 0x822E929C;
	sub_82198070(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E92AC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dfa38
	ctx.lr = 0x822E92BC;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,8271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8271, ctx.r11.u8);
	// bl 0x82393fe8
	ctx.lr = 0x822E92CC;
	sub_82393FE8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// bne cr6,0x822e9340
	if (!ctx.cr6.eq) goto loc_822E9340;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E92EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8238bd98
	ctx.lr = 0x822E92F4;
	sub_8238BD98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9304:
	// bl 0x822dd930
	ctx.lr = 0x822E9308;
	sub_822DD930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E9318:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dfa38
	ctx.lr = 0x822E9328;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,8271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8271, ctx.r11.u8);
	// bl 0x8235dbe0
	ctx.lr = 0x822E9338;
	sub_8235DBE0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_822E9340:
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E90D0) {
	__imp__sub_822E90D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9348) {
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
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// bge cr6,0x822e938c
	if (!ctx.cr6.lt) goto loc_822E938C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822e90d0
	ctx.lr = 0x822E9378;
	sub_822E90D0(ctx, base);
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
loc_822E938C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822e93c0
	if (!ctx.cr6.gt) goto loc_822E93C0;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822e93c0
	if (!ctx.cr6.lt) goto loc_822E93C0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822E93A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e93d0
	if (!ctx.cr6.eq) goto loc_822E93D0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E93C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-1192
	ctx.r4.s64 = ctx.r11.s64 + -1192;
	// bl 0x822830e8
	ctx.lr = 0x822E93D0;
	sub_822830E8(ctx, base);
loc_822E93D0:
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

PPC_WEAK_FUNC(sub_822E9348) {
	__imp__sub_822E9348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E93E4) {
	__imp__sub_822E93E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E93E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822E93F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e94b4
	if (!ctx.cr6.gt) goto loc_822E94B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r22,r11,-1192
	ctx.r22.s64 = ctx.r11.s64 + -1192;
loc_822E9428:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// bl 0x822e8678
	ctx.lr = 0x822E9438;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e94a4
	if (ctx.cr6.eq) goto loc_822E94A4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// bge cr6,0x822e9470
	if (!ctx.cr6.lt) goto loc_822E9470;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e90d0
	ctx.lr = 0x822E946C;
	sub_822E90D0(ctx, base);
	// b 0x822e94a4
	goto loc_822E94A4;
loc_822E9470:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x822e9498
	if (!ctx.cr6.gt) goto loc_822E9498;
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x822e9498
	if (!ctx.cr6.lt) goto loc_822E9498;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x822E948C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e94cc
	if (ctx.cr6.eq) goto loc_822E94CC;
	// b 0x822e94a4
	goto loc_822E94A4;
loc_822E9498:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E94A4;
	sub_822830E8(ctx, base);
loc_822E94A4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822e9428
	if (ctx.cr6.lt) goto loc_822E9428;
loc_822E94B4:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822e94cc
	if (!ctx.cr6.eq) goto loc_822E94CC;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e94d0
	if (ctx.cr6.eq) goto loc_822E94D0;
loc_822E94CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E94D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E93E8) {
	__imp__sub_822E93E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E94D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x822E94E0;
	__savegprlr_15(ctx, base);
	// li r12,-24848
	ctx.r12.s64 = -24848;
	// bl 0x823dedd4
	ctx.lr = 0x822E94E8;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822e9784
	if (!ctx.cr6.gt) goto loc_822E9784;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r23,24972(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24972);
	// lwz r22,24964(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24964);
	// lwz r21,24956(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24956);
	// addi r30,r11,-1168
	ctx.r30.s64 = ctx.r11.s64 + -1168;
	// lwz r20,24948(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24948);
	// lwz r15,24940(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24940);
	// lwz r19,24932(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24932);
loc_822E9540:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8678
	ctx.lr = 0x822E954C;
	sub_822E8678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// addi r3,r1,8320
	ctx.r3.s64 = ctx.r1.s64 + 8320;
	// bl 0x823dfa38
	ctx.lr = 0x822E955C;
	sub_823DFA38(ctx, base);
	// stb r29,16511(r1)
	PPC_STORE_U8(ctx.r1.u32 + 16511, ctx.r29.u8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8678
	ctx.lr = 0x822E956C;
	sub_822E8678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823dfa38
	ctx.lr = 0x822E957C;
	sub_823DFA38(ctx, base);
	// stb r29,8319(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8319, ctx.r29.u8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8678
	ctx.lr = 0x822E958C;
	sub_822E8678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// addi r3,r1,16512
	ctx.r3.s64 = ctx.r1.s64 + 16512;
	// bl 0x823dfa38
	ctx.lr = 0x822E959C;
	sub_823DFA38(ctx, base);
	// lbz r11,8320(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 8320);
	// stb r29,24703(r1)
	PPC_STORE_U8(ctx.r1.u32 + 24703, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e95c4
	if (!ctx.cr6.eq) goto loc_822E95C4;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e95c4
	if (!ctx.cr6.eq) goto loc_822E95C4;
	// lbz r11,16512(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 16512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e9774
	if (ctx.cr6.eq) goto loc_822E9774;
loc_822E95C4:
	// addi r10,r1,16512
	ctx.r10.s64 = ctx.r1.s64 + 16512;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_822E95CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e95f0
	if (ctx.cr6.eq) goto loc_822E95F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e95cc
	if (ctx.cr6.eq) goto loc_822E95CC;
loc_822E95F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e9600
	if (!ctx.cr6.eq) goto loc_822E9600;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x822e9744
	goto loc_822E9744;
loc_822E9600:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
loc_822E9608:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e962c
	if (ctx.cr6.eq) goto loc_822E962C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e9608
	if (ctx.cr6.eq) goto loc_822E9608;
loc_822E962C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e9670
	if (ctx.cr6.eq) goto loc_822E9670;
	// addi r10,r1,16512
	ctx.r10.s64 = ctx.r1.s64 + 16512;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
loc_822E963C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e9660
	if (ctx.cr6.eq) goto loc_822E9660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e963c
	if (ctx.cr6.eq) goto loc_822E963C;
loc_822E9660:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e9670
	if (!ctx.cr6.eq) goto loc_822E9670;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x822e9744
	goto loc_822E9744;
loc_822E9670:
	// addi r10,r1,16512
	ctx.r10.s64 = ctx.r1.s64 + 16512;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
loc_822E9678:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e969c
	if (ctx.cr6.eq) goto loc_822E969C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e9678
	if (ctx.cr6.eq) goto loc_822E9678;
loc_822E969C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e96e0
	if (ctx.cr6.eq) goto loc_822E96E0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
loc_822E96AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822e96d0
	if (ctx.cr6.eq) goto loc_822E96D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e96ac
	if (ctx.cr6.eq) goto loc_822E96AC;
loc_822E96D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822e96e0
	if (!ctx.cr6.eq) goto loc_822E96E0;
	// addi r5,r1,16512
	ctx.r5.s64 = ctx.r1.s64 + 16512;
	// b 0x822e9744
	goto loc_822E9744;
loc_822E96E0:
	// li r7,8192
	ctx.r7.s64 = 8192;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,16512
	ctx.r6.s64 = ctx.r1.s64 + 16512;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,8320
	ctx.r4.s64 = ctx.r1.s64 + 8320;
	// bctrl 
	ctx.lr = 0x822E96FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e9740
	if (!ctx.cr6.eq) goto loc_822E9740;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,16512
	ctx.r11.s64 = ctx.r1.s64 + 16512;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,8320
	ctx.r8.s64 = ctx.r1.s64 + 8320;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x822E9740;
	sub_82280B08(ctx, base);
loc_822E9740:
	// addi r5,r1,8320
	ctx.r5.s64 = ctx.r1.s64 + 8320;
loc_822E9744:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e9774
	if (ctx.cr6.eq) goto loc_822E9774;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e9348
	ctx.lr = 0x822E976C;
	sub_822E9348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e979c
	if (ctx.cr6.eq) goto loc_822E979C;
loc_822E9774:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822e9540
	if (ctx.cr6.lt) goto loc_822E9540;
loc_822E9784:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822e979c
	if (!ctx.cr6.eq) goto loc_822E979C;
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e97a0
	if (ctx.cr6.eq) goto loc_822E97A0;
loc_822E979C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E97A0:
	// addi r1,r1,24848
	ctx.r1.s64 = ctx.r1.s64 + 24848;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E94D8) {
	__imp__sub_822E94D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E97A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E97A8) {
	__imp__sub_822E97A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E97C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E97C0) {
	__imp__sub_822E97C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E97D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x822e9874
	if (ctx.cr6.eq) goto loc_822E9874;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f30,f12,f2
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f11,f30,f3
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x822E9840;
	sub_822DA518(ctx, base);
	// fmuls f10,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f6,f10,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f2,f5,f10,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f1,f3,f10,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_822E9874:
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

PPC_WEAK_FUNC(sub_822E97D8) {
	__imp__sub_822E97D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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

PPC_WEAK_FUNC(sub_822E9890) {
	__imp__sub_822E9890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9924) {
	__imp__sub_822E9924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9928) {
	__imp__sub_822E9928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E99A4) {
	__imp__sub_822E99A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E99A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f7,f6,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f2,f1,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f11,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f4,f3,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f8,f2,f1,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f7,f0,f13,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E99A8) {
	__imp__sub_822E99A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
	// fmadds f10,f3,f2,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f2,f9,f8,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmadds f0,f7,f6,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f13,f1,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f6,f12,f0,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,12(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9A50) {
	__imp__sub_822E9A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f1,f5,f8,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f0,f3,f4,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f7,f13,f8,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f6,f11,f4,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f7.f64));
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f0,f5,f8,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f13,f3,f4,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9AF8) {
	__imp__sub_822E9AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9B74) {
	__imp__sub_822E9B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9B78) {
	__imp__sub_822E9B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9BF4) {
	__imp__sub_822E9BF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f13,f0,f12
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f10,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f3,f6,f0,f5
	ctx.f3.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f8,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f0,f4,f7,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f6,f12,f7,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f5,f10,f3,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f6.f64));
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f13,f4,f7,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f12,f2,f3,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9BF8) {
	__imp__sub_822E9BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,12(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,20(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f13,f12,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f7,24(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f13,f6,f5,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f12,f4,f3,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,28(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,32(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f2,f1,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,36(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f0,f7,f6,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f2.f64));
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f5,f1,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,40(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f5,f12,f11,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f4,f10,f9,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f5.f64));
	// stfs f4,44(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f3,f12,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f6,f5,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f11,f3,f4,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f2,f9,f3,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f8,f1,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9C80) {
	__imp__sub_822E9C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f1,f0,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f13,f12,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,12(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9E88) {
	__imp__sub_822E9E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9F34) {
	__imp__sub_822E9F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f5,f1,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f8,f3,f2,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f7,f0,f13,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f7,f1,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f6,4(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f10,f5,f4,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f9,f3,f2,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f8,f9,f1,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9F38) {
	__imp__sub_822E9F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E9FCC) {
	__imp__sub_822E9FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E9FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f11,f5,f4,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmadds f9,f3,f2,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stfs f9,4(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f0,f8,f7,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmadds f12,f6,f5,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmadds f5,f11,f13,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f9,f12,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f3,f8,f1,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f3,12(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E9FD0) {
	__imp__sub_822E9FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f2,f0,f1
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f0,f5,f8,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f13,f3,f4,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmuls f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f5,f10,f8,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f3,f9,f4,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,4(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f9,f0,f8,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f8,f13,f4,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// stfs f7,8(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA078) {
	__imp__sub_822EA078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA10C) {
	__imp__sub_822EA10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f11,f5,f4,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f10,f3,f2,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f2,f9,f8,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f0,f7,f6,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f5,f13,f12,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fdivs f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f1.f64));
	// stfs f2,12(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA110) {
	__imp__sub_822EA110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA1C0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822EA1DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea1dc
	if (!ctx.cr6.eq) goto loc_822EA1DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823e01e0
	ctx.lr = 0x822EA204;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ea22c
	if (!ctx.cr6.eq) goto loc_822EA22C;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea224
	if (ctx.cr6.eq) goto loc_822EA224;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x822ea22c
	if (!ctx.cr6.eq) goto loc_822EA22C;
loc_822EA224:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822ea230
	goto loc_822EA230;
loc_822EA22C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA230:
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

PPC_WEAK_FUNC(sub_822EA1C0) {
	__imp__sub_822EA1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA248) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-1044
	ctx.r4.s64 = ctx.r11.s64 + -1044;
	// bl 0x823e01e0
	ctx.lr = 0x822EA264;
	sub_823E01E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822EA248) {
	__imp__sub_822EA248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA27C) {
	__imp__sub_822EA27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA280) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-1036
	ctx.r4.s64 = ctx.r11.s64 + -1036;
	// bl 0x823e01e0
	ctx.lr = 0x822EA29C;
	sub_823E01E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822EA280) {
	__imp__sub_822EA280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA2B4) {
	__imp__sub_822EA2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA2B8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-1024
	ctx.r4.s64 = ctx.r11.s64 + -1024;
	// bl 0x823e01e0
	ctx.lr = 0x822EA2D4;
	sub_823E01E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822EA2B8) {
	__imp__sub_822EA2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA2EC) {
	__imp__sub_822EA2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA2F0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-1016
	ctx.r4.s64 = ctx.r11.s64 + -1016;
	// bl 0x823e01e0
	ctx.lr = 0x822EA30C;
	sub_823E01E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822EA2F0) {
	__imp__sub_822EA2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA324) {
	__imp__sub_822EA324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA328) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ea33c
	if (ctx.cr6.eq) goto loc_822EA33C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822EA33C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA328) {
	__imp__sub_822EA328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA344) {
	__imp__sub_822EA344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822EA350;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822EA364:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea364
	if (!ctx.cr6.eq) goto loc_822EA364;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x822ea3b8
	if (ctx.cr6.eq) goto loc_822EA3B8;
loc_822EA398:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822ea3b8
	if (ctx.cr6.eq) goto loc_822EA3B8;
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x822ea3ec
	if (ctx.cr6.eq) goto loc_822EA3EC;
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// bne cr6,0x822ea398
	if (!ctx.cr6.eq) goto loc_822EA398;
loc_822EA3B8:
	// li r5,63
	ctx.r5.s64 = 63;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823dfa38
	ctx.lr = 0x822EA3C8;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r11.u8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r10,-5312
	ctx.r5.s64 = ctx.r10.s64 + -5312;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822EA3EC;
	sub_822E8368(ctx, base);
loc_822EA3EC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA348) {
	__imp__sub_822EA348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA3F4) {
	__imp__sub_822EA3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e93e8
	sub_822E93E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA3F8) {
	__imp__sub_822EA3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA3FC) {
	__imp__sub_822EA3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA400) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA400) {
	__imp__sub_822EA400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA414) {
	__imp__sub_822EA414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA418) {
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
	// lis r30,-31842
	ctx.r30.s64 = -2086797312;
	// lwz r3,32132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ea470
	if (!ctx.cr6.lt) goto loc_822EA470;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lwz r11,32132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
	// stb r8,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r8.u8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x822ea4dc
	goto loc_822EA4DC;
loc_822EA470:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822EA47C:
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r6,80(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r5,68(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822ea4f4
	if (!ctx.cr6.gt) goto loc_822EA4F4;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r3,32132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ea4cc
	if (!ctx.cr6.eq) goto loc_822EA4CC;
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// lwz r3,32132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
loc_822EA4CC:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822ea47c
	if (!ctx.cr6.eq) goto loc_822EA47C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA4DC:
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
loc_822EA4F4:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea514
	if (ctx.cr6.eq) goto loc_822EA514;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
loc_822EA514:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ea730
	ctx.lr = 0x822EA51C;
	sub_822EA730(ctx, base);
	// lwz r11,32132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32132);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// b 0x822ea4dc
	goto loc_822EA4DC;
}

PPC_WEAK_FUNC(sub_822EA418) {
	__imp__sub_822EA418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA530) {
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
	// lis r31,-31842
	ctx.r31.s64 = -2086797312;
	// stw r3,32132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32132, ctx.r3.u32);
	// bl 0x822ea988
	ctx.lr = 0x822EA54C;
	sub_822EA988(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32132, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822EA530) {
	__imp__sub_822EA530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822EA570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-23528
	ctx.r4.s64 = ctx.r11.s64 + -23528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822eac28
	ctx.lr = 0x822EA598;
	sub_822EAC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA568) {
	__imp__sub_822EA568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA5C8) {
	__imp__sub_822EA5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

PPC_WEAK_FUNC(sub_822EA5D8) {
	__imp__sub_822EA5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA5E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA5E8) {
	__imp__sub_822EA5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA5F4) {
	__imp__sub_822EA5F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA5F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA5F8) {
	__imp__sub_822EA5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA604) {
	__imp__sub_822EA604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA608) {
	__imp__sub_822EA608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA60C) {
	__imp__sub_822EA60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA610) {
	PPC_FUNC_PROLOGUE();
	// subfic r11,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r5.s64;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA610) {
	__imp__sub_822EA610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA650) {
	__imp__sub_822EA650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EA674) {
	__imp__sub_822EA674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r5,r7,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subfe r9,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bne cr6,0x822ea6e4
	if (!ctx.cr6.eq) goto loc_822EA6E4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822EA6E4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stwx r4,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EA678) {
	__imp__sub_822EA678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822EA738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ea784
	if (ctx.cr6.eq) goto loc_822EA784;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ea780
	if (ctx.cr6.eq) goto loc_822EA780;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ea778
	if (ctx.cr6.eq) goto loc_822EA778;
loc_822EA768:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822ea768
	if (!ctx.cr6.eq) goto loc_822EA768;
loc_822EA778:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x822ea678
	ctx.lr = 0x822EA780;
	sub_822EA678(ctx, base);
loc_822EA780:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_822EA784:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r9,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ea974
	if (ctx.cr6.eq) goto loc_822EA974;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ea7d0
	if (!ctx.cr6.eq) goto loc_822EA7D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822EA7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822EA7D8:
	// subfic r10,r9,5
	ctx.xer.ca = ctx.r9.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r9.s64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ea854
	if (!ctx.cr6.eq) goto loc_822EA854;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subf r4,r6,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// subfe r6,r10,r4
	temp.u8 = (~ctx.r10.u32 + ctx.r4.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r9.s64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r29,r8,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r29,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwx r10,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
loc_822EA854:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ea908
	if (ctx.cr6.eq) goto loc_822EA908;
	// lwzx r8,r5,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ea908
	if (ctx.cr6.eq) goto loc_822EA908;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ea8c0
	if (ctx.cr6.eq) goto loc_822EA8C0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ea97c
	if (ctx.cr6.eq) goto loc_822EA97C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ea974
	if (ctx.cr6.eq) goto loc_822EA974;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r9,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x822ea7d8
	goto loc_822EA7D8;
loc_822EA8C0:
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// subfic r8,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r9.s64;
	// subfic r6,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r8.s64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stwx r4,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// stwx r8,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
loc_822EA908:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r6,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r9.s64;
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stwx r10,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822EA974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822EA97C:
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA730) {
	__imp__sub_822EA730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EA988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EA990;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r24,r3,40
	ctx.r24.s64 = ctx.r3.s64 + 40;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822ea9f4
	if (ctx.cr6.eq) goto loc_822EA9F4;
loc_822EA9C0:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpld cr6,r28,r10
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822eaa10
	if (ctx.cr6.eq) goto loc_822EAA10;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x822ea9dc
	if (ctx.cr6.lt) goto loc_822EA9DC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822EA9DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822ea9c0
	if (!ctx.cr6.eq) goto loc_822EA9C0;
loc_822EA9F4:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EAA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822eaa1c
	if (!ctx.cr6.eq) goto loc_822EAA1C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EAA10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EAA1C:
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822eaa2c
	if (!ctx.cr6.eq) goto loc_822EAA2C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822EAA2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822eaa68
	if (ctx.cr6.eq) goto loc_822EAA68;
loc_822EAA38:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r28,r11
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r11.u64, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x822eaa50
	if (ctx.cr6.lt) goto loc_822EAA50;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822EAA50:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822eaa38
	if (!ctx.cr6.eq) goto loc_822EAA38;
loc_822EAA68:
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x822eaae4
	if (ctx.cr6.eq) goto loc_822EAAE4;
loc_822EAA8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eac0c
	if (!ctx.cr6.eq) goto loc_822EAC0C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r6,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822eaaf4
	if (!ctx.cr6.eq) goto loc_822EAAF4;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// bne cr6,0x822eaa8c
	if (!ctx.cr6.eq) goto loc_822EAA8C;
loc_822EAAE4:
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// stw r26,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EAAF4:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x822eab88
	if (!ctx.cr6.eq) goto loc_822EAB88;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eab34
	if (!ctx.cr6.eq) goto loc_822EAB34;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_822EAB34:
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r4,r6,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// addic r9,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// subfe r9,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EAB88:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eabc0
	if (!ctx.cr6.eq) goto loc_822EABC0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_822EABC0:
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r4,r6,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addic r9,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// subfe r9,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_822EAC0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EA988) {
	__imp__sub_822EA988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EAC14) {
	__imp__sub_822EAC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r3,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r3.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EAC18) {
	__imp__sub_822EAC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EAC38:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822eac38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EAC38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r3,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r3.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EAC28) {
	__imp__sub_822EAC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EAC64) {
	__imp__sub_822EAC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1069
	ctx.r11.s64 = ctx.r11.s64 + 1069;
loc_822EAC80:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eac9c
	if (ctx.cr6.eq) goto loc_822EAC9C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822EAC9C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// blt cr6,0x822eac80
	if (ctx.cr6.lt) goto loc_822EAC80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EAC68) {
	__imp__sub_822EAC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EACB4) {
	__imp__sub_822EACB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r9,r3,1948
	ctx.r9.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// addi r11,r8,1069
	ctx.r11.s64 = ctx.r8.s64 + 1069;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EACDC:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eacf8
	if (ctx.cr6.eq) goto loc_822EACF8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822eacf8
	if (!ctx.cr6.lt) goto loc_822EACF8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822EACF8:
	// lbz r9,43(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ead14
	if (ctx.cr6.eq) goto loc_822EAD14;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822ead14
	if (!ctx.cr6.lt) goto loc_822EAD14;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822EAD14:
	// lbz r9,87(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 87);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ead30
	if (ctx.cr6.eq) goto loc_822EAD30;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822ead30
	if (!ctx.cr6.lt) goto loc_822EAD30;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822EAD30:
	// lbz r9,131(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 131);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ead4c
	if (ctx.cr6.eq) goto loc_822EAD4C;
	// lbz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822ead4c
	if (!ctx.cr6.lt) goto loc_822EAD4C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822EAD4C:
	// lbz r9,175(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 175);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ead68
	if (ctx.cr6.eq) goto loc_822EAD68;
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822ead68
	if (!ctx.cr6.lt) goto loc_822EAD68;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822EAD68:
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// bdnz 0x822eacdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EACDC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,256
	ctx.r3.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,1069
	ctx.r11.s64 = ctx.r8.s64 + 1069;
loc_822EAD84:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ead9c
	if (ctx.cr6.eq) goto loc_822EAD9C;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x822eadb4
	if (ctx.cr6.eq) goto loc_822EADB4;
loc_822EAD9C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x822ead84
	if (ctx.cr6.lt) goto loc_822EAD84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EADB4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822eadc4
	if (!ctx.cr6.lt) goto loc_822EADC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EADC4:
	// li r9,511
	ctx.r9.s64 = 511;
loc_822EADC8:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,1069
	ctx.r11.s64 = ctx.r8.s64 + 1069;
loc_822EADD8:
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822eadf4
	if (ctx.cr6.eq) goto loc_822EADF4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822eae08
	if (ctx.cr6.eq) goto loc_822EAE08;
loc_822EADF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x822eadd8
	if (ctx.cr6.lt) goto loc_822EADD8;
	// blr 
	return;
loc_822EAE08:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822eadc8
	if (!ctx.cr6.lt) goto loc_822EADC8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EACB8) {
	__imp__sub_822EACB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EAE14) {
	__imp__sub_822EAE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// li r5,1948
	ctx.r5.s64 = 1948;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EAE18) {
	__imp__sub_822EAE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EAE34) {
	__imp__sub_822EAE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EAE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EAE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,32144
	ctx.r29.s64 = ctx.r11.s64 + 32144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822EAE5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r4,r10,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8228a208
	ctx.lr = 0x822EAE78;
	sub_8228A208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eafac
	if (!ctx.cr6.eq) goto loc_822EAFAC;
	// addi r31,r31,1948
	ctx.r31.s64 = ctx.r31.s64 + 1948;
	// addi r11,r29,7792
	ctx.r11.s64 = ctx.r29.s64 + 7792;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eae5c
	if (ctx.cr6.lt) goto loc_822EAE5C;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eaec4
	if (!ctx.cr6.eq) goto loc_822EAEC4;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eaec4
	if (!ctx.cr6.eq) goto loc_822EAEC4;
	// lbz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eaec4
	if (!ctx.cr6.eq) goto loc_822EAEC4;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822eafa0
	if (ctx.cr6.eq) goto loc_822EAFA0;
loc_822EAEC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8230f318
	ctx.lr = 0x822EAED4;
	sub_8230F318(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822eaf1c
	if (ctx.cr6.eq) goto loc_822EAF1C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-11144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822eafb8
	if (ctx.cr6.eq) goto loc_822EAFB8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r27.u64);
	// std r27,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r27.u64);
	// stw r27,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r27.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
loc_822EAF1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
loc_822EAF24:
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822eaf64
	if (!ctx.cr6.eq) goto loc_822EAF64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
loc_822EAF3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822eaf5c
	if (!ctx.cr0.eq) goto loc_822EAF5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822eaf3c
	if (!ctx.cr6.eq) goto loc_822EAF3C;
loc_822EAF5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822eafd8
	if (ctx.cr6.eq) goto loc_822EAFD8;
loc_822EAF64:
	// addi r7,r7,1948
	ctx.r7.s64 = ctx.r7.s64 + 1948;
	// addi r11,r29,7804
	ctx.r11.s64 = ctx.r29.s64 + 7804;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eaf24
	if (ctx.cr6.lt) goto loc_822EAF24;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
loc_822EAF80:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822eb000
	if (ctx.cr6.eq) goto loc_822EB000;
	// addi r11,r11,1948
	ctx.r11.s64 = ctx.r11.s64 + 1948;
	// addi r10,r29,7852
	ctx.r10.s64 = ctx.r29.s64 + 7852;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822eaf80
	if (ctx.cr6.lt) goto loc_822EAF80;
loc_822EAFA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EAFAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EAFB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-1008
	ctx.r4.s64 = ctx.r11.s64 + -1008;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822EAFCC;
	sub_82280B08(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EAFD8:
	// mulli r11,r3,1948
	ctx.r11.s64 = ctx.r3.s64 * 1948;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EB000:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// mulli r30,r31,1948
	ctx.r30.s64 = ctx.r31.s64 * 1948;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x823de1f0
	ctx.lr = 0x822EB018;
	sub_823DE1F0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EAE38) {
	__imp__sub_822EAE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB040) {
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
	// bl 0x822eae38
	ctx.lr = 0x822EB050;
	sub_822EAE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eb074
	if (ctx.cr6.lt) goto loc_822EB074;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// li r5,1948
	ctx.r5.s64 = 1948;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de090
	ctx.lr = 0x822EB074;
	sub_823DE090(ctx, base);
loc_822EB074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB040) {
	__imp__sub_822EB040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB084) {
	__imp__sub_822EB084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB088) {
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
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// li r5,7792
	ctx.r5.s64 = 7792;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822EB0A8;
	sub_823DE090(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r10,-832
	ctx.r8.s64 = ctx.r10.s64 + -832;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r3,r9,-852
	ctx.r3.s64 = ctx.r9.s64 + -852;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x822e1618
	ctx.lr = 0x822EB0D0;
	sub_822E1618(ctx, base);
	// lis r8,-31842
	ctx.r8.s64 = -2086797312;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// stw r3,32136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32136, ctx.r3.u32);
	// addi r8,r7,-936
	ctx.r8.s64 = ctx.r7.s64 + -936;
	// addi r3,r5,-956
	ctx.r3.s64 = ctx.r5.s64 + -956;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822EB100;
	sub_822E1618(ctx, base);
	// lis r4,-31842
	ctx.r4.s64 = -2086797312;
	// stw r3,32140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB088) {
	__imp__sub_822EB088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EB120;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// mulli r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 * 44;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r30,r9,r31
	ctx.r30.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r29,r30,1072
	ctx.r29.s64 = ctx.r30.s64 + 1072;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r5,r11,1000
	ctx.xer.ca = ctx.r11.u32 <= 1000;
	ctx.r5.s64 = 1000 - ctx.r11.s64;
	// addi r4,r10,68
	ctx.r4.s64 = ctx.r10.s64 + 68;
	// bl 0x82287b40
	ctx.lr = 0x822EB160;
	sub_82287B40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82287e40
	ctx.lr = 0x822EB170;
	sub_82287E40(ctx, base);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,1069(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1069, ctx.r9.u8);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stb r8,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r8.u8);
	// bl 0x82310110
	ctx.lr = 0x822EB190;
	sub_82310110(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stb r6,1068(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1068, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB118) {
	__imp__sub_822EB118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB1B0) {
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
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x823de130
	ctx.lr = 0x822EB1E8;
	sub_823DE130(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r30,1080
	ctx.r11.s64 = ctx.r30.s64 + 1080;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EB1F4:
	// lbz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb20c
	if (ctx.cr6.eq) goto loc_822EB20C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822EB20C:
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb224
	if (ctx.cr6.eq) goto loc_822EB224;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
loc_822EB224:
	// lbz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb23c
	if (ctx.cr6.eq) goto loc_822EB23C;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
loc_822EB23C:
	// lbz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb254
	if (ctx.cr6.eq) goto loc_822EB254;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
loc_822EB254:
	// lbz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb26c
	if (ctx.cr6.eq) goto loc_822EB26C;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
loc_822EB26C:
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// bdnz 0x822eb1f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EB1F4;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822EB1B0) {
	__imp__sub_822EB1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EB2A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// blt cr6,0x822eb328
	if (ctx.cr6.lt) goto loc_822EB328;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x822eb318
	if (ctx.cr6.lt) goto loc_822EB318;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r8,7(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lbz r7,6(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// addi r4,r11,-656
	ctx.r4.s64 = ctx.r11.s64 + -656;
	// lbz r6,5(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// bl 0x82280b08
	ctx.lr = 0x822EB30C;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EB318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eb1b0
	ctx.lr = 0x822EB320;
	sub_822EB1B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_822EB328:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,1068
	ctx.r11.s64 = ctx.r31.s64 + 1068;
loc_822EB330:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb37c
	if (ctx.cr6.eq) goto loc_822EB37C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// blt cr6,0x822eb330
	if (ctx.cr6.lt) goto loc_822EB330;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r8,7(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// li r9,20
	ctx.r9.s64 = 20;
	// lbz r7,6(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// addi r4,r11,-752
	ctx.r4.s64 = ctx.r11.s64 + -752;
	// lbz r6,5(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// bl 0x82280b08
	ctx.lr = 0x822EB370;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EB37C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822eb118
	ctx.lr = 0x822EB38C;
	sub_822EB118(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB298) {
	__imp__sub_822EB298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB398) {
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
	// bl 0x822eae38
	ctx.lr = 0x822EB3B8;
	sub_822EAE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eb3d8
	if (!ctx.cr6.lt) goto loc_822EB3D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-544
	ctx.r4.s64 = ctx.r11.s64 + -544;
	// bl 0x82280900
	ctx.lr = 0x822EB3D0;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822eb3e8
	goto loc_822EB3E8;
loc_822EB3D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822eb298
	ctx.lr = 0x822EB3E8;
	sub_822EB298(ctx, base);
loc_822EB3E8:
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

PPC_WEAK_FUNC(sub_822EB398) {
	__imp__sub_822EB398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB400) {
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
	// bl 0x822eae38
	ctx.lr = 0x822EB420;
	sub_822EAE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eb440
	if (!ctx.cr6.lt) goto loc_822EB440;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-544
	ctx.r4.s64 = ctx.r11.s64 + -544;
	// bl 0x82280900
	ctx.lr = 0x822EB438;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822eb470
	goto loc_822EB470;
loc_822EB440:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822EB444:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eb444
	if (!ctx.cr6.eq) goto loc_822EB444;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x822eb298
	ctx.lr = 0x822EB470;
	sub_822EB298(ctx, base);
loc_822EB470:
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

PPC_WEAK_FUNC(sub_822EB400) {
	__imp__sub_822EB400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EB490;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r3,1948
	ctx.r10.s64 = ctx.r3.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x822eacb8
	ctx.lr = 0x822EB4B0;
	sub_822EACB8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r27,-31930
	ctx.r27.s64 = -2092564480;
	// addi r24,r10,-436
	ctx.r24.s64 = ctx.r10.s64 + -436;
	// addi r26,r11,15068
	ctx.r26.s64 = ctx.r11.s64 + 15068;
loc_822EB4C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r29,1069
	ctx.r11.s64 = ctx.r29.s64 + 1069;
loc_822EB4D0:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eb4ec
	if (ctx.cr6.eq) goto loc_822EB4EC;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822eb504
	if (ctx.cr6.eq) goto loc_822EB504;
loc_822EB4EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x822eb4d0
	if (ctx.cr6.lt) goto loc_822EB4D0;
loc_822EB4FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EB504:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822eb4fc
	if (ctx.cr6.lt) goto loc_822EB4FC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eb528
	if (!ctx.cr6.eq) goto loc_822EB528;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288048
	ctx.lr = 0x822EB524;
	sub_82288048(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_822EB528:
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,1069(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1069);
	// bl 0x82287e08
	ctx.lr = 0x822EB53C;
	sub_82287E08(ctx, base);
	// lwz r11,-17272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eb560
	if (ctx.cr6.eq) goto loc_822EB560;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r5,1069(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1069);
	// bl 0x82280900
	ctx.lr = 0x822EB560;
	sub_82280900(ctx, base);
loc_822EB560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x82287e40
	ctx.lr = 0x822EB570;
	sub_82287E40(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x822eb4c8
	goto loc_822EB4C8;
}

PPC_WEAK_FUNC(sub_822EB488) {
	__imp__sub_822EB488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB57C) {
	__imp__sub_822EB57C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822EB588;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x822EB590;
	sub_82310110(ctx, base);
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r11,-25600
	ctx.r26.s64 = ctx.r11.s64 + -25600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r26,-7792
	ctx.r11.s64 = ctx.r26.s64 + -7792;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r25,-31842
	ctx.r25.s64 = -2086797312;
	// lis r23,-31842
	ctx.r23.s64 = -2086797312;
	// addi r22,r10,-304
	ctx.r22.s64 = ctx.r10.s64 + -304;
	// addi r24,r11,-408
	ctx.r24.s64 = ctx.r11.s64 + -408;
loc_822EB5C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,-48
	ctx.r30.s64 = ctx.r31.s64 + -48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eb6a0
	if (ctx.cr6.eq) goto loc_822EB6A0;
	// lwz r11,32136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32136);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822eb6a0
	if (ctx.cr6.lt) goto loc_822EB6A0;
	// lwz r11,32140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32140);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x822eb628
	if (!ctx.cr6.gt) goto loc_822EB628;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x822EB610;
	sub_82289670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82280c30
	ctx.lr = 0x822EB624;
	sub_82280C30(ctx, base);
	// b 0x822eb690
	goto loc_822EB690;
loc_822EB628:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1100
	ctx.r5.s64 = 1100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x822EB63C;
	sub_82287B40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822eb488
	ctx.lr = 0x822EB648;
	sub_822EB488(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8228aad0
	ctx.lr = 0x822EB664;
	sub_8228AAD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eb6a0
	if (!ctx.cr6.eq) goto loc_822EB6A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x822EB680;
	sub_82289670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280c30
	ctx.lr = 0x822EB690;
	sub_82280C30(ctx, base);
loc_822EB690:
	// li r5,1948
	ctx.r5.s64 = 1948;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x822EB6A0;
	sub_823DE090(ctx, base);
loc_822EB6A0:
	// addi r11,r26,-7792
	ctx.r11.s64 = ctx.r26.s64 + -7792;
	// addi r31,r31,1948
	ctx.r31.s64 = ctx.r31.s64 + 1948;
	// addi r11,r11,7840
	ctx.r11.s64 = ctx.r11.s64 + 7840;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb5c0
	if (ctx.cr6.lt) goto loc_822EB5C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB580) {
	__imp__sub_822EB580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB6C0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,-200
	ctx.r3.s64 = ctx.r11.s64 + -200;
	// bl 0x822e84f0
	ctx.lr = 0x822EB6E4;
	sub_822E84F0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x822EB6FC;
	sub_8228A990(ctx, base);
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

PPC_WEAK_FUNC(sub_822EB6C0) {
	__imp__sub_822EB6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB710) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stb r8,1068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1068, ctx.r8.u8);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB710) {
	__imp__sub_822EB710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB74C) {
	__imp__sub_822EB74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822EB758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822eae38
	ctx.lr = 0x822EB768;
	sub_822EAE38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eb7a0
	if (!ctx.cr6.lt) goto loc_822EB7A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r4,r11,-192
	ctx.r4.s64 = ctx.r11.s64 + -192;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x82280b08
	ctx.lr = 0x822EB798;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822EB7A0:
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// mulli r10,r29,1948
	ctx.r10.s64 = ctx.r29.s64 * 1948;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822eac68
	ctx.lr = 0x822EB7BC;
	sub_822EAC68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eb858
	if (ctx.cr6.lt) goto loc_822EB858;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eacb8
	ctx.lr = 0x822EB7CC;
	sub_822EACB8(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x822eb858
	if (ctx.cr6.gt) goto loc_822EB858;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822EB7DC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r31,1069
	ctx.r11.s64 = ctx.r31.s64 + 1069;
loc_822EB7E4:
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822eb800
	if (ctx.cr6.eq) goto loc_822EB800;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822eb814
	if (ctx.cr6.eq) goto loc_822EB814;
loc_822EB800:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x822eb7e4
	if (ctx.cr6.lt) goto loc_822EB7E4;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_822EB814:
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stb r4,1068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1068, ctx.r4.u8);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822eb848
	if (!ctx.cr6.eq) goto loc_822EB848;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
loc_822EB848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822eacb8
	ctx.lr = 0x822EB850;
	sub_822EACB8(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822eb7dc
	if (!ctx.cr6.gt) goto loc_822EB7DC;
loc_822EB858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB750) {
	__imp__sub_822EB750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB860) {
	__imp__sub_822EB860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB86C) {
	__imp__sub_822EB86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB870) {
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
	// beq cr6,0x822eb8a8
	if (ctx.cr6.eq) goto loc_822EB8A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822eb8a8
	if (!ctx.cr6.eq) goto loc_822EB8A8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822eb8a8
	if (ctx.cr6.eq) goto loc_822EB8A8;
	// bl 0x8236b770
	ctx.lr = 0x822EB8A8;
	sub_8236B770(ctx, base);
loc_822EB8A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822EB870) {
	__imp__sub_822EB870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EB8CC) {
	__imp__sub_822EB8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB8D0) {
	PPC_FUNC_PROLOGUE();
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
}

PPC_WEAK_FUNC(sub_822EB8D0) {
	__imp__sub_822EB8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB8E8) {
	__imp__sub_822EB8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

PPC_WEAK_FUNC(sub_822EB900) {
	__imp__sub_822EB900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r10,-24500
	ctx.r7.s64 = ctx.r10.s64 + -24500;
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r3,-24500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24500, ctx.r3.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EB910) {
	__imp__sub_822EB910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EB930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EB938;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eb98c
	if (ctx.cr6.eq) goto loc_822EB98C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822eb970
	if (ctx.cr6.lt) goto loc_822EB970;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x822eb98c
	goto loc_822EB98C;
loc_822EB970:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822eb98c
	if (!ctx.cr6.eq) goto loc_822EB98C;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// subf r30,r5,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_822EB98C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r31,r5,21
	ctx.r31.u64 = ctx.r5.u32 & 0x7FF;
	// subf r10,r31,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r31.s64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8228c568
	ctx.lr = 0x822EB9B0;
	sub_8228C568(ctx, base);
	// neg r9,r31
	ctx.r9.s64 = -ctx.r31.s64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// clrlwi r4,r9,30
	ctx.r4.u64 = ctx.r9.u32 & 0x3;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r7,r3,-18160
	ctx.r7.s64 = ctx.r3.s64 + -18160;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r29,24576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24576, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r5,r11,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r4,r31,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r31.s64;
	// bl 0x8236b6a0
	ctx.lr = 0x822EB9F4;
	sub_8236B6A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eba10
	if (!ctx.cr6.eq) goto loc_822EBA10;
loc_822EB9FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228c610
	ctx.lr = 0x822EBA04;
	sub_8228C610(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822EBA10:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236b730
	ctx.lr = 0x822EBA1C;
	sub_8236B730(ctx, base);
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// addi r29,r11,-24500
	ctx.r29.s64 = ctx.r11.s64 + -24500;
	// lwz r11,-24500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eb9fc
	if (!ctx.cr6.eq) goto loc_822EB9FC;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8228c610
	ctx.lr = 0x822EBA38;
	sub_8228C610(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822eba4c
	if (!ctx.cr6.lt) goto loc_822EBA4C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822EBA4C:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EB930) {
	__imp__sub_822EB930(ctx, base);
}

