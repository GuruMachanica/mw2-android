#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822EBA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eba9c
	if (!ctx.cr6.eq) goto loc_822EBA9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x822ebaa4
	if (ctx.cr6.eq) goto loc_822EBAA4;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eba9c
	if (!ctx.cr6.eq) goto loc_822EBA9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822EBA9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EBAA4:
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_822EBAA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822ebacc
	if (ctx.cr6.eq) goto loc_822EBACC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ebaa8
	if (ctx.cr6.eq) goto loc_822EBAA8;
loc_822EBACC:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBA60) {
	__imp__sub_822EBA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ebaec
	if (ctx.cr6.eq) goto loc_822EBAEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822EBAEC:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
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

PPC_WEAK_FUNC(sub_822EBAD8) {
	__imp__sub_822EBAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBAFC) {
	__imp__sub_822EBAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ebb14
	if (ctx.cr6.eq) goto loc_822EBB14;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822EBB14:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
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

PPC_WEAK_FUNC(sub_822EBB00) {
	__imp__sub_822EBB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBB28) {
	__imp__sub_822EBB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBB3C) {
	__imp__sub_822EBB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ebb6c
	if (ctx.cr6.eq) goto loc_822EBB6C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_822EBB6C:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBB40) {
	__imp__sub_822EBB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBB7C) {
	__imp__sub_822EBB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBB80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ebbb0
	if (ctx.cr6.eq) goto loc_822EBBB0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_822EBBB0:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBB80) {
	__imp__sub_822EBB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ebbd8
	if (ctx.cr6.eq) goto loc_822EBBD8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,21,11,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// blr 
	return;
loc_822EBBD8:
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822EBBF0:
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ebbf0
	if (!ctx.cr6.eq) goto loc_822EBBF0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBBC0) {
	__imp__sub_822EBBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ebc28
	if (ctx.cr6.eq) goto loc_822EBC28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// blr 
	return;
loc_822EBC28:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBC10) {
	__imp__sub_822EBC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ebc5c
	if (ctx.cr6.eq) goto loc_822EBC5C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_822EBC5C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-100
	ctx.r5.s64 = ctx.r10.s64 + -100;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822e8368
	sub_822E8368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBC30) {
	__imp__sub_822EBC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBC78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ebc98
	if (ctx.cr6.eq) goto loc_822EBC98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
loc_822EBC98:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-100
	ctx.r5.s64 = ctx.r10.s64 + -100;
	// b 0x822e8368
	sub_822E8368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBC78) {
	__imp__sub_822EBC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBCB0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ebcf4
	if (!ctx.cr6.eq) goto loc_822EBCF4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ebcf4
	if (!ctx.cr6.eq) goto loc_822EBCF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// bl 0x822e8058
	ctx.lr = 0x822EBCE8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x822ebcf8
	if (ctx.cr6.eq) goto loc_822EBCF8;
loc_822EBCF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EBCF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EBCB0) {
	__imp__sub_822EBCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBD08) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// b 0x8236bb70
	sub_8236BB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBD08) {
	__imp__sub_822EBD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBD24) {
	__imp__sub_822EBD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBD28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,14536
	ctx.r4.s64 = ctx.r11.s64 + 14536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7f80
	ctx.lr = 0x822EBD50;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ebdac
	if (!ctx.cr6.eq) goto loc_822EBDAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x822EBD70;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bb70
	ctx.lr = 0x822EBD90;
	sub_8236BB70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822ebe50
	if (!ctx.cr6.eq) goto loc_822EBE50;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822EBDAC;
	sub_82280900(ctx, base);
loc_822EBDAC:
	// bl 0x822ec488
	ctx.lr = 0x822EBDB0;
	sub_822EC488(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-100
	ctx.r5.s64 = ctx.r11.s64 + -100;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822EBDCC;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bb70
	ctx.lr = 0x822EBDEC;
	sub_8236BB70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822ebe50
	if (!ctx.cr6.eq) goto loc_822EBE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de1c0
	ctx.lr = 0x822EBDFC;
	sub_822DE1C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822ebe50
	if (!ctx.cr6.eq) goto loc_822EBE50;
	// bl 0x822ec488
	ctx.lr = 0x822EBE08;
	sub_822EC488(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-92
	ctx.r5.s64 = ctx.r11.s64 + -92;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822EBE24;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bb70
	ctx.lr = 0x822EBE44;
	sub_8236BB70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822ebe50
	if (!ctx.cr6.eq) goto loc_822EBE50;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822EBE50:
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

PPC_WEAK_FUNC(sub_822EBD28) {
	__imp__sub_822EBD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBE64) {
	__imp__sub_822EBE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBE68) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ebee0
	if (!ctx.cr6.eq) goto loc_822EBEE0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822ebea8
	if (!ctx.cr6.eq) goto loc_822EBEA8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// b 0x822ebeb0
	goto loc_822EBEB0;
loc_822EBEA8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
loc_822EBEB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x822EBEC4;
	sub_822E8368(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// bl 0x822ebd28
	ctx.lr = 0x822EBED4;
	sub_822EBD28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ebee0
	if (ctx.cr6.eq) goto loc_822EBEE0;
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
loc_822EBEE0:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_822EBE68) {
	__imp__sub_822EBE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EBEFC) {
	__imp__sub_822EBEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EBF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EBF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ebfb0
	if (ctx.cr6.eq) goto loc_822EBFB0;
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-24496
	ctx.r30.s64 = ctx.r11.s64 + -24496;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ebf70
	if (!ctx.cr6.eq) goto loc_822EBF70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r10,-20
	ctx.r5.s64 = ctx.r10.s64 + -20;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x822EBF54;
	sub_822E8368(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-28736
	ctx.r3.s64 = ctx.r9.s64 + -28736;
	// bl 0x822ebd28
	ctx.lr = 0x822EBF64;
	sub_822EBD28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ebf70
	if (ctx.cr6.eq) goto loc_822EBF70;
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_822EBF70:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ebf94
	if (!ctx.cr6.eq) goto loc_822EBF94;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EBF94:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EBFB0:
	// bl 0x822ec488
	ctx.lr = 0x822EBFB4;
	sub_822EC488(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// bl 0x822e8368
	ctx.lr = 0x822EBFD0;
	sub_822E8368(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8236bb70
	ctx.lr = 0x822EBFF0;
	sub_8236BB70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EBF00) {
	__imp__sub_822EBF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EC010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-18348
	ctx.r4.s64 = ctx.r11.s64 + -18348;
	// bl 0x822e8058
	ctx.lr = 0x822EC024;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ec034
	if (!ctx.cr6.eq) goto loc_822EC034;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EC034:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,19480
	ctx.r29.s64 = ctx.r11.s64 + 19480;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822EC044:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822EC050;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ec078
	if (ctx.cr6.eq) goto loc_822EC078;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r29,600
	ctx.r11.s64 = ctx.r29.s64 + 600;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ec044
	if (ctx.cr6.lt) goto loc_822EC044;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EC078:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srawi r6,r7,20
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 20;
	// clrlwi r3,r6,27
	ctx.r3.u64 = ctx.r6.u32 & 0x1F;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC008) {
	__imp__sub_822EC008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC09C) {
	__imp__sub_822EC09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822ec0d0
	if (!ctx.cr6.gt) goto loc_822EC0D0;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// bge cr6,0x822ec0d0
	if (!ctx.cr6.lt) goto loc_822EC0D0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,19480
	ctx.r10.s64 = ctx.r10.s64 + 19480;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20);
	// blr 
	return;
loc_822EC0D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-18348
	ctx.r3.s64 = ctx.r11.s64 + -18348;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC0A0) {
	__imp__sub_822EC0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC0DC) {
	__imp__sub_822EC0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// clrldi r6,r5,32
	ctx.r6.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f5,0(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC0E0) {
	__imp__sub_822EC0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC13C) {
	__imp__sub_822EC13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// srw r31,r3,r4
	ctx.r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// slw r11,r10,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// slw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// clrldi r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f0,-32(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// and r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 & ctx.r3.u64;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r4,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r4.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lfs f0,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// fdivs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fdivs f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC140) {
	__imp__sub_822EC140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC1E4) {
	__imp__sub_822EC1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// slw r5,r11,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// and r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// divwu r5,r3,r4
	ctx.r5.u32 = ctx.r3.u32 / ctx.r4.u32;
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// slw r5,r11,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f0,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fdivs f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fdivs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC1E8) {
	__imp__sub_822EC1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC284) {
	__imp__sub_822EC284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// divwu r11,r3,r4
	ctx.r11.u32 = ctx.r3.u32 / ctx.r4.u32;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mullw r5,r11,r4
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// subf r11,r5,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r5.s64;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// divwu r10,r3,r4
	ctx.r10.u32 = ctx.r3.u32 / ctx.r4.u32;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fdivs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC288) {
	__imp__sub_822EC288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC31C) {
	__imp__sub_822EC31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822EC328;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x822ec360
	if (ctx.cr6.lt) goto loc_822EC360;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// b 0x822ec38c
	goto loc_822EC38C;
loc_822EC360:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// bl 0x823dde20
	ctx.lr = 0x822EC37C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822EC38C:
	// divwu r10,r11,r31
	ctx.r10.u32 = ctx.r11.u32 / ctx.r31.u32;
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// clrldi r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// divwu r6,r11,r31
	ctx.r6.u32 = ctx.r11.u32 / ctx.r31.u32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f1,f31,f5
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f5.f64));
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// fdivs f2,f31,f6
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC320) {
	__imp__sub_822EC320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// lfd f0,648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 648);
	// stfd f0,-24480(r10)
	PPC_STORE_U64(ctx.r10.u32 + -24480, ctx.f0.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC420) {
	__imp__sub_822EC420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC434) {
	__imp__sub_822EC434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC438) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e1c40
	sub_823E1C40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC438) {
	__imp__sub_822EC438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC43C) {
	__imp__sub_822EC43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC440) {
	__imp__sub_822EC440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC44C) {
	__imp__sub_822EC44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC450) {
	__imp__sub_822EC450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC45C) {
	__imp__sub_822EC45C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC460) {
	__imp__sub_822EC460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC46C) {
	__imp__sub_822EC46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC470) {
	__imp__sub_822EC470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC47C) {
	__imp__sub_822EC47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC480) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC480) {
	__imp__sub_822EC480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC488) {
	__imp__sub_822EC488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC494) {
	__imp__sub_822EC494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC498) {
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
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// addi r30,r11,-24464
	ctx.r30.s64 = ctx.r11.s64 + -24464;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822EC4B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1364
	ctx.lr = 0x822EC4C0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,1036
	ctx.r11.s64 = ctx.r30.s64 + 1036;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ec4b8
	if (ctx.cr6.lt) goto loc_822EC4B8;
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

PPC_WEAK_FUNC(sub_822EC498) {
	__imp__sub_822EC498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-24464
	ctx.r11.s64 = ctx.r11.s64 + -24464;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823f1374
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC4E8) {
	__imp__sub_822EC4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC4FC) {
	__imp__sub_822EC4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-24464
	ctx.r11.s64 = ctx.r11.s64 + -24464;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823f1384
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC500) {
	__imp__sub_822EC500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC514) {
	__imp__sub_822EC514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC518) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_822EC530:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ec530
	if (ctx.cr6.lt) goto loc_822EC530;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC518) {
	__imp__sub_822EC518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC554) {
	__imp__sub_822EC554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EC560;
	__savegprlr_27(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// ble cr6,0x822ec87c
	if (!ctx.cr6.gt) goto loc_822EC87C;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
loc_822EC58C:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x822ec86c
	if (!ctx.cr6.gt) goto loc_822EC86C;
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822EC5A0:
	// lfs f12,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// blt cr6,0x822ec7bc
	if (ctx.cr6.lt) goto loc_822EC7BC;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_822EC5E4:
	// lfs f11,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,-20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f4,f3,f13,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f3,f9,f12,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f5,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f7,f11,f3,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x822ec654
	if (!ctx.cr6.gt) goto loc_822EC654;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_822EC654:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f4,f3,f13,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f3,f9,f12,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f5,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f7,f11,f3,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x822ec6c8
	if (!ctx.cr6.gt) goto loc_822EC6C8;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_822EC6C8:
	// lfs f11,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f4,f3,f13,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f3,f9,f12,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f5,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f7,f11,f3,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x822ec73c
	if (!ctx.cr6.gt) goto loc_822EC73C;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_822EC73C:
	// lfs f11,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f4,f3,f13,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f3,f9,f12,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f5,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f7,f11,f3,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x822ec7b0
	if (!ctx.cr6.gt) goto loc_822EC7B0;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_822EC7B0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bdnz 0x822ec5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EC5E4;
loc_822EC7BC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ec85c
	if (!ctx.cr6.lt) goto loc_822EC85C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_822EC7E0:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f6,f3,f12
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f4,f3,f13,f8
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f3,f9,f12,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f9,f0,f5,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f6.f64));
	// fmuls f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f7,f11,f3,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x822ec850
	if (!ctx.cr6.gt) goto loc_822EC850;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_822EC850:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x822ec7e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EC7E0;
loc_822EC85C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822ec5a0
	if (ctx.cr6.lt) goto loc_822EC5A0;
loc_822EC86C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822ec58c
	if (ctx.cr6.lt) goto loc_822EC58C;
loc_822EC87C:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EC558) {
	__imp__sub_822EC558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC880) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822ec8ac
	if (!ctx.cr6.gt) goto loc_822EC8AC;
loc_822EC890:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x822ec8b4
	if (ctx.cr6.eq) goto loc_822EC8B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822ec890
	if (ctx.cr6.lt) goto loc_822EC890;
loc_822EC8AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EC8B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC880) {
	__imp__sub_822EC880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC8BC) {
	__imp__sub_822EC8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822ec920
	if (!ctx.cr6.gt) goto loc_822EC920;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
loc_822EC8D8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822ec8fc
	if (ctx.cr6.eq) goto loc_822EC8FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822ec8fc
	if (ctx.cr6.eq) goto loc_822EC8FC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822ec910
	if (!ctx.cr6.eq) goto loc_822EC910;
loc_822EC8FC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822ec928
	if (ctx.cr6.eq) goto loc_822EC928;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
loc_822EC910:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822ec8d8
	if (ctx.cr6.lt) goto loc_822EC8D8;
loc_822EC920:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_822EC928:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC8C0) {
	__imp__sub_822EC8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822ec944
	if (!ctx.cr6.eq) goto loc_822EC944;
loc_822EC93C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822EC944:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822ec93c
	if (ctx.cr6.eq) goto loc_822EC93C;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC930) {
	__imp__sub_822EC930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC964) {
	__imp__sub_822EC964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC968) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
loc_822EC97C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822EC988:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822ec99c
	if (!ctx.cr6.eq) goto loc_822EC99C;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822ec9c8
	if (!ctx.cr6.eq) goto loc_822EC9C8;
loc_822EC99C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x822ec988
	if (ctx.cr6.lt) goto loc_822EC988;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822ec97c
	if (ctx.cr6.lt) goto loc_822EC97C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822EC9C8:
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC968) {
	__imp__sub_822EC968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EC9E4) {
	__imp__sub_822EC9E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EC9E8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_822EC9F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822eca14
	if (!ctx.cr6.eq) goto loc_822ECA14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x822ec9f0
	if (ctx.cr6.lt) goto loc_822EC9F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822ECA14:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EC9E8) {
	__imp__sub_822EC9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECA24) {
	__imp__sub_822ECA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA28) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
loc_822ECA30:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822eca44
	if (ctx.cr6.eq) goto loc_822ECA44;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822eca5c
	if (!ctx.cr6.eq) goto loc_822ECA5C;
loc_822ECA44:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822eca30
	if (ctx.cr6.lt) goto loc_822ECA30;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822ECA5C:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECA28) {
	__imp__sub_822ECA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECA6C) {
	__imp__sub_822ECA6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECA70) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822ECA80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822eca98
	if (!ctx.cr6.eq) goto loc_822ECA98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ecabc
	goto loc_822ECABC;
loc_822ECA98:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822ecaac
	if (!ctx.cr6.eq) goto loc_822ECAAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ecabc
	goto loc_822ECABC;
