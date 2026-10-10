#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823372EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823372EC) {
	__imp__sub_823372EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823372F0) {
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
	ctx.lr = 0x8233730C;
	sub_8236A638(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// addi r7,r9,-1400
	ctx.r7.s64 = ctx.r9.s64 + -1400;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
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
	// bne cr6,0x8233733c
	if (!ctx.cr6.eq) goto loc_8233733C;
	// bl 0x82337118
	ctx.lr = 0x8233733C;
	sub_82337118(ctx, base);
loc_8233733C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823372F0) {
	__imp__sub_823372F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233734C) {
	__imp__sub_8233734C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337350) {
	PPC_FUNC_PROLOGUE();
	// b 0x821fcfc0
	sub_821FCFC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337350) {
	__imp__sub_82337350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337354) {
	__imp__sub_82337354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337358) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-22504
	ctx.r11.s64 = ctx.r11.s64 + -22504;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82337398
	if (!ctx.cr6.gt) goto loc_82337398;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x823373a0
	goto loc_823373A0;
loc_82337398:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_823373A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823373d0
	if (!ctx.cr6.eq) goto loc_823373D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24976
	ctx.r4.s64 = ctx.r11.s64 + -24976;
	// bl 0x82280900
	ctx.lr = 0x823373BC;
	sub_82280900(ctx, base);
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
loc_823373D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-24984
	ctx.r4.s64 = ctx.r11.s64 + -24984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7f80
	ctx.lr = 0x823373E4;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823374f0
	if (!ctx.cr6.eq) goto loc_823374F0;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82337404
	if (ctx.cr6.eq) goto loc_82337404;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x823374f0
	if (!ctx.cr6.eq) goto loc_823374F0;
loc_82337404:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x82337414;
	sub_822E7E98(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8233741C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233741c
	if (!ctx.cr6.eq) goto loc_8233741C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82337438:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// addi r31,r11,-25116
	ctx.r31.s64 = ctx.r11.s64 + -25116;
	// blt cr6,0x82337464
	if (ctx.cr6.lt) goto loc_82337464;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x822e8058
	ctx.lr = 0x8233745C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82337474
	if (ctx.cr6.eq) goto loc_82337474;
loc_82337464:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x82337474;
	sub_822E8280(ctx, base);
loc_82337474:
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dfb30
	ctx.lr = 0x82337480;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823374a0
	if (ctx.cr6.eq) goto loc_823374A0;
	// li r31,47
	ctx.r31.s64 = 47;
loc_8233748C:
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x823dfb30
	ctx.lr = 0x82337498;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233748c
	if (!ctx.cr6.eq) goto loc_8233748C;
loc_823374A0:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-1400
	ctx.r31.s64 = ctx.r11.s64 + -1400;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822800f0
	ctx.lr = 0x823374B8;
	sub_822800F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82337538
	if (!ctx.cr6.lt) goto loc_82337538;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25012
	ctx.r4.s64 = ctx.r11.s64 + -25012;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x823374D4;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
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
loc_823374F0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-25020
	ctx.r5.s64 = ctx.r11.s64 + -25020;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82337508;
	sub_822E8368(ctx, base);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x82337438
	if (ctx.cr6.lt) goto loc_82337438;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25052
	ctx.r4.s64 = ctx.r11.s64 + -25052;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82337524;
	sub_82280900(ctx, base);
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
loc_82337538:
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lis r7,-32019
	ctx.r7.s64 = -2098397184;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,-9384(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9384);
	// stb r11,27120(r7)
	PPC_STORE_U8(ctx.r7.u32 + 27120, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8233756c
	if (!ctx.cr6.eq) goto loc_8233756C;
	// bl 0x82337118
	ctx.lr = 0x8233756C;
	sub_82337118(ctx, base);
loc_8233756C:
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

PPC_WEAK_FUNC(sub_82337358) {
	__imp__sub_82337358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337580) {
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
	// bl 0x82141340
	ctx.lr = 0x82337598;
	sub_82141340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213af90
	ctx.lr = 0x823375A0;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823375c4
	if (ctx.cr6.eq) goto loc_823375C4;
	// bl 0x822c3e30
	ctx.lr = 0x823375B0;
	sub_822C3E30(ctx, base);
	// lis r5,28
	ctx.r5.s64 = 1835008;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230eca0
	ctx.lr = 0x823375C0;
	sub_8230ECA0(ctx, base);
	// bl 0x822c3e98
	ctx.lr = 0x823375C4;
	sub_822C3E98(ctx, base);
loc_823375C4:
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

PPC_WEAK_FUNC(sub_82337580) {
	__imp__sub_82337580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823375D8) {
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
	// bl 0x82141340
	ctx.lr = 0x823375F0;
	sub_82141340(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x82337604;
	sub_822E1F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213af90
	ctx.lr = 0x8233760C;
	sub_8213AF90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82337664
	if (ctx.cr6.eq) goto loc_82337664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131f68
	ctx.lr = 0x82337620;
	sub_82131F68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233764c
	if (ctx.cr6.eq) goto loc_8233764C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-24936
	ctx.r4.s64 = ctx.r11.s64 + -24936;
	// bl 0x82280900
	ctx.lr = 0x82337638;
	sub_82280900(ctx, base);
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
loc_8233764C:
	// bl 0x822c3e30
	ctx.lr = 0x82337650;
	sub_822C3E30(ctx, base);
	// lis r5,28
	ctx.r5.s64 = 1835008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230eca0
	ctx.lr = 0x82337660;
	sub_8230ECA0(ctx, base);
	// bl 0x822c3e98
	ctx.lr = 0x82337664;
	sub_822C3E98(ctx, base);
loc_82337664:
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

PPC_WEAK_FUNC(sub_823375D8) {
	__imp__sub_823375D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82337680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x8233769C;
	sub_8236A638(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-32019
	ctx.r9.s64 = -2098397184;
	// addi r31,r11,-1400
	ctx.r31.s64 = ctx.r11.s64 + -1400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// stb r10,27120(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27120, ctx.r10.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,13960(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13960);
	// bl 0x822e7e98
	ctx.lr = 0x823376D0;
	sub_822E7E98(ctx, base);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r7,-31440
	ctx.r5.s64 = ctx.r7.s64 + -31440;
	// ori r4,r6,57308
	ctx.r4.u64 = ctx.r6.u64 | 57308;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwzx r4,r5,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// bl 0x8223e178
	ctx.lr = 0x823376EC;
	sub_8223E178(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-24836
	ctx.r30.s64 = ctx.r11.s64 + -24836;
	// bne cr6,0x82337748
	if (!ctx.cr6.eq) goto loc_82337748;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8223cd58
	ctx.lr = 0x82337708;
	sub_8223CD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337748
	if (!ctx.cr6.eq) goto loc_82337748;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82337740
	if (ctx.cr6.eq) goto loc_82337740;
	// bl 0x82337228
	ctx.lr = 0x82337738;
	sub_82337228(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82337740:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223c2a8
	ctx.lr = 0x82337748;
	sub_8223C2A8(ctx, base);
loc_82337748:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82337770
	if (!ctx.cr6.eq) goto loc_82337770;
	// bl 0x82337118
	ctx.lr = 0x82337760;
	sub_82337118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82337770
	if (!ctx.cr6.eq) goto loc_82337770;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223c2a8
	ctx.lr = 0x82337770;
	sub_8223C2A8(ctx, base);
loc_82337770:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337678) {
	__imp__sub_82337678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337778) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82337678
	sub_82337678(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337778) {
	__imp__sub_82337778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337784) {
	__imp__sub_82337784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337788) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82337678
	sub_82337678(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337788) {
	__imp__sub_82337788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337794) {
	__imp__sub_82337794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337798) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233784c
	if (ctx.cr6.eq) goto loc_8233784C;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8233784c
	if (!ctx.cr6.eq) goto loc_8233784C;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823377e8
	if (!ctx.cr6.eq) goto loc_823377E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-24768
	ctx.r4.s64 = ctx.r11.s64 + -24768;
	// b 0x82337854
	goto loc_82337854;
loc_823377E8:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82337808
	if (ctx.cr6.eq) goto loc_82337808;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-24796
	ctx.r4.s64 = ctx.r11.s64 + -24796;
	// b 0x82337854
	goto loc_82337854;
loc_82337808:
	// bl 0x8233ed30
	ctx.lr = 0x8233780C;
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
	// addi r3,r9,-24812
	ctx.r3.s64 = ctx.r9.s64 + -24812;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8233eaf0
	ctx.lr = 0x82337834;
	sub_8233EAF0(ctx, base);
	// bl 0x8233ed18
	ctx.lr = 0x82337838;
	sub_8233ED18(ctx, base);
	// bl 0x8233ec40
	ctx.lr = 0x8233783C;
	sub_8233EC40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8233784C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
loc_82337854:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8233785C;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82337798) {
	__imp__sub_82337798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233786C) {
	__imp__sub_8233786C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337870) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82337678
	sub_82337678(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337870) {
	__imp__sub_82337870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233787C) {
	__imp__sub_8233787C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337880) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a4e90
	sub_822A4E90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337880) {
	__imp__sub_82337880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337884) {
	__imp__sub_82337884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337888) {
	PPC_FUNC_PROLOGUE();
	// b 0x8229d828
	sub_8229D828(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337888) {
	__imp__sub_82337888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233788C) {
	__imp__sub_8233788C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337890) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f53f8
	sub_821F53F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337890) {
	__imp__sub_82337890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82337894) {
	__imp__sub_82337894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337898) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823379ec
	if (ctx.cr6.eq) goto loc_823379EC;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823379ec
	if (!ctx.cr6.eq) goto loc_823379EC;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823378f0
	if (!ctx.cr6.eq) goto loc_823378F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-24768
	ctx.r4.s64 = ctx.r11.s64 + -24768;
	// b 0x823379f4
	goto loc_823379F4;
loc_823378F0:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82337910
	if (ctx.cr6.eq) goto loc_82337910;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-24796
	ctx.r4.s64 = ctx.r11.s64 + -24796;
	// b 0x823379f4
	goto loc_823379F4;
loc_82337910:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-2484
	ctx.r4.s64 = ctx.r11.s64 + -2484;
	// bl 0x8227d380
	ctx.lr = 0x82337924;
	sub_8227D380(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,63052
	ctx.r10.u64 = ctx.r11.u64 | 63052;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337944
	if (!ctx.cr6.eq) goto loc_82337944;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-24716
	ctx.r4.s64 = ctx.r11.s64 + -24716;
	// b 0x823379f4
	goto loc_823379F4;
loc_82337944:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r11,-2484
	ctx.r3.s64 = ctx.r11.s64 + -2484;
	// bl 0x823e2370
	ctx.lr = 0x82337954;
	sub_823E2370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337974
	if (ctx.cr6.eq) goto loc_82337974;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r11,-2484
	ctx.r3.s64 = ctx.r11.s64 + -2484;
	// bl 0x823e2370
	ctx.lr = 0x8233796C;
	sub_823E2370(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82337974:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x8227d380
	ctx.lr = 0x82337988;
	sub_8227D380(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-436
	ctx.r4.s64 = ctx.r11.s64 + -436;
	// bl 0x8227d380
	ctx.lr = 0x8233799C;
	sub_8227D380(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,588
	ctx.r4.s64 = ctx.r11.s64 + 588;
	// bl 0x8227d380
	ctx.lr = 0x823379B0;
	sub_8227D380(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r9,-436
	ctx.r5.s64 = ctx.r9.s64 + -436;
	// addi r4,r10,-1460
	ctx.r4.s64 = ctx.r10.s64 + -1460;
	// addi r3,r11,-2484
	ctx.r3.s64 = ctx.r11.s64 + -2484;
	// bl 0x8233eaf0
	ctx.lr = 0x823379D8;
	sub_8233EAF0(ctx, base);
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
loc_823379EC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
loc_823379F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x823379FC;
	sub_82280900(ctx, base);
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

PPC_WEAK_FUNC(sub_82337898) {
	__imp__sub_82337898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337A10) {
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
	// bl 0x8223e3e0
	ctx.lr = 0x82337A20;
	sub_8223E3E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337a48
	if (ctx.cr6.eq) goto loc_82337A48;
	// bl 0x8223e408
	ctx.lr = 0x82337A2C;
	sub_8223E408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82337a48
	if (ctx.cr6.eq) goto loc_82337A48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x82337A44;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x82337A48;
	sub_8223C7A0(ctx, base);
loc_82337A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82337A10) {
	__imp__sub_82337A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82337A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82337A60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r10,-360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82338024
	if (!ctx.cr6.eq) goto loc_82338024;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r10,-360(r11)
	PPC_STORE_U32(ctx.r11.u32 + -360, ctx.r10.u32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r31,r9,-24352
	ctx.r31.s64 = ctx.r9.s64 + -24352;
	// addi r5,r8,-380
	ctx.r5.s64 = ctx.r8.s64 + -380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-11984
	ctx.r4.s64 = ctx.r7.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337A9C;
	sub_8227DA10(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// addi r5,r6,-400
	ctx.r5.s64 = ctx.r6.s64 + -400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,29328
	ctx.r4.s64 = ctx.r4.s64 + 29328;
	// bl 0x8227d138
	ctx.lr = 0x82337AB4;
	sub_8227D138(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r31,r3,-25108
	ctx.r31.s64 = ctx.r3.s64 + -25108;
	// addi r5,r11,-420
	ctx.r5.s64 = ctx.r11.s64 + -420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337AD4;
	sub_8227DA10(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r5,r9,-440
	ctx.r5.s64 = ctx.r9.s64 + -440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,29424
	ctx.r4.s64 = ctx.r8.s64 + 29424;
	// bl 0x8227d138
	ctx.lr = 0x82337AEC;
	sub_8227D138(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r31,r7,-24812
	ctx.r31.s64 = ctx.r7.s64 + -24812;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-460
	ctx.r5.s64 = ctx.r6.s64 + -460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337B0C;
	sub_8227DA10(ctx, base);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r5,r3,-480
	ctx.r5.s64 = ctx.r3.s64 + -480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30616
	ctx.r4.s64 = ctx.r11.s64 + 30616;
	// bl 0x8227d138
	ctx.lr = 0x82337B24;
	sub_8227D138(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r31,r10,-24380
	ctx.r31.s64 = ctx.r10.s64 + -24380;
	// addi r5,r9,-500
	ctx.r5.s64 = ctx.r9.s64 + -500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11984
	ctx.r4.s64 = ctx.r8.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337B44;
	sub_8227DA10(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// addi r5,r7,-520
	ctx.r5.s64 = ctx.r7.s64 + -520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,30832
	ctx.r4.s64 = ctx.r6.s64 + 30832;
	// bl 0x8227d138
	ctx.lr = 0x82337B5C;
	sub_8227D138(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// addi r31,r5,-24388
	ctx.r31.s64 = ctx.r5.s64 + -24388;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r5,r4,-540
	ctx.r5.s64 = ctx.r4.s64 + -540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11984
	ctx.r4.s64 = ctx.r11.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337B7C;
	sub_8227DA10(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r5,r10,-560
	ctx.r5.s64 = ctx.r10.s64 + -560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,28072
	ctx.r4.s64 = ctx.r9.s64 + 28072;
	// bl 0x8227d138
	ctx.lr = 0x82337B94;
	sub_8227D138(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r30,r8,-24392
	ctx.r30.s64 = ctx.r8.s64 + -24392;
	// addi r5,r7,-580
	ctx.r5.s64 = ctx.r7.s64 + -580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,-11984
	ctx.r4.s64 = ctx.r6.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337BB4;
	sub_8227DA10(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,-600
	ctx.r5.s64 = ctx.r5.s64 + -600;
	// addi r4,r4,28072
	ctx.r4.s64 = ctx.r4.s64 + 28072;
	// bl 0x8227d138
	ctx.lr = 0x82337BCC;
	sub_8227D138(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r29,r3,-24400
	ctx.r29.s64 = ctx.r3.s64 + -24400;
	// addi r5,r11,-620
	ctx.r5.s64 = ctx.r11.s64 + -620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337BEC;
	sub_8227DA10(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r9,-640
	ctx.r5.s64 = ctx.r9.s64 + -640;
	// addi r4,r8,28072
	ctx.r4.s64 = ctx.r8.s64 + 28072;
	// bl 0x8227d138
	ctx.lr = 0x82337C04;
	sub_8227D138(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r28,r7,-24412
	ctx.r28.s64 = ctx.r7.s64 + -24412;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-660
	ctx.r5.s64 = ctx.r6.s64 + -660;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337C24;
	sub_8227DA10(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-680
	ctx.r5.s64 = ctx.r11.s64 + -680;
	// addi r4,r10,28072
	ctx.r4.s64 = ctx.r10.s64 + 28072;
	// bl 0x8227d138
	ctx.lr = 0x82337C3C;
	sub_8227D138(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r27,r9,-24420
	ctx.r27.s64 = ctx.r9.s64 + -24420;
	// addi r26,r8,-24428
	ctx.r26.s64 = ctx.r8.s64 + -24428;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227dae8
	ctx.lr = 0x82337C5C;
	sub_8227DAE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227dae8
	ctx.lr = 0x82337C6C;
	sub_8227DAE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227dae8
	ctx.lr = 0x82337C7C;
	sub_8227DAE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227dae8
	ctx.lr = 0x82337C8C;
	sub_8227DAE8(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r31,r7,-24440
	ctx.r31.s64 = ctx.r7.s64 + -24440;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-700
	ctx.r5.s64 = ctx.r6.s64 + -700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337CAC;
	sub_8227DA10(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-720
	ctx.r5.s64 = ctx.r11.s64 + -720;
	// addi r4,r10,29528
	ctx.r4.s64 = ctx.r10.s64 + 29528;
	// bl 0x8227d138
	ctx.lr = 0x82337CC4;
	sub_8227D138(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r5,r9,-24444
	ctx.r5.s64 = ctx.r9.s64 + -24444;
	// addi r4,r8,-24984
	ctx.r4.s64 = ctx.r8.s64 + -24984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227dae8
	ctx.lr = 0x82337CDC;
	sub_8227DAE8(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r31,r7,-13124
	ctx.r31.s64 = ctx.r7.s64 + -13124;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-740
	ctx.r5.s64 = ctx.r6.s64 + -740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337CFC;
	sub_8227DA10(ctx, base);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r5,r3,-760
	ctx.r5.s64 = ctx.r3.s64 + -760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29520
	ctx.r4.s64 = ctx.r11.s64 + 29520;
	// bl 0x8227d138
	ctx.lr = 0x82337D14;
	sub_8227D138(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r31,r10,-24464
	ctx.r31.s64 = ctx.r10.s64 + -24464;
	// addi r5,r9,-780
	ctx.r5.s64 = ctx.r9.s64 + -780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11984
	ctx.r4.s64 = ctx.r8.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337D34;
	sub_8227DA10(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// addi r5,r7,-800
	ctx.r5.s64 = ctx.r7.s64 + -800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,30168
	ctx.r4.s64 = ctx.r6.s64 + 30168;
	// bl 0x8227d138
	ctx.lr = 0x82337D4C;
	sub_8227D138(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// addi r31,r5,-24492
	ctx.r31.s64 = ctx.r5.s64 + -24492;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r5,r4,-820
	ctx.r5.s64 = ctx.r4.s64 + -820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11984
	ctx.r4.s64 = ctx.r11.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337D6C;
	sub_8227DA10(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r5,r10,-840
	ctx.r5.s64 = ctx.r10.s64 + -840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,30080
	ctx.r4.s64 = ctx.r9.s64 + 30080;
	// bl 0x8227d138
	ctx.lr = 0x82337D84;
	sub_8227D138(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r31,r8,-24512
	ctx.r31.s64 = ctx.r8.s64 + -24512;
	// addi r5,r7,-860
	ctx.r5.s64 = ctx.r7.s64 + -860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-11984
	ctx.r4.s64 = ctx.r6.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337DA4;
	sub_8227DA10(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// addi r5,r5,-880
	ctx.r5.s64 = ctx.r5.s64 + -880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,30584
	ctx.r4.s64 = ctx.r4.s64 + 30584;
	// bl 0x8227d138
	ctx.lr = 0x82337DBC;
	sub_8227D138(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r31,r3,-24544
	ctx.r31.s64 = ctx.r3.s64 + -24544;
	// addi r5,r11,-900
	ctx.r5.s64 = ctx.r11.s64 + -900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337DDC;
	sub_8227DA10(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r5,r9,-920
	ctx.r5.s64 = ctx.r9.s64 + -920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,30600
	ctx.r4.s64 = ctx.r8.s64 + 30600;
	// bl 0x8227d138
	ctx.lr = 0x82337DF4;
	sub_8227D138(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r31,r7,-24556
	ctx.r31.s64 = ctx.r7.s64 + -24556;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-940
	ctx.r5.s64 = ctx.r6.s64 + -940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337E14;
	sub_8227DA10(ctx, base);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r5,r3,-960
	ctx.r5.s64 = ctx.r3.s64 + -960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x8227d138
	ctx.lr = 0x82337E2C;
	sub_8227D138(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r5,r10,-980
	ctx.r5.s64 = ctx.r10.s64 + -980;
	// addi r31,r8,-24568
	ctx.r31.s64 = ctx.r8.s64 + -24568;
	// addi r4,r9,-11984
	ctx.r4.s64 = ctx.r9.s64 + -11984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227da10
	ctx.lr = 0x82337E4C;
	sub_8227DA10(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r7,-1000
	ctx.r5.s64 = ctx.r7.s64 + -1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,18600
	ctx.r4.s64 = ctx.r6.s64 + 18600;
	// bl 0x8227d138
	ctx.lr = 0x82337E64;
	sub_8227D138(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// addi r31,r5,-24584
	ctx.r31.s64 = ctx.r5.s64 + -24584;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r5,r4,-1020
	ctx.r5.s64 = ctx.r4.s64 + -1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11984
	ctx.r4.s64 = ctx.r11.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337E84;
	sub_8227DA10(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r5,r10,-1040
	ctx.r5.s64 = ctx.r10.s64 + -1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,30864
	ctx.r4.s64 = ctx.r9.s64 + 30864;
	// bl 0x8227d138
	ctx.lr = 0x82337E9C;
	sub_8227D138(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r31,r8,-24600
	ctx.r31.s64 = ctx.r8.s64 + -24600;
	// addi r5,r7,-1060
	ctx.r5.s64 = ctx.r7.s64 + -1060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-11984
	ctx.r4.s64 = ctx.r6.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337EBC;
	sub_8227DA10(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// addi r5,r5,-1080
	ctx.r5.s64 = ctx.r5.s64 + -1080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,27816
	ctx.r4.s64 = ctx.r4.s64 + 27816;
	// bl 0x8227d138
	ctx.lr = 0x82337ED4;
	sub_8227D138(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r31,r3,-24620
	ctx.r31.s64 = ctx.r3.s64 + -24620;
	// addi r5,r11,-1100
	ctx.r5.s64 = ctx.r11.s64 + -1100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337EF4;
	sub_8227DA10(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r5,r9,-1120
	ctx.r5.s64 = ctx.r9.s64 + -1120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,27824
	ctx.r4.s64 = ctx.r8.s64 + 27824;
	// bl 0x8227d138
	ctx.lr = 0x82337F0C;
	sub_8227D138(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// addi r31,r7,-24636
	ctx.r31.s64 = ctx.r7.s64 + -24636;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r6,-1140
	ctx.r5.s64 = ctx.r6.s64 + -1140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-11984
	ctx.r4.s64 = ctx.r4.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337F2C;
	sub_8227DA10(ctx, base);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r5,r3,-1160
	ctx.r5.s64 = ctx.r3.s64 + -1160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27832
	ctx.r4.s64 = ctx.r11.s64 + 27832;
	// bl 0x8227d138
	ctx.lr = 0x82337F44;
	sub_8227D138(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r31,r10,-24652
	ctx.r31.s64 = ctx.r10.s64 + -24652;
	// addi r5,r9,-1180
	ctx.r5.s64 = ctx.r9.s64 + -1180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11984
	ctx.r4.s64 = ctx.r8.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337F64;
	sub_8227DA10(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// addi r5,r7,-1200
	ctx.r5.s64 = ctx.r7.s64 + -1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,27840
	ctx.r4.s64 = ctx.r6.s64 + 27840;
	// bl 0x8227d138
	ctx.lr = 0x82337F7C;
	sub_8227D138(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r31,r4,-24664
	ctx.r31.s64 = ctx.r4.s64 + -24664;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r5,r5,-1220
	ctx.r5.s64 = ctx.r5.s64 + -1220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11984
	ctx.r4.s64 = ctx.r11.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337F9C;
	sub_8227DA10(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r5,r10,-1240
	ctx.r5.s64 = ctx.r10.s64 + -1240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,30856
	ctx.r4.s64 = ctx.r9.s64 + 30856;
	// bl 0x8227d138
	ctx.lr = 0x82337FB4;
	sub_8227D138(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r31,r8,-24672
	ctx.r31.s64 = ctx.r8.s64 + -24672;
	// addi r5,r7,-1260
	ctx.r5.s64 = ctx.r7.s64 + -1260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-11984
	ctx.r4.s64 = ctx.r6.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x82337FD4;
	sub_8227DA10(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// addi r5,r5,-1280
	ctx.r5.s64 = ctx.r5.s64 + -1280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,30872
	ctx.r4.s64 = ctx.r4.s64 + 30872;
	// bl 0x8227d138
	ctx.lr = 0x82337FEC;
	sub_8227D138(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r31,r3,-24692
	ctx.r31.s64 = ctx.r3.s64 + -24692;
	// addi r5,r11,-1300
	ctx.r5.s64 = ctx.r11.s64 + -1300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x8233800C;
	sub_8227DA10(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r5,r9,-1320
	ctx.r5.s64 = ctx.r9.s64 + -1320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,31248
	ctx.r4.s64 = ctx.r8.s64 + 31248;
	// bl 0x8227d138
	ctx.lr = 0x82338024;
	sub_8227D138(ctx, base);
loc_82338024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82337A58) {
	__imp__sub_82337A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233802C) {
	__imp__sub_8233802C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338030) {
	__imp__sub_82338030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338034) {
	__imp__sub_82338034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82338040;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-24324
	ctx.r4.s64 = ctx.r11.s64 + -24324;
	// bl 0x82280a68
	ctx.lr = 0x82338054;
	sub_82280A68(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r5,11528
	ctx.r5.s64 = 11528;
	// addi r27,r11,-29824
	ctx.r27.s64 = ctx.r11.s64 + -29824;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x8233806C;
	sub_823DE090(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// stw r11,11564(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11564, ctx.r11.u32);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r24,r10,16
	ctx.r24.s64 = ctx.r10.s64 + 16;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r27,4632
	ctx.r31.s64 = ctx.r27.s64 + 4632;
	// li r28,4
	ctx.r28.s64 = 4;
	// lis r23,-32190
	ctx.r23.s64 = -2109603840;
	// lis r21,-32166
	ctx.r21.s64 = -2108030976;
	// lis r25,-31833
	ctx.r25.s64 = -2086207488;
	// addi r26,r11,-31440
	ctx.r26.s64 = ctx.r11.s64 + -31440;
	// addi r22,r10,-24336
	ctx.r22.s64 = ctx.r10.s64 + -24336;
loc_823380AC:
	// lbz r10,29088(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823380d8
	if (!ctx.cr6.eq) goto loc_823380D8;
	// lwz r11,-32312(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -32312);
	// subfc r9,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x823380e4
	goto loc_823380E4;
loc_823380D8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823380E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233813c
	if (ctx.cr6.eq) goto loc_8233813C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,-4624
	ctx.r3.s64 = ctx.r31.s64 + -4624;
	// ori r10,r11,57292
	ctx.r10.u64 = ctx.r11.u64 | 57292;
	// lwzx r11,r26,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r9,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r9.u32);
	// bl 0x8233ddb0
	ctx.lr = 0x8233810C;
	sub_8233DDB0(ctx, base);
	// lwz r11,17064(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17064);
	// stw r28,-4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4624, ctx.r28.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233813c
	if (!ctx.cr6.lt) goto loc_8233813C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8233812C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822e7e98
	ctx.lr = 0x8233813C;
	sub_822E7E98(ctx, base);
loc_8233813C:
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// addi r11,r27,16160
	ctx.r11.s64 = ctx.r27.s64 + 16160;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r24,r24,9780
	ctx.r24.s64 = ctx.r24.s64 + 9780;
	// addi r29,r29,624
	ctx.r29.s64 = ctx.r29.s64 + 624;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823380ac
	if (ctx.cr6.lt) goto loc_823380AC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338038) {
	__imp__sub_82338038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338160) {
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
	// bl 0x8233fb68
	ctx.lr = 0x82338170;
	sub_8233FB68(ctx, base);
	// bl 0x822db948
	ctx.lr = 0x82338174;
	sub_822DB948(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// addi r3,r11,2106
	ctx.r3.s64 = ctx.r11.s64 + 2106;
	// bl 0x82134d20
	ctx.lr = 0x82338184;
	sub_82134D20(ctx, base);
	// bl 0x822db948
	ctx.lr = 0x82338188;
	sub_822DB948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338160) {
	__imp__sub_82338160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338198) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,5764
	ctx.r10.s64 = 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r30,r8,r10
	ctx.r30.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7040
	ctx.lr = 0x823381D0;
	sub_821E7040(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x823381D4;
	sub_821FC2B8(ctx, base);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r3,5696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5696, ctx.r3.u32);
	// addi r5,r7,-31440
	ctx.r5.s64 = ctx.r7.s64 + -31440;
	// ori r4,r6,57292
	ctx.r4.u64 = ctx.r6.u64 | 57292;
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82338198) {
	__imp__sub_82338198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233822c
	if (ctx.cr6.eq) goto loc_8233822C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8233822C:
	// b 0x821a1110
	sub_821A1110(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338210) {
	__imp__sub_82338210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338230) {
	PPC_FUNC_PROLOGUE();
	// b 0x821eff60
	sub_821EFF60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338230) {
	__imp__sub_82338230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338234) {
	__imp__sub_82338234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338238) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mulli r10,r3,5764
	ctx.r10.s64 = ctx.r3.s64 * 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82338268;
	sub_823DE1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e4508
	ctx.lr = 0x82338270;
	sub_821E4508(ctx, base);
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

PPC_WEAK_FUNC(sub_82338238) {
	__imp__sub_82338238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338284) {
	__imp__sub_82338284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// lwz r11,11556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,11556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11556, ctx.r3.u32);
	// b 0x823100f8
	sub_823100F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338288) {
	__imp__sub_82338288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823382A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// lwz r11,11560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11560);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,11560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11560, ctx.r3.u32);
	// b 0x82310100
	sub_82310100(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823382A0) {
	__imp__sub_823382A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823382B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823382C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82338324
	if (ctx.cr6.eq) goto loc_82338324;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_823382F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228a208
	ctx.lr = 0x82338308;
	sub_8228A208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82338330
	if (!ctx.cr6.eq) goto loc_82338330;
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19576
	ctx.r11.s64 = ctx.r29.s64 + 19576;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823382f0
	if (ctx.cr6.lt) goto loc_823382F0;
loc_82338324:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82338330:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823382B8) {
	__imp__sub_823382B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233833C) {
	__imp__sub_8233833C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r3,624(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 624);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338340) {
	__imp__sub_82338340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233834C) {
	__imp__sub_8233834C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338350) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-350(r10)
	PPC_STORE_U8(ctx.r10.u32 + -350, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338350) {
	__imp__sub_82338350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,17604(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17604, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338360) {
	__imp__sub_82338360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338370) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,17604(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17604, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338370) {
	__imp__sub_82338370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,627(r10)
	PPC_STORE_U8(ctx.r10.u32 + 627, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338380) {
	__imp__sub_82338380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338390) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,627(r10)
	PPC_STORE_U8(ctx.r10.u32 + 627, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338390) {
	__imp__sub_82338390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823383A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r3,627(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 627);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823383A0) {
	__imp__sub_823383A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823383AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823383AC) {
	__imp__sub_823383AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823383B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-31532(r10)
	PPC_STORE_U8(ctx.r10.u32 + -31532, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823383B0) {
	__imp__sub_823383B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823383C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-31532(r10)
	PPC_STORE_U8(ctx.r10.u32 + -31532, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823383C0) {
	__imp__sub_823383C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823383D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// lbz r9,29088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233840c
	if (!ctx.cr6.eq) goto loc_8233840C;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,-32312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// b 0x8233841c
	goto loc_8233841C;
loc_8233840C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8233841C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82338444
	if (ctx.cr6.eq) goto loc_82338444;
	// lwz r10,9796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82338444
	if (ctx.cr6.eq) goto loc_82338444;
	// lwz r9,9800(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,9804(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9804);
	// b 0x82338450
	goto loc_82338450;
loc_82338444:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82338450:
	// li r11,1005
	ctx.r11.s64 = 1005;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823383D0) {
	__imp__sub_823383D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lbz r10,-31532(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// mulli r10,r8,2791
	ctx.r10.s64 = ctx.r8.s64 * 2791;
	// lwz r11,17040(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17040);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,17040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17040, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338468) {
	__imp__sub_82338468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338494) {
	__imp__sub_82338494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lbz r10,-31532(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mulli r10,r8,3253
	ctx.r10.s64 = ctx.r8.s64 * 3253;
	// lwz r11,17040(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17040);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,17040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17040, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338498) {
	__imp__sub_82338498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823384CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823384CC) {
	__imp__sub_823384CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823384D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233852c
	if (ctx.cr6.eq) goto loc_8233852C;
	// lis r9,1913
	ctx.r9.s64 = 125370368;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r9,30137
	ctx.r4.u64 = ctx.r9.u64 | 30137;
loc_823384F4:
	// mulhw r9,r11,r4
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32)) >> 32;
	// lbzu r7,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mulli r3,r5,137
	ctx.r3.s64 = ctx.r5.s64 * 137;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r9,4447
	ctx.r9.s64 = ctx.r9.s64 * 4447;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823384f4
	if (!ctx.cr6.eq) goto loc_823384F4;
loc_8233852C:
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lbz r10,-31532(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mulli r10,r8,2791
	ctx.r10.s64 = ctx.r8.s64 * 2791;
	// lwz r11,17040(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17040);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,17040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17040, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823384D0) {
	__imp__sub_823384D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lbz r8,-31532(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31532);
	// lwz r11,17040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17040);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8233858c
	if (ctx.cr6.eq) goto loc_8233858C;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,3253
	ctx.r9.s64 = ctx.r7.s64 * 3253;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,17040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17040, ctx.r11.u32);
loc_8233858C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// beq cr6,0x823385b0
	if (ctx.cr6.eq) goto loc_823385B0;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mulli r9,r7,3253
	ctx.r9.s64 = ctx.r7.s64 * 3253;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,17040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17040, ctx.r11.u32);
loc_823385B0:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mulli r9,r8,3253
	ctx.r9.s64 = ctx.r8.s64 * 3253;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,17040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17040, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338558) {
	__imp__sub_82338558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823385D8) {
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823383d0
	ctx.lr = 0x823385EC;
	sub_823383D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,17344
	ctx.r3.s64 = ctx.r10.s64 + 17344;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x8230f7c0
	ctx.lr = 0x82338618;
	sub_8230F7C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823385D8) {
	__imp__sub_823385D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r3,17040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17040);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338628) {
	__imp__sub_82338628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338634) {
	__imp__sub_82338634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lwz r3,-31540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31540);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338638) {
	__imp__sub_82338638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338644) {
	__imp__sub_82338644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31540, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338648) {
	__imp__sub_82338648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r3,17036(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17036);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338658) {
	__imp__sub_82338658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338664) {
	__imp__sub_82338664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lfs f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17056);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338668) {
	__imp__sub_82338668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338674) {
	__imp__sub_82338674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338678) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r11,-344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -344);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,-344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -344, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338678) {
	__imp__sub_82338678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233868C) {
	__imp__sub_8233868C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// stw r3,17040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17040, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338690) {
	__imp__sub_82338690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233869C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233869C) {
	__imp__sub_8233869C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823386A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,9240
	ctx.r8.s64 = ctx.r11.s64 + 9240;
	// lbz r6,29088(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29088);
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// addi r11,r8,9772
	ctx.r11.s64 = ctx.r8.s64 + 9772;
	// lwz r7,-32312(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
loc_823386C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823386e0
	if (!ctx.cr6.eq) goto loc_823386E0;
	// subfc r9,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// eqv r5,r7,r10
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r10.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// b 0x823386ec
	goto loc_823386EC;
loc_823386E0:
	// lwz r9,-9756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9756);
	// addic r5,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r9,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823386EC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82338704
	if (ctx.cr6.eq) goto loc_82338704;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82338720
	if (ctx.cr6.eq) goto loc_82338720;
loc_82338704:
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// addi r9,r8,29332
	ctx.r9.s64 = ctx.r8.s64 + 29332;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823386c0
	if (ctx.cr6.lt) goto loc_823386C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82338720:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823386A0) {
	__imp__sub_823386A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338728) {
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
	// bl 0x82310110
	ctx.lr = 0x82338738;
	sub_82310110(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r8,29088(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// lwz r9,-32312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8233877c
	if (!ctx.cr6.eq) goto loc_8233877C;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfc r6,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r5,r9,r11
	ctx.r5.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82338788
	goto loc_82338788;
loc_8233877C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82338788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823387b0
	if (ctx.cr6.eq) goto loc_823387B0;
	// lbz r11,9772(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823387b0
	if (ctx.cr6.eq) goto loc_823387B0;
	// lwz r11,9776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9776);
	// subf. r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823387b0
	if (!ctx.cr0.gt) goto loc_823387B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823387B0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823387d4
	if (!ctx.cr6.eq) goto loc_823387D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r6,r9,r11
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x823387e0
	goto loc_823387E0;
loc_823387D4:
	// lwz r11,9796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9796);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823387E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233880c
	if (ctx.cr6.eq) goto loc_8233880C;
	// lbz r11,19552(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233880c
	if (ctx.cr6.eq) goto loc_8233880C;
	// lwz r11,19556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19556);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8233880c
	if (!ctx.cr6.gt) goto loc_8233880C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8233880C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82338728) {
	__imp__sub_82338728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233881C) {
	__imp__sub_8233881C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82338828;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r26,r11,9240
	ctx.r26.s64 = ctx.r11.s64 + 9240;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-24192
	ctx.r28.s64 = ctx.r11.s64 + -24192;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// addi r31,r26,9772
	ctx.r31.s64 = ctx.r26.s64 + 9772;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r25,-32166
	ctx.r25.s64 = -2108030976;
loc_82338854:
	// lbz r9,29088(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82338878
	if (!ctx.cr6.eq) goto loc_82338878;
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// b 0x82338884
	goto loc_82338884;
loc_82338878:
	// lwz r10,-9756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9756);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82338884:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823388f8
	if (ctx.cr6.eq) goto loc_823388F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823388b0
	if (!ctx.cr6.eq) goto loc_823388B0;
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x823388c0
	goto loc_823388C0;
loc_823388B0:
	// lwz r10,-9756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9756);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_823388C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823388f8
	if (ctx.cr6.eq) goto loc_823388F8;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823388f8
	if (!ctx.cr6.eq) goto loc_823388F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x823388E8;
	sub_82280900(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bl 0x82310110
	ctx.lr = 0x823388F0;
	sub_82310110(ctx, base);
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823388F8:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r10,r26,29332
	ctx.r10.s64 = ctx.r26.s64 + 29332;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82338854
	if (ctx.cr6.lt) goto loc_82338854;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338820) {
	__imp__sub_82338820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338914) {
	__imp__sub_82338914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338918) {
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
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r5,r5,16385
	ctx.r5.u64 = ctx.r5.u64 | 16385;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8233894C;
	sub_82287B40(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24280
	ctx.r4.s64 = ctx.r10.s64 + -24280;
	// bl 0x82288048
	ctx.lr = 0x8233895C;
	sub_82288048(ctx, base);
	// bl 0x8230bee8
	ctx.lr = 0x82338960;
	sub_8230BEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x8233896C;
	sub_82287ED0(ctx, base);
	// bl 0x8230bef8
	ctx.lr = 0x82338970;
	sub_8230BEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x8233897C;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82338984;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bd98
	ctx.lr = 0x82338990;
	sub_8213BD98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eb398
	ctx.lr = 0x8233899C;
	sub_822EB398(ctx, base);
	// bl 0x822eb580
	ctx.lr = 0x823389A0;
	sub_822EB580(ctx, base);
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

PPC_WEAK_FUNC(sub_82338918) {
	__imp__sub_82338918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823389B8) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r6,-31833
	ctx.r6.s64 = -2086207488;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// addi r5,r6,17072
	ctx.r5.s64 = ctx.r6.s64 + 17072;
	// lbz r4,29088(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// stb r31,17072(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17072, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r3,-9404(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9404);
	// stb r31,-38(r5)
	PPC_STORE_U8(ctx.r5.u32 + -38, ctx.r31.u8);
	// beq cr6,0x82338a58
	if (ctx.cr6.eq) goto loc_82338A58;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 978, ctx.r10.u8);
	// bl 0x822e1f80
	ctx.lr = 0x82338A24;
	sub_822E1F80(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r8,9240
	ctx.r11.s64 = ctx.r8.s64 + 9240;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82338A38:
	// stb r31,9776(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9776, ctx.r31.u8);
	// stwu r31,9780(r11)
	ea = 9780 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82338a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338A38;
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
loc_82338A58:
	// stb r31,978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 978, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x822e1f80
	ctx.lr = 0x82338A68;
	sub_822E1F80(ctx, base);
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

PPC_WEAK_FUNC(sub_823389B8) {
	__imp__sub_823389B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338A7C) {
	__imp__sub_82338A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82338A88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821396f0
	ctx.lr = 0x82338A94;
	sub_821396F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82338A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139f50
	ctx.lr = 0x82338AA4;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338ac4
	if (ctx.cr6.eq) goto loc_82338AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139740
	ctx.lr = 0x82338AB8;
	sub_82139740(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82338ac4
	if (!ctx.cr6.lt) goto loc_82338AC4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82338AC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82338a9c
	if (ctx.cr6.lt) goto loc_82338A9C;
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// li r28,20
	ctx.r28.s64 = 20;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// li r9,120
	ctx.r9.s64 = 120;
	// divw r8,r10,r28
	ctx.r8.s32 = ctx.r10.s32 / ctx.r28.s32;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82338af8
	if (ctx.cr6.lt) goto loc_82338AF8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82338b04
	goto loc_82338B04;
loc_82338AF8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r31,3
	ctx.r31.s64 = 3;
	// ble cr6,0x82338b08
	if (!ctx.cr6.gt) goto loc_82338B08;
loc_82338B04:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82338B08:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// bl 0x822e1f80
	ctx.lr = 0x82338B18;
	sub_822E1F80(ctx, base);
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// lwz r11,-31544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31544);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82338b30
	if (!ctx.cr6.lt) goto loc_82338B30;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82338B30:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82338b44
	if (ctx.cr6.lt) goto loc_82338B44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82338B44:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// ble cr6,0x82338b54
	if (!ctx.cr6.gt) goto loc_82338B54;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82338B54:
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r3,17600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17600);
	// bl 0x822e1f80
	ctx.lr = 0x82338B60;
	sub_822E1F80(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r10,-24096
	ctx.r4.s64 = ctx.r10.s64 + -24096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82338B78;
	sub_82280900(ctx, base);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lbz r8,29088(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29088);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82338b94
	if (!ctx.cr6.eq) goto loc_82338B94;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r31,-32312(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// b 0x82338bc4
	goto loc_82338BC4;
loc_82338B94:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82338bb0
	if (ctx.cr6.eq) goto loc_82338BB0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82338BB0:
	// lwz r11,9796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82338bc0
	if (ctx.cr6.eq) goto loc_82338BC0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82338BC0:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82338BC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82139740
	ctx.lr = 0x82338BCC;
	sub_82139740(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// divw r30,r3,r31
	ctx.r30.s32 = ctx.r3.s32 / ctx.r31.s32;
	// ori r29,r11,16960
	ctx.r29.u64 = ctx.r11.u64 | 16960;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82338be4
	if (!ctx.cr6.gt) goto loc_82338BE4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82338BE4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82338BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139f50
	ctx.lr = 0x82338BF0;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338c10
	if (ctx.cr6.eq) goto loc_82338C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821396f0
	ctx.lr = 0x82338C04;
	sub_821396F0(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82338c10
	if (!ctx.cr6.lt) goto loc_82338C10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82338C10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82338be8
	if (ctx.cr6.lt) goto loc_82338BE8;
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// li r10,40
	ctx.r10.s64 = 40;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = ctx.r9.s32 / ctx.r28.s32;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82338c40
	if (ctx.cr6.lt) goto loc_82338C40;
	// li r31,32
	ctx.r31.s64 = 32;
	// b 0x82338c50
	goto loc_82338C50;
loc_82338C40:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82338c50
	if (ctx.cr6.gt) goto loc_82338C50;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82338C50:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// bl 0x822e1f80
	ctx.lr = 0x82338C60;
	sub_822E1F80(ctx, base);
	// mulli r10,r30,995
	ctx.r10.s64 = ctx.r30.s64 * 995;
	// divw r11,r10,r29
	ctx.r11.s32 = ctx.r10.s32 / ctx.r29.s32;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x82338c78
	if (!ctx.cr6.gt) goto loc_82338C78;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_82338C78:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,-30028(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30028);
	// bl 0x822e1f80
	ctx.lr = 0x82338C88;
	sub_822E1F80(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r9,-24144
	ctx.r4.s64 = ctx.r9.s64 + -24144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82338CA0;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338A80) {
	__imp__sub_82338A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82338CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// bl 0x823389b8
	ctx.lr = 0x82338CD0;
	sub_823389B8(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-1612
	ctx.r29.s64 = ctx.r11.s64 + -1612;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82338CE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82139f50
	ctx.lr = 0x82338CE8;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338d08
	if (ctx.cr6.eq) goto loc_82338D08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821396a0
	ctx.lr = 0x82338CFC;
	sub_821396A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e1f80
	ctx.lr = 0x82338D08;
	sub_822E1F80(ctx, base);
loc_82338D08:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82338ce0
	if (ctx.cr6.lt) goto loc_82338CE0;
	// bl 0x82338a80
	ctx.lr = 0x82338D20;
	sub_82338A80(ctx, base);
	// bl 0x821394c0
	ctx.lr = 0x82338D24;
	sub_821394C0(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lis r31,-31831
	ctx.r31.s64 = -2086076416;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r8,-24048
	ctx.r4.s64 = ctx.r8.s64 + -24048;
	// lwz r5,-31536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31536);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,-1596(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1596);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x82280900
	ctx.lr = 0x82338D5C;
	sub_82280900(ctx, base);
	// lwz r11,-31536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31536);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r3,r7,-25072
	ctx.r3.s64 = ctx.r7.s64 + -25072;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e84f0
	ctx.lr = 0x82338D70;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82338D7C;
	sub_8227CF18(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec4e8
	ctx.lr = 0x82338D84;
	sub_822EC4E8(ctx, base);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r6,-28736
	ctx.r4.s64 = ctx.r6.s64 + -28736;
	// addi r3,r5,11488
	ctx.r3.s64 = ctx.r5.s64 + 11488;
	// bl 0x822e2520
	ctx.lr = 0x82338D98;
	sub_822E2520(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x822ec500
	ctx.lr = 0x82338DA0;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338CA8) {
	__imp__sub_82338CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82338DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// ori r5,r5,16385
	ctx.r5.u64 = ctx.r5.u64 | 16385;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x82338DCC;
	sub_82287B40(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-3476
	ctx.r4.s64 = ctx.r10.s64 + -3476;
	// bl 0x82288048
	ctx.lr = 0x82338DDC;
	sub_82288048(ctx, base);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,17064(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17064);
	// bl 0x82287e08
	ctx.lr = 0x82338DEC;
	sub_82287E08(ctx, base);
	// lis r8,-31831
	ctx.r8.s64 = -2086076416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-31536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31536);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82288048
	ctx.lr = 0x82338E00;
	sub_82288048(ctx, base);
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-31448(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31448);
	// bl 0x82287ed0
	ctx.lr = 0x82338E10;
	sub_82287ED0(ctx, base);
	// lis r6,-31833
	ctx.r6.s64 = -2086207488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,17336(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17336);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82288048
	ctx.lr = 0x82338E24;
	sub_82288048(ctx, base);
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-16416(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16416);
	// bl 0x82287ed0
	ctx.lr = 0x82338E34;
	sub_82287ED0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82338E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139f50
	ctx.lr = 0x82338E40;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338e6c
	if (ctx.cr6.eq) goto loc_82338E6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82338E58;
	sub_82287E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821396a0
	ctx.lr = 0x82338E60;
	sub_821396A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82338E6C;
	sub_82287E08(ctx, base);
loc_82338E6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82338e38
	if (ctx.cr6.lt) goto loc_82338E38;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82338E84;
	sub_82287E08(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-1596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1596);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82287e08
	ctx.lr = 0x82338E98;
	sub_82287E08(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82338EB4:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82338ed8
	if (!ctx.cr6.eq) goto loc_82338ED8;
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
	// b 0x82338ee4
	goto loc_82338EE4;
loc_82338ED8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82338EE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338f3c
	if (ctx.cr6.eq) goto loc_82338F3C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82338f10
	if (!ctx.cr6.eq) goto loc_82338F10;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r9,r10,r30
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82338f20
	goto loc_82338F20;
loc_82338F10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82338F20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82338f3c
	if (!ctx.cr6.eq) goto loc_82338F3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eb398
	ctx.lr = 0x82338F38;
	sub_822EB398(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82338F3C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19576
	ctx.r11.s64 = ctx.r29.s64 + 19576;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82338eb4
	if (ctx.cr6.lt) goto loc_82338EB4;
	// bl 0x822eb580
	ctx.lr = 0x82338F54;
	sub_822EB580(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338DA8) {
	__imp__sub_82338DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82338F5C) {
	__imp__sub_82338F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82338F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82338F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82288288
	ctx.lr = 0x82338F88;
	sub_82288288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82288288
	ctx.lr = 0x82338F94;
	sub_82288288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8213be20
	ctx.lr = 0x82338FA0;
	sub_8213BE20(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823382b8
	ctx.lr = 0x82338FB0;
	sub_823382B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82338fe4
	if (!ctx.cr6.lt) goto loc_82338FE4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r8,167(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r7,166(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// addi r4,r10,-23936
	ctx.r4.s64 = ctx.r10.s64 + -23936;
	// lbz r6,165(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 165);
	// lbz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// bl 0x82280900
	ctx.lr = 0x82338FDC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82338FE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821396b8
	ctx.lr = 0x82338FF0;
	sub_821396B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139708
	ctx.lr = 0x82338FFC;
	sub_82139708(ctx, base);
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r10,17035(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17035);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339038
	if (ctx.cr6.eq) goto loc_82339038;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,17035(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17035, ctx.r10.u8);
	// bl 0x8213bed0
	ctx.lr = 0x82339018;
	sub_8213BED0(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14940);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339038
	if (ctx.cr6.eq) goto loc_82339038;
	// bl 0x82338da8
	ctx.lr = 0x82339030;
	sub_82338DA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338ca8
	ctx.lr = 0x82339038;
	sub_82338CA8(ctx, base);
loc_82339038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82338F60) {
	__imp__sub_82338F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82339048;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lbz r11,29088(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233920c
	if (ctx.cr6.eq) goto loc_8233920C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8233920c
	if (!ctx.cr6.eq) goto loc_8233920C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339088;
	sub_822881B0(ctx, base);
	// lis r28,-31833
	ctx.r28.s64 = -2086207488;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,17064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 17064, ctx.r11.u32);
	// bl 0x82288498
	ctx.lr = 0x823390A4;
	sub_82288498(ctx, base);
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-31536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31536);
	// bl 0x822e1fa8
	ctx.lr = 0x823390B4;
	sub_822E1FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x823390BC;
	sub_82288288(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-31448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31448, ctx.r11.u32);
	// bl 0x82288498
	ctx.lr = 0x823390D8;
	sub_82288498(ctx, base);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,17336(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17336);
	// bl 0x822e1fa8
	ctx.lr = 0x823390E8;
	sub_822E1FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x823390F0;
	sub_82288288(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-16416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16416, ctx.r11.u32);
	// bl 0x822881b0
	ctx.lr = 0x82339104;
	sub_822881B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82339150
	if (ctx.cr6.eq) goto loc_82339150;
loc_82339110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339118;
	sub_822881B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82139f50
	ctx.lr = 0x82339124;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233913c
	if (ctx.cr6.eq) goto loc_8233913C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82139688
	ctx.lr = 0x8233913C;
	sub_82139688(ctx, base);
loc_8233913C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339144;
	sub_822881B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82339110
	if (!ctx.cr6.eq) goto loc_82339110;
loc_82339150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339158;
	sub_822881B0(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-1596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1596);
	// bl 0x822e1f80
	ctx.lr = 0x82339168;
	sub_822E1F80(ctx, base);
	// lwz r11,17064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17064);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// ble cr6,0x82339204
	if (!ctx.cr6.gt) goto loc_82339204;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lbz r3,29088(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// addi r11,r7,9240
	ctx.r11.s64 = ctx.r7.s64 + 9240;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,127
	ctx.r6.s64 = 127;
	// lwz r4,-32312(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
	// li r7,1
	ctx.r7.s64 = 1;
loc_823391A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823391c4
	if (!ctx.cr6.eq) goto loc_823391C4;
	// subfc r9,r4,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r4.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// eqv r31,r4,r10
	ctx.r31.u64 = ~(ctx.r4.u64 ^ ctx.r10.u64);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x823391d0
	goto loc_823391D0;
loc_823391C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	// subfe r9,r31,r9
	temp.u8 = (~ctx.r31.u32 + ctx.r9.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r31.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823391D0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823391f8
	if (!ctx.cr6.eq) goto loc_823391F8;
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
loc_823391F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// bdnz 0x823391a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823391A4;
loc_82339204:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82338ca8
	ctx.lr = 0x8233920C;
	sub_82338CA8(ctx, base);
loc_8233920C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339040) {
	__imp__sub_82339040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82339214) {
	__imp__sub_82339214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82339220;
	__savegprlr_21(ctx, base);
	// stwu r1,-2384(r1)
	ea = -2384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,2416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2416, ctx.r4.u64);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// std r5,2424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2424, ctx.r5.u64);
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822881b0
	ctx.lr = 0x82339250;
	sub_822881B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233925C;
	sub_822881B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82288498
	ctx.lr = 0x82339270;
	sub_82288498(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82288288
	ctx.lr = 0x82339278;
	sub_82288288(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339284;
	sub_822881B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339290;
	sub_822881B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82288288
	ctx.lr = 0x8233929C;
	sub_82288288(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82288288
	ctx.lr = 0x823392A8;
	sub_82288288(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8213be20
	ctx.lr = 0x823392B4;
	sub_8213BE20(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x823392BC;
	sub_822881B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// bl 0x82288498
	ctx.lr = 0x823392D0;
	sub_82288498(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822883f0
	ctx.lr = 0x823392D8;
	sub_822883F0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82288638
	ctx.lr = 0x823392E8;
	sub_82288638(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82288638
	ctx.lr = 0x823392F8;
	sub_82288638(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82288498
	ctx.lr = 0x82339308;
	sub_82288498(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339310;
	sub_822881B0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339318;
	sub_822881B0(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lbz r7,29088(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29088);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82339530
	if (ctx.cr6.eq) goto loc_82339530;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bgt cr6,0x82339530
	if (ctx.cr6.gt) goto loc_82339530;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lbz r11,625(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 625);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82339540
	if (ctx.cr6.eq) goto loc_82339540;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,625(r10)
	PPC_STORE_U8(ctx.r10.u32 + 625, ctx.r11.u8);
	// bl 0x8213a1d8
	ctx.lr = 0x82339350;
	sub_8213A1D8(ctx, base);
	// bl 0x8213bed0
	ctx.lr = 0x82339354;
	sub_8213BED0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4844
	ctx.r3.s64 = ctx.r11.s64 + 4844;
	// bl 0x822e2170
	ctx.lr = 0x82339364;
	sub_822E2170(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// beq cr6,0x82339380
	if (ctx.cr6.eq) goto loc_82339380;
	// lwz r11,-344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -344);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8233939c
	goto loc_8233939C;
loc_82339380:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -344);
	// beq cr6,0x82339398
	if (ctx.cr6.eq) goto loc_82339398;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8233939c
	goto loc_8233939C;
loc_82339398:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_8233939C:
	// stw r11,-344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -344, ctx.r11.u32);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mulli r29,r26,9780
	ctx.r29.s64 = ctx.r26.s64 * 9780;
	// stw r24,-31448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31448, ctx.r24.u32);
	// addi r30,r10,9240
	ctx.r30.s64 = ctx.r10.s64 + 9240;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82283040
	ctx.lr = 0x823393C4;
	sub_82283040(ctx, base);
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,2424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2424);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// ld r5,2416(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2416);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r30,5664
	ctx.r10.s64 = ctx.r30.s64 + 5664;
	// sthx r31,r29,r9
	PPC_STORE_U16(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u16);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r8,r30,1568
	ctx.r8.s64 = ctx.r30.s64 + 1568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289880
	ctx.lr = 0x82339404;
	sub_82289880(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,-32312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32312, ctx.r25.u32);
	// stb r11,17033(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17033, ctx.r11.u8);
	// lwz r3,17052(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17052);
	// bl 0x822e1f18
	ctx.lr = 0x82339428;
	sub_822E1F18(ctx, base);
	// lis r7,-31831
	ctx.r7.s64 = -2086076416;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,-31536(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31536);
	// bl 0x822e1fa8
	ctx.lr = 0x82339438;
	sub_822E1FA8(ctx, base);
	// lis r6,-31833
	ctx.r6.s64 = -2086207488;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// lwz r3,17336(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17336);
	// bl 0x822e1fa8
	ctx.lr = 0x82339448;
	sub_822E1FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82339450;
	sub_82141340(ctx, base);
	// lwz r4,2424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2424);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r10,2416(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2416);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a360
	ctx.lr = 0x82339484;
	sub_8213A360(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821396b8
	ctx.lr = 0x82339490;
	sub_821396B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82139708
	ctx.lr = 0x8233949C;
	sub_82139708(ctx, base);
	// lwz r11,2416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2416);
	// lwz r10,2420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2420);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r29,2424(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2424);
	// bl 0x8230bd88
	ctx.lr = 0x823394B8;
	sub_8230BD88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac10
	ctx.lr = 0x823394C4;
	sub_8230AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8213a360
	ctx.lr = 0x823394F0;
	sub_8213A360(ctx, base);
	// bl 0x8230bee8
	ctx.lr = 0x823394F4;
	sub_8230BEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821396b8
	ctx.lr = 0x82339500;
	sub_821396B8(ctx, base);
	// bl 0x8230bef8
	ctx.lr = 0x82339504;
	sub_8230BEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82139708
	ctx.lr = 0x82339510;
	sub_82139708(ctx, base);
	// lis r9,-31831
	ctx.r9.s64 = -2086076416;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,2416
	ctx.r4.s64 = ctx.r1.s64 + 2416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-31540(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31540, ctx.r11.u32);
	// bl 0x82338918
	ctx.lr = 0x82339528;
	sub_82338918(ctx, base);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82339530:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-23888
	ctx.r4.s64 = ctx.r11.s64 + -23888;
	// bl 0x82280c30
	ctx.lr = 0x82339540;
	sub_82280C30(ctx, base);
loc_82339540:
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339218) {
	__imp__sub_82339218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,9240
	ctx.r9.s64 = ctx.r11.s64 + 9240;
	// lbz r7,29088(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lwz r8,-32312(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
loc_82339568:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82339588
	if (!ctx.cr6.eq) goto loc_82339588;
	// subfc r10,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r8.s64;
	// eqv r6,r8,r3
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r3.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// b 0x82339594
	goto loc_82339594;
loc_82339588:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82339594:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// addi r10,r9,19576
	ctx.r10.s64 = ctx.r9.s64 + 19576;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82339568
	if (ctx.cr6.lt) goto loc_82339568;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82339548) {
	__imp__sub_82339548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823395BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823395BC) {
	__imp__sub_823395BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823395C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823395C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r4.u64);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r5,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r5.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82141340
	ctx.lr = 0x823395E0;
	sub_82141340(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r24,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822881b0
	ctx.lr = 0x82339600;
	sub_822881B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82288638
	ctx.lr = 0x82339614;
	sub_82288638(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82288498
	ctx.lr = 0x82339624;
	sub_82288498(ctx, base);
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 27, ctx.xer);
	// beq cr6,0x8233965c
	if (ctx.cr6.eq) goto loc_8233965C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,27
	ctx.r6.s64 = 27;
	// addi r4,r11,-23680
	ctx.r4.s64 = ctx.r11.s64 + -23680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82339644;
	sub_82280900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r10,-23712
	ctx.r4.s64 = ctx.r10.s64 + -23712;
	// bl 0x822eb400
	ctx.lr = 0x82339654;
	sub_822EB400(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8233965C:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r29,r11,-360
	ctx.r29.s64 = ctx.r11.s64 + -360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235a898
	ctx.lr = 0x82339670;
	sub_8235A898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823399b8
	if (ctx.cr6.gt) goto loc_823399B8;
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82139678
	ctx.lr = 0x82339680;
	sub_82139678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823396a4
	if (ctx.cr6.eq) goto loc_823396A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-23736
	ctx.r4.s64 = ctx.r11.s64 + -23736;
	// bl 0x822eb400
	ctx.lr = 0x8233969C;
	sub_822EB400(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823396A4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823399a8
	if (ctx.cr6.eq) goto loc_823399A8;
	// lis r23,-31833
	ctx.r23.s64 = -2086207488;
	// lbz r11,17033(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 17033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823399a8
	if (ctx.cr6.eq) goto loc_823399A8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bgt cr6,0x823399a8
	if (ctx.cr6.gt) goto loc_823399A8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bd88
	ctx.lr = 0x823396D4;
	sub_8230BD88(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82339708
	if (!ctx.cr6.eq) goto loc_82339708;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x82280900
	ctx.lr = 0x823396F0;
	sub_82280900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r10,-23824
	ctx.r4.s64 = ctx.r10.s64 + -23824;
	// bl 0x822eb400
	ctx.lr = 0x82339700;
	sub_822EB400(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82339708:
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// ld r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823382b8
	ctx.lr = 0x82339718;
	sub_823382B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8233972c
	if (!ctx.cr6.lt) goto loc_8233972C;
	// bl 0x82339548
	ctx.lr = 0x82339728;
	sub_82339548(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8233972C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// mulli r30,r25,9780
	ctx.r30.s64 = ctx.r25.s64 * 9780;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r8,328(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r31,r11,9240
	ctx.r31.s64 = ctx.r11.s64 + 9240;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// bl 0x820d8158
	ctx.lr = 0x8233975C;
	sub_820D8158(ctx, base);
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// stw r3,-32312(r28)
	PPC_STORE_U32(ctx.r28.u32 + -32312, ctx.r3.u32);
	// bl 0x82139fd0
	ctx.lr = 0x82339768;
	sub_82139FD0(ctx, base);
	// bl 0x821396a0
	ctx.lr = 0x8233976C;
	sub_821396A0(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r6,648
	ctx.r4.s64 = ctx.r6.s64 + 648;
	// ori r5,r5,16385
	ctx.r5.u64 = ctx.r5.u64 | 16385;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287b40
	ctx.lr = 0x82339788;
	sub_82287B40(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r5,-24252
	ctx.r4.s64 = ctx.r5.s64 + -24252;
	// bl 0x82288048
	ctx.lr = 0x82339798;
	sub_82288048(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287e08
	ctx.lr = 0x823397A4;
	sub_82287E08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-32312(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// bl 0x82287e08
	ctx.lr = 0x823397B0;
	sub_82287E08(ctx, base);
	// lis r4,-31831
	ctx.r4.s64 = -2086076416;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,-31536(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31536);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82288048
	ctx.lr = 0x823397C4;
	sub_82288048(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,-31448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x82287ed0
	ctx.lr = 0x823397D4;
	sub_82287ED0(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,-1596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1596);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82287e08
	ctx.lr = 0x823397E8;
	sub_82287E08(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287e08
	ctx.lr = 0x823397F4;
	sub_82287E08(ctx, base);
	// bl 0x8230bee8
	ctx.lr = 0x823397F8;
	sub_8230BEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287ed0
	ctx.lr = 0x82339804;
	sub_82287ED0(ctx, base);
	// bl 0x8230bef8
	ctx.lr = 0x82339808;
	sub_8230BEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287ed0
	ctx.lr = 0x82339814;
	sub_82287ED0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8213bd98
	ctx.lr = 0x82339820;
	sub_8213BD98(ctx, base);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// lwz r11,17060(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17060);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82339844
	if (!ctx.cr6.gt) goto loc_82339844;
	// lwz r10,-344(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -344);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x8233985c
	goto loc_8233985C;
loc_82339844:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,-344(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -344);
	// ble cr6,0x82339858
	if (!ctx.cr6.gt) goto loc_82339858;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// b 0x8233985c
	goto loc_8233985C;
loc_82339858:
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
loc_8233985C:
	// stw r10,-344(r9)
	PPC_STORE_U32(ctx.r9.u32 + -344, ctx.r10.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82287e08
	ctx.lr = 0x8233986C;
	sub_82287E08(ctx, base);
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r11,17336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17336);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82288048
	ctx.lr = 0x82339880;
	sub_82288048(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r4,88(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 88);
	// bl 0x82287fe0
	ctx.lr = 0x8233988C;
	sub_82287FE0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// bl 0x82287e40
	ctx.lr = 0x8233989C;
	sub_82287E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bd88
	ctx.lr = 0x823398A4;
	sub_8230BD88(ctx, base);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82287e40
	ctx.lr = 0x823398B8;
	sub_82287E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230ac10
	ctx.lr = 0x823398C0;
	sub_8230AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82288048
	ctx.lr = 0x823398CC;
	sub_82288048(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82287e08
	ctx.lr = 0x823398D8;
	sub_82287E08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x82287e08
	ctx.lr = 0x823398E4;
	sub_82287E08(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822eb398
	ctx.lr = 0x823398F0;
	sub_822EB398(ctx, base);
	// bl 0x822eb580
	ctx.lr = 0x823398F4;
	sub_822EB580(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// lwz r6,328(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r11,r31,5664
	ctx.r11.s64 = ctx.r31.s64 + 5664;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r8,r31,1568
	ctx.r8.s64 = ctx.r31.s64 + 1568;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ld r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289880
	ctx.lr = 0x82339934;
	sub_82289880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r5,-31833
	ctx.r5.s64 = -2086207488;
	// stb r11,17033(r23)
	PPC_STORE_U8(ctx.r23.u32 + 17033, ctx.r11.u8);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,17035(r5)
	PPC_STORE_U8(ctx.r5.u32 + 17035, ctx.r10.u8);
	// lwz r3,17052(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17052);
	// lwz r11,-32312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// stw r11,17064(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17064, ctx.r11.u32);
	// bl 0x822e1f18
	ctx.lr = 0x82339964;
	sub_822E1F18(ctx, base);
	// lis r6,-31831
	ctx.r6.s64 = -2086076416;
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,-31540(r6)
	PPC_STORE_U32(ctx.r6.u32 + -31540, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8213a360
	ctx.lr = 0x823399A0;
	sub_8213A360(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823399A8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-23824
	ctx.r4.s64 = ctx.r11.s64 + -23824;
	// bl 0x822eb400
	ctx.lr = 0x823399B8;
	sub_822EB400(ctx, base);
loc_823399B8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823395C0) {
	__imp__sub_823395C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823399C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823399C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-24240
	ctx.r31.s64 = ctx.r11.s64 + -24240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-24240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24240);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339a1c
	if (ctx.cr6.eq) goto loc_82339A1C;
loc_823399F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82339A04;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82339a40
	if (ctx.cr6.eq) goto loc_82339A40;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823399f8
	if (!ctx.cr6.eq) goto loc_823399F8;
loc_82339A1C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82139e28
	ctx.lr = 0x82339A38;
	sub_82139E28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82339A40:
	// bl 0x8230ab98
	ctx.lr = 0x82339A44;
	sub_8230AB98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82339a8c
	if (!ctx.cr6.eq) goto loc_82339A8C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339a8c
	if (ctx.cr6.eq) goto loc_82339A8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82339A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82339A8C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-23592
	ctx.r4.s64 = ctx.r11.s64 + -23592;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82339AA0;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823399C0) {
	__imp__sub_823399C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82339AAC) {
	__imp__sub_82339AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82339AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823382b8
	ctx.lr = 0x82339ACC;
	sub_823382B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82339b10
	if (ctx.cr6.lt) goto loc_82339B10;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r29,r3,9780
	ctx.r29.s64 = ctx.r3.s64 * 9780;
	// addi r30,r11,9240
	ctx.r30.s64 = ctx.r11.s64 + 9240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r30,9772
	ctx.r9.s64 = ctx.r30.s64 + 9772;
	// stbx r10,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x82310110
	ctx.lr = 0x82339AF4;
	sub_82310110(ctx, base);
	// addi r8,r30,9776
	ctx.r8.s64 = ctx.r30.s64 + 9776;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r7,-23564
	ctx.r4.s64 = ctx.r7.s64 + -23564;
	// stwx r3,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r3.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82339B10;
	sub_82280900(ctx, base);
loc_82339B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339AB0) {
	__imp__sub_82339AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339B18) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-22328
	ctx.r8.s64 = ctx.r11.s64 + -22328;
	// addi r3,r10,-22348
	ctx.r3.s64 = ctx.r10.s64 + -22348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82339B4C;
	sub_822E1618(ctx, base);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// ori r31,r8,65535
	ctx.r31.u64 = ctx.r8.u64 | 65535;
	// stw r3,17060(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17060, ctx.r3.u32);
	// addi r8,r7,-22404
	ctx.r8.s64 = ctx.r7.s64 + -22404;
	// addi r3,r5,-22424
	ctx.r3.s64 = ctx.r5.s64 + -22424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// bl 0x822e1618
	ctx.lr = 0x82339B80;
	sub_822E1618(ctx, base);
	// lis r4,-32032
	ctx.r4.s64 = -2099249152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-22496
	ctx.r8.s64 = ctx.r11.s64 + -22496;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-5940(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5940, ctx.r3.u32);
	// addi r3,r10,-22528
	ctx.r3.s64 = ctx.r10.s64 + -22528;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// bl 0x822e1618
	ctx.lr = 0x82339BAC;
	sub_822E1618(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,-22588
	ctx.r6.s64 = ctx.r8.s64 + -22588;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,11172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11172, ctx.r3.u32);
	// addi r3,r7,-22604
	ctx.r3.s64 = ctx.r7.s64 + -22604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82339BD0;
	sub_822E15D0(ctx, base);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r8,r5,-22680
	ctx.r8.s64 = ctx.r5.s64 + -22680;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-14940(r6)
	PPC_STORE_U32(ctx.r6.u32 + -14940, ctx.r3.u32);
	// addi r3,r4,-22716
	ctx.r3.s64 = ctx.r4.s64 + -22716;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e1618
	ctx.lr = 0x82339BFC;
	sub_822E1618(ctx, base);
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-22784
	ctx.r8.s64 = ctx.r10.s64 + -22784;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-31544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31544, ctx.r3.u32);
	// addi r3,r9,-22816
	ctx.r3.s64 = ctx.r9.s64 + -22816;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822e1618
	ctx.lr = 0x82339C28;
	sub_822E1618(ctx, base);
	// lis r7,-31833
	ctx.r7.s64 = -2086207488;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r8,r6,-22872
	ctx.r8.s64 = ctx.r6.s64 + -22872;
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r3,17600(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17600, ctx.r3.u32);
	// addi r3,r5,-22896
	ctx.r3.s64 = ctx.r5.s64 + -22896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e1618
	ctx.lr = 0x82339C54;
	sub_822E1618(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r11,-22940
	ctx.r8.s64 = ctx.r11.s64 + -22940;
	// stw r3,644(r4)
	PPC_STORE_U32(ctx.r4.u32 + 644, ctx.r3.u32);
	// addi r3,r10,-22968
	ctx.r3.s64 = ctx.r10.s64 + -22968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x82339C80;
	sub_822E1618(ctx, base);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,-23048
	ctx.r8.s64 = ctx.r8.s64 + -23048;
	// stw r3,17328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17328, ctx.r3.u32);
	// addi r3,r6,-22992
	ctx.r3.s64 = ctx.r6.s64 + -22992;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822e1618
	ctx.lr = 0x82339CAC;
	sub_822E1618(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,-23088
	ctx.r6.s64 = ctx.r4.s64 + -23088;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,640(r5)
	PPC_STORE_U32(ctx.r5.u32 + 640, ctx.r3.u32);
	// addi r3,r11,-23108
	ctx.r3.s64 = ctx.r11.s64 + -23108;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82339CD0;
	sub_822E15D0(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r7,r9,-23188
	ctx.r7.s64 = ctx.r9.s64 + -23188;
	// stw r3,17340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17340, ctx.r3.u32);
	// addi r3,r6,-23128
	ctx.r3.s64 = ctx.r6.s64 + -23128;
	// addi r4,r8,-32348
	ctx.r4.s64 = ctx.r8.s64 + -32348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1828
	ctx.lr = 0x82339CFC;
	sub_822E1828(ctx, base);
	// lis r5,-31833
	ctx.r5.s64 = -2086207488;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-23252
	ctx.r8.s64 = ctx.r4.s64 + -23252;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,17048(r5)
	PPC_STORE_U32(ctx.r5.u32 + 17048, ctx.r3.u32);
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x82339D28;
	sub_822E1618(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,17332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17332, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfs f2,5804(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5804);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r5,-23328
	ctx.r8.s64 = ctx.r5.s64 + -23328;
	// addi r3,r4,-23348
	ctx.r3.s64 = ctx.r4.s64 + -23348;
	// lfs f3,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82339D60;
	sub_822E1660(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r11,-23392
	ctx.r6.s64 = ctx.r11.s64 + -23392;
	// stw r3,17044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17044, ctx.r3.u32);
	// addi r4,r9,-23416
	ctx.r4.s64 = ctx.r9.s64 + -23416;
	// addi r3,r8,-23432
	ctx.r3.s64 = ctx.r8.s64 + -23432;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x822e17e0
	ctx.lr = 0x82339D88;
	sub_822E17E0(ctx, base);
	// lis r7,-31831
	ctx.r7.s64 = -2086076416;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r4,r5,-28736
	ctx.r4.s64 = ctx.r5.s64 + -28736;
	// stw r3,-31536(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31536, ctx.r3.u32);
	// addi r6,r6,-23480
	ctx.r6.s64 = ctx.r6.s64 + -23480;
	// addi r3,r11,-23444
	ctx.r3.s64 = ctx.r11.s64 + -23444;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x822e17e0
	ctx.lr = 0x82339DB0;
	sub_822E17E0(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r9,-23508
	ctx.r6.s64 = ctx.r9.s64 + -23508;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// stw r3,17336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17336, ctx.r3.u32);
	// addi r3,r8,-23516
	ctx.r3.s64 = ctx.r8.s64 + -23516;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82339DD4;
	sub_822E15D0(ctx, base);
	// lis r7,-31833
	ctx.r7.s64 = -2086207488;
	// stw r3,17052(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17052, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82339B18) {
	__imp__sub_82339B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82339DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-22280
	ctx.r4.s64 = ctx.r11.s64 + -22280;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280b08
	ctx.lr = 0x82339E1C;
	sub_82280B08(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-29824
	ctx.r11.s64 = ctx.r10.s64 + -29824;
	// li r8,5764
	ctx.r8.s64 = 5764;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r5,29088(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29088);
	// subf r6,r7,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r7.s64;
	// addi r9,r11,9240
	ctx.r9.s64 = ctx.r11.s64 + 9240;
	// divw r11,r6,r8
	ctx.r11.s32 = ctx.r6.s32 / ctx.r8.s32;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82339e6c
	if (!ctx.cr6.eq) goto loc_82339E6C;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// b 0x82339e84
	goto loc_82339E84;
loc_82339E6C:
	// mulli r10,r11,9780
	ctx.r10.s64 = ctx.r11.s64 * 9780;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_82339E84:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339eb4
	if (ctx.cr6.eq) goto loc_82339EB4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x822830e8
	ctx.lr = 0x82339EAC;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82339EB4:
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eb040
	ctx.lr = 0x82339EC8;
	sub_822EB040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82283040
	ctx.lr = 0x82339ED4;
	sub_82283040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339DF0) {
	__imp__sub_82339DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82339EDC) {
	__imp__sub_82339EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_82339EEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82339f10
	if (!ctx.cr6.lt) goto loc_82339F10;
	// addi r11,r11,5764
	ctx.r11.s64 = ctx.r11.s64 + 5764;
	// addi r9,r10,11536
	ctx.r9.s64 = ctx.r10.s64 + 11536;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82339eec
	if (ctx.cr6.lt) goto loc_82339EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82339F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82339EE0) {
	__imp__sub_82339EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82339F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_82339F48:
	// lwz r11,4624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82339f74
	if (ctx.cr6.eq) goto loc_82339F74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228a108
	ctx.lr = 0x82339F6C;
	sub_8228A108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82339f94
	if (!ctx.cr6.eq) goto loc_82339F94;
loc_82339F74:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19576
	ctx.r11.s64 = ctx.r29.s64 + 19576;
	// addi r30,r30,5764
	ctx.r30.s64 = ctx.r30.s64 + 5764;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82339f48
	if (ctx.cr6.lt) goto loc_82339F48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82339F94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339F18) {
	__imp__sub_82339F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82339FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82339FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82288288
	ctx.lr = 0x82339FBC;
	sub_82288288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82288498
	ctx.lr = 0x82339FD0;
	sub_82288498(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822881b0
	ctx.lr = 0x82339FDC;
	sub_822881B0(ctx, base);
	// lwz r7,4632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4632);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8233a07c
	if (!ctx.cr6.lt) goto loc_8233A07C;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233a030
	if (!ctx.cr6.gt) goto loc_8233A030;
	// subf r11,r7,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r7.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-22216
	ctx.r4.s64 = ctx.r10.s64 + -22216;
	// addi r5,r31,5660
	ctx.r5.s64 = ctx.r31.s64 + 5660;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233A010;
	sub_82280900(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-22244
	ctx.r4.s64 = ctx.r9.s64 + -22244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339df0
	ctx.lr = 0x8233A024;
	sub_82339DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8233A030:
	// bl 0x8233e418
	ctx.lr = 0x8233A034;
	sub_8233E418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a060
	if (ctx.cr6.eq) goto loc_8233A060;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,5764
	ctx.r10.s64 = 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x82338230
	ctx.lr = 0x8233A060;
	sub_82338230(ctx, base);
loc_8233A060:
	// stw r30,4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4632, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-29844
	ctx.r5.s64 = ctx.r11.s64 + -29844;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,4636
	ctx.r3.s64 = ctx.r31.s64 + 4636;
	// bl 0x822e8368
	ctx.lr = 0x8233A07C;
	sub_822E8368(ctx, base);
loc_8233A07C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82339FA0) {
	__imp__sub_82339FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233A090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8233A0AC;
	sub_820F17B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233a10c
	if (!ctx.cr6.eq) goto loc_8233A10C;
loc_8233A0BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8233a118
	if (ctx.cr6.eq) goto loc_8233A118;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8233a118
	if (!ctx.cr6.eq) goto loc_8233A118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339fa0
	ctx.lr = 0x8233A0DC;
	sub_82339FA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233a10c
	if (ctx.cr6.eq) goto loc_8233A10C;
	// lwz r11,4624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4624);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233a10c
	if (ctx.cr6.eq) goto loc_8233A10C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8233A0FC;
	sub_820F17B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a0bc
	if (ctx.cr6.eq) goto loc_8233A0BC;
loc_8233A10C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8233A118:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233A088) {
	__imp__sub_8233A088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A124) {
	__imp__sub_8233A124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A128) {
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
	// addi r3,r3,5696
	ctx.r3.s64 = ctx.r3.s64 + 5696;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x823de1f0
	ctx.lr = 0x8233A148;
	sub_823DE1F0(ctx, base);
	// lwz r11,4624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8233a170
	if (!ctx.cr6.eq) goto loc_8233A170;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,5764
	ctx.r10.s64 = 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x821e4508
	ctx.lr = 0x8233A170;
	sub_821E4508(ctx, base);
loc_8233A170:
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

PPC_WEAK_FUNC(sub_8233A128) {
	__imp__sub_8233A128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A184) {
	__imp__sub_8233A184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8233A190;
	__savegprlr_24(ctx, base);
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A1A4;
	sub_822881B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x8233a1c8
	if (!ctx.cr6.lt) goto loc_8233A1C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-22128
	ctx.r4.s64 = ctx.r11.s64 + -22128;
	// bl 0x82280900
	ctx.lr = 0x8233A1C0;
	sub_82280900(ctx, base);
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8233A1C8:
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// ble cr6,0x8233a1e8
	if (!ctx.cr6.gt) goto loc_8233A1E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-22160
	ctx.r4.s64 = ctx.r11.s64 + -22160;
	// bl 0x82280900
	ctx.lr = 0x8233A1E0;
	sub_82280900(ctx, base);
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8233A1E8:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,5764
	ctx.r10.s64 = 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r9,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r9.s64;
	// divw r24,r8,r10
	ctx.r24.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8233cab8
	ctx.lr = 0x8233A208;
	sub_8233CAB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822886b8
	ctx.lr = 0x8233A214;
	sub_822886B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8233a288
	if (!ctx.cr6.gt) goto loc_8233A288;
	// addi r31,r1,168
	ctx.r31.s64 = ctx.r1.s64 + 168;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8233A228:
	// addi r29,r31,-24
	ctx.r29.s64 = ctx.r31.s64 + -24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822890e0
	ctx.lr = 0x8233A238;
	sub_822890E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// bl 0x82333760
	ctx.lr = 0x8233A244;
	sub_82333760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233a258
	if (!ctx.cr6.eq) goto loc_8233A258;
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// sth r11,-4(r31)
	PPC_STORE_U16(ctx.r31.u32 + -4, ctx.r11.u16);
loc_8233A258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82333760
	ctx.lr = 0x8233A264;
	sub_82333760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233a278
	if (!ctx.cr6.eq) goto loc_8233A278;
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8233A278:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x8233a228
	if (!ctx.cr0.eq) goto loc_8233A228;
loc_8233A288:
	// lwz r11,4624(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4624);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8233a29c
	if (!ctx.cr6.eq) goto loc_8233A29C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82338198
	ctx.lr = 0x8233A29C;
	sub_82338198(ctx, base);
loc_8233A29C:
	// lwz r11,4624(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4624);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8233a310
	if (!ctx.cr6.eq) goto loc_8233A310;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8233a310
	if (!ctx.cr6.gt) goto loc_8233A310;
	// rlwinm r10,r27,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8233A2C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,-64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8233a304
	if (ctx.cr6.gt) goto loc_8233A304;
	// lwz r10,5696(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5696);
	// addi r3,r25,5696
	ctx.r3.s64 = ctx.r25.s64 + 5696;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233a304
	if (!ctx.cr6.gt) goto loc_8233A304;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8233A2F0;
	sub_823DE1F0(ctx, base);
	// lwz r11,4624(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4624);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8233a304
	if (!ctx.cr6.eq) goto loc_8233A304;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e4508
	ctx.lr = 0x8233A304;
	sub_821E4508(ctx, base);
loc_8233A304:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x8233a2c4
	if (!ctx.cr0.eq) goto loc_8233A2C4;
loc_8233A310:
	// addi r1,r1,2272
	ctx.r1.s64 = ctx.r1.s64 + 2272;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233A188) {
	__imp__sub_8233A188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A318) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// bl 0x82280900
	ctx.lr = 0x8233A334;
	sub_82280900(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r8,r11,-336
	ctx.r8.s64 = ctx.r11.s64 + -336;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r8,-44
	ctx.r11.s64 = ctx.r8.s64 + -44;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8233A34C:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stwu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8233a34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233A34C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8233A36C:
	// stwu r10,9780(r11)
	ea = 9780 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8233a36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233A36C;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// stw r10,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,17068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17068, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A318) {
	__imp__sub_8233A318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A394) {
	__imp__sub_8233A394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-340
	ctx.r11.s64 = ctx.r11.s64 + -340;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233a3d8
	if (ctx.cr6.eq) goto loc_8233A3D8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8233A3D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A398) {
	__imp__sub_8233A398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// ori r8,r10,26215
	ctx.r8.u64 = ctx.r10.u64 | 26215;
	// lwz r11,-340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,17068(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17068);
	// mulhw r7,r11,r8
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A3E0) {
	__imp__sub_8233A3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A42C) {
	__imp__sub_8233A42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r10,r11,-336
	ctx.r10.s64 = ctx.r11.s64 + -336;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8233A43C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8233a454
	if (!ctx.cr6.eq) goto loc_8233A454;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8233a46c
	if (ctx.cr6.eq) goto loc_8233A46C;
loc_8233A454:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r9,r10,960
	ctx.r9.s64 = ctx.r10.s64 + 960;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8233a43c
	if (ctx.cr6.lt) goto loc_8233A43C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233A46C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A430) {
	__imp__sub_8233A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A474) {
	__imp__sub_8233A474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,26214
	ctx.r7.s64 = 1717960704;
	// ori r6,r7,26215
	ctx.r6.u64 = ctx.r7.u64 | 26215;
	// lwz r11,-340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r5,r11,r6
	ctx.r5.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,-340(r8)
	PPC_STORE_U32(ctx.r8.u32 + -340, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A478) {
	__imp__sub_8233A478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A4B4) {
	__imp__sub_8233A4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8233A4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82288288
	ctx.lr = 0x8233A4DC;
	sub_82288288(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a4f8
	if (ctx.cr6.eq) goto loc_8233A4F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233A4F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x8233A500;
	sub_82288288(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x8233A50C;
	sub_82288288(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A518;
	sub_822881B0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233A4B8) {
	__imp__sub_8233A4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8233A538;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-336
	ctx.r30.s64 = ctx.r11.s64 + -336;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233A550:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8233a568
	if (!ctx.cr6.eq) goto loc_8233A568;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8233a610
	if (ctx.cr6.eq) goto loc_8233A610;
loc_8233A568:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r30,960
	ctx.r10.s64 = ctx.r30.s64 + 960;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233a550
	if (ctx.cr6.lt) goto loc_8233A550;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-21808
	ctx.r4.s64 = ctx.r11.s64 + -21808;
	// bl 0x82280900
	ctx.lr = 0x8233A588;
	sub_82280900(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r28,r11,-21840
	ctx.r28.s64 = ctx.r11.s64 + -21840;
loc_8233A598:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233A5B0;
	sub_82280900(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r11,r30,964
	ctx.r11.s64 = ctx.r30.s64 + 964;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a598
	if (ctx.cr6.lt) goto loc_8233A598;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-21888
	ctx.r4.s64 = ctx.r11.s64 + -21888;
	// bl 0x82280900
	ctx.lr = 0x8233A5D8;
	sub_82280900(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,-21920
	ctx.r4.s64 = ctx.r9.s64 + -21920;
	// lwz r5,17068(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17068);
	// bl 0x82280900
	ctx.lr = 0x8233A5F0;
	sub_82280900(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r8,-21980
	ctx.r4.s64 = ctx.r8.s64 + -21980;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8233A608;
	sub_822830E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8233A610:
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,17068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17068, ctx.r10.u32);
	// bl 0x82287ba0
	ctx.lr = 0x8233A630;
	sub_82287BA0(ctx, base);
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233a4b8
	ctx.lr = 0x8233A648;
	sub_8233A4B8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8233a860
	if (ctx.cr6.eq) goto loc_8233A860;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r10,17033(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233a690
	if (!ctx.cr6.eq) goto loc_8233A690;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r3,17060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233a690
	if (ctx.cr6.eq) goto loc_8233A690;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a690
	if (ctx.cr6.eq) goto loc_8233A690;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f80
	ctx.lr = 0x8233A690;
	sub_822E1F80(ctx, base);
loc_8233A690:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r11,-29824
	ctx.r29.s64 = ctx.r11.s64 + -29824;
	// bne cr6,0x8233a7a4
	if (!ctx.cr6.eq) goto loc_8233A7A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r26,5764
	ctx.r26.s64 = 5764;
	// addi r28,r11,-22024
	ctx.r28.s64 = ctx.r11.s64 + -22024;
loc_8233A6B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233a088
	ctx.lr = 0x8233A6C8;
	sub_8233A088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233a7a4
	if (ctx.cr6.eq) goto loc_8233A7A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233a7a4
	if (!ctx.cr6.eq) goto loc_8233A7A4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8233a708
	if (!ctx.cr6.eq) goto loc_8233A708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A6F0;
	sub_822881B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233a188
	ctx.lr = 0x8233A6FC;
	sub_8233A188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A704;
	sub_822881B0(ctx, base);
	// b 0x8233a798
	goto loc_8233A798;
loc_8233A708:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8233a758
	if (!ctx.cr6.eq) goto loc_8233A758;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8233A71C;
	sub_820F17B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233a7e8
	if (ctx.cr6.lt) goto loc_8233A7E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8233a7e8
	if (!ctx.cr6.lt) goto loc_8233A7E8;
	// mulli r10,r3,5764
	ctx.r10.s64 = ctx.r3.s64 * 5764;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8233a7e8
	if (ctx.cr6.lt) goto loc_8233A7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A750;
	sub_822881B0(ctx, base);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// b 0x8233a798
	goto loc_8233A798;
loc_8233A758:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x8233a780
	if (!ctx.cr6.eq) goto loc_8233A780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233A768;
	sub_822881B0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8233a7a4
	if (ctx.cr6.eq) goto loc_8233A7A4;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// b 0x8233a798
	goto loc_8233A798;
loc_8233A780:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r3,15
	ctx.r3.s64 = 15;
	// divw r6,r10,r26
	ctx.r6.s32 = ctx.r10.s32 / ctx.r26.s32;
	// bl 0x82280c30
	ctx.lr = 0x8233A798;
	sub_82280C30(ctx, base);
loc_8233A798:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a6b8
	if (ctx.cr6.eq) goto loc_8233A6B8;
loc_8233A7A4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r27,-32190
	ctx.r27.s64 = -2109603840;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// addi r29,r29,4640
	ctx.r29.s64 = ctx.r29.s64 + 4640;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lis r26,-32166
	ctx.r26.s64 = -2108030976;
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_8233A7C4:
	// lbz r9,29088(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233a810
	if (!ctx.cr6.eq) goto loc_8233A810;
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
	// b 0x8233a820
	goto loc_8233A820;
loc_8233A7E8:
	// cmpwi cr6,r25,250
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 250, ctx.xer);
	// ble cr6,0x8233a860
	if (!ctx.cr6.gt) goto loc_8233A860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-22080
	ctx.r3.s64 = ctx.r11.s64 + -22080;
	// bl 0x822e84f0
	ctx.lr = 0x8233A7FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8233A808;
	sub_822830E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8233A810:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8233A820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a848
	if (ctx.cr6.eq) goto loc_8233A848;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233a83c
	if (ctx.cr6.eq) goto loc_8233A83C;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_8233A83C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82127550
	ctx.lr = 0x8233A844;
	sub_82127550(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_8233A848:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,5764
	ctx.r29.s64 = ctx.r29.s64 + 5764;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a7c4
	if (ctx.cr6.lt) goto loc_8233A7C4;
loc_8233A860:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233A530) {
	__imp__sub_8233A530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r9,r11,-336
	ctx.r9.s64 = ctx.r11.s64 + -336;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8233A898:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bge 0x8233a8a8
	if (!ctx.cr0.lt) goto loc_8233A8A8;
	// li r11,19
	ctx.r11.s64 = 19;
loc_8233A8A8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8233a898
	if (!ctx.cr6.eq) goto loc_8233A898;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A868) {
	__imp__sub_8233A868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233A8D4) {
	__imp__sub_8233A8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233A8D8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// addi r6,r11,9240
	ctx.r6.s64 = ctx.r11.s64 + 9240;
	// lis r5,-32190
	ctx.r5.s64 = -2109603840;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// lbz r7,29088(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,-32312(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32312);
	// bne cr6,0x8233a934
	if (!ctx.cr6.eq) goto loc_8233A934;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfc r5,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r10,r11,r10
	ctx.r10.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x8233a93c
	goto loc_8233A93C;
loc_8233A934:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233A93C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233a994
	if (ctx.cr6.eq) goto loc_8233A994;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8233a96c
	if (!ctx.cr6.eq) goto loc_8233A96C;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r5,r11,r10
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// b 0x8233a978
	goto loc_8233A978;
loc_8233A96C:
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8233A978:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233a994
	if (!ctx.cr6.eq) goto loc_8233A994;
	// lwz r10,9768(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 9768);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8233a994
	if (!ctx.cr6.lt) goto loc_8233A994;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8233A994:
	// lwz r9,9796(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 9796);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8233a9bc
	if (!ctx.cr6.eq) goto loc_8233A9BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r5,r11,r10
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// b 0x8233a9c4
	goto loc_8233A9C4;
loc_8233A9BC:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233A9C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233aa1c
	if (ctx.cr6.eq) goto loc_8233AA1C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8233a9f4
	if (!ctx.cr6.eq) goto loc_8233A9F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x8233aa00
	goto loc_8233AA00;
loc_8233A9F4:
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8233AA00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233aa1c
	if (!ctx.cr6.eq) goto loc_8233AA1C;
	// lwz r11,19548(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8233aa1c
	if (!ctx.cr6.lt) goto loc_8233AA1C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8233AA1C:
	// bl 0x8233a868
	ctx.lr = 0x8233AA20;
	sub_8233A868(ctx, base);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r9,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r11,r11,r10
	temp.u8 = (ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233A8D8) {
	__imp__sub_8233A8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233AA44) {
	__imp__sub_8233AA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8233AA50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// li r9,5764
	ctx.r9.s64 = 5764;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r6,17033(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17033);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// divw r28,r7,r9
	ctx.r28.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8233aa98
	if (!ctx.cr6.eq) goto loc_8233AA98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-21596
	ctx.r4.s64 = ctx.r11.s64 + -21596;
	// bl 0x82280c30
	ctx.lr = 0x8233AA90;
	sub_82280C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233AA98:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r31,-31833
	ctx.r31.s64 = -2086207488;
	// addi r27,r11,628
	ctx.r27.s64 = ctx.r11.s64 + 628;
	// lbz r11,-979(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -979);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233aabc
	if (!ctx.cr6.eq) goto loc_8233AABC;
	// lbz r11,17604(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233acd0
	if (ctx.cr6.eq) goto loc_8233ACD0;
loc_8233AABC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x8233AAC4;
	sub_82288288(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,-31448(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8233aaf4
	if (ctx.cr6.eq) goto loc_8233AAF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-21680
	ctx.r4.s64 = ctx.r11.s64 + -21680;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233AAEC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233AAF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x8233AAFC;
	sub_82288288(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mulli r9,r28,9780
	ctx.r9.s64 = ctx.r28.s64 * 9780;
	// lbz r8,17604(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17604);
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r7,r10,9768
	ctx.r7.s64 = ctx.r10.s64 + 9768;
	// stwx r3,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// beq cr6,0x8233acc8
	if (ctx.cr6.eq) goto loc_8233ACC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233AB24;
	sub_822881B0(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,17060(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17060);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233ab70
	if (!ctx.cr6.eq) goto loc_8233AB70;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ab70
	if (ctx.cr6.eq) goto loc_8233AB70;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ab5c
	if (ctx.cr6.eq) goto loc_8233AB5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8233ab6c
	goto loc_8233AB6C;
loc_8233AB5C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ab70
	if (ctx.cr6.eq) goto loc_8233AB70;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8233AB6C:
	// bl 0x822e1f80
	ctx.lr = 0x8233AB70;
	sub_822E1F80(ctx, base);
loc_8233AB70:
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r11,17340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17340);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ab9c
	if (ctx.cr6.eq) goto loc_8233AB9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-21724
	ctx.r4.s64 = ctx.r11.s64 + -21724;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233AB9C;
	sub_82280900(ctx, base);
loc_8233AB9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233ABA4;
	sub_822881B0(ctx, base);
	// lwz r11,-968(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -968);
	// addi r9,r27,-964
	ctx.r9.s64 = ctx.r27.s64 + -964;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,3
	ctx.r5.s64 = 3;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287d60
	ctx.lr = 0x8233ABD4;
	sub_82287D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82287d60
	ctx.lr = 0x8233ABE4;
	sub_82287D60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,61
	ctx.r4.s64 = 61;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287e08
	ctx.lr = 0x8233ABF8;
	sub_82287E08(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8233ac50
	if (ctx.cr6.eq) goto loc_8233AC50;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8233ac30
	if (!ctx.cr6.gt) goto loc_8233AC30;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// bl 0x82287e40
	ctx.lr = 0x8233AC30;
	sub_82287E40(ctx, base);
loc_8233AC30:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x82287d60
	ctx.lr = 0x8233AC4C;
	sub_82287D60(ctx, base);
	// b 0x8233ac64
	goto loc_8233AC64;
loc_8233AC50:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82287e40
	ctx.lr = 0x8233AC64;
	sub_82287E40(ctx, base);
loc_8233AC64:
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287e08
	ctx.lr = 0x8233AC70;
	sub_82287E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233aca0
	if (ctx.cr6.eq) goto loc_8233ACA0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-21768
	ctx.r4.s64 = ctx.r10.s64 + -21768;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x822830e8
	ctx.lr = 0x8233ACA0;
	sub_822830E8(ctx, base);
loc_8233ACA0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8233ACAC;
	sub_820F17B8(ctx, base);
	// lbz r11,-979(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -979);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233acd0
	if (ctx.cr6.eq) goto loc_8233ACD0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8233ACC8:
	// bl 0x82310110
	ctx.lr = 0x8233ACCC;
	sub_82310110(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
loc_8233ACD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233AA48) {
	__imp__sub_8233AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ACD8) {
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
	// bl 0x8230b620
	ctx.lr = 0x8233ACF0;
	sub_8230B620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ad14
	if (ctx.cr6.eq) goto loc_8233AD14;
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
loc_8233AD14:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-23592
	ctx.r4.s64 = ctx.r11.s64 + -23592;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x8233AD28;
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
}

PPC_WEAK_FUNC(sub_8233ACD8) {
	__imp__sub_8233ACD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,17060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8233ad60
	if (!ctx.cr6.gt) goto loc_8233AD60;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8233AD60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233AD40) {
	__imp__sub_8233AD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233AD78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,26214
	ctx.r5.s64 = 1717960704;
	// addi r11,r6,-340
	ctx.r11.s64 = ctx.r6.s64 + -340;
	// ori r4,r5,26215
	ctx.r4.u64 = ctx.r5.u64 | 26215;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-340(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -340);
	// lis r3,-31833
	ctx.r3.s64 = -2086207488;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r3,17608
	ctx.r7.s64 = ctx.r3.s64 + 17608;
	// mulhw r10,r11,r4
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r11,-340(r6)
	PPC_STORE_U32(ctx.r6.u32 + -340, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287b40
	ctx.lr = 0x8233ADEC;
	sub_82287B40(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233ADF0;
	sub_821FC2B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ae00
	if (!ctx.cr6.eq) goto loc_8233AE00;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8233AE00:
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,17060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8233ae20
	if (!ctx.cr6.gt) goto loc_8233AE20;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x8233ae2c
	goto loc_8233AE2C;
loc_8233AE20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233ae2c
	if (!ctx.cr6.gt) goto loc_8233AE2C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8233AE2C:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-31448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// bl 0x82287ed0
	ctx.lr = 0x8233AE44;
	sub_82287ED0(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,17040(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17040);
	// bl 0x82287ed0
	ctx.lr = 0x8233AE54;
	sub_82287ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287ed0
	ctx.lr = 0x8233AE60;
	sub_82287ED0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287e08
	ctx.lr = 0x8233AE6C;
	sub_82287E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233AD70) {
	__imp__sub_8233AD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233AE74) {
	__imp__sub_8233AE74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233AE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8233AE80;
	__savegprlr_14(ctx, base);
	// stwu r1,-1904(r1)
	ea = -1904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db808
	ctx.lr = 0x8233AE90;
	sub_822DB808(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db8f0
	ctx.lr = 0x8233AE98;
	sub_822DB8F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822db808
	ctx.lr = 0x8233AEA8;
	sub_822DB808(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822db8f0
	ctx.lr = 0x8233AEB0;
	sub_822DB8F0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db808
	ctx.lr = 0x8233AEC0;
	sub_822DB808(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8f0
	ctx.lr = 0x8233AEC8;
	sub_822DB8F0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// lis r21,-32190
	ctx.r21.s64 = -2109603840;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r22,r10,9768
	ctx.r22.s64 = ctx.r10.s64 + 9768;
	// addi r20,r11,8
	ctx.r20.s64 = ctx.r11.s64 + 8;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r5,26214
	ctx.r5.s64 = 1717960704;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lwz r6,-32312(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + -32312);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// ori r26,r5,26215
	ctx.r26.u64 = ctx.r5.u64 | 26215;
	// lis r14,-31833
	ctx.r14.s64 = -2086207488;
	// lis r23,-31834
	ctx.r23.s64 = -2086273024;
	// lis r16,-31823
	ctx.r16.s64 = -2085552128;
	// addi r28,r8,-336
	ctx.r28.s64 = ctx.r8.s64 + -336;
	// addi r17,r7,-21340
	ctx.r17.s64 = ctx.r7.s64 + -21340;
	// addi r15,r9,-21416
	ctx.r15.s64 = ctx.r9.s64 + -21416;
	// addi r19,r10,-21464
	ctx.r19.s64 = ctx.r10.s64 + -21464;
	// addi r18,r11,-21544
	ctx.r18.s64 = ctx.r11.s64 + -21544;
loc_8233AF34:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233af5c
	if (!ctx.cr6.eq) goto loc_8233AF5C;
	// subfc r11,r6,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r24.s64 - ctx.r6.s64;
	// eqv r9,r6,r24
	ctx.r9.u64 = ~(ctx.r6.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x8233af68
	goto loc_8233AF68;
loc_8233AF5C:
	// lwz r11,-9752(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -9752);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233AF68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b228
	if (ctx.cr6.eq) goto loc_8233B228;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8233b228
	if (ctx.cr6.lt) goto loc_8233B228;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233afa0
	if (!ctx.cr6.eq) goto loc_8233AFA0;
	// subfc r11,r6,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r24.s64 - ctx.r6.s64;
	// eqv r10,r6,r24
	ctx.r10.u64 = ~(ctx.r6.u64 ^ ctx.r24.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x8233afb0
	goto loc_8233AFB0;
loc_8233AFA0:
	// lwz r11,-9752(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -9752);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8233AFB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b228
	if (!ctx.cr6.eq) goto loc_8233B228;
	// addi r4,r22,-9768
	ctx.r4.s64 = ctx.r22.s64 + -9768;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,1568
	ctx.r5.s64 = 1568;
	// bl 0x823de1f0
	ctx.lr = 0x8233AFCC;
	sub_823DE1F0(ctx, base);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82289868
	ctx.lr = 0x8233AFE4;
	sub_82289868(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82287b40
	ctx.lr = 0x8233AFF4;
	sub_82287B40(ctx, base);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233a868
	ctx.lr = 0x8233B000;
	sub_8233A868(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8233b05c
	if (ctx.cr6.gt) goto loc_8233B05C;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233b03c
	if (ctx.cr6.eq) goto loc_8233B03C;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// lwz r10,-31448(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31448);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8233b040
	if (ctx.cr6.eq) goto loc_8233B040;
loc_8233B03C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_8233B040:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233B058;
	sub_82280900(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8233B05C:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,644(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 644);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// mulhw r9,r11,r26
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32)) >> 32;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r6,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r6.s64;
	// ble cr6,0x8233b0b4
	if (!ctx.cr6.gt) goto loc_8233B0B4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233B0AC;
	sub_82280900(ctx, base);
	// lwz r11,644(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 644);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8233B0B4:
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287e08
	ctx.lr = 0x8233B0C0;
	sub_82287E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287e08
	ctx.lr = 0x8233B0CC;
	sub_82287E08(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287e08
	ctx.lr = 0x8233B0D8;
	sub_82287E08(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82287ea0
	ctx.lr = 0x8233B0F8;
	sub_82287EA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82287e40
	ctx.lr = 0x8233B108;
	sub_82287E40(ctx, base);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233b18c
	if (ctx.cr6.eq) goto loc_8233B18C;
loc_8233B11C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8233b18c
	if (ctx.cr6.eq) goto loc_8233B18C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// mulhw r10,r11,r26
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r7,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82287ea0
	ctx.lr = 0x8233B168;
	sub_82287EA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82287e40
	ctx.lr = 0x8233B178;
	sub_82287E40(ctx, base);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8233b11c
	if (!ctx.cr6.eq) goto loc_8233B11C;
loc_8233B18C:
	// lwz r11,17340(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 17340);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b1cc
	if (ctx.cr6.eq) goto loc_8233B1CC;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x821fc2b8
	ctx.lr = 0x8233B1A4;
	sub_821FC2B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x8233B1AC;
	sub_82310110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x8233B1CC;
	sub_82280900(ctx, base);
loc_8233B1CC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82289a70
	ctx.lr = 0x8233B1DC;
	sub_82289A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b1fc
	if (!ctx.cr6.eq) goto loc_8233B1FC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82339df0
	ctx.lr = 0x8233B1F8;
	sub_82339DF0(ctx, base);
	// b 0x8233b224
	goto loc_8233B224;
loc_8233B1FC:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b21c
	if (ctx.cr6.eq) goto loc_8233B21C;
loc_8233B208:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82289900
	ctx.lr = 0x8233B210;
	sub_82289900(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233b208
	if (!ctx.cr6.eq) goto loc_8233B208;
loc_8233B21C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,-9768(r22)
	PPC_STORE_U32(ctx.r22.u32 + -9768, ctx.r11.u32);
loc_8233B224:
	// lwz r6,-32312(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + -32312);
loc_8233B228:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r20,r20,5764
	ctx.r20.s64 = ctx.r20.s64 + 5764;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r10,r11,11536
	ctx.r10.s64 = ctx.r11.s64 + 11536;
	// addi r22,r22,9780
	ctx.r22.s64 = ctx.r22.s64 + 9780;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233af34
	if (ctx.cr6.lt) goto loc_8233AF34;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822db8d8
	ctx.lr = 0x8233B24C;
	sub_822DB8D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822db8d8
	ctx.lr = 0x8233B254;
	sub_822DB8D8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db8d8
	ctx.lr = 0x8233B25C;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,1904
	ctx.r1.s64 = ctx.r1.s64 + 1904;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233AE78) {
	__imp__sub_8233AE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B264) {
	__imp__sub_8233B264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8233B270;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// lis r26,-32166
	ctx.r26.s64 = -2108030976;
loc_8233B294:
	// lbz r9,29088(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233b2b8
	if (!ctx.cr6.eq) goto loc_8233B2B8;
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
	// b 0x8233b2c4
	goto loc_8233B2C4;
loc_8233B2B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233B2C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b31c
	if (ctx.cr6.eq) goto loc_8233B31C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233b2f0
	if (!ctx.cr6.eq) goto loc_8233B2F0;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r9,r10,r30
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x8233b300
	goto loc_8233B300;
loc_8233B2F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8233B300:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b31c
	if (!ctx.cr6.eq) goto loc_8233B31C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eb398
	ctx.lr = 0x8233B318;
	sub_822EB398(ctx, base);
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_8233B31C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19576
	ctx.r11.s64 = ctx.r28.s64 + 19576;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233b294
	if (ctx.cr6.lt) goto loc_8233B294;
	// bl 0x822eb580
	ctx.lr = 0x8233B334;
	sub_822EB580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233B268) {
	__imp__sub_8233B268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B33C) {
	__imp__sub_8233B33C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B340) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8233B364;
	sub_82287B40(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21320
	ctx.r4.s64 = ctx.r11.s64 + -21320;
	// bl 0x82288048
	ctx.lr = 0x8233B374;
	sub_82288048(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x8233B380;
	sub_82288048(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233b268
	ctx.lr = 0x8233B388;
	sub_8233B268(ctx, base);
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

PPC_WEAK_FUNC(sub_8233B340) {
	__imp__sub_8233B340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B39C) {
	__imp__sub_8233B39C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B3A0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-21276
	ctx.r4.s64 = ctx.r11.s64 + -21276;
	// bl 0x82280900
	ctx.lr = 0x8233B3BC;
	sub_82280900(ctx, base);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-31833
	ctx.r7.s64 = -2086207488;
	// stb r11,29088(r9)
	PPC_STORE_U8(ctx.r9.u32 + 29088, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,17033(r8)
	PPC_STORE_U8(ctx.r8.u32 + 17033, ctx.r10.u8);
	// lwz r3,17052(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17052);
	// bl 0x822e1f18
	ctx.lr = 0x8233B3E4;
	sub_822E1F18(ctx, base);
	// bl 0x82139930
	ctx.lr = 0x8233B3E8;
	sub_82139930(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r6,-21312
	ctx.r4.s64 = ctx.r6.s64 + -21312;
	// bl 0x82280900
	ctx.lr = 0x8233B3F8;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B3A0) {
	__imp__sub_8233B3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233B410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8233ae78
	ctx.lr = 0x8233B418;
	sub_8233AE78(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r30,r11,-348
	ctx.r30.s64 = ctx.r11.s64 + -348;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r6,r11,-29824
	ctx.r6.s64 = ctx.r11.s64 + -29824;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,9240
	ctx.r9.s64 = ctx.r9.s64 + 9240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r31,r6,8
	ctx.r31.s64 = ctx.r6.s64 + 8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lwz r10,-32312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// lbz r8,29088(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29088);
loc_8233B468:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8233b4c0
	if (ctx.cr6.lt) goto loc_8233B4C0;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b498
	if (!ctx.cr6.eq) goto loc_8233B498;
	// subfc r11,r10,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// eqv r5,r10,r7
	ctx.r5.u64 = ~(ctx.r10.u64 ^ ctx.r7.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// b 0x8233b4a8
	goto loc_8233B4A8;
loc_8233B498:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_8233B4A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b4c0
	if (ctx.cr6.eq) goto loc_8233B4C0;
	// lwz r11,4624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233b4dc
	if (!ctx.cr6.eq) goto loc_8233B4DC;
loc_8233B4C0:
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// addi r11,r6,11536
	ctx.r11.s64 = ctx.r6.s64 + 11536;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,9780
	ctx.r9.s64 = ctx.r9.s64 + 9780;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233b468
	if (ctx.cr6.lt) goto loc_8233B468;
	// b 0x8233b52c
	goto loc_8233B52C;
loc_8233B4DC:
	// bl 0x82310110
	ctx.lr = 0x8233B4E0;
	sub_82310110(ctx, base);
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// stw r3,5692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5692, ctx.r3.u32);
	// lwz r11,17340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17340);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233b510
	if (ctx.cr6.eq) goto loc_8233B510;
	// bl 0x821fc2b8
	ctx.lr = 0x8233B4FC;
	sub_821FC2B8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21244
	ctx.r4.s64 = ctx.r11.s64 + -21244;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233B510;
	sub_82280900(ctx, base);
loc_8233B510:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82287ba0
	ctx.lr = 0x8233B518;
	sub_82287BA0(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233B51C;
	sub_821FC2B8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-31448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x8233a530
	ctx.lr = 0x8233B52C;
	sub_8233A530(ctx, base);
loc_8233B52C:
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,976(r30)
	PPC_STORE_U32(ctx.r30.u32 + 976, ctx.r11.u32);
	// lwz r11,-31544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31544);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8233a8d8
	ctx.lr = 0x8233B544;
	sub_8233A8D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,-3(r30)
	PPC_STORE_U8(ctx.r30.u32 + -3, ctx.r3.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233b564
	if (ctx.cr6.eq) goto loc_8233B564;
	// bl 0x82310110
	ctx.lr = 0x8233B558;
	sub_82310110(ctx, base);
	// stw r3,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r3.u32);
	// stw r3,980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 980, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8233B564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233B408) {
	__imp__sub_8233B408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B56C) {
	__imp__sub_8233B56C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B570) {
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
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// lis r8,-31831
	ctx.r8.s64 = -2086076416;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,17040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17040, ctx.r11.u32);
	// stb r10,-31532(r8)
	PPC_STORE_U8(ctx.r8.u32 + -31532, ctx.r10.u8);
	// bl 0x823389b8
	ctx.lr = 0x8233B598;
	sub_823389B8(ctx, base);
	// bl 0x8233a318
	ctx.lr = 0x8233B59C;
	sub_8233A318(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,628
	ctx.r6.s64 = ctx.r7.s64 + 628;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,628(r7)
	PPC_STORE_U32(ctx.r7.u32 + 628, ctx.r10.u32);
	// stb r11,-979(r6)
	PPC_STORE_U8(ctx.r6.u32 + -979, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B570) {
	__imp__sub_8233B570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B5C4) {
	__imp__sub_8233B5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233b62c
	if (ctx.cr6.eq) goto loc_8233B62C;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8233B5F4;
	sub_82287B40(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21208
	ctx.r4.s64 = ctx.r11.s64 + -21208;
	// bl 0x82288048
	ctx.lr = 0x8233B604;
	sub_82288048(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-31448(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31448);
	// bl 0x82287ed0
	ctx.lr = 0x8233B614;
	sub_82287ED0(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-16416(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16416);
	// bl 0x82287ed0
	ctx.lr = 0x8233B624;
	sub_82287ED0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233b268
	ctx.lr = 0x8233B62C;
	sub_8233B268(ctx, base);
loc_8233B62C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B5C8) {
	__imp__sub_8233B5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B63C) {
	__imp__sub_8233B63C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B640) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,-16416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16416);
	// addi r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 + 1000;
	// stw r3,-16416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16416, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B640) {
	__imp__sub_8233B640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B654) {
	__imp__sub_8233B654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// stb r10,-352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -352, ctx.r10.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r9,17072
	ctx.r3.s64 = ctx.r9.s64 + 17072;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233B658) {
	__imp__sub_8233B658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B684) {
	__imp__sub_8233B684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r3,-352(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -352);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B688) {
	__imp__sub_8233B688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B694) {
	__imp__sub_8233B694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r3,17034(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17034);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B698) {
	__imp__sub_8233B698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B6A4) {
	__imp__sub_8233B6A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B6A8) {
	__imp__sub_8233B6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B6AC) {
	__imp__sub_8233B6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B6B0) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x8233b6ec
	if (!ctx.cr6.lt) goto loc_8233B6EC;
loc_8233B6D8:
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
loc_8233B6EC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233b6d8
	if (ctx.cr6.eq) goto loc_8233B6D8;
	// bl 0x821351e8
	ctx.lr = 0x8233B700;
	sub_821351E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b6d8
	if (!ctx.cr6.eq) goto loc_8233B6D8;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r10,626(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 626);
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

PPC_WEAK_FUNC(sub_8233B6B0) {
	__imp__sub_8233B6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B72C) {
	__imp__sub_8233B72C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B730) {
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
	// bl 0x8233b6b0
	ctx.lr = 0x8233B740;
	sub_8233B6B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b764
	if (!ctx.cr6.eq) goto loc_8233B764;
loc_8233B74C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8233B764:
	// bl 0x82338728
	ctx.lr = 0x8233B768;
	sub_82338728(ctx, base);
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lwz r11,17332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17332);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8233b74c
	if (!ctx.cr0.gt) goto loc_8233B74C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,17044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17044);
	// lfs f0,5816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5816);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-21196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f1,f9,f0,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823de720
	ctx.lr = 0x8233B7C4;
	sub_823DE720(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B730) {
	__imp__sub_8233B730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B7F0) {
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
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,-32312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233b820
	if (!ctx.cr6.eq) goto loc_8233B820;
loc_8233B80C:
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
loc_8233B820:
	// bl 0x821351e8
	ctx.lr = 0x8233B824;
	sub_821351E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b80c
	if (!ctx.cr6.eq) goto loc_8233B80C;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r11,r11,-349
	ctx.r11.s64 = ctx.r11.s64 + -349;
	// lbz r10,975(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 975);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233b860
	if (!ctx.cr6.eq) goto loc_8233B860;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233b860
	if (!ctx.cr6.eq) goto loc_8233B860;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8233b864
	if (!ctx.cr6.eq) goto loc_8233B864;
loc_8233B860:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8233B864:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B7F0) {
	__imp__sub_8233B7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,626
	ctx.r11.s64 = ctx.r11.s64 + 626;
	// lbz r10,-977(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -977);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233B878) {
	__imp__sub_8233B878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233B8A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233b8c8
	if (ctx.cr6.eq) goto loc_8233B8C8;
	// bl 0x8233b3a0
	ctx.lr = 0x8233B8C8;
	sub_8233B3A0(ctx, base);
loc_8233B8C8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a4c0
	ctx.lr = 0x8233B8DC;
	sub_8213A4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233B898) {
	__imp__sub_8233B898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B8E4) {
	__imp__sub_8233B8E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B8E8) {
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
	// bl 0x82310110
	ctx.lr = 0x8233B900;
	sub_82310110(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,627
	ctx.r31.s64 = ctx.r11.s64 + 627;
	// lwz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5);
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8233b97c
	if (ctx.cr0.lt) goto loc_8233B97C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8233ae78
	ctx.lr = 0x8233B924;
	sub_8233AE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r31,-975
	ctx.r5.s64 = ctx.r31.s64 + -975;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1);
	// mulli r4,r11,50
	ctx.r4.s64 = ctx.r11.s64 * 50;
	// bl 0x82327e68
	ctx.lr = 0x8233B940;
	sub_82327E68(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,5(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5, ctx.r11.u32);
	// lwz r11,17048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17048);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233b970
	if (ctx.cr6.eq) goto loc_8233B970;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8233b97c
	if (!ctx.cr6.eq) goto loc_8233B97C;
	// lwz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8233b978
	goto loc_8233B978;
loc_8233B970:
	// lwz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8233B978:
	// stw r11,1(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1, ctx.r11.u32);
loc_8233B97C:
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

PPC_WEAK_FUNC(sub_8233B8E8) {
	__imp__sub_8233B8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233B994) {
	__imp__sub_8233B994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233B998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8233B9A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
loc_8233B9BC:
	// lbz r10,29088(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233b9e8
	if (!ctx.cr6.eq) goto loc_8233B9E8;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// subfc r9,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8233b9f8
	goto loc_8233B9F8;
loc_8233B9E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8233B9F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ba20
	if (!ctx.cr6.eq) goto loc_8233BA20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139f50
	ctx.lr = 0x8233BA0C;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ba20
	if (ctx.cr6.eq) goto loc_8233BA20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821395c0
	ctx.lr = 0x8233BA20;
	sub_821395C0(ctx, base);
loc_8233BA20:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r28,19576
	ctx.r11.s64 = ctx.r28.s64 + 19576;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233b9bc
	if (ctx.cr6.lt) goto loc_8233B9BC;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233ba64
	if (!ctx.cr6.eq) goto loc_8233BA64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stb r10,-352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -352, ctx.r10.u8);
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// addi r4,r9,-21192
	ctx.r4.s64 = ctx.r9.s64 + -21192;
	// addi r3,r8,17072
	ctx.r3.s64 = ctx.r8.s64 + 17072;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822e7e98
	ctx.lr = 0x8233BA64;
	sub_822E7E98(ctx, base);
loc_8233BA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233B998) {
	__imp__sub_8233B998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233BA6C) {
	__imp__sub_8233BA6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BA70) {
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
	// bl 0x8213a1d8
	ctx.lr = 0x8233BA80;
	sub_8213A1D8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233bad4
	if (ctx.cr6.eq) goto loc_8233BAD4;
	// bl 0x8233b3a0
	ctx.lr = 0x8233BA94;
	sub_8233B3A0(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-22504
	ctx.r11.s64 = ctx.r11.s64 + -22504;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8233bac4
	if (!ctx.cr6.gt) goto loc_8233BAC4;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8233bacc
	goto loc_8233BACC;
loc_8233BAC4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
loc_8233BACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8233BAD4;
	sub_822830E8(ctx, base);
loc_8233BAD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233BA70) {
	__imp__sub_8233BA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233BAE4) {
	__imp__sub_8233BAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8233BAF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r10,17033(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233bb20
	if (ctx.cr6.eq) goto loc_8233BB20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-20664
	ctx.r4.s64 = ctx.r11.s64 + -20664;
	// bl 0x82280c30
	ctx.lr = 0x8233BB18;
	sub_82280C30(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8233BB20:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233BB28;
	sub_822881B0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233be00
	if (!ctx.cr6.gt) goto loc_8233BE00;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bgt cr6,0x8233be00
	if (ctx.cr6.gt) goto loc_8233BE00;
	// lis r19,-31833
	ctx.r19.s64 = -2086207488;
	// lwz r11,17340(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17340);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233bb68
	if (ctx.cr6.eq) goto loc_8233BB68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,20(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-20716
	ctx.r4.s64 = ctx.r11.s64 + -20716;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BB68;
	sub_82280900(ctx, base);
loc_8233BB68:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// lwz r3,-31448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x8233a398
	ctx.lr = 0x8233BB7C;
	sub_8233A398(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821fc2b8
	ctx.lr = 0x8233BB84;
	sub_821FC2B8(ctx, base);
	// addi r11,r3,-50
	ctx.r11.s64 = ctx.r3.s64 + -50;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233bb98
	if (!ctx.cr6.lt) goto loc_8233BB98;
	// bl 0x821fc2b8
	ctx.lr = 0x8233BB94;
	sub_821FC2B8(ctx, base);
	// addi r26,r3,-50
	ctx.r26.s64 = ctx.r3.s64 + -50;
loc_8233BB98:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x8233bdac
	if (!ctx.cr6.gt) goto loc_8233BDAC;
	// lis r7,-31833
	ctx.r7.s64 = -2086207488;
	// lis r4,26214
	ctx.r4.s64 = 1717960704;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r29,r4,26215
	ctx.r29.u64 = ctx.r4.u64 | 26215;
	// lis r25,-31833
	ctx.r25.s64 = -2086207488;
	// lis r21,-31936
	ctx.r21.s64 = -2092957696;
	// addi r23,r7,17608
	ctx.r23.s64 = ctx.r7.s64 + 17608;
	// addi r30,r6,626
	ctx.r30.s64 = ctx.r6.s64 + 626;
	// addi r18,r5,-20768
	ctx.r18.s64 = ctx.r5.s64 + -20768;
	// addi r15,r8,-20856
	ctx.r15.s64 = ctx.r8.s64 + -20856;
	// addi r22,r9,-20912
	ctx.r22.s64 = ctx.r9.s64 + -20912;
	// addi r20,r10,-20964
	ctx.r20.s64 = ctx.r10.s64 + -20964;
	// addi r17,r11,-21000
	ctx.r17.s64 = ctx.r11.s64 + -21000;
loc_8233BBE8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82288210
	ctx.lr = 0x8233BBF0;
	sub_82288210(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233bde4
	if (!ctx.cr6.gt) goto loc_8233BDE4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,28(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233be14
	if (!ctx.cr6.eq) goto loc_8233BE14;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8233a4b8
	ctx.lr = 0x8233BC24;
	sub_8233A4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233be14
	if (ctx.cr6.eq) goto loc_8233BE14;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,-31448(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8233bc54
	if (ctx.cr6.eq) goto loc_8233BC54;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BC50;
	sub_82280900(ctx, base);
	// b 0x8233bd98
	goto loc_8233BD98;
loc_8233BC54:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8233bd68
	if (!ctx.cr6.gt) goto loc_8233BD68;
	// lwz r11,-966(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -966);
	// lwz r9,17068(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233bd50
	if (ctx.cr6.eq) goto loc_8233BD50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,17340(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17340);
	// addi r8,r30,-962
	ctx.r8.s64 = ctx.r30.s64 + -962;
	// stw r11,-966(r30)
	PPC_STORE_U32(ctx.r30.u32 + -966, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233bce0
	if (ctx.cr6.eq) goto loc_8233BCE0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BCDC;
	sub_82280900(ctx, base);
	// lwz r11,-966(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -966);
loc_8233BCE0:
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287b40
	ctx.lr = 0x8233BCF4;
	sub_82287B40(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82287e40
	ctx.lr = 0x8233BD08;
	sub_82287E40(ctx, base);
	// bl 0x8233b878
	ctx.lr = 0x8233BD0C;
	sub_8233B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233bd98
	if (ctx.cr6.eq) goto loc_8233BD98;
	// bl 0x82310110
	ctx.lr = 0x8233BD1C;
	sub_82310110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821fc2b8
	ctx.lr = 0x8233BD24;
	sub_821FC2B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x8233BD38;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9404(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -9404);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x822e1f80
	ctx.lr = 0x8233BD4C;
	sub_822E1F80(ctx, base);
	// b 0x8233bd98
	goto loc_8233BD98;
loc_8233BD50:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BD64;
	sub_82280900(ctx, base);
	// b 0x8233bd98
	goto loc_8233BD98;
loc_8233BD68:
	// lwz r11,17340(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17340);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233bd8c
	if (ctx.cr6.eq) goto loc_8233BD8C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BD8C;
	sub_82280900(ctx, base);
loc_8233BD8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8233BD98:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r11,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r11.u32);
	// cmpw cr6,r16,r14
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x8233bbe8
	if (ctx.cr6.lt) goto loc_8233BBE8;
loc_8233BDAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8233be14
	if (!ctx.cr6.eq) goto loc_8233BE14;
	// lwz r11,17340(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17340);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233be14
	if (ctx.cr6.eq) goto loc_8233BE14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r11,-21028
	ctx.r4.s64 = ctx.r11.s64 + -21028;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BDDC;
	sub_82280900(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8233BDE4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8233BDF8;
	sub_82280900(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8233BE00:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// addi r4,r11,-21176
	ctx.r4.s64 = ctx.r11.s64 + -21176;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280b08
	ctx.lr = 0x8233BE14;
	sub_82280B08(ctx, base);
loc_8233BE14:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233BAE8) {
	__imp__sub_8233BAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233BE1C) {
	__imp__sub_8233BE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BE20) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233BE44;
	sub_822881B0(ctx, base);
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bne cr6,0x8233be90
	if (!ctx.cr6.eq) goto loc_8233BE90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233BE54;
	sub_822881B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8233be84
	if (ctx.cr6.lt) goto loc_8233BE84;
	// beq cr6,0x8233be78
	if (ctx.cr6.eq) goto loc_8233BE78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-20612
	ctx.r4.s64 = ctx.r11.s64 + -20612;
	// bl 0x82280b08
	ctx.lr = 0x8233BE74;
	sub_82280B08(ctx, base);
	// b 0x8233be90
	goto loc_8233BE90;
loc_8233BE78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bae8
	ctx.lr = 0x8233BE80;
	sub_8233BAE8(ctx, base);
	// b 0x8233be90
	goto loc_8233BE90;
loc_8233BE84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233aa48
	ctx.lr = 0x8233BE90;
	sub_8233AA48(ctx, base);
loc_8233BE90:
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

PPC_WEAK_FUNC(sub_8233BE20) {
	__imp__sub_8233BE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233BEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8233BEB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// std r4,672(r1)
	PPC_STORE_U64(ctx.r1.u32 + 672, ctx.r4.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r5,680(r1)
	PPC_STORE_U64(ctx.r1.u32 + 680, ctx.r5.u64);
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// addi r27,r10,-28736
	ctx.r27.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8233befc
	if (!ctx.cr6.gt) goto loc_8233BEFC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8233bf00
	goto loc_8233BF00;
loc_8233BEFC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8233BF00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// bl 0x822e8058
	ctx.lr = 0x8233BF10;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233bf30
	if (!ctx.cr6.eq) goto loc_8233BF30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821382a0
	ctx.lr = 0x8233BF24;
	sub_821382A0(ctx, base);
loc_8233BF24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233BF30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-544
	ctx.r4.s64 = ctx.r11.s64 + -544;
	// bl 0x822e8058
	ctx.lr = 0x8233BF40;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233bf60
	if (!ctx.cr6.eq) goto loc_8233BF60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82137840
	ctx.lr = 0x8233BF54;
	sub_82137840(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233BF60:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20288
	ctx.r4.s64 = ctx.r11.s64 + -20288;
	// bl 0x822e8068
	ctx.lr = 0x8233BF70;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233bfc0
	if (!ctx.cr6.eq) goto loc_8233BFC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8233bfa0
	if (!ctx.cr6.gt) goto loc_8233BFA0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8233bfa4
	goto loc_8233BFA4;
loc_8233BFA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8233BFA4:
	// bl 0x823deaf8
	ctx.lr = 0x8233BFA8;
	sub_823DEAF8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x822eb750
	ctx.lr = 0x8233BFB4;
	sub_822EB750(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233BFC0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20296
	ctx.r4.s64 = ctx.r11.s64 + -20296;
	// bl 0x822e8068
	ctx.lr = 0x8233BFD0;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c084
	if (!ctx.cr6.eq) goto loc_8233C084;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8233c000
	if (!ctx.cr6.gt) goto loc_8233C000;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8233c004
	goto loc_8233C004;
loc_8233C000:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8233C004:
	// lis r29,-31831
	ctx.r29.s64 = -2086076416;
	// lwz r30,-31540(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31540);
	// bl 0x823deaf8
	ctx.lr = 0x8233C010;
	sub_823DEAF8(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8233c034
	if (!ctx.cr6.eq) goto loc_8233C034;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-352
	ctx.r9.s64 = ctx.r10.s64 + -352;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C034:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8233c05c
	if (!ctx.cr6.gt) goto loc_8233C05C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8233c060
	goto loc_8233C060;
loc_8233C05C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8233C060:
	// lwz r31,-31540(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31540);
	// bl 0x823deaf8
	ctx.lr = 0x8233C068;
	sub_823DEAF8(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8233c078
	if (!ctx.cr6.eq) goto loc_8233C078;
	// bl 0x823385d8
	ctx.lr = 0x8233C078;
	sub_823385D8(ctx, base);
loc_8233C078:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C084:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20308
	ctx.r4.s64 = ctx.r11.s64 + -20308;
	// bl 0x822e8068
	ctx.lr = 0x8233C094;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c0c4
	if (!ctx.cr6.eq) goto loc_8233C0C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8233c000
	if (!ctx.cr6.gt) goto loc_8233C000;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8233c004
	goto loc_8233C004;
loc_8233C0C4:
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,672(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823399c0
	ctx.lr = 0x8233C0E0;
	sub_823399C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233bf24
	if (!ctx.cr6.eq) goto loc_8233BF24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-21320
	ctx.r4.s64 = ctx.r11.s64 + -21320;
	// bl 0x822e8068
	ctx.lr = 0x8233C0FC;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c190
	if (!ctx.cr6.eq) goto loc_8233C190;
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// ld r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823382b8
	ctx.lr = 0x8233C114;
	sub_823382B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8233c148
	if (!ctx.cr6.lt) goto loc_8233C148;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r8,679(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 679);
	// li r3,15
	ctx.r3.s64 = 15;
	// lbz r7,678(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 678);
	// addi r4,r10,-20360
	ctx.r4.s64 = ctx.r10.s64 + -20360;
	// lbz r6,677(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 677);
	// lbz r5,676(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 676);
	// bl 0x82280900
	ctx.lr = 0x8233C13C;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C148:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82288498
	ctx.lr = 0x8233C158;
	sub_82288498(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lbz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233c184
	if (!ctx.cr6.eq) goto loc_8233C184;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// stb r10,-352(r11)
	PPC_STORE_U8(ctx.r11.u32 + -352, ctx.r10.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r9,17072
	ctx.r3.s64 = ctx.r9.s64 + 17072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8233C184;
	sub_822E7E98(ctx, base);
loc_8233C184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C190:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20372
	ctx.r4.s64 = ctx.r11.s64 + -20372;
	// bl 0x822e8068
	ctx.lr = 0x8233C1A0;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c1c4
	if (!ctx.cr6.eq) goto loc_8233C1C4;
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// ld r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82339ab0
	ctx.lr = 0x8233C1B8;
	sub_82339AB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C1C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-21208
	ctx.r4.s64 = ctx.r11.s64 + -21208;
	// bl 0x822e8068
	ctx.lr = 0x8233C1D4;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c274
	if (!ctx.cr6.eq) goto loc_8233C274;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82288288
	ctx.lr = 0x8233C1E4;
	sub_82288288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82288288
	ctx.lr = 0x8233C1F0;
	sub_82288288(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233c224
	if (!ctx.cr6.eq) goto loc_8233C224;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-20428
	ctx.r4.s64 = ctx.r11.s64 + -20428;
	// bl 0x82280900
	ctx.lr = 0x8233C218;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C224:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8233c268
	if (!ctx.cr6.eq) goto loc_8233C268;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// addi r11,r11,17072
	ctx.r11.s64 = ctx.r11.s64 + 17072;
	// lbz r10,-38(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -38);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233c268
	if (!ctx.cr6.eq) goto loc_8233C268;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stb r10,-38(r11)
	PPC_STORE_U8(ctx.r11.u32 + -38, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r7,-20444
	ctx.r4.s64 = ctx.r7.s64 + -20444;
	// stw r9,-16416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16416, ctx.r9.u32);
	// bl 0x8227cf18
	ctx.lr = 0x8233C268;
	sub_8227CF18(ctx, base);
loc_8233C268:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C274:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20448
	ctx.r4.s64 = ctx.r11.s64 + -20448;
	// bl 0x822e8068
	ctx.lr = 0x8233C284;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c2d4
	if (!ctx.cr6.eq) goto loc_8233C2D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8233acd8
	ctx.lr = 0x8233C298;
	sub_8233ACD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c2c8
	if (ctx.cr6.eq) goto loc_8233C2C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-20536
	ctx.r4.s64 = ctx.r11.s64 + -20536;
	// bl 0x82280900
	ctx.lr = 0x8233C2B4;
	sub_82280900(ctx, base);
	// bl 0x8230b4a0
	ctx.lr = 0x8233C2B8;
	sub_8230B4A0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,-14024
	ctx.r4.s64 = ctx.r10.s64 + -14024;
	// bl 0x8227cf18
	ctx.lr = 0x8233C2C8;
	sub_8227CF18(ctx, base);
loc_8233C2C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C2D4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-20548
	ctx.r4.s64 = ctx.r11.s64 + -20548;
	// bl 0x823dfa98
	ctx.lr = 0x8233C2E4;
	sub_823DFA98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c308
	if (ctx.cr6.eq) goto loc_8233C308;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-20552
	ctx.r4.s64 = ctx.r11.s64 + -20552;
	// bl 0x822eb400
	ctx.lr = 0x8233C2FC;
	sub_822EB400(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8233C308:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-20576
	ctx.r4.s64 = ctx.r11.s64 + -20576;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8233C31C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233BEA8) {
	__imp__sub_8233BEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8233C330;
	__savegprlr_23(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,1216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1216, ctx.r4.u64);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r5,1224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1224, ctx.r5.u64);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82287ba0
	ctx.lr = 0x8233C34C;
	sub_82287BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x8233C354;
	sub_82288288(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288528
	ctx.lr = 0x8233C364;
	sub_82288528(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,15068
	ctx.r10.s64 = ctx.r10.s64 + 15068;
loc_8233C374:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8233c398
	if (ctx.cr6.eq) goto loc_8233C398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233c374
	if (ctx.cr6.eq) goto loc_8233C374;
loc_8233C398:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233c490
	if (!ctx.cr6.eq) goto loc_8233C490;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c46c
	if (!ctx.cr6.eq) goto loc_8233C46C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r28,-31930
	ctx.r28.s64 = -2092564480;
	// addi r24,r11,-20268
	ctx.r24.s64 = ctx.r11.s64 + -20268;
loc_8233C3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x8233C3CC;
	sub_822881B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c46c
	if (!ctx.cr6.eq) goto loc_8233C46C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82288528
	ctx.lr = 0x8233C3F0;
	sub_82288528(ctx, base);
	// lwz r11,-17272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17272);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c430
	if (ctx.cr6.eq) goto loc_8233C430;
	// lwz r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// ld r3,1216(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1216);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x8233C418;
	sub_82289670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x8233C430;
	sub_82280900(ctx, base);
loc_8233C430:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227d940
	ctx.lr = 0x8233C438;
	sub_8227D940(ctx, base);
	// lwz r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r4,1216(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1216);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233bea8
	ctx.lr = 0x8233C450;
	sub_8233BEA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// or r25,r10,r9
	ctx.r25.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x8227d960
	ctx.lr = 0x8233C460;
	sub_8227D960(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8233c3c4
	if (ctx.cr6.eq) goto loc_8233C3C4;
loc_8233C46C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c484
	if (ctx.cr6.eq) goto loc_8233C484;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x822eb6c0
	ctx.lr = 0x8233C484;
	sub_822EB6C0(ctx, base);
loc_8233C484:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8233C490:
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233c4cc
	if (ctx.cr6.eq) goto loc_8233C4CC;
	// lwz r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// ld r3,1216(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1216);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x8233C4B4;
	sub_82289670(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-20284
	ctx.r4.s64 = ctx.r10.s64 + -20284;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x8233C4CC;
	sub_82280900(ctx, base);
loc_8233C4CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227d940
	ctx.lr = 0x8233C4D4;
	sub_8227D940(ctx, base);
	// lwz r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r4,1216(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1216);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233bea8
	ctx.lr = 0x8233C4EC;
	sub_8233BEA8(ctx, base);
	// bl 0x8227d960
	ctx.lr = 0x8233C4F0;
	sub_8227D960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233C328) {
	__imp__sub_8233C328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233C4FC) {
	__imp__sub_8233C4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233C508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8233c55c
	if (ctx.cr6.lt) goto loc_8233C55C;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8233c55c
	if (!ctx.cr6.eq) goto loc_8233C55C;
	// bl 0x82310110
	ctx.lr = 0x8233C538;
	sub_82310110(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233c328
	ctx.lr = 0x8233C554;
	sub_8233C328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8233C55C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287ba0
	ctx.lr = 0x8233C564;
	sub_82287BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x8233C56C;
	sub_82288288(ctx, base);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r4,r28,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82339f18
	ctx.lr = 0x8233C584;
	sub_82339F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c5b0
	if (!ctx.cr6.eq) goto loc_8233C5B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-21320
	ctx.r6.s64 = ctx.r11.s64 + -21320;
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8233C5A8;
	sub_8228A990(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8233C5B0:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,5764
	ctx.r10.s64 = 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r11,r9,9240
	ctx.r11.s64 = ctx.r9.s64 + 9240;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// mulli r10,r6,9780
	ctx.r10.s64 = ctx.r6.s64 * 9780;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82289c68
	ctx.lr = 0x8233C5E0;
	sub_82289C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233c608
	if (ctx.cr6.eq) goto loc_8233C608;
	// lwz r11,4624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233c608
	if (ctx.cr6.eq) goto loc_8233C608;
	// bl 0x82310110
	ctx.lr = 0x8233C5F8;
	sub_82310110(ctx, base);
	// stw r3,5692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5692, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233be20
	ctx.lr = 0x8233C608;
	sub_8233BE20(ctx, base);
loc_8233C608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233C500) {
	__imp__sub_8233C500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C610) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,17060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	// bl 0x822e1f80
	ctx.lr = 0x8233C638;
	sub_822E1F80(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r31,r11,-352
	ctx.r31.s64 = ctx.r11.s64 + -352;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82287b40
	ctx.lr = 0x8233C65C;
	sub_82287B40(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-21320
	ctx.r4.s64 = ctx.r10.s64 + -21320;
	// bl 0x82288048
	ctx.lr = 0x8233C66C;
	sub_82288048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x8233C678;
	sub_82288048(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233b268
	ctx.lr = 0x8233C680;
	sub_8233B268(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233c6a0
	if (ctx.cr6.eq) goto loc_8233C6A0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c6a0
	if (ctx.cr6.eq) goto loc_8233C6A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280e68
	ctx.lr = 0x8233C6A0;
	sub_82280E68(ctx, base);
loc_8233C6A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,979(r31)
	PPC_STORE_U8(ctx.r31.u32 + 979, ctx.r11.u8);
	// bl 0x8213a2b0
	ctx.lr = 0x8233C6AC;
	sub_8213A2B0(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
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

PPC_WEAK_FUNC(sub_8233C610) {
	__imp__sub_8233C610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233C6C4) {
	__imp__sub_8233C6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// ori r5,r5,16385
	ctx.r5.u64 = ctx.r5.u64 | 16385;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287b40
	ctx.lr = 0x8233C6EC;
	sub_82287B40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228a2e8
	ctx.lr = 0x8233C6F8;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233c728
	if (ctx.cr6.eq) goto loc_8233C728;
loc_8233C700:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233c500
	ctx.lr = 0x8233C714;
	sub_8233C500(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228a2e8
	ctx.lr = 0x8233C720;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c700
	if (!ctx.cr6.eq) goto loc_8233C700;
loc_8233C728:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233C6C8) {
	__imp__sub_8233C6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C738) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233c794
	if (ctx.cr6.eq) goto loc_8233C794;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233c778
	if (ctx.cr6.eq) goto loc_8233C778;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8233C778:
	// lwz r11,9796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c788
	if (ctx.cr6.eq) goto loc_8233C788;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8233C788:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8233c794
	if (!ctx.cr6.lt) goto loc_8233C794;
	// bl 0x8233b998
	ctx.lr = 0x8233C794;
	sub_8233B998(ctx, base);
loc_8233C794:
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lbz r11,-352(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c7dc
	if (ctx.cr6.eq) goto loc_8233C7DC;
	// bl 0x822dc088
	ctx.lr = 0x8233C7A8;
	sub_822DC088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c7b4
	if (!ctx.cr6.eq) goto loc_8233C7B4;
	// bl 0x822dbe08
	ctx.lr = 0x8233C7B4;
	sub_822DBE08(ctx, base);
loc_8233C7B4:
	// lis r30,-31833
	ctx.r30.s64 = -2086207488;
	// addi r3,r30,17072
	ctx.r3.s64 = ctx.r30.s64 + 17072;
	// bl 0x822830a8
	ctx.lr = 0x8233C7C0;
	sub_822830A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-352(r31)
	PPC_STORE_U8(ctx.r31.u32 + -352, ctx.r11.u8);
	// stb r10,17072(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17072, ctx.r10.u8);
	// bl 0x822dbf48
	ctx.lr = 0x8233C7D4;
	sub_822DBF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233c7e0
	goto loc_8233C7E0;
loc_8233C7DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C7E0:
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

PPC_WEAK_FUNC(sub_8233C738) {
	__imp__sub_8233C738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233C7F8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233caa0
	if (ctx.cr6.eq) goto loc_8233CAA0;
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r31,r11,-352
	ctx.r31.s64 = ctx.r11.s64 + -352;
	// lbz r11,17033(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233c878
	if (!ctx.cr6.eq) goto loc_8233C878;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233c878
	if (!ctx.cr6.eq) goto loc_8233C878;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r10,-19940
	ctx.r4.s64 = ctx.r10.s64 + -19940;
	// bl 0x82280900
	ctx.lr = 0x8233C858;
	sub_82280900(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r9,9240
	ctx.r11.s64 = ctx.r9.s64 + 9240;
	// addi r4,r8,-20372
	ctx.r4.s64 = ctx.r8.s64 + -20372;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822eb400
	ctx.lr = 0x8233C870;
	sub_822EB400(ctx, base);
	// bl 0x822eb580
	ctx.lr = 0x8233C874;
	sub_822EB580(ctx, base);
	// b 0x8233caa0
	goto loc_8233CAA0;
loc_8233C878:
	// lbz r9,978(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 978);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// beq cr6,0x8233ca18
	if (ctx.cr6.eq) goto loc_8233CA18;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8233c89c
	if (!ctx.cr6.eq) goto loc_8233C89C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8233C89C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ca10
	if (ctx.cr6.eq) goto loc_8233CA10;
	// bl 0x8233fb68
	ctx.lr = 0x8233C8AC;
	sub_8233FB68(ctx, base);
	// bl 0x82338820
	ctx.lr = 0x8233C8B0;
	sub_82338820(ctx, base);
	// bl 0x8233c6c8
	ctx.lr = 0x8233C8B4;
	sub_8233C6C8(ctx, base);
	// lbz r11,978(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 978);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233c940
	if (!ctx.cr6.eq) goto loc_8233C940;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c940
	if (ctx.cr6.eq) goto loc_8233C940;
	// bl 0x82310110
	ctx.lr = 0x8233C8D4;
	sub_82310110(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r11,-5940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5940);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8233c914
	if (!ctx.cr6.gt) goto loc_8233C914;
	// bl 0x82310110
	ctx.lr = 0x8233C8F4;
	sub_82310110(ctx, base);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r4,r10,-20004
	ctx.r4.s64 = ctx.r10.s64 + -20004;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233C90C;
	sub_82280900(ctx, base);
	// bl 0x8233b998
	ctx.lr = 0x8233C910;
	sub_8233B998(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8233C914:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-20040
	ctx.r4.s64 = ctx.r11.s64 + -20040;
	// bl 0x82280900
	ctx.lr = 0x8233C924;
	sub_82280900(ctx, base);
	// bl 0x8233b8e8
	ctx.lr = 0x8233C928;
	sub_8233B8E8(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lwz r11,17600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17600);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8233a8d8
	ctx.lr = 0x8233C938;
	sub_8233A8D8(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// b 0x8233c9d8
	goto loc_8233C9D8;
loc_8233C940:
	// bl 0x823386a0
	ctx.lr = 0x8233C944;
	sub_823386A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c978
	if (ctx.cr6.eq) goto loc_8233C978;
	// bl 0x82310110
	ctx.lr = 0x8233C954;
	sub_82310110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821fc2b8
	ctx.lr = 0x8233C95C;
	sub_821FC2B8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-20120
	ctx.r4.s64 = ctx.r11.s64 + -20120;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x8233C974;
	sub_82280900(ctx, base);
	// b 0x8233c9d4
	goto loc_8233C9D4;
loc_8233C978:
	// bl 0x82338728
	ctx.lr = 0x8233C97C;
	sub_82338728(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11172);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233c9d8
	if (!ctx.cr6.gt) goto loc_8233C9D8;
	// bl 0x820d8158
	ctx.lr = 0x8233C994;
	sub_820D8158(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8233c9bc
	if (ctx.cr6.gt) goto loc_8233C9BC;
	// bl 0x82338728
	ctx.lr = 0x8233C9A0;
	sub_82338728(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-20180
	ctx.r4.s64 = ctx.r11.s64 + -20180;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233C9B4;
	sub_82280900(ctx, base);
	// bl 0x8233b998
	ctx.lr = 0x8233C9B8;
	sub_8233B998(ctx, base);
	// b 0x8233c9d8
	goto loc_8233C9D8;
loc_8233C9BC:
	// bl 0x82338728
	ctx.lr = 0x8233C9C0;
	sub_82338728(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-20236
	ctx.r4.s64 = ctx.r11.s64 + -20236;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233C9D4;
	sub_82280900(ctx, base);
loc_8233C9D4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8233C9D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233caa0
	if (ctx.cr6.eq) goto loc_8233CAA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// stb r11,978(r31)
	PPC_STORE_U8(ctx.r31.u32 + 978, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9404(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x8233C9FC;
	sub_822E1F80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// b 0x8233caa0
	goto loc_8233CAA0;
loc_8233CA10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233caa0
	if (!ctx.cr6.eq) goto loc_8233CAA0;
loc_8233CA18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8233ca2c
	if (!ctx.cr6.eq) goto loc_8233CA2C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8233CA2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233caa0
	if (ctx.cr6.eq) goto loc_8233CAA0;
	// bl 0x82338820
	ctx.lr = 0x8233CA3C;
	sub_82338820(ctx, base);
	// bl 0x8233c6c8
	ctx.lr = 0x8233CA40;
	sub_8233C6C8(ctx, base);
	// bl 0x82338728
	ctx.lr = 0x8233CA44;
	sub_82338728(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11172);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233caa0
	if (!ctx.cr6.gt) goto loc_8233CAA0;
	// bl 0x82338728
	ctx.lr = 0x8233CA5C;
	sub_82338728(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-20180
	ctx.r4.s64 = ctx.r11.s64 + -20180;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233CA70;
	sub_82280900(ctx, base);
	// bl 0x82139f38
	ctx.lr = 0x8233CA74;
	sub_82139F38(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233caa0
	if (!ctx.cr6.eq) goto loc_8233CAA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// addi r4,r10,-21192
	ctx.r4.s64 = ctx.r10.s64 + -21192;
	// addi r3,r9,17072
	ctx.r3.s64 = ctx.r9.s64 + 17072;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822e7e98
	ctx.lr = 0x8233CAA0;
	sub_822E7E98(ctx, base);
loc_8233CAA0:
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

PPC_WEAK_FUNC(sub_8233C7F8) {
	__imp__sub_8233C7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57304
	ctx.r8.u64 = ctx.r10.u64 | 57304;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,57300
	ctx.r6.u64 = ctx.r7.u64 | 57300;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CAB8) {
	__imp__sub_8233CAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CAE4) {
	__imp__sub_8233CAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CAE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233cb04
	if (!ctx.cr6.eq) goto loc_8233CB04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// b 0x8233efc0
	sub_8233EFC0(ctx, base);
	return;
loc_8233CB04:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mulli r10,r3,5764
	ctx.r10.s64 = ctx.r3.s64 * 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r9,-29844
	ctx.r4.s64 = ctx.r9.s64 + -29844;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8233efc0
	sub_8233EFC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CAE8) {
	__imp__sub_8233CAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CB24) {
	__imp__sub_8233CB24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CB28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// bl 0x82272e78
	ctx.lr = 0x8233CB48;
	sub_82272E78(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8233CB58:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8233cb58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233CB58;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x822761c0
	ctx.lr = 0x8233CB6C;
	sub_822761C0(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8233CB78;
	sub_82340D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_8233CB28) {
	__imp__sub_8233CB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CB90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// bl 0x82272fc8
	ctx.lr = 0x8233CBB0;
	sub_82272FC8(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8233CBC0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8233cbc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233CBC0;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x82272f80
	ctx.lr = 0x8233CBD4;
	sub_82272F80(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8233CBE0;
	sub_82340D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_8233CB90) {
	__imp__sub_8233CB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CBF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,173(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 173);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8233cd2c
	if (ctx.cr6.gt) goto loc_8233CD2C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8233ccd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233CCD4;
	// bdzf 4*cr6+eq,0x8233cd2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233CD2C;
	// bdzf 4*cr6+eq,0x8233ccb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8233CCB0;
	// bne cr6,0x8233cc70
	if (!ctx.cr6.eq) goto loc_8233CC70;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r8,204(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-5928
	ctx.r4.s64 = ctx.r10.s64 + -5928;
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// addi r7,r11,180
	ctx.r7.s64 = ctx.r11.s64 + 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82278820
	ctx.lr = 0x8233CC58;
	sub_82278820(ctx, base);
	// lbz r3,121(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8233CC70:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lhz r7,132(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-5928
	ctx.r4.s64 = ctx.r10.s64 + -5928;
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822787b0
	ctx.lr = 0x8233CC98;
	sub_822787B0(ctx, base);
	// lbz r3,121(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8233CCB0:
	// addi r6,r11,244
	ctx.r6.s64 = ctx.r11.s64 + 244;
	// lhz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// bl 0x8227a560
	ctx.lr = 0x8233CCC0;
	sub_8227A560(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8233CCD4:
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8233cd60
	if (!ctx.cr6.lt) goto loc_8233CD60;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x822d4918
	ctx.lr = 0x8233CD18;
	sub_822D4918(ctx, base);
	// fmuls f12,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x8233cd64
	if (ctx.cr6.lt) goto loc_8233CD64;
	// b 0x8233cd60
	goto loc_8233CD60;
loc_8233CD2C:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lfs f0,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x822d4918
	ctx.lr = 0x8233CD50;
	sub_822D4918(ctx, base);
	// fmuls f11,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bge cr6,0x8233cd64
	if (!ctx.cr6.lt) goto loc_8233CD64;
loc_8233CD60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CD64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CBF8) {
	__imp__sub_8233CBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CD78) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x8233CDB8;
	sub_8233CBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CD78) {
	__imp__sub_8233CD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CDC8) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233cdfc
	if (ctx.cr6.eq) goto loc_8233CDFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-19792
	ctx.r4.s64 = ctx.r11.s64 + -19792;
	// bl 0x822830e8
	ctx.lr = 0x8233CDFC;
	sub_822830E8(ctx, base);
loc_8233CDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc298
	ctx.lr = 0x8233CE04;
	sub_822DC298(ctx, base);
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

PPC_WEAK_FUNC(sub_8233CDC8) {
	__imp__sub_8233CDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233ce54
	if (ctx.cr6.eq) goto loc_8233CE54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// bl 0x822830e8
	ctx.lr = 0x8233CE54;
	sub_822830E8(ctx, base);
loc_8233CE54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822db200
	ctx.lr = 0x8233CE60;
	sub_822DB200(ctx, base);
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

PPC_WEAK_FUNC(sub_8233CE18) {
	__imp__sub_8233CE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x822db410
	sub_822DB410(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CE78) {
	__imp__sub_8233CE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CE7C) {
	__imp__sub_8233CE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x822db4b8
	sub_822DB4B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CE80) {
	__imp__sub_8233CE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CE84) {
	__imp__sub_8233CE84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// ori r10,r10,57292
	ctx.r10.u64 = ctx.r10.u64 | 57292;
	// ori r9,r9,57296
	ctx.r9.u64 = ctx.r9.u64 | 57296;
	// ori r8,r8,57300
	ctx.r8.u64 = ctx.r8.u64 | 57300;
	// ori r7,r7,57304
	ctx.r7.u64 = ctx.r7.u64 | 57304;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CE88) {
	__imp__sub_8233CE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CEC4) {
	__imp__sub_8233CEC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mulli r10,r3,5764
	ctx.r10.s64 = ctx.r3.s64 * 5764;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CEC8) {
	__imp__sub_8233CEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8212c098
	sub_8212C098(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CEE8) {
	__imp__sub_8233CEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CEEC) {
	__imp__sub_8233CEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc298
	sub_822DC298(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CEF0) {
	__imp__sub_8233CEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CEF4) {
	__imp__sub_8233CEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc298
	sub_822DC298(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CEF8) {
	__imp__sub_8233CEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CEFC) {
	__imp__sub_8233CEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// addi r5,r11,-12552
	ctx.r5.s64 = ctx.r11.s64 + -12552;
	// addi r4,r10,-12560
	ctx.r4.s64 = ctx.r10.s64 + -12560;
	// b 0x822ff508
	sub_822FF508(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CF00) {
	__imp__sub_8233CF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CF14) {
	__imp__sub_8233CF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CF18) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233cf68
	if (ctx.cr6.eq) goto loc_8233CF68;
	// bl 0x822846c0
	ctx.lr = 0x8233CF3C;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233cf64
	if (!ctx.cr6.eq) goto loc_8233CF64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-19612
	ctx.r4.s64 = ctx.r11.s64 + -19612;
	// bl 0x82280900
	ctx.lr = 0x8233CF54;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8233CF64:
	// bl 0x822f0510
	ctx.lr = 0x8233CF68;
	sub_822F0510(ctx, base);
loc_8233CF68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CF18) {
	__imp__sub_8233CF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CF78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,57316
	ctx.r7.u64 = ctx.r8.u64 | 57316;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// bne 0x8233cfb0
	if (!ctx.cr0.eq) goto loc_8233CFB0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,57316
	ctx.r8.u64 = ctx.r9.u64 | 57316;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8233CFB0:
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-31520
	ctx.r10.s64 = ctx.r10.s64 + -31520;
	// ori r8,r9,57320
	ctx.r8.u64 = ctx.r9.u64 | 57320;
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r7,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r9,-31512(r6)
	PPC_STORE_U32(ctx.r6.u32 + -31512, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233CF78) {
	__imp__sub_8233CF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233CFDC) {
	__imp__sub_8233CFDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233CFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8233CFE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57320
	ctx.r9.u64 = ctx.r10.u64 | 57320;
	// lis r28,-31823
	ctx.r28.s64 = -2085552128;
	// addi r8,r3,15
	ctx.r8.s64 = ctx.r3.s64 + 15;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r30,r8,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r10,-31512(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31512);
	// ori r5,r7,57320
	ctx.r5.u64 = ctx.r7.u64 | 57320;
	// ori r29,r6,65520
	ctx.r29.u64 = ctx.r6.u64 | 65520;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8233d0c4
	if (!ctx.cr6.gt) goto loc_8233D0C4;
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lis r27,-31823
	ctx.r27.s64 = -2085552128;
	// addi r11,r11,-31520
	ctx.r11.s64 = ctx.r11.s64 + -31520;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r25,r10,0,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r26,r11,-19600
	ctx.r26.s64 = ctx.r11.s64 + -19600;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_8233D05C:
	// lwz r10,-31504(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31504);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233d084
	if (ctx.cr6.eq) goto loc_8233D084;
	// stw r11,-31504(r27)
	PPC_STORE_U32(ctx.r27.u32 + -31504, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x8233D078;
	sub_82280C30(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,57316
	ctx.r10.u64 = ctx.r11.u64 | 57316;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_8233D084:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x8233d0a8
	if (!ctx.cr0.eq) goto loc_8233D0A8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8233D0A8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r25,-31512(r28)
	PPC_STORE_U32(ctx.r28.u32 + -31512, ctx.r25.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ori r9,r10,57320
	ctx.r9.u64 = ctx.r10.u64 | 57320;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// bgt cr6,0x8233d05c
	if (ctx.cr6.gt) goto loc_8233D05C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8233D0C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233CFE0) {
	__imp__sub_8233CFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D0CC) {
	__imp__sub_8233D0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233D0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-31440
	ctx.r30.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x822f2260
	ctx.lr = 0x8233D0FC;
	sub_822F2260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8233d118
	if (ctx.cr6.eq) goto loc_8233D118;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f22c8
	ctx.lr = 0x8233D110;
	sub_822F22C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8233D118:
	// bl 0x822f2340
	ctx.lr = 0x8233D11C;
	sub_822F2340(ctx, base);
	// bl 0x8233cfe0
	ctx.lr = 0x8233D120;
	sub_8233CFE0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r10,r11,57316
	ctx.r10.u64 = ctx.r11.u64 | 57316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x822f2350
	ctx.lr = 0x8233D138;
	sub_822F2350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233D0D0) {
	__imp__sub_8233D0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D144) {
	__imp__sub_8233D144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233D150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-31440
	ctx.r30.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x822f2260
	ctx.lr = 0x8233D174;
	sub_822F2260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8233d190
	if (ctx.cr6.eq) goto loc_8233D190;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f22f8
	ctx.lr = 0x8233D188;
	sub_822F22F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8233D190:
	// bl 0x822f2340
	ctx.lr = 0x8233D194;
	sub_822F2340(ctx, base);
	// bl 0x8233cfe0
	ctx.lr = 0x8233D198;
	sub_8233CFE0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r10,r11,57316
	ctx.r10.u64 = ctx.r11.u64 | 57316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x822f2350
	ctx.lr = 0x8233D1B0;
	sub_822F2350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233D148) {
	__imp__sub_8233D148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D1BC) {
	__imp__sub_8233D1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D1C0) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822846c0
	ctx.lr = 0x8233D1E0;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d1f4
	if (ctx.cr6.eq) goto loc_8233D1F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7f00
	ctx.lr = 0x8233D1F4;
	sub_822F7F00(ctx, base);
loc_8233D1F4:
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

PPC_WEAK_FUNC(sub_8233D1C0) {
	__imp__sub_8233D1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D20C) {
	__imp__sub_8233D20C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D210) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822846c0
	ctx.lr = 0x8233D228;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d238
	if (ctx.cr6.eq) goto loc_8233D238;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7018
	ctx.lr = 0x8233D238;
	sub_822F7018(ctx, base);
loc_8233D238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233D210) {
	__imp__sub_8233D210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D24C) {
	__imp__sub_8233D24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D250) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D260;
	sub_822846C0(ctx, base);
	// bl 0x822f1d00
	ctx.lr = 0x8233D264;
	sub_822F1D00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233D250) {
	__imp__sub_8233D250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D274) {
	__imp__sub_8233D274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D278) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822846c0
	ctx.lr = 0x8233D290;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d2b0
	if (!ctx.cr6.eq) goto loc_8233D2B0;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8233D2B0:
	// li r11,254
	ctx.r11.s64 = 254;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822efc98
	ctx.lr = 0x8233D2C4;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8233d2d4
	if (ctx.cr6.eq) goto loc_8233D2D4;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8233D2D4:
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

PPC_WEAK_FUNC(sub_8233D278) {
	__imp__sub_8233D278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D2E8) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D2F8;
	sub_822846C0(ctx, base);
	// bl 0x822f19e8
	ctx.lr = 0x8233D2FC;
	sub_822F19E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233D2E8) {
	__imp__sub_8233D2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D30C) {
	__imp__sub_8233D30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D310) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D328;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d338
	if (ctx.cr6.eq) goto loc_8233D338;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f7138
	ctx.lr = 0x8233D338;
	sub_822F7138(ctx, base);
loc_8233D338:
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

PPC_WEAK_FUNC(sub_8233D310) {
	__imp__sub_8233D310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D34C) {
	__imp__sub_8233D34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D350) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D360;
	sub_822846C0(ctx, base);
	// bl 0x822f19e8
	ctx.lr = 0x8233D364;
	sub_822F19E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233D350) {
	__imp__sub_8233D350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D374) {
	__imp__sub_8233D374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D378) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822846c0
	ctx.lr = 0x8233D398;
	sub_822846C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f1df8
	ctx.lr = 0x8233D3A4;
	sub_822F1DF8(ctx, base);
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

PPC_WEAK_FUNC(sub_8233D378) {
	__imp__sub_8233D378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D3BC) {
	__imp__sub_8233D3BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D3C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822846c0
	ctx.lr = 0x8233D3E0;
	sub_822846C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f2190
	ctx.lr = 0x8233D3EC;
	sub_822F2190(ctx, base);
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

PPC_WEAK_FUNC(sub_8233D3C0) {
	__imp__sub_8233D3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D404) {
	__imp__sub_8233D404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D408) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D420;
	sub_822846C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822eedd8
	ctx.lr = 0x8233D428;
	sub_822EEDD8(ctx, base);
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

PPC_WEAK_FUNC(sub_8233D408) {
	__imp__sub_8233D408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233D43C) {
	__imp__sub_8233D43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D440) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D450;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d46c
	if (ctx.cr6.eq) goto loc_8233D46C;
	// bl 0x822ef118
	ctx.lr = 0x8233D45C;
	sub_822EF118(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8233D46C:
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

PPC_WEAK_FUNC(sub_8233D440) {
	__imp__sub_8233D440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x8233D488;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x822846c0
	ctx.lr = 0x8233D4A4;
	sub_822846C0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x822f1d00
	ctx.lr = 0x8233D4AC;
	sub_822F1D00(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x822f1ca0
	ctx.lr = 0x8233D4B8;
	sub_822F1CA0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822f19e8
	ctx.lr = 0x8233D4C0;
	sub_822F19E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r19,244
	ctx.r3.s64 = ctx.r19.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8233D4D0;
	sub_822DA650(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822f19f0
	ctx.lr = 0x8233D4D8;
	sub_822F19F0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233d868
	if (!ctx.cr6.gt) goto loc_8233D868;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,-19888
	ctx.r20.s64 = ctx.r11.s64 + -19888;
	// lfs f30,2424(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_8233D504:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x8233D510;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b38
	ctx.lr = 0x8233D514;
	sub_82300B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822ee2f0
	ctx.lr = 0x8233D524;
	sub_822EE2F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d540
	if (ctx.cr6.eq) goto loc_8233D540;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r22,r31,r22
	ctx.r22.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8233d85c
	goto loc_8233D85C;
loc_8233D540:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8233d85c
	if (!ctx.cr6.gt) goto loc_8233D85C;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r30,r19,232
	ctx.r30.s64 = ctx.r19.s64 + 232;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// add r22,r31,r22
	ctx.r22.u64 = ctx.r31.u64 + ctx.r22.u64;
loc_8233D560:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
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
	// li r27,12
	ctx.r27.s64 = 12;
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fadds f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f10,f6,f4
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f6,f12,f3
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f5,204(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fadds f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f4,216(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f1,220(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f3,f31,f11
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f2,f31,f10
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// stfs f2,208(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f0,f31,f9
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f13,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f11,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_8233D61C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233d634
	if (ctx.cr6.eq) goto loc_8233D634;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d638
	goto loc_8233D638;
loc_8233D634:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D638:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233d65c
	if (ctx.cr6.eq) goto loc_8233D65C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d660
	goto loc_8233D660;
loc_8233D65C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D660:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d684
	if (ctx.cr6.eq) goto loc_8233D684;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d688
	goto loc_8233D688;
loc_8233D684:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D688:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d67f0
	ctx.lr = 0x8233D6A8;
	sub_822D67F0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f4,f13,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f3,f13,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f1,f12,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f0,f12,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f11,f12,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// beq cr6,0x8233d738
	if (ctx.cr6.eq) goto loc_8233D738;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d73c
	goto loc_8233D73C;
loc_8233D738:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D73C:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233d760
	if (ctx.cr6.eq) goto loc_8233D760;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d764
	goto loc_8233D764;
loc_8233D760:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D764:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d788
	if (ctx.cr6.eq) goto loc_8233D788;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8233d78c
	goto loc_8233D78C;
loc_8233D788:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8233D78C:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d67f0
	ctx.lr = 0x8233D7AC;
	sub_822D67F0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f8,f4,f13,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f3,f13,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f5,f2,f13,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f1,f12,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f0,f12,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f11,f12,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x8233D844;
	sub_82127EA8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8233d61c
	if (!ctx.cr0.eq) goto loc_8233D61C;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8233d560
	if (!ctx.cr0.eq) goto loc_8233D560;
loc_8233D85C:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8233d504
	if (ctx.cr6.lt) goto loc_8233D504;
loc_8233D868:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233D480) {
	__imp__sub_8233D480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D878) {
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
	// bl 0x822846c0
	ctx.lr = 0x8233D888;
	sub_822846C0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_8233D878) {
	__imp__sub_8233D878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8233D8A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8233df08
	ctx.lr = 0x8233D8C4;
	sub_8233DF08(ctx, base);
	// bl 0x821f9bd0
	ctx.lr = 0x8233D8C8;
	sub_821F9BD0(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,57316
	ctx.r7.u64 = ctx.r8.u64 | 57316;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bne 0x8233d900
	if (!ctx.cr0.eq) goto loc_8233D900;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8233D900:
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31520
	ctx.r11.s64 = ctx.r11.s64 + -31520;
	// ori r9,r10,57320
	ctx.r9.u64 = ctx.r10.u64 | 57320;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stw r10,-31512(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31512, ctx.r10.u32);
	// bl 0x82368578
	ctx.lr = 0x8233D92C;
	sub_82368578(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// ori r5,r6,57308
	ctx.r5.u64 = ctx.r6.u64 | 57308;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x821fc8b0
	ctx.lr = 0x8233D950;
	sub_821FC8B0(ctx, base);
	// bl 0x8233df50
	ctx.lr = 0x8233D954;
	sub_8233DF50(ctx, base);
	// bl 0x82338038
	ctx.lr = 0x8233D958;
	sub_82338038(ctx, base);
	// bl 0x82131c20
	ctx.lr = 0x8233D95C;
	sub_82131C20(ctx, base);
	// bl 0x82235058
	ctx.lr = 0x8233D960;
	sub_82235058(ctx, base);
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-32312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233d9a8
	if (!ctx.cr6.gt) goto loc_8233D9A8;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
loc_8233D980:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8233d998
	if (!ctx.cr6.eq) goto loc_8233D998;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82338198
	ctx.lr = 0x8233D994;
	sub_82338198(ctx, base);
	// lwz r11,-32312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32312);
loc_8233D998:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,5764
	ctx.r29.s64 = ctx.r29.s64 + 5764;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233d980
	if (ctx.cr6.lt) goto loc_8233D980;
loc_8233D9A8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8233d9bc
	if (ctx.cr6.eq) goto loc_8233D9BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d9d8
	if (!ctx.cr6.eq) goto loc_8233D9D8;
loc_8233D9BC:
	// bl 0x82393cc8
	ctx.lr = 0x8233D9C0;
	sub_82393CC8(ctx, base);
	// bl 0x8233f6f8
	ctx.lr = 0x8233D9C4;
	sub_8233F6F8(ctx, base);
	// bl 0x821ff008
	ctx.lr = 0x8233D9C8;
	sub_821FF008(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-31448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x82127588
	ctx.lr = 0x8233D9D4;
	sub_82127588(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8233D9D8;
	sub_82393D48(ctx, base);
loc_8233D9D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233D8A0) {
	__imp__sub_8233D8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233D9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233D9E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-31440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31440, ctx.r29.u32);
	// bl 0x821fcd48
	ctx.lr = 0x8233DA00;
	sub_821FCD48(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r11,-29824
	ctx.r30.s64 = ctx.r11.s64 + -29824;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_8233DA0C:
	// stw r29,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ddc0
	ctx.lr = 0x8233DA18;
	sub_8233DDC0(ctx, base);
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// addi r11,r30,11536
	ctx.r11.s64 = ctx.r30.s64 + 11536;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233da0c
	if (ctx.cr6.lt) goto loc_8233DA0C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233D9E0) {
	__imp__sub_8233D9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233DA38;
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82393cc8
	ctx.lr = 0x8233DA50;
	sub_82393CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d9e0
	ctx.lr = 0x8233DA58;
	sub_8233D9E0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8233da6c
	if (!ctx.cr6.eq) goto loc_8233DA6C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8233da6c
	if (ctx.cr6.eq) goto loc_8233DA6C;
	// bl 0x82281720
	ctx.lr = 0x8233DA6C;
	sub_82281720(ctx, base);
loc_8233DA6C:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4912, ctx.r11.u32);
	// bl 0x82393d48
	ctx.lr = 0x8233DA7C;
	sub_82393D48(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233d8a0
	ctx.lr = 0x8233DA94;
	sub_8233D8A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DA30) {
	__imp__sub_8233DA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DA9C) {
	__imp__sub_8233DA9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,-31508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31508, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233d8a0
	sub_8233D8A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DAA0) {
	__imp__sub_8233DAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DAC0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r7,r11,-19560
	ctx.r7.s64 = ctx.r11.s64 + -19560;
	// addi r4,r10,-32332
	ctx.r4.s64 = ctx.r10.s64 + -32332;
	// addi r3,r9,7892
	ctx.r3.s64 = ctx.r9.s64 + 7892;
	// li r6,8320
	ctx.r6.s64 = 8320;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8233DAF0;
	sub_822E1828(ctx, base);
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// stw r3,-31520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233DAC0) {
	__imp__sub_8233DAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233db20
	if (ctx.cr6.eq) goto loc_8233DB20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233DB20:
	// b 0x8222bae0
	sub_8222BAE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DB08) {
	__imp__sub_8233DB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DB24) {
	__imp__sub_8233DB24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DB28) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57308
	ctx.r9.u64 = ctx.r10.u64 | 57308;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x821fd980
	ctx.lr = 0x8233DB54;
	sub_821FD980(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233DB58;
	sub_821FC2B8(ctx, base);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r3,-356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -356, ctx.r3.u32);
	// bl 0x82340c58
	ctx.lr = 0x8233DB6C;
	sub_82340C58(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,57316
	ctx.r5.u64 = ctx.r7.u64 | 57316;
	// ori r4,r6,57316
	ctx.r4.u64 = ctx.r6.u64 | 57316;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bne 0x8233db9c
	if (!ctx.cr0.eq) goto loc_8233DB9C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,57316
	ctx.r9.u64 = ctx.r10.u64 | 57316;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8233DB9C:
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31520
	ctx.r11.s64 = ctx.r11.s64 + -31520;
	// ori r9,r10,57320
	ctx.r9.u64 = ctx.r10.u64 | 57320;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// lis r7,-31823
	ctx.r7.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stw r10,-31512(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31512, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8233DB28) {
	__imp__sub_8233DB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57308
	ctx.r8.u64 = ctx.r10.u64 | 57308;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233DBD8) {
	__imp__sub_8233DBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57308
	ctx.r8.u64 = ctx.r10.u64 | 57308;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233DBF0) {
	__imp__sub_8233DBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57312
	ctx.r8.u64 = ctx.r10.u64 | 57312;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233DC08) {
	__imp__sub_8233DC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233DC28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e0220
	ctx.lr = 0x8233DC38;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233dc68
	if (ctx.cr6.eq) goto loc_8233DC68;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r12,8388
	ctx.r12.s64 = 8388;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233dc68
	if (ctx.cr6.eq) goto loc_8233DC68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e05c8
	ctx.lr = 0x8233DC60;
	sub_822E05C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8233dcb8
	goto loc_8233DCB8;
loc_8233DC68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e05c8
	ctx.lr = 0x8233DC74;
	sub_822E05C8(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-5980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5980);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233dcb8
	if (ctx.cr6.eq) goto loc_8233DCB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x8233DC94;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233dcb8
	if (ctx.cr6.eq) goto loc_8233DCB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-19476
	ctx.r4.s64 = ctx.r11.s64 + -19476;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233DCB8;
	sub_82280900(ctx, base);
loc_8233DCB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1653
	ctx.r5.s64 = 1653;
	// addi r29,r11,-19540
	ctx.r29.s64 = ctx.r11.s64 + -19540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823384d0
	ctx.lr = 0x8233DCD0;
	sub_823384D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1654
	ctx.r5.s64 = 1654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823384d0
	ctx.lr = 0x8233DCE0;
	sub_823384D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DC20) {
	__imp__sub_8233DC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DCEC) {
	__imp__sub_8233DCEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DCF0) {
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
	// bl 0x82283000
	ctx.lr = 0x8233DD04;
	sub_82283000(ctx, base);
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// lwz r11,-31508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233dd24
	if (ctx.cr6.eq) goto loc_8233DD24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8233d9e0
	ctx.lr = 0x8233DD1C;
	sub_8233D9E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31508, ctx.r11.u32);
loc_8233DD24:
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

PPC_WEAK_FUNC(sub_8233DCF0) {
	__imp__sub_8233DCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DD38) {
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
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,2106
	ctx.r9.s64 = ctx.r11.s64 + 2106;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822a13a0
	ctx.lr = 0x8233DD6C;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8233DD7C;
	sub_822E7E98(ctx, base);
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

PPC_WEAK_FUNC(sub_8233DD38) {
	__imp__sub_8233DD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DD94) {
	__imp__sub_8233DD94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// addi r9,r11,2106
	ctx.r9.s64 = ctx.r11.s64 + 2106;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233DD98) {
	__imp__sub_8233DD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DDB0) {
	PPC_FUNC_PROLOGUE();
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DDB0) {
	__imp__sub_8233DDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DDC0) {
	PPC_FUNC_PROLOGUE();
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DDC0) {
	__imp__sub_8233DDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DDD0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r11,-29824
	ctx.r31.s64 = ctx.r11.s64 + -29824;
	// lwz r11,-29824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233de04
	if (ctx.cr6.eq) goto loc_8233DE04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-19460
	ctx.r4.s64 = ctx.r11.s64 + -19460;
	// bl 0x822830e8
	ctx.lr = 0x8233DE04;
	sub_822830E8(ctx, base);
loc_8233DE04:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,11536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11536, ctx.r11.u32);
	// stw r10,28208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28208, ctx.r10.u32);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// bl 0x822e1f18
	ctx.lr = 0x8233DE2C;
	sub_822E1F18(ctx, base);
	// bl 0x8233b570
	ctx.lr = 0x8233DE30;
	sub_8233B570(ctx, base);
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

PPC_WEAK_FUNC(sub_8233DDD0) {
	__imp__sub_8233DDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DE44) {
	__imp__sub_8233DE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DE48) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r30,r11,-29824
	ctx.r30.s64 = ctx.r11.s64 + -29824;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
loc_8233DE68:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x8233DE78;
	sub_822DD778(ctx, base);
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// addi r11,r30,11540
	ctx.r11.s64 = ctx.r30.s64 + 11540;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233de68
	if (ctx.cr6.lt) goto loc_8233DE68;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r30,r11,-31440
	ctx.r30.s64 = ctx.r11.s64 + -31440;
	// addi r31,r30,2106
	ctx.r31.s64 = ctx.r30.s64 + 2106;
loc_8233DE94:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233dea4
	if (ctx.cr6.eq) goto loc_8233DEA4;
	// bl 0x822a2468
	ctx.lr = 0x8233DEA4;
	sub_822A2468(ctx, base);
loc_8233DEA4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,8140
	ctx.r11.s64 = ctx.r30.s64 + 8140;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233de94
	if (ctx.cr6.lt) goto loc_8233DE94;
	// lhz r3,2104(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233dec4
	if (ctx.cr6.eq) goto loc_8233DEC4;
	// bl 0x822a2468
	ctx.lr = 0x8233DEC4;
	sub_822A2468(ctx, base);
loc_8233DEC4:
	// bl 0x8222de28
	ctx.lr = 0x8233DEC8;
	sub_8222DE28(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,1612
	ctx.r5.u64 = ctx.r5.u64 | 1612;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x8233DEDC;
	sub_822DD778(ctx, base);
	// bl 0x8233ed30
	ctx.lr = 0x8233DEE0;
	sub_8233ED30(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -352, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8233DE48) {
	__imp__sub_8233DE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DF04) {
	__imp__sub_8233DF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DF08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r8,-31823
	ctx.r8.s64 = -2085552128;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r7,57316
	ctx.r4.u64 = ctx.r7.u64 | 57316;
	// addi r6,r8,-31440
	ctx.r6.s64 = ctx.r8.s64 + -31440;
	// stw r11,-352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -352, ctx.r11.u32);
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// lis r3,-31936
	ctx.r3.s64 = -2092957696;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,-31440(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31440, ctx.r10.u32);
	// lwz r3,-9404(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9404);
	// stw r9,-356(r5)
	PPC_STORE_U32(ctx.r5.u32 + -356, ctx.r9.u32);
	// b 0x822e1f80
	sub_822E1F80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233DF08) {
	__imp__sub_8233DF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DF4C) {
	__imp__sub_8233DF4C(ctx, base);
}