loc_822ECAAC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_822ECABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822eca80
	if (!ctx.cr6.eq) goto loc_822ECA80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECA70) {
	__imp__sub_822ECA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECAD8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822ecb04
	if (!ctx.cr6.eq) goto loc_822ECB04;
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
loc_822ECB04:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822eca70
	ctx.lr = 0x822ECB18;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822ecb38
	if (ctx.cr6.eq) goto loc_822ECB38;
loc_822ECB20:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bl 0x822eca70
	ctx.lr = 0x822ECB30;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822ecb20
	if (!ctx.cr6.eq) goto loc_822ECB20;
loc_822ECB38:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECAD8) {
	__imp__sub_822ECAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECB4C) {
	__imp__sub_822ECB4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822ECB58;
	__savegprlr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16576(r1)
	ea = -16576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_822ECB90:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x822ecba4
	if (ctx.cr6.eq) goto loc_822ECBA4;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x822ecca4
	if (!ctx.cr6.eq) goto loc_822ECCA4;
loc_822ECBA4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822ecb90
	if (ctx.cr6.lt) goto loc_822ECB90;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822ECBB8:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
loc_822ECBD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x822ecbe8
	if (ctx.cr6.eq) goto loc_822ECBE8;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x822eccb4
	if (!ctx.cr6.eq) goto loc_822ECCB4;
loc_822ECBE8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822ecbd4
	if (ctx.cr6.lt) goto loc_822ECBD4;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_822ECBFC:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_822ECC08:
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x822eca70
	ctx.lr = 0x822ECC18;
	sub_822ECA70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822ecd24
	if (ctx.cr6.eq) goto loc_822ECD24;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
loc_822ECC34:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwzx r8,r31,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
loc_822ECC44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x822ecc58
	if (ctx.cr6.eq) goto loc_822ECC58;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822eccc4
	if (!ctx.cr6.eq) goto loc_822ECCC4;
loc_822ECC58:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822ecc44
	if (ctx.cr6.lt) goto loc_822ECC44;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_822ECC6C:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x822ecd0c
	if (ctx.cr6.eq) goto loc_822ECD0C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822eccdc
	if (!ctx.cr6.gt) goto loc_822ECCDC;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
loc_822ECC84:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822eccd4
	if (ctx.cr6.eq) goto loc_822ECCD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822ecc84
	if (ctx.cr6.lt) goto loc_822ECC84;
	// b 0x822eccdc
	goto loc_822ECCDC;
loc_822ECCA4:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// b 0x822ecbb8
	goto loc_822ECBB8;
loc_822ECCB4:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r7
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x822ecbfc
	goto loc_822ECBFC;
loc_822ECCC4:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x822ecc6c
	goto loc_822ECC6C;
loc_822ECCD4:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822ecd0c
	if (ctx.cr6.lt) goto loc_822ECD0C;
loc_822ECCDC:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stwu r11,16(r6)
	ea = 16 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// beq cr6,0x822ecd44
	if (ctx.cr6.eq) goto loc_822ECD44;
loc_822ECD0C:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x822eca70
	ctx.lr = 0x822ECD18;
	sub_822ECA70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822ecc34
	if (!ctx.cr6.eq) goto loc_822ECC34;
loc_822ECD24:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x822ecc08
	if (ctx.cr6.gt) goto loc_822ECC08;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
	// addi r1,r1,16576
	ctx.r1.s64 = ctx.r1.s64 + 16576;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_822ECD44:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
loc_822ECD6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ecd6c
	if (!ctx.cr6.eq) goto loc_822ECD6C;
	// stw r7,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,16576
	ctx.r1.s64 = ctx.r1.s64 + 16576;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECB50) {
	__imp__sub_822ECB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822ECD98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822ece68
	if (!ctx.cr6.gt) goto loc_822ECE68;
loc_822ECDB0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// beq cr6,0x822ece40
	if (ctx.cr6.eq) goto loc_822ECE40;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822eca70
	ctx.lr = 0x822ECDE0;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822ece40
	if (ctx.cr6.eq) goto loc_822ECE40;
loc_822ECDE8:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bl 0x822eca70
	ctx.lr = 0x822ECDF8;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822ecde8
	if (!ctx.cr6.eq) goto loc_822ECDE8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x822ece40
	if (ctx.cr6.lt) goto loc_822ECE40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ecad8
	ctx.lr = 0x822ECE18;
	sub_822ECAD8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822ece40
	if (ctx.cr6.lt) goto loc_822ECE40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ecad8
	ctx.lr = 0x822ECE30;
	sub_822ECAD8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822ece40
	if (ctx.cr6.lt) goto loc_822ECE40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x822ece60
	goto loc_822ECE60;
loc_822ECE40:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x822ECE58;
	sub_823DE130(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822ECE60:
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822ecdb0
	if (ctx.cr6.lt) goto loc_822ECDB0;
loc_822ECE68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ECD90) {
	__imp__sub_822ECD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECE74) {
	__imp__sub_822ECE74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECE78) {
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
	// bl 0x822eca70
	ctx.lr = 0x822ECE8C;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822eceac
	if (!ctx.cr6.eq) goto loc_822ECEAC;
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
loc_822ECEAC:
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x822ECEC8;
	sub_823DE130(ctx, base);
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

PPC_WEAK_FUNC(sub_822ECE78) {
	__imp__sub_822ECE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECEE0) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822ecf14
	if (!ctx.cr6.eq) goto loc_822ECF14;
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
loc_822ECF14:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822eca70
	ctx.lr = 0x822ECF28;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822ecf54
	if (ctx.cr6.eq) goto loc_822ECF54;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_822ECF34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// bl 0x822eca70
	ctx.lr = 0x822ECF4C;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822ecf34
	if (!ctx.cr6.eq) goto loc_822ECF34;
loc_822ECF54:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
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

PPC_WEAK_FUNC(sub_822ECEE0) {
	__imp__sub_822ECEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ECF6C) {
	__imp__sub_822ECF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ECF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822ECFC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// bdnz 0x822ecfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ECFC8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ECF70) {
	__imp__sub_822ECF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x822ED020;
	__savefpr_28(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfd f4,656(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 656);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lfs f8,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x822ed150
	if (ctx.cr6.eq) goto loc_822ED150;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subfic r5,r3,-8
	ctx.xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r3.s64;
loc_822ED06C:
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f3,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f10,f9,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f3,f10,f13,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f7,f9,f0,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fmsubs f6,f12,f11,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmuls f5,f3,f3
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f2,f7,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fsqrts f5,f1
	ctx.f5.f64 = double(float(sqrt(ctx.f1.f64)));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// fsel f1,f2,f8,f5
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fdivs f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f1.f64));
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// bge cr6,0x822ed15c
	if (!ctx.cr6.lt) goto loc_822ED15C;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f13,f9,f11,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f12,f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x822ed138
	if (ctx.cr6.lt) goto loc_822ED138;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822ed06c
	if (ctx.cr6.lt) goto loc_822ED06C;
	// b 0x822ed15c
	goto loc_822ED15C;
loc_822ED138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x822ED144;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822ED150:
	// lfs f3,-56(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
loc_822ED15C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822ed278
	if (!ctx.cr6.lt) goto loc_822ED278;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// subfic r6,r3,-8
	ctx.xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r6.s64 = -8 - ctx.r3.s64;
	// lfs f31,2416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
loc_822ED1A4:
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f6,f10,f13,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f6.f64));
	// fmsubs f5,f9,f0,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f7,f12,f11,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f7.f64));
	// fmuls f29,f6,f6
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f29,f5,f5,f29
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f29.f64));
	// fmadds f29,f7,f7,f29
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f29.f64));
	// fsqrts f29,f29
	ctx.f29.f64 = double(float(sqrt(ctx.f29.f64)));
	// fneg f28,f29
	ctx.f28.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f29,f4
	ctx.cr6.compare(ctx.f29.f64, ctx.f4.f64);
	// fsel f29,f28,f8,f29
	ctx.f29.f64 = ctx.f28.f64 >= 0.0 ? ctx.f8.f64 : ctx.f29.f64;
	// fdivs f29,f8,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 / ctx.f29.f64));
	// fmuls f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// bge cr6,0x822ed24c
	if (!ctx.cr6.lt) goto loc_822ED24C;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f13,f9,f11,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f12,f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// b 0x822ed25c
	goto loc_822ED25C;
loc_822ED24C:
	// fmuls f0,f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f13,f6,f2,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f12,f5,f3,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
loc_822ED25C:
	// blt cr6,0x822ed138
	if (ctx.cr6.lt) goto loc_822ED138;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822ed1a4
	if (ctx.cr6.lt) goto loc_822ED1A4;
loc_822ED278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x822ED284;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED010) {
	__imp__sub_822ED010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822ED298;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12416(r1)
	ea = -12416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x822ed350
	if (ctx.cr6.lt) goto loc_822ED350;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,-12
	ctx.r11.s64 = ctx.r10.s64 + -12;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822ED2DC:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f4,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f3,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfsu f3,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ed2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ED2DC;
loc_822ED350:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822ed3a4
	if (!ctx.cr6.lt) goto loc_822ED3A4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r6,r10,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r10,-12
	ctx.r11.s64 = ctx.r10.s64 + -12;
loc_822ED384:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ed384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ED384;
loc_822ED3A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x822ed42c
	if (!ctx.cr6.gt) goto loc_822ED42C;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
loc_822ED3BC:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x822ed41c
	if (!ctx.cr6.lt) goto loc_822ED41C;
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x822ED414;
	sub_823DE130(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x822ed424
	goto loc_822ED424;
loc_822ED41C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
loc_822ED424:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822ed3bc
	if (ctx.cr6.lt) goto loc_822ED3BC;
loc_822ED42C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x822ed480
	if (!ctx.cr6.lt) goto loc_822ED480;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_822ED480:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x822ed498
	if (!ctx.cr6.lt) goto loc_822ED498;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,12416
	ctx.r1.s64 = ctx.r1.s64 + 12416;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822ED498:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ed010
	ctx.lr = 0x822ED4A4;
	sub_822ED010(ctx, base);
	// addi r1,r1,12416
	ctx.r1.s64 = ctx.r1.s64 + 12416;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED290) {
	__imp__sub_822ED290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// beq cr6,0x822ed4d0
	if (ctx.cr6.eq) goto loc_822ED4D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ed4e0
	if (!ctx.cr6.eq) goto loc_822ED4E0;
loc_822ED4C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822ED4D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed4e0
	if (ctx.cr6.eq) goto loc_822ED4E0;
loc_822ED4D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822ED4E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x822ed4d8
	if (ctx.cr6.lt) goto loc_822ED4D8;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x822ed4c8
	if (ctx.cr6.gt) goto loc_822ED4C8;
	// subfc r11,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// eqv r10,r7,r8
	ctx.r10.u64 = ~(ctx.r7.u64 ^ ctx.r8.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ED4B0) {
	__imp__sub_822ED4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822ED520;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12496(r1)
	ea = -12496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ecb50
	ctx.lr = 0x822ED570;
	sub_822ECB50(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,4224
	ctx.r9.s64 = ctx.r1.s64 + 4224;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x822ecb50
	ctx.lr = 0x822ED594;
	sub_822ECB50(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r1,8320
	ctx.r9.s64 = ctx.r1.s64 + 8320;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x822ecb50
	ctx.lr = 0x822ED5B8;
	sub_822ECB50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ecf70
	ctx.lr = 0x822ED5C8;
	sub_822ECF70(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,4224
	ctx.r3.s64 = ctx.r1.s64 + 4224;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822ecf70
	ctx.lr = 0x822ED5E0;
	sub_822ECF70(ctx, base);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,8320
	ctx.r3.s64 = ctx.r1.s64 + 8320;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822ecf70
	ctx.lr = 0x822ED5F8;
	sub_822ECF70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822ed290
	ctx.lr = 0x822ED60C;
	sub_822ED290(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,4224
	ctx.r3.s64 = ctx.r1.s64 + 4224;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x822ed290
	ctx.lr = 0x822ED620;
	sub_822ED290(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,8320
	ctx.r3.s64 = ctx.r1.s64 + 8320;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// bl 0x822ed290
	ctx.lr = 0x822ED634;
	sub_822ED290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// beq cr6,0x822ed65c
	if (ctx.cr6.eq) goto loc_822ED65C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ed66c
	if (!ctx.cr6.eq) goto loc_822ED66C;
	// b 0x822ed6a8
	goto loc_822ED6A8;
loc_822ED65C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed66c
	if (ctx.cr6.eq) goto loc_822ED66C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ed6a8
	goto loc_822ED6A8;
loc_822ED66C:
	// fsubs f13,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x822ed680
	if (!ctx.cr6.lt) goto loc_822ED680;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ed6a8
	goto loc_822ED6A8;
loc_822ED680:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x822ed694
	if (!ctx.cr6.gt) goto loc_822ED694;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822ed6a8
	goto loc_822ED6A8;
loc_822ED694:
	// subfc r11,r31,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// eqv r10,r31,r30
	ctx.r10.u64 = ~(ctx.r31.u64 ^ ctx.r30.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
loc_822ED6A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// subfe r10,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ed6e4
	if (ctx.cr6.eq) goto loc_822ED6E4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ed6f4
	if (!ctx.cr6.eq) goto loc_822ED6F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822ed738
	goto loc_822ED738;
loc_822ED6E4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ed6f4
	if (ctx.cr6.eq) goto loc_822ED6F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ed738
	goto loc_822ED738;
loc_822ED6F4:
	// fsubs f12,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822ed708
	if (!ctx.cr6.lt) goto loc_822ED708;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822ed738
	goto loc_822ED738;
loc_822ED708:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822ed71c
	if (!ctx.cr6.gt) goto loc_822ED71C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822ed738
	goto loc_822ED738;
loc_822ED71C:
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subfc r7,r8,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r27.s64 - ctx.r8.s64;
	// eqv r6,r8,r27
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r27.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_822ED738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ed760
	if (ctx.cr6.eq) goto loc_822ED760;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfic r3,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	ctx.r3.s64 = 2 - ctx.r11.s64;
	// addi r1,r1,12496
	ctx.r1.s64 = ctx.r1.s64 + 12496;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822ED760:
	// subfic r3,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r3.s64 = 2 - ctx.r10.s64;
	// addi r1,r1,12496
	ctx.r1.s64 = ctx.r1.s64 + 12496;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED518) {
	__imp__sub_822ED518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822ED780;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rotlwi r11,r27,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822ed8ac
	if (!ctx.cr6.lt) goto loc_822ED8AC;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
loc_822ED7BC:
	// lwz r25,0(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822ed88c
	if (!ctx.cr6.gt) goto loc_822ED88C;
	// rlwinm r28,r25,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822ED7D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r7,r28,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,-4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x822ecb50
	ctx.lr = 0x822ED804;
	sub_822ECB50(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ed824
	if (!ctx.cr6.eq) goto loc_822ED824;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822ed7d4
	if (ctx.cr6.lt) goto loc_822ED7D4;
	// b 0x822ed88c
	goto loc_822ED88C;
loc_822ED824:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ed860
	if (!ctx.cr6.lt) goto loc_822ED860;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r28,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwzx r10,r31,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r10.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// bl 0x823de130
	ctx.lr = 0x822ED854;
	sub_823DE130(ctx, base);
	// lwzx r8,r31,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r28.u32);
loc_822ED860:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822ed890
	if (!ctx.cr6.lt) goto loc_822ED890;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822ED87C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ed87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ED87C;
loc_822ED88C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
loc_822ED890:
	// bne cr6,0x822ed8a0
	if (!ctx.cr6.eq) goto loc_822ED8A0;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwu r11,4(r20)
	ea = 4 + ctx.r20.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r20.u32 = ea;
loc_822ED8A0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x822ed7bc
	if (ctx.cr6.lt) goto loc_822ED7BC;
loc_822ED8AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED778) {
	__imp__sub_822ED778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED8B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822ed900
	if (!ctx.cr6.gt) goto loc_822ED900;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_822ED8E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822ed900
	if (ctx.cr6.eq) goto loc_822ED900;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822ed8e4
	if (ctx.cr6.lt) goto loc_822ED8E4;
loc_822ED900:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x822ed910
	if (!ctx.cr6.eq) goto loc_822ED910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822ed948
	goto loc_822ED948;
loc_822ED910:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x822ED92C;
	sub_823DE130(ctx, base);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x822ed940
	if (!ctx.cr6.lt) goto loc_822ED940;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822ed948
	goto loc_822ED948;
loc_822ED940:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ecd90
	ctx.lr = 0x822ED948;
	sub_822ECD90(ctx, base);
loc_822ED948:
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

PPC_WEAK_FUNC(sub_822ED8B8) {
	__imp__sub_822ED8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ED960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822ED968;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// li r12,-20688
	ctx.r12.s64 = -20688;
	// bl 0x823dedd4
	ctx.lr = 0x822ED97C;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ecd90
	ctx.lr = 0x822ED994;
	sub_822ECD90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822edca4
	if (ctx.cr6.lt) goto loc_822EDCA4;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822eda38
	if (!ctx.cr6.gt) goto loc_822EDA38;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822ED9B4:
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,4192
	ctx.r10.s64 = ctx.r1.s64 + 4192;
	// li r11,3
	ctx.r11.s64 = 3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822ED9D4:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822eda24
	if (ctx.cr6.eq) goto loc_822EDA24;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822eda0c
	if (!ctx.cr6.gt) goto loc_822EDA0C;
	// addi r11,r1,4192
	ctx.r11.s64 = ctx.r1.s64 + 4192;
loc_822ED9F0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822edadc
	if (ctx.cr6.eq) goto loc_822EDADC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822ed9f0
	if (ctx.cr6.lt) goto loc_822ED9F0;
loc_822EDA0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EDA10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eda24
	if (!ctx.cr6.eq) goto loc_822EDA24;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_822EDA24:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x822ed9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ED9D4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x822ed9b4
	if (!ctx.cr0.eq) goto loc_822ED9B4;
loc_822EDA38:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822edca4
	if (!ctx.cr6.gt) goto loc_822EDCA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r1,4192
	ctx.r25.s64 = ctx.r1.s64 + 4192;
	// lfs f29,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
loc_822EDA50:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ecee0
	ctx.lr = 0x822EDA68;
	sub_822ECEE0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x822edc94
	if (!ctx.cr6.gt) goto loc_822EDC94;
loc_822EDA70:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r1,8288
	ctx.r9.s64 = ctx.r1.s64 + 8288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ed778
	ctx.lr = 0x822EDA90;
	sub_822ED778(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822edc70
	if (!ctx.cr6.gt) goto loc_822EDC70;
	// addi r11,r1,8288
	ctx.r11.s64 = ctx.r1.s64 + 8288;
loc_822EDAA4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x822edb38
	if (!ctx.cr6.lt) goto loc_822EDB38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x822edae4
	if (ctx.cr6.eq) goto loc_822EDAE4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x822edaf4
	if (ctx.cr6.gt) goto loc_822EDAF4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822edaa4
	if (ctx.cr6.lt) goto loc_822EDAA4;
	// b 0x822edb34
	goto loc_822EDB34;
loc_822EDADC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822eda10
	goto loc_822EDA10;
loc_822EDAE4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822edb24
	goto loc_822EDB24;
loc_822EDAF4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ed518
	ctx.lr = 0x822EDB14;
	sub_822ED518(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_822EDB24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ed8b8
	ctx.lr = 0x822EDB30;
	sub_822ED8B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822EDB34:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
loc_822EDB38:
	// bne cr6,0x822edc70
	if (!ctx.cr6.eq) goto loc_822EDC70;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r1,12384
	ctx.r9.s64 = ctx.r1.s64 + 12384;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ecb50
	ctx.lr = 0x822EDB60;
	sub_822ECB50(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,16480
	ctx.r9.s64 = ctx.r1.s64 + 16480;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822ecb50
	ctx.lr = 0x822EDB84;
	sub_822ECB50(ctx, base);
	// addi r3,r1,12384
	ctx.r3.s64 = ctx.r1.s64 + 12384;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ecf70
	ctx.lr = 0x822EDB94;
	sub_822ECF70(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,16480
	ctx.r3.s64 = ctx.r1.s64 + 16480;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ecf70
	ctx.lr = 0x822EDBA8;
	sub_822ECF70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,12384
	ctx.r3.s64 = ctx.r1.s64 + 12384;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822ed290
	ctx.lr = 0x822EDBB8;
	sub_822ED290(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,16480
	ctx.r3.s64 = ctx.r1.s64 + 16480;
	// bl 0x822ed290
	ctx.lr = 0x822EDBC8;
	sub_822ED290(ctx, base);
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq cr6,0x822edbe4
	if (ctx.cr6.eq) goto loc_822EDBE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822edbf4
	if (!ctx.cr6.eq) goto loc_822EDBF4;
	// b 0x822edc30
	goto loc_822EDC30;
loc_822EDBE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822edbf4
	if (ctx.cr6.eq) goto loc_822EDBF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822edc30
	goto loc_822EDC30;
loc_822EDBF4:
	// fsubs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822edc08
	if (!ctx.cr6.lt) goto loc_822EDC08;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822edc30
	goto loc_822EDC30;
loc_822EDC08:
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822edc1c
	if (!ctx.cr6.gt) goto loc_822EDC1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822edc30
	goto loc_822EDC30;
loc_822EDC1C:
	// subfc r11,r31,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// eqv r10,r31,r30
	ctx.r10.u64 = ~(ctx.r31.u64 ^ ctx.r30.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
loc_822EDC30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x822edc54
	if (ctx.cr6.eq) goto loc_822EDC54;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822ed8b8
	ctx.lr = 0x822EDC4C;
	sub_822ED8B8(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x822edc60
	goto loc_822EDC60;
loc_822EDC54:
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822ed8b8
	ctx.lr = 0x822EDC5C;
	sub_822ED8B8(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_822EDC60:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ed8b8
	ctx.lr = 0x822EDC6C;
	sub_822ED8B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822EDC70:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x822edca4
	if (ctx.cr6.lt) goto loc_822EDCA4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ecee0
	ctx.lr = 0x822EDC8C;
	sub_822ECEE0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x822eda70
	if (ctx.cr6.gt) goto loc_822EDA70;
loc_822EDC94:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822eda50
	if (ctx.cr6.lt) goto loc_822EDA50;
loc_822EDCA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,20688
	ctx.r1.s64 = ctx.r1.s64 + 20688;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ED960) {
	__imp__sub_822ED960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EDCBC) {
	__imp__sub_822EDCBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822EDCC8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822edd54
	if (!ctx.cr6.gt) goto loc_822EDD54;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f31,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
loc_822EDCF8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822edd34
	if (!ctx.cr6.gt) goto loc_822EDD34;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_822EDD08:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d47f0
	ctx.lr = 0x822EDD1C;
	sub_822D47F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822edd34
	if (!ctx.cr6.eq) goto loc_822EDD34;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822edd08
	if (ctx.cr6.lt) goto loc_822EDD08;
loc_822EDD34:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822edd48
	if (!ctx.cr6.eq) goto loc_822EDD48;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
loc_822EDD48:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x822edcf8
	if (!ctx.cr0.eq) goto loc_822EDCF8;
loc_822EDD54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EDCC0) {
	__imp__sub_822EDCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EDD64) {
	__imp__sub_822EDD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EDD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822EDD70;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// li r12,-24832
	ctx.r12.s64 = -24832;
	// bl 0x823dedd4
	ctx.lr = 0x822EDD84;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r6,r1,8304
	ctx.r6.s64 = ctx.r1.s64 + 8304;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x822ec8c0
	ctx.lr = 0x822EDDB0;
	sub_822EC8C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822ee044
	if (ctx.cr6.lt) goto loc_822EE044;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,8304
	ctx.r3.s64 = ctx.r1.s64 + 8304;
	// bl 0x822edcc0
	ctx.lr = 0x822EDDC8;
	sub_822EDCC0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822ee044
	if (ctx.cr6.lt) goto loc_822EE044;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,8304
	ctx.r4.s64 = ctx.r1.s64 + 8304;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822ed960
	ctx.lr = 0x822EDDE0;
	sub_822ED960(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822ee044
	if (ctx.cr6.lt) goto loc_822EE044;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ee018
	if (ctx.cr6.eq) goto loc_822EE018;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r8,r24,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 12) & 0xFFFFF000;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f29,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
loc_822EDE0C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r11,r1,8304
	ctx.r11.s64 = ctx.r1.s64 + 8304;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r24,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stwx r23,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r23.u32);
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
loc_822EDE38:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x822ede88
	if (!ctx.cr6.eq) goto loc_822EDE88;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822ede38
	if (ctx.cr6.lt) goto loc_822EDE38;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_822EDE58:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822edf14
	if (ctx.cr6.eq) goto loc_822EDF14;
	// rlwinm r25,r24,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0xFFFFFC00;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_822EDE68:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,8304
	ctx.r4.s64 = ctx.r1.s64 + 8304;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822eca70
	ctx.lr = 0x822EDE78;
	sub_822ECA70(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822ede98
	if (!ctx.cr6.eq) goto loc_822EDE98;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822edeb4
	goto loc_822EDEB4;
loc_822EDE88:
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r9,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x822ede58
	goto loc_822EDE58;
loc_822EDE98:
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de130
	ctx.lr = 0x822EDEB4;
	sub_823DE130(ctx, base);
loc_822EDEB4:
	// lwzx r8,r27,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r8,r25
	ctx.r10.u64 = ctx.r8.u64 + ctx.r25.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// beq cr6,0x822edf14
	if (ctx.cr6.eq) goto loc_822EDF14;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_822EDED8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x822edeec
	if (ctx.cr6.eq) goto loc_822EDEEC;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x822edf7c
	if (!ctx.cr6.eq) goto loc_822EDF7C;
loc_822EDEEC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x822eded8
	if (ctx.cr6.lt) goto loc_822EDED8;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_822EDF00:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stwx r11,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r11.u32);
	// bne 0x822ede68
	if (!ctx.cr0.eq) goto loc_822EDE68;
loc_822EDF14:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822ee000
	if (!ctx.cr6.gt) goto loc_822EE000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ecf70
	ctx.lr = 0x822EDF2C;
	sub_822ECF70(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ecf70
	ctx.lr = 0x822EDF40;
	sub_822ECF70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822ed290
	ctx.lr = 0x822EDF50;
	sub_822ED290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,4208
	ctx.r3.s64 = ctx.r1.s64 + 4208;
	// bl 0x822ed290
	ctx.lr = 0x822EDF60;
	sub_822ED290(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq cr6,0x822edf8c
	if (ctx.cr6.eq) goto loc_822EDF8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822edf9c
	if (!ctx.cr6.eq) goto loc_822EDF9C;
	// b 0x822edfd8
	goto loc_822EDFD8;
loc_822EDF7C:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x822edf00
	goto loc_822EDF00;
loc_822EDF8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822edf9c
	if (ctx.cr6.eq) goto loc_822EDF9C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x822edfd8
	goto loc_822EDFD8;
loc_822EDF9C:
	// fsubs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x822edfb0
	if (!ctx.cr6.lt) goto loc_822EDFB0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x822edfd8
	goto loc_822EDFD8;
loc_822EDFB0:
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822edfc4
	if (!ctx.cr6.gt) goto loc_822EDFC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822edfd8
	goto loc_822EDFD8;
loc_822EDFC4:
	// subfc r11,r29,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r29.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// eqv r10,r29,r31
	ctx.r10.u64 = ~(ctx.r29.u64 ^ ctx.r31.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
loc_822EDFD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ee004
	if (ctx.cr6.eq) goto loc_822EE004;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,4208
	ctx.r4.s64 = ctx.r1.s64 + 4208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823de1f0
	ctx.lr = 0x822EDFF4;
	sub_823DE1F0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x822ee004
	goto loc_822EE004;
loc_822EE000:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_822EE004:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r8,r24,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 12) & 0xFFFFF000;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x822ede0c
	if (!ctx.cr6.eq) goto loc_822EDE0C;
	// b 0x822ee01c
	goto loc_822EE01C;
loc_822EE018:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822EE01C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822ee05c
	if (ctx.cr6.eq) goto loc_822EE05C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpw cr6,r20,r29
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822ee05c
	if (!ctx.cr6.lt) goto loc_822EE05C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,664
	ctx.r4.s64 = ctx.r11.s64 + 664;
	// bl 0x82280b08
	ctx.lr = 0x822EE044;
	sub_82280B08(ctx, base);
loc_822EE044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,24832
	ctx.r1.s64 = ctx.r1.s64 + 24832;
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
loc_822EE05C:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x822ec968
	ctx.lr = 0x822EE084;
	sub_822EC968(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12400, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12404, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stfs f12,12408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12408, temp.u32);
	// ble cr6,0x822ee148
	if (!ctx.cr6.gt) goto loc_822EE148;
loc_822EE0A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,-4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
loc_822EE0C4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x822ee0dc
	if (ctx.cr6.eq) goto loc_822EE0DC;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822ee248
	if (!ctx.cr6.eq) goto loc_822EE248;
loc_822EE0DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x822ee0c4
	if (ctx.cr6.lt) goto loc_822EE0C4;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822EE0F0:
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,12400
	ctx.r9.s64 = ctx.r1.s64 + 12400;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
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
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x822ee0a8
	if (ctx.cr6.lt) goto loc_822EE0A8;
loc_822EE148:
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r3,r1,12400
	ctx.r3.s64 = ctx.r1.s64 + 12400;
	// bl 0x822ec558
	ctx.lr = 0x822EE164;
	sub_822EC558(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822ee044
	if (ctx.cr6.lt) goto loc_822EE044;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,12400
	ctx.r8.s64 = ctx.r1.s64 + 12400;
	// addi r10,r1,12400
	ctx.r10.s64 = ctx.r1.s64 + 12400;
	// addi r6,r1,12400
	ctx.r6.s64 = ctx.r1.s64 + 12400;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d8cb0
	ctx.lr = 0x822EE1C4;
	sub_822D8CB0(ctx, base);
	// lfs f13,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x822ee230
	if (!ctx.cr6.lt) goto loc_822EE230;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ee230
	if (!ctx.cr6.lt) goto loc_822EE230;
loc_822EE210:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ee210
	if (ctx.cr6.lt) goto loc_822EE210;
loc_822EE230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,24832
	ctx.r1.s64 = ctx.r1.s64 + 24832;
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
loc_822EE248:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x822ee0f0
	goto loc_822EE0F0;
}

PPC_WEAK_FUNC(sub_822EDD68) {
	__imp__sub_822EDD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE258) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x822a19a8
	ctx.lr = 0x822EE290;
	sub_822A19A8(ctx, base);
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// stw r3,-23376(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23376, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EE258) {
	__imp__sub_822EE258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE2A8) {
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
	// lis r31,-31841
	ctx.r31.s64 = -2086731776;
	// lwz r3,-23376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ee2d8
	if (ctx.cr6.eq) goto loc_822EE2D8;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x822a2038
	ctx.lr = 0x822EE2D0;
	sub_822A2038(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-23376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23376, ctx.r11.u32);
loc_822EE2D8:
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

PPC_WEAK_FUNC(sub_822EE2A8) {
	__imp__sub_822EE2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE2EC) {
	__imp__sub_822EE2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EE2F0) {
	__imp__sub_822EE2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE30C) {
	__imp__sub_822EE30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EE318;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ee3b0
	if (ctx.cr6.eq) goto loc_822EE3B0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r27,r10,712
	ctx.r27.s64 = ctx.r10.s64 + 712;
	// addi r25,r11,696
	ctx.r25.s64 = ctx.r11.s64 + 696;
loc_822EE340:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82300a60
	ctx.lr = 0x822EE34C;
	sub_82300A60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82280900
	ctx.lr = 0x822EE35C;
	sub_82280900(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82300b38
	ctx.lr = 0x822EE364;
	sub_82300B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822ee3a4
	if (!ctx.cr6.gt) goto loc_822EE3A4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822EE374:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822EE380;
	sub_822A13A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82280900
	ctx.lr = 0x822EE394;
	sub_82280900(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x822ee374
	if (!ctx.cr0.eq) goto loc_822EE374;
loc_822EE3A4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bne 0x822ee340
	if (!ctx.cr0.eq) goto loc_822EE340;
loc_822EE3B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE310) {
	__imp__sub_822EE310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822EE3C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stw r3,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r4,2220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2220, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,2228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2228, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// beq cr6,0x822ee6a0
	if (ctx.cr6.eq) goto loc_822EE6A0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r14,144(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r10,872
	ctx.r10.s64 = ctx.r10.s64 + 872;
	// addi r9,r9,800
	ctx.r9.s64 = ctx.r9.s64 + 800;
	// addi r8,r8,728
	ctx.r8.s64 = ctx.r8.s64 + 728;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r17,r4,4
	ctx.r17.s64 = ctx.r4.s64 + 4;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// addi r16,r11,17280
	ctx.r16.s64 = ctx.r11.s64 + 17280;
	// b 0x822ee448
	goto loc_822EE448;
loc_822EE444:
	// lwz r31,2220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2220);
loc_822EE448:
	// lwz r23,-4(r17)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82300b38
	ctx.lr = 0x822EE454;
	sub_82300B38(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// ble cr6,0x822ee484
	if (!ctx.cr6.gt) goto loc_822EE484;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ee310
	ctx.lr = 0x822EE470;
	sub_822EE310(ctx, base);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,0(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x822EE484;
	sub_822830E8(ctx, base);
loc_822EE484:
	// addi r11,r1,113
	ctx.r11.s64 = ctx.r1.s64 + 113;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r29,r21,r11
	ctx.r29.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// li r11,255
	ctx.r11.s64 = 255;
	// stbx r11,r20,r15
	PPC_STORE_U8(ctx.r20.u32 + ctx.r15.u32, ctx.r11.u8);
	// lbz r7,2(r17)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stwx r23,r18,r10
	PPC_STORE_U32(ctx.r18.u32 + ctx.r10.u32, ctx.r23.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stwx r26,r18,r9
	PPC_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r26.u32);
	// beq cr6,0x822ee4c8
	if (ctx.cr6.eq) goto loc_822EE4C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// slw r9,r11,r20
	ctx.r9.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r20.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
loc_822EE4C8:
	// lwz r14,144(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822ee684
	if (ctx.cr6.eq) goto loc_822EE684;
	// lhz r28,0(r17)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ee574
	if (ctx.cr6.eq) goto loc_822EE574;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822EE4E8;
	sub_822A13A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ee574
	if (ctx.cr6.eq) goto loc_822EE574;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x822ee53c
	if (ctx.cr6.lt) goto loc_822EE53C;
	// addi r31,r18,-4
	ctx.r31.s64 = ctx.r18.s64 + -4;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
loc_822EE50C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x822ffff0
	ctx.lr = 0x822EE520;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ee564
	if (!ctx.cr6.eq) goto loc_822EE564;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// bge 0x822ee50c
	if (!ctx.cr0.lt) goto loc_822EE50C;
loc_822EE53C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822EE548;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280c30
	ctx.lr = 0x822EE55C;
	sub_82280C30(ctx, base);
	// lwz r30,2212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2212);
	// b 0x822ee684
	goto loc_822EE684;
loc_822EE564:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,2212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2212);
	// stbx r11,r20,r15
	PPC_STORE_U8(ctx.r20.u32 + ctx.r15.u32, ctx.r11.u8);
	// b 0x822ee684
	goto loc_822EE684;
loc_822EE574:
	// lbz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r25,36(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822ee650
	if (!ctx.cr6.gt) goto loc_822EE650;
	// addi r10,r1,424
	ctx.r10.s64 = ctx.r1.s64 + 424;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r19,r10
	ctx.r29.u64 = ctx.r19.u64 + ctx.r10.u64;
loc_822EE598:
	// lhzx r27,r11,r25
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x822ee638
	if (ctx.cr6.lt) goto loc_822EE638;
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
loc_822EE5B4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x822ffff0
	ctx.lr = 0x822EE5C8;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ee5e8
	if (!ctx.cr6.eq) goto loc_822EE5E8;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// bge 0x822ee5b4
	if (!ctx.cr0.lt) goto loc_822EE5B4;
	// b 0x822ee638
	goto loc_822EE638;
loc_822EE5E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stbx r30,r20,r15
	PPC_STORE_U8(ctx.r20.u32 + ctx.r15.u32, ctx.r30.u8);
	// bne cr6,0x822ee5f8
	if (!ctx.cr6.eq) goto loc_822EE5F8;
	// li r22,1
	ctx.r22.s64 = 1;
loc_822EE5F8:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r6,r11,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stb r5,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r5.u8);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// lwzx r3,r6,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// stbu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r29.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_822EE638:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x822ee598
	if (ctx.cr6.lt) goto loc_822EE598;
	// lwz r27,2228(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2228);
	// lwz r30,2212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2212);
loc_822EE650:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ee684
	if (!ctx.cr6.eq) goto loc_822EE684;
	// lwz r31,0(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822EE66C;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,19
	ctx.r3.s64 = 19;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82280c30
	ctx.lr = 0x822EE684;
	sub_82280C30(ctx, base);
loc_822EE684:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// cmplw cr6,r20,r27
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822ee444
	if (ctx.cr6.lt) goto loc_822EE444;
loc_822EE6A0:
	// stb r27,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r27.u8);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r26.u8);
	// li r4,14
	ctx.r4.s64 = 14;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x8229e0e8
	ctx.lr = 0x822EE6B8;
	sub_8229E0E8(ctx, base);
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r3,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822EE6CC;
	sub_823DE1F0(ctx, base);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822EE6E0;
	sub_823DE1F0(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x822ee71c
	if (ctx.cr6.eq) goto loc_822EE71C;
	// addi r11,r1,424
	ctx.r11.s64 = ctx.r1.s64 + 424;
	// addi r10,r19,25
	ctx.r10.s64 = ctx.r19.s64 + 25;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r5,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r5.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r9,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822a19a8
	ctx.lr = 0x822EE710;
	sub_822A19A8(ctx, base);
	// sth r3,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r3.u16);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822EE71C:
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// lwz r11,-23376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23376);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE3B8) {
	__imp__sub_822EE3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822EE740;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// lbz r29,9(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x822EE778;
	sub_822A13A0(ctx, base);
	// lwz r5,152(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// rotlwi r9,r29,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// add r26,r9,r5
	ctx.r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822ee7cc
	if (!ctx.cr6.gt) goto loc_822EE7CC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_822EE7A4:
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822ee7cc
	if (ctx.cr6.gt) goto loc_822EE7CC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822ee7a4
	if (ctx.cr6.lt) goto loc_822EE7A4;
loc_822EE7CC:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x822ee83c
	if (ctx.cr6.eq) goto loc_822EE83C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r4,r11,17280
	ctx.r4.s64 = ctx.r11.s64 + 17280;
loc_822EE7E8:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
loc_822EE7F8:
	// srawi r8,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 5;
	// rlwinm r11,r31,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r29,r8,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// or r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stwx r29,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r29.u32);
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ee844
	if (!ctx.cr6.eq) goto loc_822EE844;
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822ee898
	if (!ctx.cr0.lt) goto loc_822EE898;
	// lbzx r31,r30,r26
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// bne cr6,0x822ee870
	if (!ctx.cr6.eq) goto loc_822EE870;
loc_822EE83C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822EE844:
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822ee868
	if (ctx.cr6.eq) goto loc_822EE868;
loc_822EE858:
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822ee858
	if (!ctx.cr6.eq) goto loc_822EE858;
loc_822EE868:
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_822EE870:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_822EE878:
	// lwzu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// subf. r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x822ee878
	if (ctx.cr0.lt) goto loc_822EE878;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// b 0x822ee7f8
	goto loc_822EE7F8;
loc_822EE898:
	// lbzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x822ee7e8
	goto loc_822EE7E8;
}

PPC_WEAK_FUNC(sub_822EE738) {
	__imp__sub_822EE738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EE8A4) {
	__imp__sub_822EE8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822f6a88
	sub_822F6A88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE8A8) {
	__imp__sub_822EE8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EE8C4) {
	__imp__sub_822EE8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822EE8D0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r27,9(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x822ee948
	if (!ctx.cr6.gt) goto loc_822EE948;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822EE908:
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x822ff520
	ctx.lr = 0x822EE910;
	sub_822FF520(ctx, base);
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822ee92c
	if (ctx.cr6.eq) goto loc_822EE92C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_822EE92C:
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// fsel f31,f0,f31,f1
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// blt cr6,0x822ee908
	if (ctx.cr6.lt) goto loc_822EE908;
loc_822EE948:
	// stfs f31,124(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 124, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE8C8) {
	__imp__sub_822EE8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EE958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822EE960;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,20
	ctx.r3.s64 = ctx.r6.s64 + 20;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823de090
	ctx.lr = 0x822EE988;
	sub_823DE090(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
loc_822EE9B0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822ee9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EE9B0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ee3b8
	ctx.lr = 0x822EE9CC;
	sub_822EE3B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ee8c8
	ctx.lr = 0x822EE9D8;
	sub_822EE8C8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ee9f8
	if (ctx.cr6.eq) goto loc_822EE9F8;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ee9f8
	if (ctx.cr6.eq) goto loc_822EE9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f6a88
	ctx.lr = 0x822EE9F8;
	sub_822F6A88(ctx, base);
loc_822EE9F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EE958) {
	__imp__sub_822EE958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822EEA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822EEA24;
	sub_823DE1F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x823de090
	ctx.lr = 0x822EEA3C;
	sub_823DE090(ctx, base);
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eea5c
	if (ctx.cr6.eq) goto loc_822EEA5C;
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// lwz r11,-23376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23376);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822eea5c
	if (ctx.cr6.eq) goto loc_822EEA5C;
	// bl 0x822a1ee8
	ctx.lr = 0x822EEA5C;
	sub_822A1EE8(ctx, base);
loc_822EEA5C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8229e0e8
	ctx.lr = 0x822EEA74;
	sub_8229E0E8(ctx, base);
	// stw r3,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r3.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822EEA8C;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EEA00) {
	__imp__sub_822EEA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EEA94) {
	__imp__sub_822EEA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEA98) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eead4
	if (ctx.cr6.eq) goto loc_822EEAD4;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8229e118
	ctx.lr = 0x822EEAD0;
	sub_8229E118(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_822EEAD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eeae4
	if (ctx.cr6.eq) goto loc_822EEAE4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_822EEAE4:
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eeb10
	if (ctx.cr6.eq) goto loc_822EEB10;
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// lwz r11,-23376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23376);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822eeb08
	if (ctx.cr6.eq) goto loc_822EEB08;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x822a2038
	ctx.lr = 0x822EEB08;
	sub_822A2038(ctx, base);
loc_822EEB08:
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
loc_822EEB10:
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

PPC_WEAK_FUNC(sub_822EEA98) {
	__imp__sub_822EEA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822EEB30;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
	// lwz r22,152(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r27,r11,r22
	ctx.r27.u64 = ctx.r11.u64 + ctx.r22.u64;
	// beq cr6,0x822eec3c
	if (ctx.cr6.eq) goto loc_822EEC3C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// subf r24,r22,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r22.s64;
	// subfic r20,r27,-1
	ctx.xer.ca = ctx.r27.u32 <= 4294967295;
	ctx.r20.s64 = -1 - ctx.r27.s64;
	// li r23,1
	ctx.r23.s64 = 1;
loc_822EEB90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r24,r30
	ctx.r28.u64 = ctx.r24.u64 + ctx.r30.u64;
	// stwx r26,r24,r30
	PPC_STORE_U32(ctx.r24.u32 + ctx.r30.u32, ctx.r26.u32);
	// bl 0x82300b38
	ctx.lr = 0x822EEBA0;
	sub_82300B38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r10,r23,r25
	ctx.r10.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r25.u8 & 0x3F));
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// sth r21,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r21.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822eec20
	if (ctx.cr6.eq) goto loc_822EEC20;
	// add. r10,r20,r27
	ctx.r10.u64 = ctx.r20.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822eec20
	if (ctx.cr0.lt) goto loc_822EEC20;
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
loc_822EEBE0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822eebfc
	if (!ctx.cr6.lt) goto loc_822EEBFC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x822eebe0
	if (!ctx.cr0.lt) goto loc_822EEBE0;
	// b 0x822eec20
	goto loc_822EEC20;
loc_822EEBFC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r10,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r28,r8,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x822ff518
	ctx.lr = 0x822EEC14;
	sub_822FF518(ctx, base);
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
loc_822EEC20:
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eeb90
	if (ctx.cr6.lt) goto loc_822EEB90;
loc_822EEC3C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EEB28) {
	__imp__sub_822EEB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EEC44) {
	__imp__sub_822EEC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEC48) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,158
	ctx.r7.s64 = ctx.r1.s64 + 158;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822eeb28
	ctx.lr = 0x822EEC74;
	sub_822EEB28(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
loc_822EEC9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822eec9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EEC9C;
	// lhz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822eed00
	if (ctx.cr6.eq) goto loc_822EED00;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,198
	ctx.r10.s64 = ctx.r1.s64 + 198;
	// li r8,1
	ctx.r8.s64 = 1;
loc_822EECC4:
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// beq cr6,0x822eece8
	if (ctx.cr6.eq) goto loc_822EECE8;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// slw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
loc_822EECE8:
	// lhz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822eecc4
	if (ctx.cr6.lt) goto loc_822EECC4;
loc_822EED00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eed14
	if (ctx.cr6.eq) goto loc_822EED14;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_822EED14:
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eed40
	if (ctx.cr6.eq) goto loc_822EED40;
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// lwz r11,-23376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23376);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822eed38
	if (ctx.cr6.eq) goto loc_822EED38;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x822a2038
	ctx.lr = 0x822EED38;
	sub_822A2038(ctx, base);
loc_822EED38:
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
loc_822EED40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822EED50;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

PPC_WEAK_FUNC(sub_822EEC48) {
	__imp__sub_822EEC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EED68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822eed84
	if (!ctx.cr6.eq) goto loc_822EED84;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822EED84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EED68) {
	__imp__sub_822EED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EED8C) {
	__imp__sub_822EED8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EED90) {
	PPC_FUNC_PROLOGUE();
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EED90) {
	__imp__sub_822EED90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EEDB0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822eedb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EEDB0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EEDC8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822eedc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EEDC8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EEDA0) {
	__imp__sub_822EEDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EEDD4) {
	__imp__sub_822EEDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
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
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EEDD8) {
	__imp__sub_822EEDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEE00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822ff528
	sub_822FF528(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EEE00) {
	__imp__sub_822EEE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EEE0C) {
	__imp__sub_822EEE0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EEE10) {
	__imp__sub_822EEE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EEE1C) {
	__imp__sub_822EEE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EEE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x822EEE28;
	__savegprlr_21(ctx, base);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2428(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r23,r5,4
	ctx.r23.s64 = ctx.r5.s64 + 4;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lbz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ef010
	if (ctx.cr6.eq) goto loc_822EF010;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r6,r30,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7C;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r26,r11,-30336
	ctx.r26.s64 = ctx.r11.s64 + -30336;
	// addi r25,r8,-5792
	ctx.r25.s64 = ctx.r8.s64 + -5792;
	// addi r24,r7,17280
	ctx.r24.s64 = ctx.r7.s64 + 17280;
loc_822EEEA0:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lwzx r8,r6,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822eeff4
	if (!ctx.cr6.eq) goto loc_822EEFF4;
	// lwz r8,240(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 240);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r7,r1,-132
	ctx.r7.s64 = ctx.r1.s64 + -132;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822EEED8:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x822eeed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EEED8;
	// lfs f13,-116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822eeff4
	if (ctx.cr6.eq) goto loc_822EEFF4;
	// lfs f13,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822eeff4
	if (ctx.cr6.eq) goto loc_822EEFF4;
	// lfs f13,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822eeff4
	if (ctx.cr6.eq) goto loc_822EEFF4;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// addi r6,r1,-116
	ctx.r6.s64 = ctx.r1.s64 + -116;
	// addi r22,r1,-116
	ctx.r22.s64 = ctx.r1.s64 + -116;
	// lfs f13,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// lvrx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// vor128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f8,-128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f6,-124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f5,-120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lvlx128 v56,r0,r22
	temp.u32 = ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v59,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v48,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v49,v56,v50
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvx128 v63,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v54,v60,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v62,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v53,v55,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v46,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v47,v49,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsubfp128 v52,v54,v53
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v52.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v51,v54,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v45,v46,v47
	simde_mm_store_ps(ctx.v45.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v44,v46,v47
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vminfp128 v43,v45,v52
	simde_mm_store_ps(ctx.v43.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmaxfp128 v42,v44,v51
	simde_mm_store_ps(ctx.v42.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v41,v43,v42
	simde_mm_store_ps(ctx.v41.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v40,v41,v62
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v39,v40,v43
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vspltw128 v38,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v37,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// vspltw128 v36,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// stvewx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r29
	ea = (ctx.r4.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// vspltw128 v35,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// vspltw128 v34,v39,1
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xAA));
	// vspltw128 v33,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0x55));
	// stvewx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v33,r9,r29
	ea = (ctx.r9.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v33.u32[3 - ((ea & 0xF) >> 2)]);
loc_822EEFF4:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r6,r30,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7C;
	// blt cr6,0x822eeea0
	if (ctx.cr6.lt) goto loc_822EEEA0;
loc_822EF010:
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EEE20) {
	__imp__sub_822EEE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EF014) {
	__imp__sub_822EF014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF018) {
	__imp__sub_822EF018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,280(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF020) {
	__imp__sub_822EF020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF030) {
	__imp__sub_822EF030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF040) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r3,0
	ctx.r3.s64 = 0;
	// addic. r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822EF068:
	// lbzx r11,r7,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ef094
	if (ctx.cr6.lt) goto loc_822EF094;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822EF094:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bdnz 0x822ef068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EF068;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF040) {
	__imp__sub_822EF040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EF0A4) {
	__imp__sub_822EF0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF0A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r5,9(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822ef0ec
	if (!ctx.cr6.gt) goto loc_822EF0EC;
loc_822EF0C0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lbz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// lwz r6,36(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822ef0f4
	if (ctx.cr6.lt) goto loc_822EF0F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822ef0c0
	if (ctx.cr6.lt) goto loc_822EF0C0;
loc_822EF0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822EF0F4:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// b 0x822a13a0
	sub_822A13A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EF0A8) {
	__imp__sub_822EF0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF100) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r9,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// b 0x822ef0a8
	sub_822EF0A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EF100) {
	__imp__sub_822EF100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF118) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF118) {
	__imp__sub_822EF118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f30,f13,f7
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f31,f6,f9
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fsubs f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fadds f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f4,f8,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fadds f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f10,f0,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f7,f0,f4
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fmuls f5,f1,f3
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f4,f13,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fsubs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmadds f13,f7,f12,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f10,f2,f12,f4
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f8,f31,f12,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f7,f9,f6,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f5,f1,f6,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f4,f11,f6,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f4,4(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822EF120) {
	__imp__sub_822EF120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EF204) {
	__imp__sub_822EF204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822EF210;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823ddff0
	ctx.lr = 0x822EF218;
	__savefpr_14(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r6.u32);
	// addi r31,r7,8
	ctx.r31.s64 = ctx.r7.s64 + 8;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r20,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r20.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// sth r20,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r20.u16);
	// lfs f29,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// sth r20,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r20.u16);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// sth r20,24(r7)
	PPC_STORE_U16(ctx.r7.u32 + 24, ctx.r20.u16);
	// stfs f29,0(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f25,f10,f9
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f8,f25,f25
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fsubs f24,f12,f11
	ctx.f24.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f7,f23,f23,f8
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f8.f64));
	// fmadds f31,f24,f24,f7
	ctx.f31.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f7.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x822ef8f0
	if (ctx.cr6.eq) goto loc_822EF8F0;
	// bl 0x822f19e8
	ctx.lr = 0x822EF2A0;
	sub_822F19E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ef8f0
	if (ctx.cr6.eq) goto loc_822EF8F0;
	// lhz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r19.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x822EF2B4;
	sub_822A13A0(ctx, base);
	// lbz r9,9(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 9);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,152(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 152);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfs f20,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f30,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fmr f21,f29
	ctx.f21.f64 = ctx.f29.f64;
	// addi r16,r3,24
	ctx.r16.s64 = ctx.r3.s64 + 24;
	// fdivs f22,f30,f31
	ctx.f22.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ef8f0
	if (ctx.cr6.eq) goto loc_822EF8F0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r5,r11,17280
	ctx.r5.s64 = ctx.r11.s64 + 17280;
	// lfs f28,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,2424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
loc_822EF330:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,12(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// slw r5,r10,r23
	ctx.r5.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r23.u8 & 0x3F));
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lwz r22,36(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lbz r15,4(r25)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// beq cr6,0x822ef800
	if (ctx.cr6.eq) goto loc_822EF800;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822EF37C:
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lbzx r30,r10,r26
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// bne cr6,0x822ef3c8
	if (!ctx.cr6.eq) goto loc_822EF3C8;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x822ef428
	if (!ctx.cr6.eq) goto loc_822EF428;
	// lbz r10,-1(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + -1);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r30,-2(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lbzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// b 0x822ef428
	goto loc_822EF428;
loc_822EF3C8:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x822ef428
	if (!ctx.cr6.eq) goto loc_822EF428;
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ef404
	if (!ctx.cr6.lt) goto loc_822EF404;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbzx r11,r23,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822ef3fc
	if (ctx.cr6.eq) goto loc_822EF3FC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lhzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822ef420
	goto loc_822EF420;
loc_822EF3FC:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x822ef420
	goto loc_822EF420;
loc_822EF404:
	// lwz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// subf r5,r6,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r6.s64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
loc_822EF420:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lbzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
loc_822EF428:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// sth r30,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r30.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ef7cc
	if (!ctx.cr6.eq) goto loc_822EF7CC;
	// lwz r11,240(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 240);
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef7cc
	if (ctx.cr6.eq) goto loc_822EF7CC;
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r27,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x7C;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r3,r5,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r19.u32);
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ef7cc
	if (!ctx.cr6.eq) goto loc_822EF7CC;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822ef7cc
	if (ctx.cr6.lt) goto loc_822EF7CC;
	// cmplwi cr6,r31,101
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 101, ctx.xer);
	// beq cr6,0x822ef490
	if (ctx.cr6.eq) goto loc_822EF490;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 102, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x822ef494
	if (!ctx.cr6.eq) goto loc_822EF494;
loc_822EF490:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822EF494:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef4ac
	if (ctx.cr6.eq) goto loc_822EF4AC;
	// lfs f26,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// b 0x822ef4c0
	goto loc_822EF4C0;
loc_822EF4AC:
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822ef4bc
	if (!ctx.cr6.eq) goto loc_822EF4BC;
	// lfs f26,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// b 0x822ef4c0
	goto loc_822EF4C0;
loc_822EF4BC:
	// fmr f26,f20
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f20.f64;
loc_822EF4C0:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f19,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f18,f12,f9
	ctx.f18.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f17,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f16,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f15,f0,f8
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fadds f7,f31,f18
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f18.f64));
	// fadds f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fadds f10,f18,f10
	ctx.f10.f64 = double(float(ctx.f18.f64 + ctx.f10.f64));
	// fsubs f18,f12,f11
	ctx.f18.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f14,f9,f15
	ctx.f14.f64 = double(float(ctx.f9.f64 + ctx.f15.f64));
	// fadds f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f9,f15,f9
	ctx.f9.f64 = double(float(ctx.f15.f64 - ctx.f9.f64));
	// fsubs f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// fsubs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fsubs f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmuls f31,f18,f6
	ctx.f31.f64 = double(float(ctx.f18.f64 * ctx.f6.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmadds f0,f7,f5,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f31.f64));
	// fmadds f11,f9,f5,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f9,f12,f5,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f7,f14,f4,f0
	ctx.f7.f64 = double(float(ctx.f14.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f6,f10,f4,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f5,f8,f4,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fadds f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fsubs f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f13,f17,f3
	ctx.f13.f64 = double(float(ctx.f17.f64 - ctx.f3.f64));
	// fsubs f12,f19,f2
	ctx.f12.f64 = double(float(ctx.f19.f64 - ctx.f2.f64));
	// fmuls f11,f1,f24
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// fmadds f10,f12,f25,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f11.f64));
	// fmadds f9,f13,f23,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f23.f64 + ctx.f10.f64));
	// fmuls f8,f9,f22
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsubs f7,f0,f30
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f6,f0
	ctx.f6.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f30,f0
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fsel f4,f6,f29,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f29.f64 : ctx.f5.f64;
	// fmadds f3,f25,f4,f12
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f2,f23,f4,f13
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f1,f24,f4,f1
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f12,f2,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f11,f1,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fsubs f13,f16,f11
	ctx.f13.f64 = double(float(ctx.f16.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x822ef7c8
	if (!ctx.cr6.gt) goto loc_822EF7C8;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822ef5f0
	if (ctx.cr6.eq) goto loc_822EF5F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ef604
	if (ctx.cr6.eq) goto loc_822EF604;
loc_822EF5F0:
	// fmuls f13,f13,f22
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f26
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// bge cr6,0x822ef7c8
	if (!ctx.cr6.lt) goto loc_822EF7C8;
loc_822EF604:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822ef120
	ctx.lr = 0x822EF614;
	sub_822EF120(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ef120
	ctx.lr = 0x822EF620;
	sub_822EF120(ctx, base);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// fmr f9,f26
	ctx.f9.f64 = ctx.f26.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
loc_822EF63C:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f11,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsel f13,f12,f30,f27
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f27.f64;
	// fmsubs f7,f10,f28,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 - ctx.f11.f64));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmsubs f10,f0,f28,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f8.f64));
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// ble cr6,0x822ef698
	if (!ctx.cr6.gt) goto loc_822EF698;
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x822ef7c8
	if (!ctx.cr6.lt) goto loc_822EF7C8;
	// fdivs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// fneg f21,f13
	ctx.f21.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_822EF698:
	// fadds f13,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x822ef6c4
	if (!ctx.cr6.gt) goto loc_822EF6C4;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822ef6c4
	if (!ctx.cr6.lt) goto loc_822EF6C4;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822ef7c8
	if (!ctx.cr6.gt) goto loc_822EF7C8;
	// fdivs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_822EF6C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// blt cr6,0x822ef63c
	if (ctx.cr6.lt) goto loc_822EF63C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef738
	if (ctx.cr6.eq) goto loc_822EF738;
	// lfs f0,4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f25,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f24,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x822ef7c8
	if (!ctx.cr6.lt) goto loc_822EF7C8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822d4b60
	ctx.lr = 0x822EF70C;
	sub_822D4B60(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f29,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// sth r23,20(r24)
	PPC_STORE_U16(ctx.r24.u32 + 20, ctx.r23.u16);
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// sth r8,22(r24)
	PPC_STORE_U16(ctx.r24.u32 + 22, ctx.r8.u16);
	// sth r30,24(r24)
	PPC_STORE_U16(ctx.r24.u32 + 24, ctx.r30.u16);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de03c
	ctx.lr = 0x822EF734;
	__restfpr_14(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822EF738:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x822ef7c8
	if (!ctx.cr6.lt) goto loc_822EF7C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ef798
	if (ctx.cr6.eq) goto loc_822EF798;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 102, ctx.xer);
	// beq cr6,0x822ef790
	if (ctx.cr6.eq) goto loc_822EF790;
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stfs f29,156(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822ff710
	ctx.lr = 0x822EF788;
	sub_822FF710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ef7c8
	if (ctx.cr6.lt) goto loc_822EF7C8;
loc_822EF790:
	// fmr f20,f31
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f31.f64;
	// b 0x822ef7a8
	goto loc_822EF7A8;
loc_822EF798:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822ef7a8
	if (ctx.cr6.eq) goto loc_822EF7A8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_822EF7A8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// sth r23,20(r24)
	PPC_STORE_U16(ctx.r24.u32 + 20, ctx.r23.u16);
	// lhz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// sth r30,24(r24)
	PPC_STORE_U16(ctx.r24.u32 + 24, ctx.r30.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r9,22(r24)
	PPC_STORE_U16(ctx.r24.u32 + 22, ctx.r9.u16);
loc_822EF7C8:
	// lwz r29,956(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
loc_822EF7CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r18,r18,28
	ctx.r18.s64 = ctx.r18.s64 + 28;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x822ef37c
	if (ctx.cr6.lt) goto loc_822EF37C;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_822EF800:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x822ef330
	if (ctx.cr6.lt) goto loc_822EF330;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ef8f0
	if (ctx.cr6.eq) goto loc_822EF8F0;
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f9,f6,f4
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f8,f5,f4
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f5,f1,f2
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f1,f30,f10
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f0,f30,f9
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f13,f30,f8
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f21
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// fmuls f9,f10,f21
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f21.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f21
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_822EF8F0:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de03c
	ctx.lr = 0x822EF8FC;
	__restfpr_14(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EF208) {
	__imp__sub_822EF208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EF908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EF91C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ef91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EF91C;
	// lbz r29,9(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822ef9e4
	if (ctx.cr6.eq) goto loc_822EF9E4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r5,r11,17280
	ctx.r5.s64 = ctx.r11.s64 + 17280;
loc_822EF94C:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r10,r30,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ef970
	if (ctx.cr6.eq) goto loc_822EF970;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x822ef9d4
	goto loc_822EF9D4;
loc_822EF970:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef9d4
	if (ctx.cr6.eq) goto loc_822EF9D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822EF980:
	// lwz r11,240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 240);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ef9c8
	if (ctx.cr6.eq) goto loc_822EF9C8;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r9,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// addi r28,r11,32
	ctx.r28.s64 = ctx.r11.s64 + 32;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r28,r28,r3
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822ef9c8
	if (!ctx.cr6.eq) goto loc_822EF9C8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
loc_822EF9C8:
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x822ef980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EF980;
loc_822EF9D4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822ef94c
	if (ctx.cr6.lt) goto loc_822EF94C;
loc_822EF9E4:
	// bl 0x822f2008
	ctx.lr = 0x822EF9E8;
	sub_822F2008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EF900) {
	__imp__sub_822EF900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EF9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x822EF9F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r31,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r31.u16);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// sth r31,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r31.u16);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// sth r31,24(r7)
	PPC_STORE_U16(ctx.r7.u32 + 24, ctx.r31.u16);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x822f19e8
	ctx.lr = 0x822EFA44;
	sub_822F19E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822efac8
	if (ctx.cr6.eq) goto loc_822EFAC8;
	// lbz r24,9(r26)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r28,152(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822efac8
	if (ctx.cr6.eq) goto loc_822EFAC8;
loc_822EFA64:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ff710
	ctx.lr = 0x822EFA8C;
	sub_822FF710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efaa8
	if (ctx.cr6.lt) goto loc_822EFAA8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r31,20(r25)
	PPC_STORE_U16(ctx.r25.u32 + 20, ctx.r31.u16);
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r8,22(r25)
	PPC_STORE_U16(ctx.r25.u32 + 22, ctx.r8.u16);
loc_822EFAA8:
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x822efa64
	if (ctx.cr6.lt) goto loc_822EFA64;
loc_822EFAC8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f12,12(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// stfs f11,16(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EF9F0) {
	__imp__sub_822EF9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EFB00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EFB20:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822efb20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EFB20;
	// lbz r26,9(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822efb74
	if (ctx.cr6.eq) goto loc_822EFB74;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_822EFB44:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ffcc0
	ctx.lr = 0x822EFB60;
	sub_822FFCC0(ctx, base);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x822efb44
	if (ctx.cr6.lt) goto loc_822EFB44;
loc_822EFB74:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f2008
	ctx.lr = 0x822EFB80;
	sub_822F2008(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFAF8) {
	__imp__sub_822EFAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EFB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,152(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822efbd8
	if (ctx.cr6.eq) goto loc_822EFBD8;
loc_822EFBB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82300be8
	ctx.lr = 0x822EFBB8;
	sub_82300BE8(ctx, base);
	// and r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 & ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822efbe4
	if (!ctx.cr6.eq) goto loc_822EFBE4;
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822efbb0
	if (ctx.cr6.lt) goto loc_822EFBB0;
loc_822EFBD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EFBE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFB88) {
	__imp__sub_822EFB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EFBF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822efc3c
	if (ctx.cr6.eq) goto loc_822EFC3C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822EFC18:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82300be8
	ctx.lr = 0x822EFC24;
	sub_82300BE8(ctx, base);
	// lbz r10,9(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 | ctx.r28.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822efc18
	if (ctx.cr6.lt) goto loc_822EFC18;
loc_822EFC3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFBF0) {
	__imp__sub_822EFBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EFC50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x822f1df8
	ctx.lr = 0x822EFC68;
	sub_822F1DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822efc78
	if (!ctx.cr6.eq) goto loc_822EFC78;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EFC78:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f24b8
	ctx.lr = 0x822EFC8C;
	sub_822F24B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFC48) {
	__imp__sub_822EFC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822EFCA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822efd50
	if (ctx.cr6.eq) goto loc_822EFD50;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r27,9(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822efd00
	if (!ctx.cr6.lt) goto loc_822EFD00;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822efd00
	if (!ctx.cr6.gt) goto loc_822EFD00;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822EFCDC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822efd5c
	if (ctx.cr6.lt) goto loc_822EFD5C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822efcdc
	if (ctx.cr6.lt) goto loc_822EFCDC;
loc_822EFD00:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822efd48
	if (!ctx.cr6.gt) goto loc_822EFD48;
loc_822EFD10:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822EFD28;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822efd70
	if (!ctx.cr6.eq) goto loc_822EFD70;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822efd10
	if (ctx.cr6.lt) goto loc_822EFD10;
loc_822EFD48:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_822EFD50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822EFD5C:
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822efd00
	if (!ctx.cr6.eq) goto loc_822EFD00;
loc_822EFD70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFC98) {
	__imp__sub_822EFC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EFD7C) {
	__imp__sub_822EFD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EFD88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r25,9(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r27,152(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,254
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 254, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// bne cr6,0x822efe24
	if (!ctx.cr6.eq) goto loc_822EFE24;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822efe8c
	if (!ctx.cr6.gt) goto loc_822EFE8C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822EFDBC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// lbz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822efde8
	if (!ctx.cr6.lt) goto loc_822EFDE8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82300088
	ctx.lr = 0x822EFDE0;
	sub_82300088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822efe18
	if (!ctx.cr6.eq) goto loc_822EFE18;
loc_822EFDE8:
	// subf r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822efdbc
	if (ctx.cr6.lt) goto loc_822EFDBC;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EFE18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822EFE24:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x822efe8c
	if (!ctx.cr6.gt) goto loc_822EFE8C;
loc_822EFE2C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822efe68
	if (!ctx.cr6.lt) goto loc_822EFE68;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822efe68
	if (!ctx.cr6.lt) goto loc_822EFE68;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82300088
	ctx.lr = 0x822EFE60;
	sub_82300088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822efe18
	if (!ctx.cr6.eq) goto loc_822EFE18;
loc_822EFE68:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822efe2c
	if (ctx.cr6.lt) goto loc_822EFE2C;
loc_822EFE8C:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFD80) {
	__imp__sub_822EFD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822EFEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lbz r29,10(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822efefc
	if (ctx.cr0.lt) goto loc_822EFEFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822EFECC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822EFEE8;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eff08
	if (!ctx.cr6.eq) goto loc_822EFF08;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x822efecc
	if (!ctx.cr0.lt) goto loc_822EFECC;
loc_822EFEFC:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822EFF08:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFEA0) {
	__imp__sub_822EFEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EFF14) {
	__imp__sub_822EFF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822EFF20;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822eff94
	if (ctx.cr6.eq) goto loc_822EFF94;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
loc_822EFF48:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r26,254
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 254, ctx.xer);
	// beq cr6,0x822eff5c
	if (ctx.cr6.eq) goto loc_822EFF5C;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x822eff78
	if (!ctx.cr6.gt) goto loc_822EFF78;
loc_822EFF5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822EFF70;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822effa0
	if (!ctx.cr6.eq) goto loc_822EFFA0;
loc_822EFF78:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r10,9(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822eff48
	if (ctx.cr6.lt) goto loc_822EFF48;
loc_822EFF94:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822EFFA0:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFF18) {
	__imp__sub_822EFF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822EFFAC) {
	__imp__sub_822EFFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822EFFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822EFFB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,152(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0044
	if (ctx.cr6.eq) goto loc_822F0044;
	// clrlwi r26,r6,24
	ctx.r26.u64 = ctx.r6.u32 & 0xFF;
loc_822EFFE4:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,254
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 254, ctx.xer);
	// beq cr6,0x822efff8
	if (ctx.cr6.eq) goto loc_822EFFF8;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x822f0028
	if (!ctx.cr6.gt) goto loc_822F0028;
loc_822EFFF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822F0004;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f0028
	if (!ctx.cr6.eq) goto loc_822F0028;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822F0020;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f0050
	if (!ctx.cr6.eq) goto loc_822F0050;
loc_822F0028:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r10,9(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822effe4
	if (ctx.cr6.lt) goto loc_822EFFE4;
loc_822F0044:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822F0050:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822EFFB0) {
	__imp__sub_822EFFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F005C) {
	__imp__sub_822F005C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822F0068;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822f0130
	if (ctx.cr6.eq) goto loc_822F0130;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r27,9(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r28,152(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f00cc
	if (!ctx.cr6.lt) goto loc_822F00CC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822f00cc
	if (!ctx.cr6.gt) goto loc_822F00CC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_822F00A8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822f013c
	if (ctx.cr6.lt) goto loc_822F013C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822f00a8
	if (ctx.cr6.lt) goto loc_822F00A8;
loc_822F00CC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822f0128
	if (!ctx.cr6.gt) goto loc_822F0128;
loc_822F00DC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822F00EC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f0110
	if (!ctx.cr6.eq) goto loc_822F0110;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822F0108;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f0164
	if (!ctx.cr6.eq) goto loc_822F0164;
loc_822F0110:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x822f00dc
	if (ctx.cr6.lt) goto loc_822F00DC;
loc_822F0128:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_822F0130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822F013C:
	// lwz r10,36(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f00cc
	if (!ctx.cr6.eq) goto loc_822F00CC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822F015C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f00cc
	if (!ctx.cr6.eq) goto loc_822F00CC;
loc_822F0164:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0060) {
	__imp__sub_822F0060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822F0178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lbz r30,10(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// addic. r28,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r28.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x822f01e8
	if (ctx.cr0.lt) goto loc_822F01E8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822F01A0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x822e8058
	ctx.lr = 0x822F01B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f01dc
	if (!ctx.cr6.eq) goto loc_822F01DC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ffff0
	ctx.lr = 0x822F01D4;
	sub_822FFFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f01f4
	if (!ctx.cr6.eq) goto loc_822F01F4;
loc_822F01DC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x822f01a0
	if (!ctx.cr0.lt) goto loc_822F01A0;
loc_822F01E8:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822F01F4:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0170) {
	__imp__sub_822F0170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r5,152(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x822f0250
	if (ctx.cr6.lt) goto loc_822F0250;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F0234:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bdnz 0x822f0234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0234;
loc_822F0250:
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822f0264
	if (!ctx.cr6.lt) goto loc_822F0264;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lbz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
loc_822F0264:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0200) {
	__imp__sub_822F0200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0274) {
	__imp__sub_822F0274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F0280;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6288(r1)
	ea = -6288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f02d8
	if (!ctx.cr6.lt) goto loc_822F02D8;
	// bl 0x82300b40
	ctx.lr = 0x822F02AC;
	sub_82300B40(ctx, base);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F02C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f02c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F02C4;
	// addi r1,r1,6288
	ctx.r1.s64 = ctx.r1.s64 + 6288;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822F02D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ee738
	ctx.lr = 0x822F02E8;
	sub_822EE738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f17e8
	ctx.lr = 0x822F02F8;
	sub_822F17E8(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F0314:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822f0314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0314;
	// addi r1,r1,6288
	ctx.r1.s64 = ctx.r1.s64 + 6288;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0278) {
	__imp__sub_822F0278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0328) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0328) {
	__imp__sub_822F0328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F0344:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0344;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0330) {
	__imp__sub_822F0330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0354) {
	__imp__sub_822F0354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822F0360;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x822F0368;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822f19f0
	ctx.lr = 0x822F037C;
	sub_822F19F0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,680(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f31,f4
	ctx.f31.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f29,f12,f31
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ble cr6,0x822f0458
	if (!ctx.cr6.gt) goto loc_822F0458;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r28,r11,-3456
	ctx.r28.s64 = ctx.r11.s64 + -3456;
	// lfs f27,20476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20476);
	ctx.f27.f64 = double(temp.f32);
loc_822F03F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x822F0404;
	sub_822F1EB8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821742a0
	ctx.lr = 0x822F040C;
	sub_821742A0(ctx, base);
	// lfs f0,244(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f12,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfsx f8,r10,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bl 0x82300b48
	ctx.lr = 0x822F0448;
	sub_82300B48(ctx, base);
	// stbx r3,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822f03f8
	if (ctx.cr6.lt) goto loc_822F03F8;
loc_822F0458:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x822F0464;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0358) {
	__imp__sub_822F0358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822F0470;
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
	// bl 0x822f19f0
	ctx.lr = 0x822F0480;
	sub_822F19F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f0500
	if (!ctx.cr6.gt) goto loc_822F0500;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// addi r29,r11,17280
	ctx.r29.s64 = ctx.r11.s64 + 17280;
	// addi r30,r10,-3456
	ctx.r30.s64 = ctx.r10.s64 + -3456;
	// lfs f31,15040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15040);
	ctx.f31.f64 = double(temp.f32);
loc_822F04A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x822F04B4;
	sub_822F1EB8(ctx, base);
	// bl 0x821742a0
	ctx.lr = 0x822F04B8;
	sub_821742A0(ctx, base);
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// rlwinm r9,r3,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r11,-10496
	ctx.r8.s64 = ctx.r11.s64 + -10496;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addis r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 196608;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,28928
	ctx.r10.s64 = ctx.r10.s64 + 28928;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r5,r7,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// stfsx f12,r11,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x822f04a8
	if (ctx.cr6.lt) goto loc_822F04A8;
loc_822F0500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0468) {
	__imp__sub_822F0468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F050C) {
	__imp__sub_822F050C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822F0518;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,19
	ctx.r3.s64 = 19;
	// bne cr6,0x822f0540
	if (!ctx.cr6.eq) goto loc_822F0540;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,1096
	ctx.r4.s64 = ctx.r11.s64 + 1096;
	// bl 0x82280900
	ctx.lr = 0x822F0538;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822F0540:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,1084
	ctx.r4.s64 = ctx.r11.s64 + 1084;
	// bl 0x82280900
	ctx.lr = 0x822F054C;
	sub_82280900(ctx, base);
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r31,9(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822f0598
	if (!ctx.cr6.gt) goto loc_822F0598;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,1072
	ctx.r27.s64 = ctx.r11.s64 + 1072;
loc_822F056C:
	// lwzu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x822F0584;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300b38
	ctx.lr = 0x822F058C;
	sub_82300B38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bne 0x822f056c
	if (!ctx.cr0.eq) goto loc_822F056C;
loc_822F0598:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,1060
	ctx.r4.s64 = ctx.r11.s64 + 1060;
	// bl 0x82280900
	ctx.lr = 0x822F05A8;
	sub_82280900(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r30,10(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 10);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822f0624
	if (!ctx.cr6.gt) goto loc_822F0624;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,712
	ctx.r29.s64 = ctx.r11.s64 + 712;
loc_822F05C0:
	// lbz r5,9(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,152(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f0604
	if (!ctx.cr6.gt) goto loc_822F0604;
loc_822F05D8:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lbz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// lwz r6,36(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822f0730
	if (ctx.cr6.lt) goto loc_822F0730;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822f05d8
	if (ctx.cr6.lt) goto loc_822F05D8;
loc_822F0604:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822F0608:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82280900
	ctx.lr = 0x822F0618;
	sub_82280900(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822f05c0
	if (ctx.cr6.lt) goto loc_822F05C0;
loc_822F0624:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// li r3,19
	ctx.r3.s64 = 19;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f076c
	if (ctx.cr6.eq) goto loc_822F076C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,1040
	ctx.r4.s64 = ctx.r11.s64 + 1040;
	// bl 0x82280900
	ctx.lr = 0x822F0640;
	sub_82280900(ctx, base);
	// lhz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x822F0648;
	sub_822A13A0(ctx, base);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f0778
	if (ctx.cr6.eq) goto loc_822F0778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,1016
	ctx.r29.s64 = ctx.r11.s64 + 1016;
loc_822F0660:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r5,9(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,152(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f06ac
	if (!ctx.cr6.gt) goto loc_822F06AC;
loc_822F0680:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lbz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// lwz r6,36(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822f0744
	if (ctx.cr6.lt) goto loc_822F0744;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822f0680
	if (ctx.cr6.lt) goto loc_822F0680;
loc_822F06AC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822F06B0:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r5,9(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,152(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f06fc
	if (!ctx.cr6.gt) goto loc_822F06FC;
loc_822F06D0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lbz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// lwz r6,36(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822f0758
	if (ctx.cr6.lt) goto loc_822F0758;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822f06d0
	if (ctx.cr6.lt) goto loc_822F06D0;
loc_822F06FC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822F0700:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82280900
	ctx.lr = 0x822F0720;
	sub_82280900(ctx, base);
	// lbzu r8,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822f0660
	if (!ctx.cr6.eq) goto loc_822F0660;
	// b 0x822f0778
	goto loc_822F0778;
loc_822F0730:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822F073C;
	sub_822A13A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822f0608
	goto loc_822F0608;
loc_822F0744:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822F0750;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822f06b0
	goto loc_822F06B0;
loc_822F0758:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822F0764;
	sub_822A13A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822f0700
	goto loc_822F0700;
loc_822F076C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,992
	ctx.r4.s64 = ctx.r11.s64 + 992;
	// bl 0x82280900
	ctx.lr = 0x822F0778;
	sub_82280900(ctx, base);
loc_822F0778:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280900
	ctx.lr = 0x822F0788;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0510) {
	__imp__sub_822F0510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F0798;
	__savegprlr_29(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822F07B0;
	sub_823DE1F0(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f0808
	if (ctx.cr6.eq) goto loc_822F0808;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,198
	ctx.r7.s64 = ctx.r1.s64 + 198;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
loc_822F07E0:
	// and r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addic r29,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// subfe r5,r29,r5
	temp.u8 = (~ctx.r29.u32 + ctx.r5.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r29.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// stw r6,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r6.u32);
	// stbu r5,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822f07e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F07E0;
loc_822F0808:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8229e118
	ctx.lr = 0x822F0814;
	sub_8229E118(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r7,158(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822ee958
	ctx.lr = 0x822F082C;
	sub_822EE958(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F0840:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0840;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f0860
	if (ctx.cr6.eq) goto loc_822F0860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2388
	ctx.lr = 0x822F0860;
	sub_822F2388(ctx, base);
loc_822F0860:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0790) {
	__imp__sub_822F0790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0868) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// nor r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// nor r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// nor r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r31,104(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// nor r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r31,108(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// nor r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// nor r3,r5,r4
	ctx.r3.u64 = ~(ctx.r5.u64 | ctx.r4.u64);
	// stw r3,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0868) {
	__imp__sub_822F0868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822f09f4
	if (!ctx.cr6.lt) goto loc_822F09F4;
loc_822F09B4:
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F09D8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822f09d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F09D8;
	// lbzu r11,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822f09b4
	if (ctx.cr6.lt) goto loc_822F09B4;
loc_822F09F4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0998) {
	__imp__sub_822F0998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F09FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F09FC) {
	__imp__sub_822F09FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// lwz r4,100(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 5;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x822f0af8
	if (ctx.cr6.gt) goto loc_822F0AF8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f11,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,17280
	ctx.r6.s64 = ctx.r11.s64 + 17280;
	// lfs f12,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
loc_822F0A58:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ble cr6,0x822f0a6c
	if (!ctx.cr6.gt) goto loc_822F0A6C;
	// li r5,32
	ctx.r5.s64 = 32;
loc_822F0A6C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822f0ae4
	if (!ctx.cr6.lt) goto loc_822F0AE4;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F0A80:
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f6,f0,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f0,f9,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x822f0acc
	if (ctx.cr6.eq) goto loc_822F0ACC;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x822f0ad4
	goto loc_822F0AD4;
loc_822F0ACC:
	// stfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_822F0AD4:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822f0a80
	if (ctx.cr6.lt) goto loc_822F0A80;
loc_822F0AE4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822f0a58
	if (!ctx.cr6.gt) goto loc_822F0A58;
loc_822F0AF8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F0A00) {
	__imp__sub_822F0A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0B04) {
	__imp__sub_822F0B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822F0B10;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de01c
	ctx.lr = 0x822F0B18;
	__savefpr_25(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,100(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// rlwinm r30,r5,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r29,r5,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subf r24,r29,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r23,r6,27,5,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x822f0ee0
	if (ctx.cr6.gt) goto loc_822F0EE0;
	// addi r6,r30,3
	ctx.r6.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r29,r7,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r25,r6,r3
	ctx.r25.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
	// lfs f12,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
loc_822F0B84:
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r24,32
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 32, ctx.xer);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// ble cr6,0x822f0b98
	if (!ctx.cr6.gt) goto loc_822F0B98;
	// li r28,32
	ctx.r28.s64 = 32;
loc_822F0B98:
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x822f0ec8
	if (!ctx.cr6.lt) goto loc_822F0EC8;
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r30,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F0BB0:
	// lwzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// andc r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lwzx r22,r29,r5
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// and r22,r7,r22
	ctx.r22.u64 = ctx.r7.u64 & ctx.r22.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x822f0d88
	if (!ctx.cr6.eq) goto loc_822F0D88;
	// lwzx r9,r26,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f0c60
	if (!ctx.cr6.eq) goto loc_822F0C60;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f31,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f6,f9,f4,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmsubs f5,f4,f0,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmsubs f3,f2,f0,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fmadds f0,f31,f7,f6
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fnmsubs f9,f2,f31,f5
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f31.f64 - ctx.f5.f64)));
	// fnmsubs f5,f8,f31,f1
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fmadds f6,f30,f8,f3
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fnmsubs f3,f30,f2,f0
	ctx.f3.f64 = double(float(-(ctx.f30.f64 * ctx.f2.f64 - ctx.f0.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f2,f30,f7,f9
	ctx.f2.f64 = double(float(-(ctx.f30.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f0,f30,f4,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f1,f4,f31,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x822f0d88
	goto loc_822F0D88;
loc_822F0C60:
	// lfs f7,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f31,f9,f4
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f5,f6,f1,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fmadds f3,f7,f9,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmsubs f2,f7,f0,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f2.f64));
	// fmsubs f31,f0,f30,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f0,f4,f0,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fnmsubs f5,f1,f4,f3
	ctx.f5.f64 = double(float(-(ctx.f1.f64 * ctx.f4.f64 - ctx.f3.f64)));
	// fmadds f3,f1,f30,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fnmsubs f2,f1,f7,f31
	ctx.f2.f64 = double(float(-(ctx.f1.f64 * ctx.f7.f64 - ctx.f31.f64)));
	// fmadds f1,f9,f30,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fnmsubs f0,f8,f30,f5
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f30.f64 - ctx.f5.f64)));
	// fnmsubs f9,f8,f4,f3
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f4.f64 - ctx.f3.f64)));
	// fmadds f8,f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmuls f7,f29,f1
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// fmuls f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f5,f29,f9
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f4,f29,f8
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmadds f3,f27,f8,f7
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f2,f27,f9,f6
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmsubs f7,f27,f0,f5
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f6,f27,f1,f4
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 - ctx.f4.f64));
	// fmadds f5,f26,f9,f3
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fnmsubs f4,f26,f8,f2
	ctx.f4.f64 = double(float(-(ctx.f26.f64 * ctx.f8.f64 - ctx.f2.f64)));
	// fmadds f3,f25,f8,f7
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fnmsubs f2,f26,f0,f6
	ctx.f2.f64 = double(float(-(ctx.f26.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// fnmsubs f0,f25,f0,f5
	ctx.f0.f64 = double(float(-(ctx.f25.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f8,f25,f1,f4
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f7,f26,f1,f3
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fnmsubs f6,f25,f9,f2
	ctx.f6.f64 = double(float(-(ctx.f25.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmuls f6,f4,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f1,f8
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f30,f5,f8
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f6,f1,f3,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmsubs f9,f5,f3,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f9.f64));
	// fmsubs f31,f5,f7,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmadds f1,f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmadds f6,f5,f0,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fnmsubs f9,f4,f7,f9
	ctx.f9.f64 = double(float(-(ctx.f4.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// fmadds f5,f4,f3,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fnmsubs f4,f4,f0,f1
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fnmsubs f1,f2,f8,f9
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f8.f64 - ctx.f9.f64)));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fnmsubs f9,f2,f7,f6
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f8,f2,f0,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f2,f3,f4
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822F0D88:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f0dbc
	if (ctx.cr6.eq) goto loc_822F0DBC;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x822f0dc4
	goto loc_822F0DC4;
loc_822F0DBC:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_822F0DC4:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f0ddc
	if (!ctx.cr6.eq) goto loc_822F0DDC;
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x822f0de0
	goto loc_822F0DE0;
loc_822F0DDC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_822F0DE0:
	// lfs f9,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f31,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f30,f9,f6
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f29,f4,f5
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f27,f9,f3
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f28,f2,f5
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fadds f3,f30,f7
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f4,f30,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// fsubs f2,f29,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f6.f64));
	// fadds f30,f5,f9
	ctx.f30.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fadds f29,f27,f28
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fsubs f5,f13,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f28,f27,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f3,f8,f2
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fsubs f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f5,f1,f30,f3
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f3.f64));
	// fmadds f3,f1,f2,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fmadds f2,f1,f28,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f8.f64));
	// fmadds f1,f4,f0,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f9,f9,f0,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f8,f6,f0,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fadds f7,f1,f31
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f3,24(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blt cr6,0x822f0bb0
	if (ctx.cr6.lt) goto loc_822F0BB0;
loc_822F0EC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x822f0b84
	if (!ctx.cr6.gt) goto loc_822F0B84;
loc_822F0EE0:
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de068
	ctx.lr = 0x822F0EE8;
	__restfpr_25(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0B08) {
	__imp__sub_822F0B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F0EEC) {
	__imp__sub_822F0EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F0EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822F0EF8;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de01c
	ctx.lr = 0x822F0F00;
	__savefpr_25(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// srawi r25,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 5;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r29,100(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// rlwinm r9,r25,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subf r21,r9,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r20,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r20.s64 = ctx.r4.s32 >> 5;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x822f12f8
	if (ctx.cr6.gt) goto loc_822F12F8;
	// addi r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 3;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r6,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r6.s64;
	// add r23,r10,r3
	ctx.r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r11,17280
	ctx.r26.s64 = ctx.r11.s64 + 17280;
	// lfs f11,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
loc_822F0F6C:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ble cr6,0x822f0f80
	if (!ctx.cr6.gt) goto loc_822F0F80;
	// li r24,32
	ctx.r24.s64 = 32;
loc_822F0F80:
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822f12e0
	if (!ctx.cr6.lt) goto loc_822F12E0;
	// rlwinm r28,r25,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r22,r25,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F0F98:
	// lwzx r9,r4,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// add r11,r28,r8
	ctx.r11.u64 = ctx.r28.u64 + ctx.r8.u64;
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwzx r4,r27,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822f1180
	if (!ctx.cr6.eq) goto loc_822F1180;
	// lwzx r4,r22,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822f1058
	if (!ctx.cr6.eq) goto loc_822F1058;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f31,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f6,f9,f4,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmsubs f5,f4,f0,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmsubs f3,f2,f0,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fmadds f0,f7,f31,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fnmsubs f9,f2,f31,f5
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f31.f64 - ctx.f5.f64)));
	// fnmsubs f5,f8,f31,f1
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fmadds f6,f30,f8,f3
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fnmsubs f3,f2,f30,f0
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f2,f30,f7,f9
	ctx.f2.f64 = double(float(-(ctx.f30.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f0,f30,f4,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f1,f4,f31,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x822f1180
	goto loc_822F1180;
loc_822F1058:
	// lfs f7,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f31,f9,f4
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f5,f6,f1,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fmadds f3,f7,f9,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmsubs f2,f7,f0,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f2.f64));
	// fmsubs f31,f0,f30,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f0,f4,f0,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fnmsubs f5,f1,f4,f3
	ctx.f5.f64 = double(float(-(ctx.f1.f64 * ctx.f4.f64 - ctx.f3.f64)));
	// fmadds f3,f1,f30,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fnmsubs f2,f1,f7,f31
	ctx.f2.f64 = double(float(-(ctx.f1.f64 * ctx.f7.f64 - ctx.f31.f64)));
	// fmadds f1,f9,f30,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fnmsubs f0,f8,f30,f5
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f30.f64 - ctx.f5.f64)));
	// fnmsubs f9,f8,f4,f3
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f4.f64 - ctx.f3.f64)));
	// fmadds f8,f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmuls f7,f29,f1
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// fmuls f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f5,f29,f9
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f4,f29,f8
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmadds f3,f27,f8,f7
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f2,f27,f9,f6
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmsubs f7,f27,f0,f5
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f6,f27,f1,f4
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 - ctx.f4.f64));
	// fmadds f5,f26,f9,f3
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fnmsubs f4,f26,f8,f2
	ctx.f4.f64 = double(float(-(ctx.f26.f64 * ctx.f8.f64 - ctx.f2.f64)));
	// fmadds f3,f25,f8,f7
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fnmsubs f2,f26,f0,f6
	ctx.f2.f64 = double(float(-(ctx.f26.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// fnmsubs f0,f25,f0,f5
	ctx.f0.f64 = double(float(-(ctx.f25.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f8,f25,f1,f4
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f7,f26,f1,f3
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fnmsubs f6,f25,f9,f2
	ctx.f6.f64 = double(float(-(ctx.f25.f64 * ctx.f9.f64 - ctx.f2.f64)));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmuls f6,f4,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f1,f8
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f30,f5,f8
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f6,f1,f3,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmsubs f9,f5,f3,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f9.f64));
	// fmsubs f31,f5,f7,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f31.f64));
	// fmadds f1,f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmadds f6,f5,f0,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fnmsubs f9,f4,f7,f9
	ctx.f9.f64 = double(float(-(ctx.f4.f64 * ctx.f7.f64 - ctx.f9.f64)));
	// fmadds f5,f4,f3,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fnmsubs f4,f4,f0,f1
	ctx.f4.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fnmsubs f1,f2,f8,f9
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f8.f64 - ctx.f9.f64)));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fnmsubs f9,f2,f7,f6
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f8,f2,f0,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f2,f3,f4
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822F1180:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x822f11b4
	if (ctx.cr6.eq) goto loc_822F11B4;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x822f11bc
	goto loc_822F11BC;
loc_822F11B4:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_822F11BC:
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r19,0(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// and r4,r19,r9
	ctx.r4.u64 = ctx.r19.u64 & ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bne cr6,0x822f11e8
	if (!ctx.cr6.eq) goto loc_822F11E8;
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x822f11ec
	goto loc_822F11EC;
loc_822F11E8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_822F11EC:
	// lfs f9,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// fmadds f1,f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f31,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f8,f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f30.f64));
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f9,f6
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f29,f4,f5
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f27,f9,f3
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f28,f2,f5
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fadds f3,f30,f7
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f4,f30,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// fsubs f2,f29,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f6.f64));
	// fadds f30,f5,f9
	ctx.f30.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fadds f29,f27,f28
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fsubs f5,f13,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f28,f27,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fsubs f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f7,f1,f29
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fmuls f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmadds f5,f8,f30,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f3.f64));
	// fmadds f3,f8,f2,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fmadds f2,f8,f28,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmadds f1,f4,f0,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f9,f9,f0,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f8,f6,f0,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fadds f7,f1,f31
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f3,24(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blt cr6,0x822f0f98
	if (ctx.cr6.lt) goto loc_822F0F98;
loc_822F12E0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r21,r21,-32
	ctx.r21.s64 = ctx.r21.s64 + -32;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x822f0f6c
	if (!ctx.cr6.gt) goto loc_822F0F6C;
loc_822F12F8:
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de068
	ctx.lr = 0x822F1300;
	__restfpr_25(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F0EF0) {
	__imp__sub_822F0EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1304) {
	__imp__sub_822F1304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1308) {
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,36912
	ctx.r4.u64 = ctx.r4.u64 | 36912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x822F1334;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x822F133C;
	sub_822DB8F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fec78
	ctx.lr = 0x822F134C;
	sub_822FEC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x822F1354;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_822F1308) {
	__imp__sub_822F1308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F136C) {
	__imp__sub_822F136C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,28528
	ctx.r12.u64 = ctx.r12.u64 | 28528;
	// bl 0x823dedd4
	ctx.lr = 0x822F1384;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fec78
	ctx.lr = 0x822F1390;
	sub_822FEC78(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1370) {
	__imp__sub_822F1370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F13A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822F13A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// not r5,r10
	ctx.r5.u64 = ~ctx.r10.u64;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// orc r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ~ctx.r8.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic r8,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// not r28,r9
	ctx.r28.u64 = ~ctx.r9.u64;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// orc r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 | ~ctx.r6.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// subfe r26,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addic r7,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// not r24,r8
	ctx.r24.u64 = ~ctx.r8.u64;
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// orc r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 | ~ctx.r3.u64;
	// lwz r28,112(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addic r10,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// not r8,r7
	ctx.r8.u64 = ~ctx.r7.u64;
	// orc r6,r4,r27
	ctx.r6.u64 = ctx.r4.u64 | ~ctx.r27.u64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 & ctx.r11.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// not r9,r6
	ctx.r9.u64 = ~ctx.r6.u64;
	// and r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 & ctx.r4.u64;
	// orc r5,r28,r25
	ctx.r5.u64 = ctx.r28.u64 | ~ctx.r25.u64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// not r10,r5
	ctx.r10.u64 = ~ctx.r5.u64;
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f15f0
	if (!ctx.cr6.eq) goto loc_822F15F0;
	// bl 0x8228bcc0
	ctx.lr = 0x822F148C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f14a8
	if (ctx.cr6.eq) goto loc_822F14A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1308
	ctx.lr = 0x822F14A4;
	sub_822F1308(ctx, base);
	// b 0x822f14cc
	goto loc_822F14CC;
loc_822F14A8:
	// bl 0x8228b728
	ctx.lr = 0x822F14AC;
	sub_8228B728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822f14c8
	if (ctx.cr6.eq) goto loc_822F14C8;
	// bl 0x822f1308
	ctx.lr = 0x822F14C4;
	sub_822F1308(ctx, base);
	// b 0x822f14cc
	goto loc_822F14CC;
loc_822F14C8:
	// bl 0x822f1370
	ctx.lr = 0x822F14CC;
	sub_822F1370(ctx, base);
loc_822F14CC:
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x822F14D4;
	sub_822A13A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0868
	ctx.lr = 0x822F14F4;
	sub_822F0868(ctx, base);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r6,24
	ctx.r31.s64 = ctx.r6.s64 + 24;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r24,9(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// rotlwi r10,r24,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r24.u32, 2);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x822f15f0
	if (!ctx.cr6.gt) goto loc_822F15F0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_822F151C:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r6,r27,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r25.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822f1584
	if (!ctx.cr6.lt) goto loc_822F1584;
loc_822F1544:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r8,r8,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F1568:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822f1568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1568;
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822f1544
	if (ctx.cr6.lt) goto loc_822F1544;
loc_822F1584:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x822f15a8
	if (!ctx.cr6.eq) goto loc_822F15A8;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// bl 0x822f0a00
	ctx.lr = 0x822F15A4;
	sub_822F0A00(ctx, base);
	// b 0x822f15b8
	goto loc_822F15B8;
loc_822F15A8:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// bl 0x822f0b08
	ctx.lr = 0x822F15B8;
	sub_822F0B08(ctx, base);
loc_822F15B8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0ef0
	ctx.lr = 0x822F15D8;
	sub_822F0EF0(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x822f151c
	if (ctx.cr6.lt) goto loc_822F151C;
loc_822F15F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F13A0) {
	__imp__sub_822F13A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F15F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1770
	if (ctx.cr6.eq) goto loc_822F1770;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,24252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,17280
	ctx.r6.s64 = ctx.r11.s64 + 17280;
	// lfs f12,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_822F1638:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbz r10,5(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f167c
	if (ctx.cr6.eq) goto loc_822F167C;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F1658:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f1658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1658;
loc_822F167C:
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r30,5(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// subf. r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822f175c
	if (ctx.cr0.eq) goto loc_822F175C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// rlwinm r8,r9,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
loc_822F169C:
	// srawi r30,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 5;
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f1744
	if (ctx.cr6.eq) goto loc_822F1744;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f11,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f7,-40(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,-20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f3,-32(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f11,-16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r8.u64);
	// lfd f10,-24(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,-12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822F1744:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r9,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// bdnz 0x822f169c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F169C;
loc_822F175C:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f1638
	if (ctx.cr6.lt) goto loc_822F1638;
loc_822F1770:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F15F8) {
	__imp__sub_822F15F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F177C) {
	__imp__sub_822F177C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// nor r9,r11,r10
	ctx.r9.u64 = ~(ctx.r11.u64 | ctx.r10.u64);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// nor r6,r8,r7
	ctx.r6.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// nor r9,r11,r10
	ctx.r9.u64 = ~(ctx.r11.u64 | ctx.r10.u64);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// nor r6,r8,r7
	ctx.r6.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// nor r9,r11,r10
	ctx.r9.u64 = ~(ctx.r11.u64 | ctx.r10.u64);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// nor r6,r8,r7
	ctx.r6.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1780) {
	__imp__sub_822F1780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F17E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F17E4) {
	__imp__sub_822F17E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F17E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822F17F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r4,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F1814:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f1814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1814;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F182C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f182c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F182C;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F1848:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// bdnz 0x822f1848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f15f8
	ctx.lr = 0x822F1880;
	sub_822F15F8(ctx, base);
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x822F1888;
	sub_822A13A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// nor r6,r11,r6
	ctx.r6.u64 = ~(ctx.r11.u64 | ctx.r6.u64);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// nor r4,r4,r8
	ctx.r4.u64 = ~(ctx.r4.u64 | ctx.r8.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// nor r9,r5,r9
	ctx.r9.u64 = ~(ctx.r5.u64 | ctx.r9.u64);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// nor r8,r11,r7
	ctx.r8.u64 = ~(ctx.r11.u64 | ctx.r7.u64);
	// lbz r25,9(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rotlwi r10,r25,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// nor r5,r5,r7
	ctx.r5.u64 = ~(ctx.r5.u64 | ctx.r7.u64);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// nor r3,r3,r27
	ctx.r3.u64 = ~(ctx.r3.u64 | ctx.r27.u64);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// ble cr6,0x822f19e0
	if (!ctx.cr6.gt) goto loc_822F19E0;
	// lwz r27,276(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_822F1910:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r6,r29,r24
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r24.u32);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822f1974
	if (!ctx.cr6.lt) goto loc_822F1974;
loc_822F1934:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F1958:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822f1958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1958;
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822f1934
	if (ctx.cr6.lt) goto loc_822F1934;
loc_822F1974:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x822f1998
	if (!ctx.cr6.eq) goto loc_822F1998;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0a00
	ctx.lr = 0x822F1994;
	sub_822F0A00(ctx, base);
	// b 0x822f19a8
	goto loc_822F19A8;
loc_822F1998:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0b08
	ctx.lr = 0x822F19A8;
	sub_822F0B08(ctx, base);
loc_822F19A8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0ef0
	ctx.lr = 0x822F19C8;
	sub_822F0EF0(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x822f1910
	if (ctx.cr6.lt) goto loc_822F1910;
loc_822F19E0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F17E8) {
	__imp__sub_822F17E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F19E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F19E8) {
	__imp__sub_822F19E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F19F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F19F0) {
	__imp__sub_822F19F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F19F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F19F8) {
	__imp__sub_822F19F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822F1A08;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,152(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r24,9(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300b38
	ctx.lr = 0x822F1A28;
	sub_82300B38(ctx, base);
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822f1a84
	if (ctx.cr6.lt) goto loc_822F1A84;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lhz r27,68(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// b 0x822f1aa0
	goto loc_822F1AA0;
loc_822F1A84:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_822F1AA0:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ble cr6,0x822f1c94
	if (!ctx.cr6.gt) goto loc_822F1C94;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_822F1AC8:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300b38
	ctx.lr = 0x822F1AD4;
	sub_82300B38(ctx, base);
	// lbzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822f1c80
	if (ctx.cr6.lt) goto loc_822F1C80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r30,96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lhz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x822f1c04
	if (ctx.cr6.eq) goto loc_822F1C04;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r1,108
	ctx.r23.s64 = ctx.r1.s64 + 108;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r19,r1,116
	ctx.r19.s64 = ctx.r1.s64 + 116;
	// lwz r20,20(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r18,r1,120
	ctx.r18.s64 = ctx.r1.s64 + 120;
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r4,r6,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// subfic r11,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r10.s64;
	// lwzx r23,r6,r23
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// srw r17,r8,r10
	ctx.r17.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r21,r6,r21
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// srw r16,r4,r10
	ctx.r16.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r19,r6,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r19.u32);
	// srw r15,r21,r10
	ctx.r15.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r6,r6,r18
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r18.u32);
	// srw r18,r23,r10
	ctx.r18.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// srw r14,r19,r10
	ctx.r14.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r23,r23,r11
	ctx.r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r19,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// slw r21,r21,r11
	ctx.r21.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r16,r8
	ctx.r11.u64 = ctx.r16.u64 | ctx.r8.u64;
	// or r8,r18,r4
	ctx.r8.u64 = ctx.r18.u64 | ctx.r4.u64;
	// or r4,r15,r23
	ctx.r4.u64 = ctx.r15.u64 | ctx.r23.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r23,r14,r21
	ctx.r23.u64 = ctx.r14.u64 | ctx.r21.u64;
	// or r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 | ctx.r30.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// or r9,r17,r9
	ctx.r9.u64 = ctx.r17.u64 | ctx.r9.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// or r4,r23,r22
	ctx.r4.u64 = ctx.r23.u64 | ctx.r22.u64;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// or r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 | ctx.r20.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822f1c80
	goto loc_822F1C80;
loc_822F1C04:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r21,r1,116
	ctx.r21.s64 = ctx.r1.s64 + 116;
	// lwz r22,20(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r20,r1,120
	ctx.r20.s64 = ctx.r1.s64 + 120;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lwzx r9,r7,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r5,r7,r21
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwzx r7,r7,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// or r4,r7,r22
	ctx.r4.u64 = ctx.r7.u64 | ctx.r22.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
loc_822F1C80:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822f1ac8
	if (ctx.cr6.lt) goto loc_822F1AC8;
loc_822F1C94:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F1A00) {
	__imp__sub_822F1A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
loc_822F1CBC:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f1ce8
	if (!ctx.cr6.gt) goto loc_822F1CE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F1CD4:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822f1cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F1CD4;
loc_822F1CE8:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f1cbc
	if (ctx.cr6.lt) goto loc_822F1CBC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1CA0) {
	__imp__sub_822F1CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1D00) {
	__imp__sub_822F1D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f1d24
	if (ctx.cr6.eq) goto loc_822F1D24;
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// blr 
	return;
loc_822F1D24:
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1D08) {
	__imp__sub_822F1D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1D34) {
	__imp__sub_822F1D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1D38) {
	__imp__sub_822F1D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1D44) {
	__imp__sub_822F1D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1D48) {
	__imp__sub_822F1D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1D7C) {
	__imp__sub_822F1D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r4,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// addi r8,r10,17280
	ctx.r8.s64 = ctx.r10.s64 + 17280;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
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

PPC_WEAK_FUNC(sub_822F1D80) {
	__imp__sub_822F1D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1DB0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// addi r7,r10,17280
	ctx.r7.s64 = ctx.r10.s64 + 17280;
	// rlwinm r6,r4,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// not r8,r5
	ctx.r8.u64 = ~ctx.r5.u64;
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1DB0) {
	__imp__sub_822F1DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1DF4) {
	__imp__sub_822F1DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// srawi r11,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 5;
	// rlwinm r9,r5,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// addi r8,r10,17280
	ctx.r8.s64 = ctx.r10.s64 + 17280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822f1e28
	if (!ctx.cr6.eq) goto loc_822F1E28;
loc_822F1E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822F1E28:
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822f1e20
	if (!ctx.cr6.eq) goto loc_822F1E20;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1DF8) {
	__imp__sub_822F1DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1E4C) {
	__imp__sub_822F1E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1E50) {
	PPC_FUNC_PROLOGUE();
	// srawi r7,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 5;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r5,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// addi r8,r11,17280
	ctx.r8.s64 = ctx.r11.s64 + 17280;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f1eb0
	if (ctx.cr6.eq) goto loc_822F1EB0;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822f1e94
	if (ctx.cr6.eq) goto loc_822F1E94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822F1E94:
	// addi r7,r7,18
	ctx.r7.s64 = ctx.r7.s64 + 18;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
loc_822F1EB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1E50) {
	__imp__sub_822F1E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1EB8) {
	__imp__sub_822F1EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1EC8) {
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
	// bl 0x823de020
	ctx.lr = 0x822F1EE0;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,-29220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29220);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x822F1F04;
	sub_823DE720(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x822F1F10;
	sub_823DE800(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmuls f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823de720
	ctx.lr = 0x822F1F24;
	sub_823DE720(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x823de800
	ctx.lr = 0x822F1F30;
	sub_823DE800(ctx, base);
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x822F1F44;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x822F1F50;
	sub_823DE800(ctx, base);
	// fmuls f11,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fmuls f9,f30,f27
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fmuls f8,f28,f29
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f7,f28,f30
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f4,f26,f9
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f2,f26,f6
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// fmadds f1,f26,f8,f5
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f0,f10,f8,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - ctx.f4.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f13,f26,f7,f3
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmsubs f12,f10,f7,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f2.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x822F1FA4;
	__restfpr_26(ctx, base);
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

PPC_WEAK_FUNC(sub_822F1EC8) {
	__imp__sub_822F1EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1FB8) {
	__imp__sub_822F1FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F1FDC) {
	__imp__sub_822F1FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F1FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F1FE0) {
	__imp__sub_822F1FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822F2010;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lbz r30,9(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9);
	// bl 0x822a13a0
	ctx.lr = 0x822F2030;
	sub_822A13A0(ctx, base);
	// lwz r9,152(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rotlwi r10,r30,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822f2088
	if (!ctx.cr6.gt) goto loc_822F2088;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_822F2060:
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lbz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x822f2088
	if (ctx.cr6.gt) goto loc_822F2088;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822f2060
	if (ctx.cr6.lt) goto loc_822F2060;
loc_822F2088:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// oris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 2147483648;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// subf r30,r9,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// addi r7,r11,17280
	ctx.r7.s64 = ctx.r11.s64 + 17280;
loc_822F20AC:
	// lwz r4,40(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
loc_822F20B0:
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subf. r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x822f20d0
	if (!ctx.cr0.lt) goto loc_822F20D0;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// blt 0x822f2184
	if (ctx.cr0.lt) goto loc_822F2184;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x822f20ac
	goto loc_822F20AC;
loc_822F20D0:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// rlwinm r10,r31,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r26,r11,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// and r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 & ctx.r10.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822f20f8
	if (!ctx.cr6.eq) goto loc_822F20F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x822f20b0
	goto loc_822F20B0;
loc_822F20F8:
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f2134
	if (!ctx.cr6.eq) goto loc_822F2134;
	// lbz r11,5(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822f2120
	if (ctx.cr0.lt) goto loc_822F2120;
	// lbzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x822f2160
	goto loc_822F2160;
loc_822F2120:
	// lbzx r11,r5,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x822f2160
	if (!ctx.cr6.eq) goto loc_822F2160;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x822f20b0
	goto loc_822F20B0;
loc_822F2134:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822f2158
	if (ctx.cr6.eq) goto loc_822F2158;
loc_822F2148:
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f2148
	if (!ctx.cr6.eq) goto loc_822F2148;
loc_822F2158:
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F2160:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// b 0x822f20b0
	goto loc_822F20B0;
loc_822F2184:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2008) {
	__imp__sub_822F2008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F218C) {
	__imp__sub_822F218C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2190) {
	PPC_FUNC_PROLOGUE();
	// srawi r7,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 5;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r5,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// addi r8,r11,17280
	ctx.r8.s64 = ctx.r11.s64 + 17280;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822f21c0
	if (!ctx.cr6.eq) goto loc_822F21C0;
loc_822F21B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822F21C0:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822f21b8
	if (!ctx.cr6.eq) goto loc_822F21B8;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// or r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2190) {
	__imp__sub_822F2190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F21F8) {
	PPC_FUNC_PROLOGUE();
	// srawi r7,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 5;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r5,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// addi r8,r11,17280
	ctx.r8.s64 = ctx.r11.s64 + 17280;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r6,r9,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822f2228
	if (!ctx.cr6.eq) goto loc_822F2228;
loc_822F2220:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822F2228:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822f2220
	if (!ctx.cr6.eq) goto loc_822F2220;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// or r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F21F8) {
	__imp__sub_822F21F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2260) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822f2294
	if (!ctx.cr6.eq) goto loc_822F2294;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
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
loc_822F2294:
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x823de090
	ctx.lr = 0x822F22A4;
	sub_823DE090(ctx, base);
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

PPC_WEAK_FUNC(sub_822F2260) {
	__imp__sub_822F2260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F22B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F22B8) {
	__imp__sub_822F22B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F22C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// rlwinm r7,r4,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// addi r8,r10,17280
	ctx.r8.s64 = ctx.r10.s64 + 17280;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
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

PPC_WEAK_FUNC(sub_822F22C8) {
	__imp__sub_822F22C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F22F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
loc_822F2308:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822f2338
	if (!ctx.cr6.eq) goto loc_822F2338;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x822f2308
	if (ctx.cr6.lt) goto loc_822F2308;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822F2338:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F22F8) {
	__imp__sub_822F22F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2340) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rotlwi r3,r11,5
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2340) {
	__imp__sub_822F2340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F234C) {
	__imp__sub_822F234C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2350) {
	PPC_FUNC_PROLOGUE();
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2350) {
	__imp__sub_822F2350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F235C) {
	__imp__sub_822F235C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2360) {
	__imp__sub_822F2360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F2378:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f2378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F2378;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2368) {
	__imp__sub_822F2368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2388) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822F2394:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f2394
	if (!ctx.cr6.eq) goto loc_822F2394;
loc_822F23A0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822f23c4
	if (!ctx.cr6.eq) goto loc_822F23C4;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822f23a0
	if (!ctx.cr0.eq) goto loc_822F23A0;
	// b 0x822f23cc
	goto loc_822F23CC;
loc_822F23C4:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822F23CC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f2394
	if (!ctx.cr6.eq) goto loc_822F2394;
	// lwsync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2388) {
	__imp__sub_822F2388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F23E0) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F23E0) {
	__imp__sub_822F23E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F23F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F23F0) {
	__imp__sub_822F23F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822F2408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,254
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 254, ctx.xer);
	// bge cr6,0x822f24ac
	if (!ctx.cr6.lt) goto loc_822F24AC;
	// bl 0x822f21f8
	ctx.lr = 0x822F2428;
	sub_822F21F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f24ac
	if (ctx.cr6.eq) goto loc_822F24AC;
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f24ac
	if (ctx.cr6.eq) goto loc_822F24AC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x822f2478
	if (ctx.cr6.eq) goto loc_822F2478;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x822f2490
	goto loc_822F2490;
loc_822F2478:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_822F2490:
	// stfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_822F24AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2400) {
	__imp__sub_822F2400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F24B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F24B4) {
	__imp__sub_822F24B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F24B8) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f253c
	if (ctx.cr6.eq) goto loc_822F253C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x822f2508
	if (ctx.cr6.eq) goto loc_822F2508;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1ec8
	ctx.lr = 0x822F2504;
	sub_822F1EC8(ctx, base);
	// b 0x822f2520
	goto loc_822F2520;
loc_822F2508:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_822F2520:
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_822F253C:
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

PPC_WEAK_FUNC(sub_822F24B8) {
	__imp__sub_822F24B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F2560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,254
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 254, ctx.xer);
	// bge cr6,0x822f259c
	if (!ctx.cr6.lt) goto loc_822F259C;
	// bl 0x822f2190
	ctx.lr = 0x822F257C;
	sub_822F2190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f259c
	if (ctx.cr6.eq) goto loc_822F259C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-5928
	ctx.r4.s64 = ctx.r11.s64 + -5928;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f24b8
	ctx.lr = 0x822F259C;
	sub_822F24B8(ctx, base);
loc_822F259C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2558) {
	__imp__sub_822F2558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F25A4) {
	__imp__sub_822F25A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F25A8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,254
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 254, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// srawi r11,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 5;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r6,r5,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// addi r5,r10,17280
	ctx.r5.s64 = ctx.r10.s64 + 17280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x822f24b8
	sub_822F24B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F25A8) {
	__imp__sub_822F25A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F260C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F260C) {
	__imp__sub_822F260C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2610) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2610) {
	__imp__sub_822F2610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2618) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2618) {
	__imp__sub_822F2618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2628) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2648
	if (ctx.cr6.eq) goto loc_822F2648;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f264c
	if (!ctx.cr6.eq) goto loc_822F264C;
loc_822F2648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F264C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2628) {
	__imp__sub_822F2628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2654) {
	__imp__sub_822F2654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2658) {
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
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r8,r11,-21824
	ctx.r8.s64 = ctx.r11.s64 + -21824;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r8,-46
	ctx.r10.s64 = ctx.r8.s64 + -46;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F267C:
	// addi r9,r11,4094
	ctx.r9.s64 = ctx.r11.s64 + 4094;
	// srawi r7,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 12;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r5,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 12;
	// rlwinm r4,r6,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// rlwinm r7,r3,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// sth r9,54(r10)
	PPC_STORE_U16(ctx.r10.u32 + 54, ctx.r9.u16);
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r5,56(r10)
	ea = 56 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x822f267c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F267C;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,20
	ctx.r11.s64 = ctx.r8.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F26C0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f26c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F26C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,-15108
	ctx.r3.s64 = ctx.r11.s64 + -15108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x822F26DC;
	sub_822A1D20(ctx, base);
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// stw r3,-25912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2658) {
	__imp__sub_822F2658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F26F4) {
	__imp__sub_822F26F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F26F8) {
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
	// lis r31,-31836
	ctx.r31.s64 = -2086404096;
	// lwz r3,-25912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2724
	if (ctx.cr6.eq) goto loc_822F2724;
	// bl 0x822a2468
	ctx.lr = 0x822F271C;
	sub_822A2468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-25912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25912, ctx.r11.u32);
loc_822F2724:
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

PPC_WEAK_FUNC(sub_822F26F8) {
	__imp__sub_822F26F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2738) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2738) {
	__imp__sub_822F2738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2744) {
	__imp__sub_822F2744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2748) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2748) {
	__imp__sub_822F2748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2754) {
	__imp__sub_822F2754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2758) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177148
	ctx.lr = 0x822F2780;
	sub_82177148(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822F2758) {
	__imp__sub_822F2758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F27B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F27B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// sth r6,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r6.u16);
	// beq cr6,0x822f2808
	if (ctx.cr6.eq) goto loc_822F2808;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822F27EC:
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sth r8,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r8.u16);
	// bdnz 0x822f27ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F27EC;
loc_822F2808:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2828
	if (ctx.cr6.eq) goto loc_822F2828;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f282c
	if (!ctx.cr6.eq) goto loc_822F282C;
loc_822F2828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F282C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f289c
	if (ctx.cr6.eq) goto loc_822F289C;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f289c
	if (ctx.cr6.eq) goto loc_822F289C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r10,1108
	ctx.r29.s64 = ctx.r10.s64 + 1108;
loc_822F284C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2874
	if (ctx.cr6.eq) goto loc_822F2874;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f2878
	if (!ctx.cr6.eq) goto loc_822F2878;
loc_822F2874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F2878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2890
	if (ctx.cr6.eq) goto loc_822F2890;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822F2890;
	sub_822830E8(ctx, base);
loc_822F2890:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f284c
	if (!ctx.cr6.eq) goto loc_822F284C;
loc_822F289C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F27B0) {
	__imp__sub_822F27B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F28A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F28A4) {
	__imp__sub_822F28A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F28A8) {
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
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bctrl 
	ctx.lr = 0x822F28CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822F28A8) {
	__imp__sub_822F28A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F28E4) {
	__imp__sub_822F28E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F28E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31836
	ctx.r10.s64 = -2086404096;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-25908(r10)
	PPC_STORE_U8(ctx.r10.u32 + -25908, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F28E8) {
	__imp__sub_822F28E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F28F8) {
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
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bctrl 
	ctx.lr = 0x822F2918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822F28F8) {
	__imp__sub_822F28F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F293C) {
	__imp__sub_822F293C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2940) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8229e0e8
	ctx.lr = 0x822F2964;
	sub_8229E0E8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F2978:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f2978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F2978;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177148
	ctx.lr = 0x822F298C;
	sub_82177148(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
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

PPC_WEAK_FUNC(sub_822F2940) {
	__imp__sub_822F2940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F29C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F29C8) {
	__imp__sub_822F29C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F29D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F29D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822F29F8;
	sub_823DE090(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f2a78
	if (ctx.cr6.eq) goto loc_822F2A78;
loc_822F2A04:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2a6c
	if (ctx.cr6.eq) goto loc_822F2A6C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F2A1C:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm r11,r10,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f2a58
	if (ctx.cr6.eq) goto loc_822F2A58;
loc_822F2A3C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822f2a3c
	if (!ctx.cr6.eq) goto loc_822F2A3C;
loc_822F2A58:
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x822f2a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F2A1C;
loc_822F2A6C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x822f2a04
	if (!ctx.cr0.eq) goto loc_822F2A04;
loc_822F2A78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F29D0) {
	__imp__sub_822F29D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fsubs f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f1,f8,f5,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f0,f3,f9,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f13,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F2A80) {
	__imp__sub_822F2A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F2AF8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stfs f1,220(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2d5c
	if (ctx.cr6.eq) goto loc_822F2D5C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x822fb168
	ctx.lr = 0x822F2B44;
	sub_822FB168(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb168
	ctx.lr = 0x822F2B58;
	sub_822FB168(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2c78
	if (ctx.cr6.eq) goto loc_822F2C78;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bge cr6,0x822f2c78
	if (!ctx.cr6.lt) goto loc_822F2C78;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f2c78
	if (ctx.cr6.eq) goto loc_822F2C78;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2c78
	if (ctx.cr6.eq) goto loc_822F2C78;
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// beq cr6,0x822f2c04
	if (ctx.cr6.eq) goto loc_822F2C04;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,7
	ctx.r7.s64 = 7;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r8,-30336
	ctx.r11.s64 = ctx.r8.s64 + -30336;
	// lvx128 v61,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v60,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghh v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v31,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcuxwfp128 v59,v1,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vcuxwfp128 v58,v31,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vand128 v62,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v61,v58,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// b 0x822f2c4c
	goto loc_822F2C4C;
loc_822F2C04:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v57,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v56,v57,v57,8
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 8));
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r8,-30336
	ctx.r11.s64 = ctx.r8.s64 + -30336;
	// vor128 v13,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v53,v54,v54,8
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 8));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v12,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vcuxwfp128 v51,v12,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghh v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcuxwfp128 v50,v10,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vand128 v62,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v61,v50,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
loc_822F2C4C:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vsubfp128 v0,v61,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvlx128 v49,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v47,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v12,v47,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// b 0x822f2c80
	goto loc_822F2C80;
loc_822F2C78:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822F2C80:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v46,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v45,v0,v46
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,1132(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1132);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmsubs f5,f11,f12,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f10.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmadds f4,f13,f11,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vmulfp128 v42,v43,v45
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v45.f32)));
	// fmadds f3,f5,f8,f7
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f2,f4,f8,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// vspltw128 v41,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// vspltw128 v40,v42,1
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xAA));
	// vspltw128 v39,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x55));
	// stvewx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x822f2a80
	ctx.lr = 0x822F2D1C;
	sub_822F2A80(ctx, base);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_822F2D5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_822F2AF0) {
	__imp__sub_822F2AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2D70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2de4
	if (ctx.cr6.eq) goto loc_822F2DE4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x822fb168
	ctx.lr = 0x822F2DB0;
	sub_822FB168(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,24252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x822f2e48
	goto loc_822F2E48;
loc_822F2DE4:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2ecc
	if (ctx.cr6.eq) goto loc_822F2ECC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fb230
	ctx.lr = 0x822F2DFC;
	sub_822FB230(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,24252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f5,f8,f0,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f2,f4,f0,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_822F2E48:
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,4
	ctx.r7.s64 = 4;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// vmulfp128 v60,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v58,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v57,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// stvewx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_822F2ECC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_822F2D70) {
	__imp__sub_822F2D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2EE4) {
	__imp__sub_822F2EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2EE8) {
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
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2f30
	if (ctx.cr6.eq) goto loc_822F2F30;
	// bl 0x822a2468
	ctx.lr = 0x822F2F0C;
	sub_822A2468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
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
loc_822F2F30:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_822F2EE8) {
	__imp__sub_822F2EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822F2F4C) {
	__imp__sub_822F2F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F2F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822F2F58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// addi r30,r10,-21824
	ctx.r30.s64 = ctx.r10.s64 + -21824;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r3,18(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2fa4
	if (ctx.cr6.eq) goto loc_822F2FA4;
	// bl 0x822a13a0
	ctx.lr = 0x822F2F88;
	sub_822A13A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,18(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// addi r4,r11,25
	ctx.r4.s64 = ctx.r11.s64 + 25;
	// bl 0x822a2038
	ctx.lr = 0x822F2F9C;
	sub_822A2038(ctx, base);
	// sth r27,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r27.u16);
	// b 0x822f2fc8
	goto loc_822F2FC8;
loc_822F2FA4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2fc8
	if (ctx.cr6.eq) goto loc_822F2FC8;
loc_822F2FB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x822f2f50
	ctx.lr = 0x822F2FBC;
	sub_822F2F50(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f2fb0
	if (!ctx.cr6.eq) goto loc_822F2FB0;
loc_822F2FC8:
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x822f3000
	if (!ctx.cr6.eq) goto loc_822F3000;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2ff8
	if (ctx.cr6.eq) goto loc_822F2FF8;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// sthx r11,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// b 0x822f300c
	goto loc_822F300C;
loc_822F2FF8:
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// b 0x822f300c
	goto loc_822F300C;
loc_822F3000:
	// mulli r11,r9,56
	ctx.r11.s64 = ctx.r9.s64 * 56;
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// sthx r8,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
loc_822F300C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f3020
	if (ctx.cr6.eq) goto loc_822F3020;
	// mulli r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 * 56;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_822F3020:
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3034
	if (ctx.cr6.eq) goto loc_822F3034;
	// bl 0x822a2468
	ctx.lr = 0x822F3030;
	sub_822A2468(ctx, base);
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
loc_822F3034:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r27,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// li r3,13
	ctx.r3.s64 = 13;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// bl 0x822ec4e8
	ctx.lr = 0x822F3048;
	sub_822EC4E8(ctx, base);
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// li r3,13
	ctx.r3.s64 = 13;
	// sth r10,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// lhz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mulli r7,r8,56
	ctx.r7.s64 = ctx.r8.s64 * 56;
	// sthx r11,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u16);
	// sth r11,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r11.u16);
	// bl 0x822ec500
	ctx.lr = 0x822F3070;
	sub_822EC500(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F2F50) {
	__imp__sub_822F2F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822F3080;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// addi r30,r10,-21824
	ctx.r30.s64 = ctx.r10.s64 + -21824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822f30bc
	if (!ctx.cr6.eq) goto loc_822F30BC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822F30BC:
	// lhz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f30f0
	if (ctx.cr6.eq) goto loc_822F30F0;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
loc_822F30CC:
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822f3078
	ctx.lr = 0x822F30E0;
	sub_822F3078(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// bne cr6,0x822f30cc
	if (!ctx.cr6.eq) goto loc_822F30CC;
loc_822F30F0:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f311c
	if (!ctx.cr6.eq) goto loc_822F311C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822f311c
	if (!ctx.cr6.eq) goto loc_822F311C;
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x822f311c
	if (!ctx.cr6.eq) goto loc_822F311C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f2f50
	ctx.lr = 0x822F311C;
	sub_822F2F50(ctx, base);
loc_822F311C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F3078) {
	__imp__sub_822F3078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822F3130;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x822F3138;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31841
	ctx.r11.s64 = -2086731776;
	// mulli r10,r4,56
	ctx.r10.s64 = ctx.r4.s64 * 56;
	// addi r30,r11,-21824
	ctx.r30.s64 = ctx.r11.s64 + -21824;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f3174
	if (ctx.cr6.eq) goto loc_822F3174;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x822F3170;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822F3174:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f29,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// beq cr6,0x822f31ec
	if (ctx.cr6.eq) goto loc_822F31EC;
loc_822F3190:
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x822f31c4
	if (ctx.cr6.eq) goto loc_822F31C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f3128
	ctx.lr = 0x822F31AC;
	sub_822F3128(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// beq cr6,0x822f31c4
	if (ctx.cr6.eq) goto loc_822F31C4;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f31,f30
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f28,f13,f31,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f28.f64));
loc_822F31C4:
	// lhz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822f3190
	if (!ctx.cr6.eq) goto loc_822F3190;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// beq cr6,0x822f31ec
	if (ctx.cr6.eq) goto loc_822F31EC;
	// fdivs f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 / ctx.f30.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x822F31E8;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822F31EC:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x822F31FC;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822F3128) {
	__imp__sub_822F3128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822F3200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,80(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r8,29(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lfs f0,5488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x822f32b0
	if (ctx.cr6.lt) goto loc_822F32B0;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F3238:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x822f3254
	if (ctx.cr6.lt) goto loc_822F3254;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f3254
	if (!ctx.cr6.lt) goto loc_822F3254;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822F3254:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x822f3270
	if (ctx.cr6.lt) goto loc_822F3270;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f3270
	if (!ctx.cr6.lt) goto loc_822F3270;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_822F3270:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x822f328c
	if (ctx.cr6.lt) goto loc_822F328C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f328c
	if (!ctx.cr6.lt) goto loc_822F328C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_822F328C:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x822f32a8
	if (ctx.cr6.lt) goto loc_822F32A8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f32a8
	if (!ctx.cr6.lt) goto loc_822F32A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_822F32A8:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x822f3238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F3238;
loc_822F32B0:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822f32e4
	if (!ctx.cr6.lt) goto loc_822F32E4;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F32C0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x822f32dc
	if (ctx.cr6.lt) goto loc_822F32DC;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822f32dc
	if (!ctx.cr6.lt) goto loc_822F32DC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822F32DC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x822f32c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F32C0;
loc_822F32E4:
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822F3200) {
	__imp__sub_822F3200(ctx, base);
}

