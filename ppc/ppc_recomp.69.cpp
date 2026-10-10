#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822B9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B9A34) {
	__imp__sub_822B9A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9A38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x82131f90
	ctx.lr = 0x822B9A58;
	sub_82131F90(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9a84
	if (ctx.cr6.eq) goto loc_822B9A84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23692
	ctx.r4.s64 = ctx.r11.s64 + -23692;
	// bl 0x82280900
	ctx.lr = 0x822B9A84;
	sub_82280900(ctx, base);
loc_822B9A84:
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

PPC_WEAK_FUNC(sub_822B9A38) {
	__imp__sub_822B9A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9A98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210b820
	ctx.lr = 0x822B9AB8;
	sub_8210B820(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9ae4
	if (ctx.cr6.eq) goto loc_822B9AE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23672
	ctx.r4.s64 = ctx.r11.s64 + -23672;
	// bl 0x82280900
	ctx.lr = 0x822B9AE4;
	sub_82280900(ctx, base);
loc_822B9AE4:
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

PPC_WEAK_FUNC(sub_822B9A98) {
	__imp__sub_822B9A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9AF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8234ddd8
	ctx.lr = 0x822B9B18;
	sub_8234DDD8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9b44
	if (ctx.cr6.eq) goto loc_822B9B44;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23652
	ctx.r4.s64 = ctx.r11.s64 + -23652;
	// bl 0x82280900
	ctx.lr = 0x822B9B44;
	sub_82280900(ctx, base);
loc_822B9B44:
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

PPC_WEAK_FUNC(sub_822B9AF8) {
	__imp__sub_822B9AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9B58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210faf0
	ctx.lr = 0x822B9B78;
	sub_8210FAF0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9ba4
	if (ctx.cr6.eq) goto loc_822B9BA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23628
	ctx.r4.s64 = ctx.r11.s64 + -23628;
	// bl 0x82280900
	ctx.lr = 0x822B9BA4;
	sub_82280900(ctx, base);
loc_822B9BA4:
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

PPC_WEAK_FUNC(sub_822B9B58) {
	__imp__sub_822B9B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9BB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8211d5f8
	ctx.lr = 0x822B9BD8;
	sub_8211D5F8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9c04
	if (ctx.cr6.eq) goto loc_822B9C04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23608
	ctx.r4.s64 = ctx.r11.s64 + -23608;
	// bl 0x82280900
	ctx.lr = 0x822B9C04;
	sub_82280900(ctx, base);
loc_822B9C04:
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

PPC_WEAK_FUNC(sub_822B9BB8) {
	__imp__sub_822B9BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9C18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8211d6a0
	ctx.lr = 0x822B9C38;
	sub_8211D6A0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9c64
	if (ctx.cr6.eq) goto loc_822B9C64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23592
	ctx.r4.s64 = ctx.r11.s64 + -23592;
	// bl 0x82280900
	ctx.lr = 0x822B9C64;
	sub_82280900(ctx, base);
loc_822B9C64:
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

PPC_WEAK_FUNC(sub_822B9C18) {
	__imp__sub_822B9C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9C78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x82121098
	sub_82121098(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9C78) {
	__imp__sub_822B9C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9C88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9C88) {
	__imp__sub_822B9C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23568
	ctx.r4.s64 = ctx.r11.s64 + -23568;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9C98) {
	__imp__sub_822B9C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9CCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9CCC) {
	__imp__sub_822B9CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23540
	ctx.r4.s64 = ctx.r11.s64 + -23540;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9CD0) {
	__imp__sub_822B9CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9D04) {
	__imp__sub_822B9D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9D08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x820ddf20
	ctx.lr = 0x822B9D28;
	sub_820DDF20(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9d54
	if (ctx.cr6.eq) goto loc_822B9D54;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23516
	ctx.r4.s64 = ctx.r11.s64 + -23516;
	// bl 0x82280900
	ctx.lr = 0x822B9D54;
	sub_82280900(ctx, base);
loc_822B9D54:
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

PPC_WEAK_FUNC(sub_822B9D08) {
	__imp__sub_822B9D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9D68) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x820ddf50
	ctx.lr = 0x822B9D88;
	sub_820DDF50(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9db4
	if (ctx.cr6.eq) goto loc_822B9DB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23488
	ctx.r4.s64 = ctx.r11.s64 + -23488;
	// bl 0x82280900
	ctx.lr = 0x822B9DB4;
	sub_82280900(ctx, base);
loc_822B9DB4:
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

PPC_WEAK_FUNC(sub_822B9D68) {
	__imp__sub_822B9D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9DC8) {
	__imp__sub_822B9DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23460
	ctx.r4.s64 = ctx.r11.s64 + -23460;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9DE0) {
	__imp__sub_822B9DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9E14) {
	__imp__sub_822B9E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23428
	ctx.r4.s64 = ctx.r11.s64 + -23428;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9E18) {
	__imp__sub_822B9E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9E4C) {
	__imp__sub_822B9E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82308370
	ctx.lr = 0x822B9E70;
	sub_82308370(ctx, base);
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

PPC_WEAK_FUNC(sub_822B9E50) {
	__imp__sub_822B9E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B9E88) {
	__imp__sub_822B9E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82141398
	sub_82141398(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9E98) {
	__imp__sub_822B9E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B9E9C) {
	__imp__sub_822B9E9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9EA0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822b9ee8
	if (ctx.cr6.lt) goto loc_822B9EE8;
	// bl 0x82141398
	ctx.lr = 0x822B9EC8;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822b9ee8
	if (!ctx.cr6.lt) goto loc_822B9EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141488
	ctx.lr = 0x822B9ED8;
	sub_82141488(ctx, base);
	// bl 0x82141280
	ctx.lr = 0x822B9EDC;
	sub_82141280(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822b9eec
	goto loc_822B9EEC;
loc_822B9EE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B9EEC:
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

PPC_WEAK_FUNC(sub_822B9EA0) {
	__imp__sub_822B9EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B9F04) {
	__imp__sub_822B9F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9F08) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b9f68
	if (ctx.cr6.eq) goto loc_822B9F68;
	// bl 0x822b8180
	ctx.lr = 0x822B9F34;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-23400
	ctx.r4.s64 = ctx.r11.s64 + -23400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822B9F4C;
	sub_82280B08(ctx, base);
loc_822B9F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B9F50:
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
loc_822B9F68:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822b9f4c
	if (ctx.cr6.lt) goto loc_822B9F4C;
	// bl 0x82141398
	ctx.lr = 0x822B9F78;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822b9f4c
	if (!ctx.cr6.lt) goto loc_822B9F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141488
	ctx.lr = 0x822B9F88;
	sub_82141488(ctx, base);
	// bl 0x82141280
	ctx.lr = 0x822B9F8C;
	sub_82141280(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822b9f50
	goto loc_822B9F50;
}

PPC_WEAK_FUNC(sub_822B9F08) {
	__imp__sub_822B9F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9F98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82141398
	ctx.lr = 0x822B9FB8;
	sub_82141398(ctx, base);
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

PPC_WEAK_FUNC(sub_822B9F98) {
	__imp__sub_822B9F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9FD0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ba030
	if (!ctx.cr6.eq) goto loc_822BA030;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x822b8180
	ctx.lr = 0x822BA008;
	sub_822B8180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BA014;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23260
	ctx.r4.s64 = ctx.r11.s64 + -23260;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x822BA02C;
	sub_82280900(ctx, base);
	// b 0x822ba040
	goto loc_822BA040;
loc_822BA030:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// bl 0x82280b08
	ctx.lr = 0x822BA040;
	sub_82280B08(ctx, base);
loc_822BA040:
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

PPC_WEAK_FUNC(sub_822B9FD0) {
	__imp__sub_822B9FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA058) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82139410
	ctx.lr = 0x822BA078;
	sub_82139410(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba0a4
	if (ctx.cr6.eq) goto loc_822BA0A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23232
	ctx.r4.s64 = ctx.r11.s64 + -23232;
	// bl 0x82280900
	ctx.lr = 0x822BA0A4;
	sub_82280900(ctx, base);
loc_822BA0A4:
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

PPC_WEAK_FUNC(sub_822BA058) {
	__imp__sub_822BA058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23212
	ctx.r4.s64 = ctx.r11.s64 + -23212;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA0B8) {
	__imp__sub_822BA0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA0EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA0EC) {
	__imp__sub_822BA0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA0F0) {
	__imp__sub_822BA0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA124) {
	__imp__sub_822BA124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA128) {
	__imp__sub_822BA128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA15C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA15C) {
	__imp__sub_822BA15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA160) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ba190
	if (!ctx.cr6.eq) goto loc_822BA190;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BA180;
	sub_823DEAF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA190:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822ba1b8
	if (!ctx.cr6.eq) goto loc_822BA1B8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BA1B8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA160) {
	__imp__sub_822BA160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA1CC) {
	__imp__sub_822BA1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA1D0) {
	__imp__sub_822BA1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA204) {
	__imp__sub_822BA204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA208) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA208) {
	__imp__sub_822BA208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA23C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA23C) {
	__imp__sub_822BA23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23116
	ctx.r4.s64 = ctx.r11.s64 + -23116;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA240) {
	__imp__sub_822BA240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA278) {
	__imp__sub_822BA278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA27C) {
	__imp__sub_822BA27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA280) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA280) {
	__imp__sub_822BA280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA2B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA2B4) {
	__imp__sub_822BA2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822BA2C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822ba3b0
	if (!ctx.cr6.eq) goto loc_822BA3B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ba3b0
	if (!ctx.cr6.eq) goto loc_822BA3B0;
	// bl 0x82141340
	ctx.lr = 0x822BA2F4;
	sub_82141340(ctx, base);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-22936
	ctx.r4.s64 = ctx.r11.s64 + -22936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8058
	ctx.lr = 0x822BA30C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ba320
	if (!ctx.cr6.eq) goto loc_822BA320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bb68
	ctx.lr = 0x822BA31C;
	sub_8213BB68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BA320:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-22940
	ctx.r4.s64 = ctx.r11.s64 + -22940;
	// bl 0x822e8058
	ctx.lr = 0x822BA330;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ba348
	if (!ctx.cr6.eq) goto loc_822BA348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bbd8
	ctx.lr = 0x822BA340;
	sub_8213BBD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822ba3cc
	goto loc_822BA3CC;
loc_822BA348:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-22944
	ctx.r4.s64 = ctx.r11.s64 + -22944;
	// bl 0x822e8058
	ctx.lr = 0x822BA358;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ba370
	if (!ctx.cr6.eq) goto loc_822BA370;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bc48
	ctx.lr = 0x822BA368;
	sub_8213BC48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822ba3cc
	goto loc_822BA3CC;
loc_822BA370:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// bl 0x822e8058
	ctx.lr = 0x822BA380;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ba3cc
	if (!ctx.cr6.eq) goto loc_822BA3CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bb68
	ctx.lr = 0x822BA390;
	sub_8213BB68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bbd8
	ctx.lr = 0x822BA39C;
	sub_8213BBD8(ctx, base);
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bc48
	ctx.lr = 0x822BA3A8;
	sub_8213BC48(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x822ba3cc
	goto loc_822BA3CC;
loc_822BA3B0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// addi r4,r10,-23016
	ctx.r4.s64 = ctx.r10.s64 + -23016;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BA3CC;
	sub_82280B08(ctx, base);
loc_822BA3CC:
	// li r11,100
	ctx.r11.s64 = 100;
	// li r10,60
	ctx.r10.s64 = 60;
	// divwu r9,r31,r11
	ctx.r9.u32 = ctx.r31.u32 / ctx.r11.u32;
	// lis r8,-21846
	ctx.r8.s64 = -1431699456;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// ori r6,r8,43691
	ctx.r6.u64 = ctx.r8.u64 | 43691;
	// divwu r4,r7,r10
	ctx.r4.u32 = ctx.r7.u32 / ctx.r10.u32;
	// lis r3,-30584
	ctx.r3.s64 = -2004353024;
	// mulhwu r6,r4,r6
	ctx.r6.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// ori r11,r3,34953
	ctx.r11.u64 = ctx.r3.u64 | 34953;
	// rlwinm r10,r6,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// ori r5,r8,34079
	ctx.r5.u64 = ctx.r8.u64 | 34079;
	// mulhwu r3,r9,r11
	ctx.r3.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// mulhwu r8,r7,r11
	ctx.r8.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulhwu r6,r31,r5
	ctx.r6.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// lis r6,-31858
	ctx.r6.s64 = -2087845888;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r6,-14272
	ctx.r27.s64 = ctx.r6.s64 + -14272;
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 * 100;
	// li r30,24
	ctx.r30.s64 = 24;
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// divwu r6,r4,r30
	ctx.r6.u32 = ctx.r4.u32 / ctx.r30.u32;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r5,r29,-23040
	ctx.r5.s64 = ctx.r29.s64 + -23040;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823dfb70
	ctx.lr = 0x822BA464;
	sub_823DFB70(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA2B8) {
	__imp__sub_822BA2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA470) {
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
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822ba574
	if (!ctx.cr6.eq) goto loc_822BA574;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ba574
	if (!ctx.cr6.eq) goto loc_822BA574;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82141340
	ctx.lr = 0x822BA4A8;
	sub_82141340(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d660
	ctx.lr = 0x822BA4B0;
	sub_8213D660(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x822ba574
	if (ctx.cr6.gt) goto loc_822BA574;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ba554
	if (ctx.cr6.eq) goto loc_822BA554;
	// bdz 0x822ba4e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822BA4E4;
	// bdz 0x822ba4e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822BA4E4;
	// bdz 0x822ba4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822BA4F4;
	// bdz 0x822ba508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822BA508;
	// bdz 0x822ba51c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822BA51C;
	// b 0x822ba530
	goto loc_822BA530;
loc_822BA4E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x822ba570
	goto loc_822BA570;
loc_822BA4F4:
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x822ba570
	goto loc_822BA570;
loc_822BA508:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822ba574
	goto loc_822BA574;
loc_822BA51C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x822ba574
	goto loc_822BA574;
loc_822BA530:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ba54c
	if (!ctx.cr6.eq) goto loc_822BA54C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
loc_822BA54C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822ba574
	goto loc_822BA574;
loc_822BA554:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BA568;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-28736
	ctx.r9.s64 = ctx.r10.s64 + -28736;
loc_822BA570:
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_822BA574:
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

PPC_WEAK_FUNC(sub_822BA470) {
	__imp__sub_822BA470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA58C) {
	__imp__sub_822BA58C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA590) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA590) {
	__imp__sub_822BA590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA5C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA5C4) {
	__imp__sub_822BA5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA5C8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822ba618
	if (!ctx.cr6.lt) goto loc_822BA618;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22852
	ctx.r4.s64 = ctx.r11.s64 + -22852;
	// bl 0x82280b08
	ctx.lr = 0x822BA5F8;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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
loc_822BA618:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22880
	ctx.r5.s64 = ctx.r11.s64 + -22880;
	// bl 0x822b9f08
	ctx.lr = 0x822BA628;
	sub_822B9F08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x822ba668
	if (ctx.cr6.eq) goto loc_822BA668;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822ba668
	if (ctx.cr6.eq) goto loc_822BA668;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BA668;
	sub_82280900(ctx, base);
loc_822BA668:
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

PPC_WEAK_FUNC(sub_822BA5C8) {
	__imp__sub_822BA5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA67C) {
	__imp__sub_822BA67C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BA680) {
	__imp__sub_822BA680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA6B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA6B4) {
	__imp__sub_822BA6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA6B8) {
	__imp__sub_822BA6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA6D0) {
	__imp__sub_822BA6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA6E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA6E8) {
	__imp__sub_822BA6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA6F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA6F8) {
	__imp__sub_822BA6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA708) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA708) {
	__imp__sub_822BA708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA718) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA718) {
	__imp__sub_822BA718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA728) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA728) {
	__imp__sub_822BA728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA738) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA738) {
	__imp__sub_822BA738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA748) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822ba77c
	if (ctx.cr6.eq) goto loc_822BA77C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22768
	ctx.r4.s64 = ctx.r11.s64 + -22768;
	// bl 0x82280b08
	ctx.lr = 0x822BA778;
	sub_82280B08(ctx, base);
	// b 0x822ba790
	goto loc_822BA790;
loc_822BA77C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22800
	ctx.r5.s64 = ctx.r11.s64 + -22800;
	// bl 0x822b9f08
	ctx.lr = 0x822BA78C;
	sub_822B9F08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
loc_822BA790:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822BA748) {
	__imp__sub_822BA748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA7B0) {
	__imp__sub_822BA7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA7C8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822ba818
	if (!ctx.cr6.lt) goto loc_822BA818;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22680
	ctx.r4.s64 = ctx.r11.s64 + -22680;
	// bl 0x82280b08
	ctx.lr = 0x822BA7F8;
	sub_82280B08(ctx, base);
loc_822BA7F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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
loc_822BA818:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22704
	ctx.r5.s64 = ctx.r11.s64 + -22704;
	// bl 0x822b9f08
	ctx.lr = 0x822BA828;
	sub_822B9F08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba7f8
	if (ctx.cr6.eq) goto loc_822BA7F8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822BA7C8) {
	__imp__sub_822BA7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA85C) {
	__imp__sub_822BA85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA860) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA860) {
	__imp__sub_822BA860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA870) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA870) {
	__imp__sub_822BA870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA880) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BA880) {
	__imp__sub_822BA880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA894) {
	__imp__sub_822BA894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA898) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822ba8d4
	if (ctx.cr6.eq) goto loc_822BA8D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22600
	ctx.r4.s64 = ctx.r11.s64 + -22600;
	// bl 0x82280b08
	ctx.lr = 0x822BA8C8;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BA8CC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822ba8fc
	goto loc_822BA8FC;
loc_822BA8D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22632
	ctx.r5.s64 = ctx.r11.s64 + -22632;
	// bl 0x822b9f08
	ctx.lr = 0x822BA8E4;
	sub_822B9F08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba8cc
	if (ctx.cr6.eq) goto loc_822BA8CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822BA8FC:
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

PPC_WEAK_FUNC(sub_822BA898) {
	__imp__sub_822BA898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BA914) {
	__imp__sub_822BA914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BA918) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822ba9e8
	if (ctx.cr6.eq) goto loc_822BA9E8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// bgt cr6,0x822ba9d0
	if (ctx.cr6.gt) goto loc_822BA9D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822ba97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BA97C;
	// bdzf 4*cr6+eq,0x822ba998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BA998;
	// bne cr6,0x822ba9b4
	if (!ctx.cr6.eq) goto loc_822BA9B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22516
	ctx.r4.s64 = ctx.r11.s64 + -22516;
	// bl 0x82280b08
	ctx.lr = 0x822BA978;
	sub_82280B08(ctx, base);
	// b 0x822baa00
	goto loc_822BAA00;
loc_822BA97C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22516
	ctx.r4.s64 = ctx.r11.s64 + -22516;
	// bl 0x82280b08
	ctx.lr = 0x822BA994;
	sub_82280B08(ctx, base);
	// b 0x822baa00
	goto loc_822BAA00;
loc_822BA998:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22516
	ctx.r4.s64 = ctx.r11.s64 + -22516;
	// bl 0x82280b08
	ctx.lr = 0x822BA9B0;
	sub_82280B08(ctx, base);
	// b 0x822baa00
	goto loc_822BAA00;
loc_822BA9B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22516
	ctx.r4.s64 = ctx.r11.s64 + -22516;
	// bl 0x82280b08
	ctx.lr = 0x822BA9CC;
	sub_82280B08(ctx, base);
	// b 0x822baa00
	goto loc_822BAA00;
loc_822BA9D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-22516
	ctx.r4.s64 = ctx.r11.s64 + -22516;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BA9E4;
	sub_82280B08(ctx, base);
	// b 0x822baa00
	goto loc_822BAA00;
loc_822BA9E8:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r30,r11,-14144
	ctx.r30.s64 = ctx.r11.s64 + -14144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822cadd8
	ctx.lr = 0x822BAA00;
	sub_822CADD8(ctx, base);
loc_822BAA00:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BA918) {
	__imp__sub_822BA918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAA24) {
	__imp__sub_822BAA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAA28) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822baa60
	if (!ctx.cr6.eq) goto loc_822BAA60;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BAA58;
	sub_823DEAF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x822baa80
	goto loc_822BAA80;
loc_822BAA60:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822baa7c
	if (!ctx.cr6.eq) goto loc_822BAA7C;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822baa80
	goto loc_822BAA80;
loc_822BAA7C:
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_822BAA80:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x822baab8
	if (ctx.cr6.lt) goto loc_822BAAB8;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bgt cr6,0x822baab8
	if (ctx.cr6.gt) goto loc_822BAAB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820db740
	ctx.lr = 0x822BAAA4;
	sub_820DB740(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x822baad8
	goto loc_822BAAD8;
loc_822BAAB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-22448
	ctx.r4.s64 = ctx.r11.s64 + -22448;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BAACC;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BAAD8:
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

PPC_WEAK_FUNC(sub_822BAA28) {
	__imp__sub_822BAA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BAAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,1112
	ctx.r30.s64 = ctx.r11.s64 + 1112;
loc_822BAB28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820db740
	ctx.lr = 0x822BAB34;
	sub_820DB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bab6c
	if (!ctx.cr6.eq) goto loc_822BAB6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bab6c
	if (!ctx.cr6.eq) goto loc_822BAB6C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x822bab28
	if (ctx.cr6.lt) goto loc_822BAB28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAB6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAAF0) {
	__imp__sub_822BAAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAB7C) {
	__imp__sub_822BAB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BAB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82121098
	ctx.lr = 0x822BAB9C;
	sub_82121098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822babb8
	if (!ctx.cr6.eq) goto loc_822BABB8;
loc_822BABA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BABB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822babdc
	if (ctx.cr6.eq) goto loc_822BABDC;
	// bl 0x822b83c8
	ctx.lr = 0x822BABD0;
	sub_822B83C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22196
	ctx.r4.s64 = ctx.r11.s64 + -22196;
	// b 0x822bad20
	goto loc_822BAD20;
loc_822BABDC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-22204
	ctx.r4.s64 = ctx.r11.s64 + -22204;
	// bl 0x822e8058
	ctx.lr = 0x822BABEC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac08
	if (!ctx.cr6.eq) goto loc_822BAC08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822baaf0
	ctx.lr = 0x822BABFC;
	sub_822BAAF0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAC08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,12584
	ctx.r4.s64 = ctx.r11.s64 + 12584;
	// bl 0x822e8058
	ctx.lr = 0x822BAC18;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac34
	if (!ctx.cr6.eq) goto loc_822BAC34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff840
	ctx.lr = 0x822BAC28;
	sub_820FF840(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAC34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-22216
	ctx.r4.s64 = ctx.r11.s64 + -22216;
	// bl 0x822e8058
	ctx.lr = 0x822BAC44;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac60
	if (!ctx.cr6.eq) goto loc_822BAC60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff8e8
	ctx.lr = 0x822BAC54;
	sub_820FF8E8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAC60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,13156
	ctx.r4.s64 = ctx.r11.s64 + 13156;
	// bl 0x822e8058
	ctx.lr = 0x822BAC70;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bac8c
	if (!ctx.cr6.eq) goto loc_822BAC8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff940
	ctx.lr = 0x822BAC80;
	sub_820FF940(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAC8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,12172
	ctx.r4.s64 = ctx.r11.s64 + 12172;
	// bl 0x822e8058
	ctx.lr = 0x822BAC9C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bacb8
	if (!ctx.cr6.eq) goto loc_822BACB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e0868
	ctx.lr = 0x822BACAC;
	sub_820E0868(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BACB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-22232
	ctx.r4.s64 = ctx.r11.s64 + -22232;
	// bl 0x822e8058
	ctx.lr = 0x822BACC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822baba4
	if (ctx.cr6.eq) goto loc_822BABA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-22244
	ctx.r4.s64 = ctx.r11.s64 + -22244;
	// bl 0x822e8058
	ctx.lr = 0x822BACE0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bad10
	if (!ctx.cr6.eq) goto loc_822BAD10;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r29,r9
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82105090
	ctx.lr = 0x822BAD04;
	sub_82105090(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAD10:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822b83c8
	ctx.lr = 0x822BAD18;
	sub_822B83C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22368
	ctx.r4.s64 = ctx.r11.s64 + -22368;
loc_822BAD20:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BAD2C;
	sub_82280B08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAB80) {
	__imp__sub_822BAB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAD40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAD40) {
	__imp__sub_822BAD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAD50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAD50) {
	__imp__sub_822BAD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAD60) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822badfc
	if (ctx.cr6.eq) goto loc_822BADFC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822badd4
	if (ctx.cr6.gt) goto loc_822BADD4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822badb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BADB0;
	// bdzf 4*cr6+eq,0x822badbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BADBC;
	// bne cr6,0x822badc8
	if (!ctx.cr6.eq) goto loc_822BADC8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822baddc
	goto loc_822BADDC;
loc_822BADB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822baddc
	goto loc_822BADDC;
loc_822BADBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822baddc
	goto loc_822BADDC;
loc_822BADC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822baddc
	goto loc_822BADDC;
loc_822BADD4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_822BADDC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// bl 0x82280b08
	ctx.lr = 0x822BADEC;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822bae3c
	goto loc_822BAE3C;
loc_822BADFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822c4450
	ctx.lr = 0x822BAE0C;
	sub_822C4450(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bae3c
	if (ctx.cr6.eq) goto loc_822BAE3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-22136
	ctx.r4.s64 = ctx.r11.s64 + -22136;
	// bl 0x82280900
	ctx.lr = 0x822BAE3C;
	sub_82280900(ctx, base);
loc_822BAE3C:
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

PPC_WEAK_FUNC(sub_822BAD60) {
	__imp__sub_822BAD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAE54) {
	__imp__sub_822BAE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22052
	ctx.r4.s64 = ctx.r11.s64 + -22052;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAE58) {
	__imp__sub_822BAE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BAE8C) {
	__imp__sub_822BAE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BAE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x822baee4
	if (!ctx.cr6.eq) goto loc_822BAEE4;
	// bl 0x822b8180
	ctx.lr = 0x822BAEBC;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// addi r4,r10,-21948
	ctx.r4.s64 = ctx.r10.s64 + -21948;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BAED8;
	sub_82280B08(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BAEE4:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x822baf28
	if (ctx.cr6.lt) goto loc_822BAF28;
	// beq cr6,0x822baf04
	if (ctx.cr6.eq) goto loc_822BAF04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-21988
	ctx.r4.s64 = ctx.r11.s64 + -21988;
	// bl 0x82280b08
	ctx.lr = 0x822BAF00;
	sub_82280B08(ctx, base);
	// b 0x822baf38
	goto loc_822BAF38;
loc_822BAF04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822baf20
	if (ctx.cr6.eq) goto loc_822BAF20;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822BAF20:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822baf38
	goto loc_822BAF38;
loc_822BAF28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_822BAF38:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822baf84
	if (ctx.cr6.eq) goto loc_822BAF84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BAF54;
	sub_822B8180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BAF60;
	sub_822B8180(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822b83c8
	ctx.lr = 0x822BAF6C;
	sub_822B83C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22032
	ctx.r4.s64 = ctx.r11.s64 + -22032;
	// li r3,13
	ctx.r3.s64 = 13;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x822BAF84;
	sub_82280900(ctx, base);
loc_822BAF84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BAE90) {
	__imp__sub_822BAE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BAF8C) {
	__imp__sub_822BAF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BAF90) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x822bafe4
	if (!ctx.cr6.eq) goto loc_822BAFE4;
	// bl 0x822b8180
	ctx.lr = 0x822BAFC0;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// addi r4,r10,-21900
	ctx.r4.s64 = ctx.r10.s64 + -21900;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BAFDC;
	sub_82280B08(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x822bb04c
	goto loc_822BB04C;
loc_822BAFE4:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x822bb018
	if (ctx.cr6.lt) goto loc_822BB018;
	// beq cr6,0x822bb004
	if (ctx.cr6.eq) goto loc_822BB004;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-21988
	ctx.r4.s64 = ctx.r11.s64 + -21988;
	// bl 0x82280b08
	ctx.lr = 0x822BB000;
	sub_82280B08(ctx, base);
	// b 0x822bb01c
	goto loc_822BB01C;
loc_822BB004:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb01c
	goto loc_822BB01C;
loc_822BB018:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_822BB01C:
	// not r6,r31
	ctx.r6.u64 = ~ctx.r31.u64;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb04c
	if (ctx.cr6.eq) goto loc_822BB04C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21912
	ctx.r4.s64 = ctx.r11.s64 + -21912;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BB04C;
	sub_82280900(ctx, base);
loc_822BB04C:
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

PPC_WEAK_FUNC(sub_822BAF90) {
	__imp__sub_822BAF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB064) {
	__imp__sub_822BB064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BB070;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bb09c
	if (!ctx.cr6.eq) goto loc_822BB09C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb0b8
	goto loc_822BB0B8;
loc_822BB09C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bb0ac
	if (!ctx.cr6.eq) goto loc_822BB0AC;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822bb0b8
	goto loc_822BB0B8;
loc_822BB0AC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BB0B4;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BB0B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bb0d8
	if (!ctx.cr6.eq) goto loc_822BB0D8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb0f4
	goto loc_822BB0F4;
loc_822BB0D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bb0e8
	if (!ctx.cr6.eq) goto loc_822BB0E8;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x822bb0f4
	goto loc_822BB0F4;
loc_822BB0E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BB0F0;
	sub_823DEAF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_822BB0F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// slw r7,r31,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r6.u8 & 0x3F));
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb12c
	if (ctx.cr6.eq) goto loc_822BB12C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21864
	ctx.r4.s64 = ctx.r11.s64 + -21864;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BB12C;
	sub_82280900(ctx, base);
loc_822BB12C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB068) {
	__imp__sub_822BB068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB134) {
	__imp__sub_822BB134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BB140;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bb16c
	if (!ctx.cr6.eq) goto loc_822BB16C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb188
	goto loc_822BB188;
loc_822BB16C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bb17c
	if (!ctx.cr6.eq) goto loc_822BB17C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822bb188
	goto loc_822BB188;
loc_822BB17C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BB184;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BB188:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bb1a8
	if (!ctx.cr6.eq) goto loc_822BB1A8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb1c4
	goto loc_822BB1C4;
loc_822BB1A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bb1b8
	if (!ctx.cr6.eq) goto loc_822BB1B8;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x822bb1c4
	goto loc_822BB1C4;
loc_822BB1B8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BB1C0;
	sub_823DEAF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_822BB1C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// sraw r7,r31,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r7.s64 = ctx.r31.s32 >> temp.u32;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb1fc
	if (ctx.cr6.eq) goto loc_822BB1FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21848
	ctx.r4.s64 = ctx.r11.s64 + -21848;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BB1FC;
	sub_82280900(ctx, base);
loc_822BB1FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB138) {
	__imp__sub_822BB138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB204) {
	__imp__sub_822BB204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB208) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb248
	if (!ctx.cr6.lt) goto loc_822BB248;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb254
	goto loc_822BB254;
loc_822BB248:
	// bl 0x82115758
	ctx.lr = 0x822BB24C;
	sub_82115758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB254:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb27c
	if (ctx.cr6.eq) goto loc_822BB27C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21832
	ctx.r4.s64 = ctx.r11.s64 + -21832;
	// bl 0x82280900
	ctx.lr = 0x822BB27C;
	sub_82280900(ctx, base);
loc_822BB27C:
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

PPC_WEAK_FUNC(sub_822BB208) {
	__imp__sub_822BB208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB290) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
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
	// bl 0x822b82f8
	ctx.lr = 0x822BB2B8;
	sub_822B82F8(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb2e8
	if (!ctx.cr6.lt) goto loc_822BB2E8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x822bb2fc
	goto loc_822BB2FC;
loc_822BB2E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82115890
	ctx.lr = 0x822BB2F4;
	sub_82115890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB2FC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb330
	if (ctx.cr6.eq) goto loc_822BB330;
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-21812
	ctx.r4.s64 = ctx.r11.s64 + -21812;
	// bl 0x82280900
	ctx.lr = 0x822BB330;
	sub_82280900(ctx, base);
loc_822BB330:
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

PPC_WEAK_FUNC(sub_822BB290) {
	__imp__sub_822BB290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB34C) {
	__imp__sub_822BB34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB350) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb390
	if (!ctx.cr6.lt) goto loc_822BB390;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb39c
	goto loc_822BB39C;
loc_822BB390:
	// bl 0x82115930
	ctx.lr = 0x822BB394;
	sub_82115930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB39C:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb3c4
	if (ctx.cr6.eq) goto loc_822BB3C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21784
	ctx.r4.s64 = ctx.r11.s64 + -21784;
	// bl 0x82280900
	ctx.lr = 0x822BB3C4;
	sub_82280900(ctx, base);
loc_822BB3C4:
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

PPC_WEAK_FUNC(sub_822BB350) {
	__imp__sub_822BB350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB3D8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb418
	if (!ctx.cr6.lt) goto loc_822BB418;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb424
	goto loc_822BB424;
loc_822BB418:
	// bl 0x82115958
	ctx.lr = 0x822BB41C;
	sub_82115958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB424:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb44c
	if (ctx.cr6.eq) goto loc_822BB44C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21760
	ctx.r4.s64 = ctx.r11.s64 + -21760;
	// bl 0x82280900
	ctx.lr = 0x822BB44C;
	sub_82280900(ctx, base);
loc_822BB44C:
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

PPC_WEAK_FUNC(sub_822BB3D8) {
	__imp__sub_822BB3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB460) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb4a0
	if (!ctx.cr6.lt) goto loc_822BB4A0;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb4ac
	goto loc_822BB4AC;
loc_822BB4A0:
	// bl 0x82115980
	ctx.lr = 0x822BB4A4;
	sub_82115980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB4AC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb4d4
	if (ctx.cr6.eq) goto loc_822BB4D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21732
	ctx.r4.s64 = ctx.r11.s64 + -21732;
	// bl 0x82280900
	ctx.lr = 0x822BB4D4;
	sub_82280900(ctx, base);
loc_822BB4D4:
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

PPC_WEAK_FUNC(sub_822BB460) {
	__imp__sub_822BB460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB4E8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb528
	if (!ctx.cr6.lt) goto loc_822BB528;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb534
	goto loc_822BB534;
loc_822BB528:
	// bl 0x821159c0
	ctx.lr = 0x822BB52C;
	sub_821159C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB534:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb55c
	if (ctx.cr6.eq) goto loc_822BB55C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21732
	ctx.r4.s64 = ctx.r11.s64 + -21732;
	// bl 0x82280900
	ctx.lr = 0x822BB55C;
	sub_82280900(ctx, base);
loc_822BB55C:
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

PPC_WEAK_FUNC(sub_822BB4E8) {
	__imp__sub_822BB4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB570) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb5b0
	if (!ctx.cr6.lt) goto loc_822BB5B0;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb5bc
	goto loc_822BB5BC;
loc_822BB5B0:
	// bl 0x821159e8
	ctx.lr = 0x822BB5B4;
	sub_821159E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB5BC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb5e4
	if (ctx.cr6.eq) goto loc_822BB5E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21712
	ctx.r4.s64 = ctx.r11.s64 + -21712;
	// bl 0x82280900
	ctx.lr = 0x822BB5E4;
	sub_82280900(ctx, base);
loc_822BB5E4:
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

PPC_WEAK_FUNC(sub_822BB570) {
	__imp__sub_822BB570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB5F8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x82115bf0
	ctx.lr = 0x822BB618;
	sub_82115BF0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb648
	if (ctx.cr6.eq) goto loc_822BB648;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21684
	ctx.r4.s64 = ctx.r11.s64 + -21684;
	// bl 0x82280900
	ctx.lr = 0x822BB648;
	sub_82280900(ctx, base);
loc_822BB648:
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

PPC_WEAK_FUNC(sub_822BB5F8) {
	__imp__sub_822BB5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB65C) {
	__imp__sub_822BB65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB660) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x82115c18
	ctx.lr = 0x822BB680;
	sub_82115C18(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb6b0
	if (ctx.cr6.eq) goto loc_822BB6B0;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21684
	ctx.r4.s64 = ctx.r11.s64 + -21684;
	// bl 0x82280900
	ctx.lr = 0x822BB6B0;
	sub_82280900(ctx, base);
loc_822BB6B0:
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

PPC_WEAK_FUNC(sub_822BB660) {
	__imp__sub_822BB660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB6C4) {
	__imp__sub_822BB6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB6C8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb710
	if (!ctx.cr6.lt) goto loc_822BB710;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb728
	goto loc_822BB728;
loc_822BB710:
	// bl 0x82115c40
	ctx.lr = 0x822BB714;
	sub_82115C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bb724
	if (!ctx.cr6.eq) goto loc_822BB724;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822BB724:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_822BB728:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb750
	if (ctx.cr6.eq) goto loc_822BB750;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21652
	ctx.r4.s64 = ctx.r11.s64 + -21652;
	// bl 0x82280900
	ctx.lr = 0x822BB750;
	sub_82280900(ctx, base);
loc_822BB750:
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

PPC_WEAK_FUNC(sub_822BB6C8) {
	__imp__sub_822BB6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB764) {
	__imp__sub_822BB764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB768) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x822bb7a8
	if (!ctx.cr6.lt) goto loc_822BB7A8;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bb7b4
	goto loc_822BB7B4;
loc_822BB7A8:
	// bl 0x82115808
	ctx.lr = 0x822BB7AC;
	sub_82115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BB7B4:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bb7dc
	if (ctx.cr6.eq) goto loc_822BB7DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21632
	ctx.r4.s64 = ctx.r11.s64 + -21632;
	// bl 0x82280900
	ctx.lr = 0x822BB7DC;
	sub_82280900(ctx, base);
loc_822BB7DC:
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

PPC_WEAK_FUNC(sub_822BB768) {
	__imp__sub_822BB768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB7F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x822c79e0
	ctx.lr = 0x822BB810;
	sub_822C79E0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bb83c
	if (ctx.cr6.eq) goto loc_822BB83C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21612
	ctx.r4.s64 = ctx.r11.s64 + -21612;
	// bl 0x82280900
	ctx.lr = 0x822BB83C;
	sub_82280900(ctx, base);
loc_822BB83C:
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

PPC_WEAK_FUNC(sub_822BB7F0) {
	__imp__sub_822BB7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BB858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bb880
	if (!ctx.cr6.eq) goto loc_822BB880;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bb890
	goto loc_822BB890;
loc_822BB880:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb890
	if (ctx.cr6.eq) goto loc_822BB890;
	// bl 0x823deaf8
	ctx.lr = 0x822BB890;
	sub_823DEAF8(ctx, base);
loc_822BB890:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x822BB8BC;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-30584
	ctx.r8.s64 = -2004353024;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r7,-18933
	ctx.r7.s64 = -1240793088;
	// ori r6,r8,34953
	ctx.r6.u64 = ctx.r8.u64 | 34953;
	// ori r5,r7,24759
	ctx.r5.u64 = ctx.r7.u64 | 24759;
	// addi r31,r11,-13888
	ctx.r31.s64 = ctx.r11.s64 + -13888;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// li r29,60
	ctx.r29.s64 = 60;
	// li r28,1440
	ctx.r28.s64 = 1440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulhw r10,r11,r6
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// mulhw r9,r11,r5
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32)) >> 32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// srawi r9,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 10;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulli r6,r8,60
	ctx.r6.s64 = ctx.r8.s64 * 60;
	// mulli r5,r7,1440
	ctx.r5.s64 = ctx.r7.s64 * 1440;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r5,r4,-21560
	ctx.r5.s64 = ctx.r4.s64 + -21560;
	// subf r8,r6,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r6.s64;
	// li r4,128
	ctx.r4.s64 = 128;
	// divw r7,r10,r29
	ctx.r7.s32 = ctx.r10.s32 / ctx.r29.s32;
	// divw r6,r11,r28
	ctx.r6.s32 = ctx.r11.s32 / ctx.r28.s32;
	// bl 0x823dfb70
	ctx.lr = 0x822BB940;
	sub_823DFB70(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,3944(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3944);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822bb974
	if (ctx.cr6.eq) goto loc_822BB974;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21584
	ctx.r4.s64 = ctx.r11.s64 + -21584;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BB974;
	sub_82280900(ctx, base);
loc_822BB974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BB850) {
	__imp__sub_822BB850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BB97C) {
	__imp__sub_822BB97C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BB980) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822bb9bc
	if (!ctx.cr6.lt) goto loc_822BB9BC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x822bba30
	goto loc_822BBA30;
loc_822BB9BC:
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// ori r8,r10,34953
	ctx.r8.u64 = ctx.r10.u64 | 34953;
	// addi r31,r9,-13760
	ctx.r31.s64 = ctx.r9.s64 + -13760;
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,60
	ctx.r6.s64 = 60;
	// srawi r10,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r5,-21520
	ctx.r5.s64 = ctx.r5.s64 + -21520;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// divw r6,r11,r6
	ctx.r6.s32 = ctx.r11.s32 / ctx.r6.s32;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823dfb70
	ctx.lr = 0x822BBA04;
	sub_823DFB70(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,3944(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822bba30
	if (ctx.cr6.eq) goto loc_822BBA30;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-21548
	ctx.r4.s64 = ctx.r11.s64 + -21548;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BBA30;
	sub_82280900(ctx, base);
loc_822BBA30:
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

PPC_WEAK_FUNC(sub_822BB980) {
	__imp__sub_822BB980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBA48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBA48) {
	__imp__sub_822BBA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBA58) {
	__imp__sub_822BBA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBA70) {
	__imp__sub_822BBA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBA88) {
	__imp__sub_822BBA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBAA0) {
	__imp__sub_822BBAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBAB8) {
	__imp__sub_822BBAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBACC) {
	__imp__sub_822BBACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBAD0) {
	__imp__sub_822BBAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBAE4) {
	__imp__sub_822BBAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBAE8) {
	__imp__sub_822BBAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BBB00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bbb38
	if (!ctx.cr6.eq) goto loc_822BBB38;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bbb54
	goto loc_822BBB54;
loc_822BBB38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bbb48
	if (!ctx.cr6.eq) goto loc_822BBB48;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x822bbb54
	goto loc_822BBB54;
loc_822BBB48:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BBB50;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822BBB54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821256f0
	ctx.lr = 0x822BBB5C;
	sub_821256F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bbb80
	if (!ctx.cr6.eq) goto loc_822BBB80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21504
	ctx.r4.s64 = ctx.r11.s64 + -21504;
	// bl 0x82280b08
	ctx.lr = 0x822BBB78;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BBB80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82125710
	ctx.lr = 0x822BBB8C;
	sub_82125710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBAF8) {
	__imp__sub_822BBAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBBA4) {
	__imp__sub_822BBBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBBA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBBA8) {
	__imp__sub_822BBBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBBB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBBB8) {
	__imp__sub_822BBBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBBC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBBC8) {
	__imp__sub_822BBBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822BBBE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r28,r3,r9
	ctx.r28.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r29,r11,-3128
	ctx.r29.s64 = ctx.r11.s64 + -3128;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bbc80
	if (!ctx.cr6.eq) goto loc_822BBC80;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822bbc44
	if (!ctx.cr6.eq) goto loc_822BBC44;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x822BBC38;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_822BBC44:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x822bbc60
	if (!ctx.cr6.eq) goto loc_822BBC60;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x822BBC54;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_822BBC60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_822BBC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBBD8) {
	__imp__sub_822BBBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBC88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// blt cr6,0x822bbca0
	if (ctx.cr6.lt) goto loc_822BBCA0;
	// cmpwi cr6,r3,185
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 185, ctx.xer);
	// bgt cr6,0x822bbca0
	if (ctx.cr6.gt) goto loc_822BBCA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822BBCA0:
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BBC88) {
	__imp__sub_822BBC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBCB0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822bbcf4
	if (!ctx.cr6.eq) goto loc_822BBCF4;
loc_822BBCD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x822bf4b0
	ctx.lr = 0x822BBCE4;
	sub_822BF4B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822bbcd8
	if (ctx.cr6.eq) goto loc_822BBCD8;
loc_822BBCF4:
	// lwz r11,5040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,5040(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// mulli r11,r6,84
	ctx.r11.s64 = ctx.r6.s64 * 84;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r10.u32);
	// lwz r11,5040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_822BBCB0) {
	__imp__sub_822BBCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822BBD50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,80(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// ble cr6,0x822bbdb0
	if (!ctx.cr6.gt) goto loc_822BBDB0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21432
	ctx.r4.s64 = ctx.r11.s64 + -21432;
	// bl 0x82280b08
	ctx.lr = 0x822BBD88;
	sub_82280B08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822bbcb0
	ctx.lr = 0x822BBDA8;
	sub_822BBCB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822BBDB0:
	// lwz r11,5040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5040);
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r5,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r5.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r8,5040(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5040);
	// mulli r11,r8,84
	ctx.r11.s64 = ctx.r8.s64 * 84;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822bbe40
	if (!ctx.cr6.gt) goto loc_822BBE40;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r28,r27,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r27.s64;
loc_822BBDE4:
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne cr6,0x822bbe2c
	if (!ctx.cr6.eq) goto loc_822BBE2C;
loc_822BBE04:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822bf4b0
	ctx.lr = 0x822BBE10;
	sub_822BF4B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x822bbe04
	if (ctx.cr6.eq) goto loc_822BBE04;
loc_822BBE2C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bbde4
	if (ctx.cr6.lt) goto loc_822BBDE4;
loc_822BBE40:
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bbeb0
	if (!ctx.cr6.gt) goto loc_822BBEB0;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_822BBE5C:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822bbe98
	if (!ctx.cr6.eq) goto loc_822BBE98;
loc_822BBE70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822bf4b0
	ctx.lr = 0x822BBE7C;
	sub_822BF4B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x822bbe70
	if (ctx.cr6.eq) goto loc_822BBE70;
loc_822BBE98:
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bbe5c
	if (ctx.cr6.lt) goto loc_822BBE5C;
loc_822BBEB0:
	// lwz r11,5040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5040);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5040(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5040, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBD48) {
	__imp__sub_822BBD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BBEC4) {
	__imp__sub_822BBEC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BBEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822BBED0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31858
	ctx.r28.s64 = -2087845888;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// std r7,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r7.u64);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lwz r11,3944(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r26,r6,-28736
	ctx.r26.s64 = ctx.r6.s64 + -28736;
	// addi r25,r5,-24712
	ctx.r25.s64 = ctx.r5.s64 + -24712;
	// addi r24,r7,-24700
	ctx.r24.s64 = ctx.r7.s64 + -24700;
	// addi r23,r8,-24692
	ctx.r23.s64 = ctx.r8.s64 + -24692;
	// addi r22,r9,-24684
	ctx.r22.s64 = ctx.r9.s64 + -24684;
	// addi r27,r10,16488
	ctx.r27.s64 = ctx.r10.s64 + 16488;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bbff0
	if (ctx.cr6.eq) goto loc_822BBFF0;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822bbf6c
	if (ctx.cr6.gt) goto loc_822BBF6C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bbf54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BBF54;
	// bdzf 4*cr6+eq,0x822bbf5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BBF5C;
	// bne cr6,0x822bbf64
	if (!ctx.cr6.eq) goto loc_822BBF64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x822bbf70
	goto loc_822BBF70;
loc_822BBF54:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x822bbf70
	goto loc_822BBF70;
loc_822BBF5C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x822bbf70
	goto loc_822BBF70;
loc_822BBF64:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x822bbf70
	goto loc_822BBF70;
loc_822BBF6C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822BBF70:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822bbfb0
	if (ctx.cr6.gt) goto loc_822BBFB0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bbf98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BBF98;
	// bdzf 4*cr6+eq,0x822bbfa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BBFA0;
	// bne cr6,0x822bbfa8
	if (!ctx.cr6.eq) goto loc_822BBFA8;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x822bbfb4
	goto loc_822BBFB4;
loc_822BBF98:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x822bbfb4
	goto loc_822BBFB4;
loc_822BBFA0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x822bbfb4
	goto loc_822BBFB4;
loc_822BBFA8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822bbfb4
	goto loc_822BBFB4;
loc_822BBFB0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822BBFB4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822b8180
	ctx.lr = 0x822BBFBC;
	sub_822B8180(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x822b8180
	ctx.lr = 0x822BBFC8;
	sub_822B8180(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-21304
	ctx.r4.s64 = ctx.r10.s64 + -21304;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// bl 0x82280900
	ctx.lr = 0x822BBFF0;
	sub_82280900(ctx, base);
loc_822BBFF0:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bbbd8
	ctx.lr = 0x822BC000;
	sub_822BBBD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc0dc
	if (!ctx.cr6.eq) goto loc_822BC0DC;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822bc048
	if (ctx.cr6.gt) goto loc_822BC048;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bc030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC030;
	// bdzf 4*cr6+eq,0x822bc038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC038;
	// bne cr6,0x822bc040
	if (!ctx.cr6.eq) goto loc_822BC040;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x822bc04c
	goto loc_822BC04C;
loc_822BC030:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x822bc04c
	goto loc_822BC04C;
loc_822BC038:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x822bc04c
	goto loc_822BC04C;
loc_822BC040:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x822bc04c
	goto loc_822BC04C;
loc_822BC048:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822BC04C:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822bc08c
	if (ctx.cr6.gt) goto loc_822BC08C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bc074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC074;
	// bdzf 4*cr6+eq,0x822bc07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC07C;
	// bne cr6,0x822bc084
	if (!ctx.cr6.eq) goto loc_822BC084;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x822bc090
	goto loc_822BC090;
loc_822BC074:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x822bc090
	goto loc_822BC090;
loc_822BC07C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x822bc090
	goto loc_822BC090;
loc_822BC084:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822bc090
	goto loc_822BC090;
loc_822BC08C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822BC090:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822b8180
	ctx.lr = 0x822BC098;
	sub_822B8180(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x822b8180
	ctx.lr = 0x822BC0A4;
	sub_822B8180(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-21356
	ctx.r4.s64 = ctx.r10.s64 + -21356;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// bl 0x82280b08
	ctx.lr = 0x822BC0CC;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822bc0f0
	goto loc_822BC0F0;
loc_822BC0DC:
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bctrl 
	ctx.lr = 0x822BC0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC0F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822bbcb0
	ctx.lr = 0x822BC100;
	sub_822BBCB0(ctx, base);
	// lwz r11,3944(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc174
	if (ctx.cr6.eq) goto loc_822BC174;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822bc150
	if (ctx.cr6.gt) goto loc_822BC150;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bc138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC138;
	// bdzf 4*cr6+eq,0x822bc140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BC140;
	// bne cr6,0x822bc148
	if (!ctx.cr6.eq) goto loc_822BC148;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x822bc154
	goto loc_822BC154;
loc_822BC138:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x822bc154
	goto loc_822BC154;
loc_822BC140:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x822bc154
	goto loc_822BC154;
loc_822BC148:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822bc154
	goto loc_822BC154;
loc_822BC150:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822BC154:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b8180
	ctx.lr = 0x822BC15C;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21380
	ctx.r4.s64 = ctx.r11.s64 + -21380;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BC174;
	sub_82280900(ctx, base);
loc_822BC174:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BBEC8) {
	__imp__sub_822BBEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC17C) {
	__imp__sub_822BC17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822BC188;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x822bc1cc
	if (ctx.cr6.eq) goto loc_822BC1CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21224
	ctx.r4.s64 = ctx.r11.s64 + -21224;
	// bl 0x82280b08
	ctx.lr = 0x822BC1B0;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BC1CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC1D4;
	sub_822B8180(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822de110
	ctx.lr = 0x822BC1DC;
	sub_822DE110(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc204
	if (!ctx.cr6.eq) goto loc_822BC204;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc220
	goto loc_822BC220;
loc_822BC204:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc214
	if (!ctx.cr6.eq) goto loc_822BC214;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x822bc220
	goto loc_822BC220;
loc_822BC214:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823deaf8
	ctx.lr = 0x822BC21C;
	sub_823DEAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822BC220:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc240
	if (!ctx.cr6.eq) goto loc_822BC240;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc25c
	goto loc_822BC25C;
loc_822BC240:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc250
	if (!ctx.cr6.eq) goto loc_822BC250;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc25c
	goto loc_822BC25C;
loc_822BC250:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC258;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC25C:
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC268;
	sub_822B8180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822ddf98
	ctx.lr = 0x822BC27C;
	sub_822DDF98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc28c
	if (!ctx.cr6.eq) goto loc_822BC28C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822BC28C:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bc2b8
	if (!ctx.cr6.eq) goto loc_822BC2B8;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bc36c
	if (ctx.cr6.eq) goto loc_822BC36C;
loc_822BC2B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc2d8
	if (!ctx.cr6.eq) goto loc_822BC2D8;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc2f4
	goto loc_822BC2F4;
loc_822BC2D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc2e8
	if (!ctx.cr6.eq) goto loc_822BC2E8;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x822bc2f4
	goto loc_822BC2F4;
loc_822BC2E8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823deaf8
	ctx.lr = 0x822BC2F0;
	sub_823DEAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822BC2F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc314
	if (!ctx.cr6.eq) goto loc_822BC314;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc330
	goto loc_822BC330;
loc_822BC314:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc324
	if (!ctx.cr6.eq) goto loc_822BC324;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc330
	goto loc_822BC330;
loc_822BC324:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC32C;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC330:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x822b8180
	ctx.lr = 0x822BC33C;
	sub_822B8180(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC348;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21264
	ctx.r4.s64 = ctx.r11.s64 + -21264;
	// li r3,13
	ctx.r3.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82280900
	ctx.lr = 0x822BC36C;
	sub_82280900(ctx, base);
loc_822BC36C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC180) {
	__imp__sub_822BC180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC374) {
	__imp__sub_822BC374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BC380;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x822bc3c4
	if (ctx.cr6.eq) goto loc_822BC3C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-21104
	ctx.r4.s64 = ctx.r11.s64 + -21104;
	// bl 0x82280b08
	ctx.lr = 0x822BC3A8;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822BC3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC3CC;
	sub_822B8180(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822de110
	ctx.lr = 0x822BC3D4;
	sub_822DE110(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc3fc
	if (!ctx.cr6.eq) goto loc_822BC3FC;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc418
	goto loc_822BC418;
loc_822BC3FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc40c
	if (!ctx.cr6.eq) goto loc_822BC40C;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822bc418
	goto loc_822BC418;
loc_822BC40C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823deaf8
	ctx.lr = 0x822BC414;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC418:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc438
	if (!ctx.cr6.eq) goto loc_822BC438;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc454
	goto loc_822BC454;
loc_822BC438:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc448
	if (!ctx.cr6.eq) goto loc_822BC448;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc454
	goto loc_822BC454;
loc_822BC448:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC450;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822BC454:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822dde80
	ctx.lr = 0x822BC460;
	sub_822DDE80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bc470
	if (!ctx.cr6.eq) goto loc_822BC470;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822BC470:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bc49c
	if (!ctx.cr6.eq) goto loc_822BC49C;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bc540
	if (ctx.cr6.eq) goto loc_822BC540;
loc_822BC49C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc4bc
	if (!ctx.cr6.eq) goto loc_822BC4BC;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc4d8
	goto loc_822BC4D8;
loc_822BC4BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc4cc
	if (!ctx.cr6.eq) goto loc_822BC4CC;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822bc4d8
	goto loc_822BC4D8;
loc_822BC4CC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823deaf8
	ctx.lr = 0x822BC4D4;
	sub_823DEAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822BC4D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc4f8
	if (!ctx.cr6.eq) goto loc_822BC4F8;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc514
	goto loc_822BC514;
loc_822BC4F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc508
	if (!ctx.cr6.eq) goto loc_822BC508;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc514
	goto loc_822BC514;
loc_822BC508:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC510;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC514:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822b8180
	ctx.lr = 0x822BC520;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21144
	ctx.r4.s64 = ctx.r11.s64 + -21144;
	// li r3,13
	ctx.r3.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x822BC540;
	sub_82280900(ctx, base);
loc_822BC540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC378) {
	__imp__sub_822BC378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BC550;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x822bc594
	if (ctx.cr6.eq) goto loc_822BC594;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20984
	ctx.r4.s64 = ctx.r11.s64 + -20984;
	// bl 0x82280b08
	ctx.lr = 0x822BC578;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822BC594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC59C;
	sub_822B8180(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822de110
	ctx.lr = 0x822BC5A4;
	sub_822DE110(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc5cc
	if (!ctx.cr6.eq) goto loc_822BC5CC;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc5e8
	goto loc_822BC5E8;
loc_822BC5CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc5dc
	if (!ctx.cr6.eq) goto loc_822BC5DC;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc5e8
	goto loc_822BC5E8;
loc_822BC5DC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC5E4;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC5E8:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC5F4;
	sub_822B8180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ddd98
	ctx.lr = 0x822BC604;
	sub_822DDD98(ctx, base);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bc630
	if (!ctx.cr6.eq) goto loc_822BC630;
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bc6a4
	if (ctx.cr6.eq) goto loc_822BC6A4;
loc_822BC630:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc650
	if (!ctx.cr6.eq) goto loc_822BC650;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822bc66c
	goto loc_822BC66C;
loc_822BC650:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc660
	if (!ctx.cr6.eq) goto loc_822BC660;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822bc66c
	goto loc_822BC66C;
loc_822BC660:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822BC668;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822BC66C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822b8180
	ctx.lr = 0x822BC678;
	sub_822B8180(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BC684;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21024
	ctx.r4.s64 = ctx.r11.s64 + -21024;
	// li r3,13
	ctx.r3.s64 = 13;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x822BC6A4;
	sub_82280900(ctx, base);
loc_822BC6A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC548) {
	__imp__sub_822BC548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC6AC) {
	__imp__sub_822BC6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BC6B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822bc704
	if (!ctx.cr6.lt) goto loc_822BC704;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20904
	ctx.r4.s64 = ctx.r11.s64 + -20904;
	// bl 0x82280b08
	ctx.lr = 0x822BC6E4;
	sub_82280B08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822BC704:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b82f8
	ctx.lr = 0x822BC70C;
	sub_822B82F8(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822bc788
	if (!ctx.cr6.gt) goto loc_822BC788;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_822BC724:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc738
	if (!ctx.cr6.eq) goto loc_822BC738;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822bc768
	goto loc_822BC768;
loc_822BC738:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc75c
	if (!ctx.cr6.eq) goto loc_822BC75C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x822bc768
	goto loc_822BC768;
loc_822BC75C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823dec00
	ctx.lr = 0x822BC764;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_822BC768:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822bc774
	if (!ctx.cr6.lt) goto loc_822BC774;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_822BC774:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc724
	if (ctx.cr6.lt) goto loc_822BC724;
loc_822BC788:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC6B0) {
	__imp__sub_822BC6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BC7A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822bc7f4
	if (!ctx.cr6.lt) goto loc_822BC7F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20840
	ctx.r4.s64 = ctx.r11.s64 + -20840;
	// bl 0x82280b08
	ctx.lr = 0x822BC7D4;
	sub_82280B08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822BC7F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b82f8
	ctx.lr = 0x822BC7FC;
	sub_822B82F8(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822bc878
	if (!ctx.cr6.gt) goto loc_822BC878;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_822BC814:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bc828
	if (!ctx.cr6.eq) goto loc_822BC828;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822bc858
	goto loc_822BC858;
loc_822BC828:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bc84c
	if (!ctx.cr6.eq) goto loc_822BC84C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x822bc858
	goto loc_822BC858;
loc_822BC84C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823dec00
	ctx.lr = 0x822BC854;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_822BC858:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822bc864
	if (!ctx.cr6.gt) goto loc_822BC864;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_822BC864:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc814
	if (ctx.cr6.lt) goto loc_822BC814;
loc_822BC878:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC7A0) {
	__imp__sub_822BC7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC890) {
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
	// lwz r11,5040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5040);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822bc8f8
	if (!ctx.cr6.lt) goto loc_822BC8F8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20688
	ctx.r4.s64 = ctx.r11.s64 + -20688;
	// bl 0x82280b08
	ctx.lr = 0x822BC8C8;
	sub_82280B08(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822bc950
	goto loc_822BC950;
loc_822BC8F8:
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x822bc930
	if (ctx.cr6.eq) goto loc_822BC930;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20776
	ctx.r4.s64 = ctx.r11.s64 + -20776;
	// bl 0x82280b08
	ctx.lr = 0x822BC91C;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822bc950
	goto loc_822BC950;
loc_822BC930:
	// lwz r10,-84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,-80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,5040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r8.u32);
loc_822BC950:
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

PPC_WEAK_FUNC(sub_822BC890) {
	__imp__sub_822BC890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC968) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BC98C;
	sub_822BC890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BC998;
	sub_822BC890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_822BC968) {
	__imp__sub_822BC968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BC9B4) {
	__imp__sub_822BC9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BC9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822BC9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5040);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822bca1c
	if (!ctx.cr6.lt) goto loc_822BCA1C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20688
	ctx.r4.s64 = ctx.r11.s64 + -20688;
	// bl 0x82280b08
	ctx.lr = 0x822BC9E8;
	sub_82280B08(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822BCA00;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822BCA1C:
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822BCA34;
	sub_823DE1F0(ctx, base);
	// lwz r11,5040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BC9B8) {
	__imp__sub_822BC9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCA4C) {
	__imp__sub_822BCA4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCA50) {
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
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// bl 0x822e0338
	ctx.lr = 0x822BCA70;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bcacc
	if (ctx.cr6.eq) goto loc_822BCACC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-25332
	ctx.r3.s64 = ctx.r11.s64 + -25332;
	// bl 0x822e0338
	ctx.lr = 0x822BCA88;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bcabc
	if (ctx.cr6.eq) goto loc_822BCABC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,-20592
	ctx.r4.s64 = ctx.r11.s64 + -20592;
	// bl 0x822830e8
	ctx.lr = 0x822BCAA8;
	sub_822830E8(ctx, base);
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
loc_822BCABC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20608
	ctx.r4.s64 = ctx.r11.s64 + -20608;
	// bl 0x82280c30
	ctx.lr = 0x822BCACC;
	sub_82280C30(ctx, base);
loc_822BCACC:
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

PPC_WEAK_FUNC(sub_822BCA50) {
	__imp__sub_822BCA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822BCAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x822bcb14
	if (ctx.cr6.eq) goto loc_822BCB14;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20580
	ctx.r3.s64 = ctx.r11.s64 + -20580;
	// bl 0x822e84f0
	ctx.lr = 0x822BCB10;
	sub_822E84F0(ctx, base);
	// bl 0x822bca50
	ctx.lr = 0x822BCB14;
	sub_822BCA50(ctx, base);
loc_822BCB14:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x822bcb64
	if (!ctx.cr6.gt) goto loc_822BCB64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,26424
	ctx.r29.s64 = ctx.r11.s64 + 26424;
loc_822BCB28:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa00
	ctx.lr = 0x822BCB34;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcb58
	if (!ctx.cr6.eq) goto loc_822BCB58;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x822bcb58
	if (ctx.cr6.eq) goto loc_822BCB58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822BCB54;
	sub_822E84F0(ctx, base);
	// bl 0x822bca50
	ctx.lr = 0x822BCB58;
	sub_822BCA50(ctx, base);
loc_822BCB58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822bcb28
	if (ctx.cr6.lt) goto loc_822BCB28;
loc_822BCB64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BCAE0) {
	__imp__sub_822BCAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCB6C) {
	__imp__sub_822BCB6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822BCB78;
	__savegprlr_14(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// lwz r6,80(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r5,26214
	ctx.r5.s64 = 1717960704;
	// stw r4,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r4.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r3,r5,26215
	ctx.r3.u64 = ctx.r5.u64 | 26215;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,-3392(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -3392);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,-31858
	ctx.r4.s64 = -2087845888;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r4,-13632
	ctx.r8.s64 = ctx.r4.s64 + -13632;
	// mulhw r10,r11,r3
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32)) >> 32;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r18,0
	ctx.r18.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r11,-3392(r7)
	PPC_STORE_U32(ctx.r7.u32 + -3392, ctx.r11.u32);
	// add r14,r10,r8
	ctx.r14.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x822bce38
	if (!ctx.cr6.gt) goto loc_822BCE38;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// li r15,20
	ctx.r15.s64 = 20;
	// li r16,21
	ctx.r16.s64 = 21;
	// li r17,46
	ctx.r17.s64 = 46;
	// addi r21,r5,-20608
	ctx.r21.s64 = ctx.r5.s64 + -20608;
	// addi r20,r6,-20592
	ctx.r20.s64 = ctx.r6.s64 + -20592;
	// addi r19,r7,-25332
	ctx.r19.s64 = ctx.r7.s64 + -25332;
	// addi r27,r8,-25256
	ctx.r27.s64 = ctx.r8.s64 + -25256;
	// addi r26,r9,-20400
	ctx.r26.s64 = ctx.r9.s64 + -20400;
	// addi r25,r10,-20452
	ctx.r25.s64 = ctx.r10.s64 + -20452;
	// addi r24,r11,-20496
	ctx.r24.s64 = ctx.r11.s64 + -20496;
loc_822BCC2C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822bccb8
	if (!ctx.cr6.eq) goto loc_822BCCB8;
	// bl 0x822b8180
	ctx.lr = 0x822BCC40;
	sub_822B8180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822BCC48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bcc48
	if (!ctx.cr6.eq) goto loc_822BCC48;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x822bce24
	if (!ctx.cr6.gt) goto loc_822BCE24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bcae0
	ctx.lr = 0x822BCC78;
	sub_822BCAE0(ctx, base);
	// addi r29,r31,-1
	ctx.r29.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x822bcca4
	if (ctx.cr6.lt) goto loc_822BCCA4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822830e8
	ctx.lr = 0x822BCCA4;
	sub_822830E8(ctx, base);
loc_822BCCA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822bcdcc
	if (ctx.cr6.eq) goto loc_822BCDCC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r15,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r15.u8);
	// b 0x822bcdc8
	goto loc_822BCDC8;
loc_822BCCB8:
	// bl 0x822b8180
	ctx.lr = 0x822BCCBC;
	sub_822B8180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822BCCC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bccc4
	if (!ctx.cr6.eq) goto loc_822BCCC4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822bcd94
	if (ctx.cr6.eq) goto loc_822BCD94;
loc_822BCCEC:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// beq cr6,0x822bcd0c
	if (ctx.cr6.eq) goto loc_822BCD0C;
	// cmpwi cr6,r5,21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 21, ctx.xer);
	// beq cr6,0x822bcd0c
	if (ctx.cr6.eq) goto loc_822BCD0C;
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// bne cr6,0x822bcd18
	if (!ctx.cr6.eq) goto loc_822BCD18;
loc_822BCD0C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BCD18;
	sub_82280B08(ctx, base);
loc_822BCD18:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df980
	ctx.lr = 0x822BCD24;
	sub_823DF980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bcd3c
	if (!ctx.cr6.eq) goto loc_822BCD3C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822bccec
	if (ctx.cr6.lt) goto loc_822BCCEC;
	// b 0x822bcd94
	goto loc_822BCD94;
loc_822BCD3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822BCD48;
	sub_822E84F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e0338
	ctx.lr = 0x822BCD54;
	sub_822E0338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcd94
	if (ctx.cr6.eq) goto loc_822BCD94;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822e0338
	ctx.lr = 0x822BCD68;
	sub_822E0338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcd88
	if (ctx.cr6.eq) goto loc_822BCD88;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822830e8
	ctx.lr = 0x822BCD84;
	sub_822830E8(ctx, base);
	// b 0x822bcd94
	goto loc_822BCD94;
loc_822BCD88:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280c30
	ctx.lr = 0x822BCD94;
	sub_82280C30(ctx, base);
loc_822BCD94:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x822bcdb8
	if (ctx.cr6.lt) goto loc_822BCDB8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822830e8
	ctx.lr = 0x822BCDB8;
	sub_822830E8(ctx, base);
loc_822BCDB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822bcdcc
	if (ctx.cr6.eq) goto loc_822BCDCC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r16,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r16.u8);
loc_822BCDC8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_822BCDCC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822bce20
	if (ctx.cr6.eq) goto loc_822BCE20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
loc_822BCDE8:
	// lbzx r10,r8,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x822bce10
	if (ctx.cr6.eq) goto loc_822BCE10;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x822bce10
	if (ctx.cr6.eq) goto loc_822BCE10;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x822bce10
	if (ctx.cr6.eq) goto loc_822BCE10;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// b 0x822bce14
	goto loc_822BCE14;
loc_822BCE10:
	// stb r17,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r17.u8);
loc_822BCE14:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x822bcde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BCDE8;
loc_822BCE20:
	// lwz r29,1292(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1292);
loc_822BCE24:
	// lwz r11,80(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bcc2c
	if (ctx.cr6.lt) goto loc_822BCC2C;
loc_822BCE38:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r9,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r4,r8,-20508
	ctx.r4.s64 = ctx.r8.s64 + -20508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b7268
	ctx.lr = 0x822BCE60;
	sub_822B7268(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r7,-25308
	ctx.r3.s64 = ctx.r7.s64 + -25308;
	// bl 0x822e0338
	ctx.lr = 0x822BCE70;
	sub_822E0338(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822bcea0
	if (ctx.cr6.eq) goto loc_822BCEA0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-20516
	ctx.r5.s64 = ctx.r11.s64 + -20516;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BCE94;
	sub_822E8368(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// b 0x822bcea8
	goto loc_822BCEA8;
loc_822BCEA0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
loc_822BCEA8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
	// bne cr6,0x822bceb8
	if (!ctx.cr6.eq) goto loc_822BCEB8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822BCEB8:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822bcecc
	if (!ctx.cr6.eq) goto loc_822BCECC;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_822BCECC:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BCB70) {
	__imp__sub_822BCB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCED4) {
	__imp__sub_822BCED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCED8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BCED8) {
	__imp__sub_822BCED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCEE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BCEE8) {
	__imp__sub_822BCEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCEF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BCEF8) {
	__imp__sub_822BCEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,-20328
	ctx.r4.s64 = ctx.r11.s64 + -20328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x822BCF30;
	sub_822E7E98(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-20508
	ctx.r4.s64 = ctx.r9.s64 + -20508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b7268
	ctx.lr = 0x822BCF4C;
	sub_822B7268(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
	// bne cr6,0x822bcf60
	if (!ctx.cr6.eq) goto loc_822BCF60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822BCF60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x822bcf70
	if (!ctx.cr6.eq) goto loc_822BCF70;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822BCF70:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BCF08) {
	__imp__sub_822BCF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BCF84) {
	__imp__sub_822BCF84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCF88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210fb20
	ctx.lr = 0x822BCFA8;
	sub_8210FB20(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bcfd4
	if (ctx.cr6.eq) goto loc_822BCFD4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x82280900
	ctx.lr = 0x822BCFD4;
	sub_82280900(ctx, base);
loc_822BCFD4:
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

PPC_WEAK_FUNC(sub_822BCF88) {
	__imp__sub_822BCF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BCFE8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210fb78
	ctx.lr = 0x822BD008;
	sub_8210FB78(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd038
	if (ctx.cr6.eq) goto loc_822BD038;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20268
	ctx.r4.s64 = ctx.r11.s64 + -20268;
	// bl 0x82280900
	ctx.lr = 0x822BD038;
	sub_82280900(ctx, base);
loc_822BD038:
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

PPC_WEAK_FUNC(sub_822BCFE8) {
	__imp__sub_822BCFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD04C) {
	__imp__sub_822BD04C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD050) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210fc70
	ctx.lr = 0x822BD070;
	sub_8210FC70(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd09c
	if (ctx.cr6.eq) goto loc_822BD09C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20240
	ctx.r4.s64 = ctx.r11.s64 + -20240;
	// bl 0x82280900
	ctx.lr = 0x822BD09C;
	sub_82280900(ctx, base);
loc_822BD09C:
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

PPC_WEAK_FUNC(sub_822BD050) {
	__imp__sub_822BD050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD0B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210fc78
	ctx.lr = 0x822BD0D0;
	sub_8210FC78(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd0fc
	if (ctx.cr6.eq) goto loc_822BD0FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20216
	ctx.r4.s64 = ctx.r11.s64 + -20216;
	// bl 0x82280900
	ctx.lr = 0x822BD0FC;
	sub_82280900(ctx, base);
loc_822BD0FC:
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

PPC_WEAK_FUNC(sub_822BD0B0) {
	__imp__sub_822BD0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD110) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8210fca0
	ctx.lr = 0x822BD130;
	sub_8210FCA0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd160
	if (ctx.cr6.eq) goto loc_822BD160;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20196
	ctx.r4.s64 = ctx.r11.s64 + -20196;
	// bl 0x82280900
	ctx.lr = 0x822BD160;
	sub_82280900(ctx, base);
loc_822BD160:
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

PPC_WEAK_FUNC(sub_822BD110) {
	__imp__sub_822BD110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD174) {
	__imp__sub_822BD174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD178) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8211bc90
	ctx.lr = 0x822BD198;
	sub_8211BC90(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd1c4
	if (ctx.cr6.eq) goto loc_822BD1C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20176
	ctx.r4.s64 = ctx.r11.s64 + -20176;
	// bl 0x82280900
	ctx.lr = 0x822BD1C4;
	sub_82280900(ctx, base);
loc_822BD1C4:
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

PPC_WEAK_FUNC(sub_822BD178) {
	__imp__sub_822BD178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD1D8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8211bd38
	ctx.lr = 0x822BD1F8;
	sub_8211BD38(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd228
	if (ctx.cr6.eq) goto loc_822BD228;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20148
	ctx.r4.s64 = ctx.r11.s64 + -20148;
	// bl 0x82280900
	ctx.lr = 0x822BD228;
	sub_82280900(ctx, base);
loc_822BD228:
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

PPC_WEAK_FUNC(sub_822BD1D8) {
	__imp__sub_822BD1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD23C) {
	__imp__sub_822BD23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD240) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8211bde0
	ctx.lr = 0x822BD260;
	sub_8211BDE0(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bd28c
	if (ctx.cr6.eq) goto loc_822BD28C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20120
	ctx.r4.s64 = ctx.r11.s64 + -20120;
	// bl 0x82280900
	ctx.lr = 0x822BD28C;
	sub_82280900(ctx, base);
loc_822BD28C:
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

PPC_WEAK_FUNC(sub_822BD240) {
	__imp__sub_822BD240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20088
	ctx.r4.s64 = ctx.r11.s64 + -20088;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD2A0) {
	__imp__sub_822BD2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD2D8) {
	__imp__sub_822BD2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD2DC) {
	__imp__sub_822BD2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20060
	ctx.r4.s64 = ctx.r11.s64 + -20060;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD2E0) {
	__imp__sub_822BD2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD318) {
	__imp__sub_822BD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD31C) {
	__imp__sub_822BD31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20028
	ctx.r4.s64 = ctx.r11.s64 + -20028;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD320) {
	__imp__sub_822BD320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD358) {
	__imp__sub_822BD358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD35C) {
	__imp__sub_822BD35C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19996
	ctx.r4.s64 = ctx.r11.s64 + -19996;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD360) {
	__imp__sub_822BD360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD394) {
	__imp__sub_822BD394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19968
	ctx.r4.s64 = ctx.r11.s64 + -19968;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD398) {
	__imp__sub_822BD398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD3CC) {
	__imp__sub_822BD3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3D0) {
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
	// bl 0x822c10d0
	ctx.lr = 0x822BD3E0;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD3E4;
	sub_822CD8F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD3D0) {
	__imp__sub_822BD3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD3F4) {
	__imp__sub_822BD3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD3F8) {
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
	// bl 0x822c10d0
	ctx.lr = 0x822BD410;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD414;
	sub_822CD8F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// beq cr6,0x822bd45c
	if (ctx.cr6.eq) goto loc_822BD45C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bd434
	if (!ctx.cr6.eq) goto loc_822BD434;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822BD434:
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bne cr6,0x822bd468
	if (!ctx.cr6.eq) goto loc_822BD468;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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
loc_822BD45C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13236
	ctx.r11.s64 = ctx.r11.s64 + 13236;
	// b 0x822bd434
	goto loc_822BD434;
loc_822BD468:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822BD3F8) {
	__imp__sub_822BD3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD480) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822BD498;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD49C;
	sub_822CD8F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd4b8
	if (ctx.cr6.eq) goto loc_822BD4B8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd4bc
	goto loc_822BD4BC;
loc_822BD4B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD4BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD480) {
	__imp__sub_822BD480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD4DC) {
	__imp__sub_822BD4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD4E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822BD4F8;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD4FC;
	sub_822CD8F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd518
	if (ctx.cr6.eq) goto loc_822BD518;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd51c
	goto loc_822BD51C;
loc_822BD518:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD51C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD4E0) {
	__imp__sub_822BD4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD53C) {
	__imp__sub_822BD53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD540) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822BD558;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD55C;
	sub_822CD8F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd578
	if (ctx.cr6.eq) goto loc_822BD578;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd57c
	goto loc_822BD57C;
loc_822BD578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD57C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD540) {
	__imp__sub_822BD540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD59C) {
	__imp__sub_822BD59C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD5A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822c10d0
	ctx.lr = 0x822BD5B8;
	sub_822C10D0(ctx, base);
	// bl 0x822cd8f8
	ctx.lr = 0x822BD5BC;
	sub_822CD8F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd5d8
	if (ctx.cr6.eq) goto loc_822BD5D8;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd5dc
	goto loc_822BD5DC;
loc_822BD5D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD5DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD5A0) {
	__imp__sub_822BD5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD5FC) {
	__imp__sub_822BD5FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD600) {
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
	// bl 0x822b8180
	ctx.lr = 0x822BD624;
	sub_822B8180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c65a0
	ctx.lr = 0x822BD630;
	sub_822C65A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd64c
	if (ctx.cr6.eq) goto loc_822BD64C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd650
	goto loc_822BD650;
loc_822BD64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD650:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD600) {
	__imp__sub_822BD600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD674) {
	__imp__sub_822BD674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD678) {
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
	// bl 0x822b8180
	ctx.lr = 0x822BD69C;
	sub_822B8180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c65a0
	ctx.lr = 0x822BD6A8;
	sub_822C65A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd6c4
	if (ctx.cr6.eq) goto loc_822BD6C4;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd6c8
	goto loc_822BD6C8;
loc_822BD6C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD6C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD678) {
	__imp__sub_822BD678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD6EC) {
	__imp__sub_822BD6EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD6F0) {
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
	// bl 0x822b8180
	ctx.lr = 0x822BD714;
	sub_822B8180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c65a0
	ctx.lr = 0x822BD720;
	sub_822C65A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd73c
	if (ctx.cr6.eq) goto loc_822BD73C;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd740
	goto loc_822BD740;
loc_822BD73C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD740:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD6F0) {
	__imp__sub_822BD6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD764) {
	__imp__sub_822BD764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD768) {
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
	// bl 0x822b8180
	ctx.lr = 0x822BD78C;
	sub_822B8180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c65a0
	ctx.lr = 0x822BD798;
	sub_822C65A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bd7b4
	if (ctx.cr6.eq) goto loc_822BD7B4;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd7b8
	goto loc_822BD7B8;
loc_822BD7B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BD7B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD768) {
	__imp__sub_822BD768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD7DC) {
	__imp__sub_822BD7DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD7E0) {
	__imp__sub_822BD7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD7F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD7F8) {
	__imp__sub_822BD7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD808) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BD808) {
	__imp__sub_822BD808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD81C) {
	__imp__sub_822BD81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD820) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x82141340
	ctx.lr = 0x822BD840;
	sub_82141340(ctx, base);
	// bl 0x8213af90
	ctx.lr = 0x822BD844;
	sub_8213AF90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD820) {
	__imp__sub_822BD820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD860) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821418e0
	ctx.lr = 0x822BD880;
	sub_821418E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822BD860) {
	__imp__sub_822BD860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BD89C) {
	__imp__sub_822BD89C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BD8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822BD8A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bd8e8
	if (ctx.cr6.eq) goto loc_822BD8E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19764
	ctx.r4.s64 = ctx.r11.s64 + -19764;
	// bl 0x82280b08
	ctx.lr = 0x822BD8E0;
	sub_82280B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BD8E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bd908
	if (!ctx.cr6.eq) goto loc_822BD908;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bd924
	goto loc_822BD924;
loc_822BD908:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bd918
	if (!ctx.cr6.eq) goto loc_822BD918;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x822bd924
	goto loc_822BD924;
loc_822BD918:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822BD920;
	sub_823DEAF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822BD924:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x822b8180
	ctx.lr = 0x822BD92C;
	sub_822B8180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x822bdbe0
	if (ctx.cr6.lt) goto loc_822BDBE0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x822bdbe0
	if (!ctx.cr6.lt) goto loc_822BDBE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,17332
	ctx.r4.s64 = ctx.r11.s64 + 17332;
	// bl 0x822e8058
	ctx.lr = 0x822BD94C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd97c
	if (!ctx.cr6.eq) goto loc_822BD97C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82133078
	ctx.lr = 0x822BD964;
	sub_82133078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bd974
	if (!ctx.cr6.eq) goto loc_822BD974;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822BD974:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BD97C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x822e8058
	ctx.lr = 0x822BD98C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bd9cc
	if (!ctx.cr6.eq) goto loc_822BD9CC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bd9bc
	if (ctx.cr6.eq) goto loc_822BD9BC;
	// bl 0x82139f50
	ctx.lr = 0x822BD9B0;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BD9BC:
	// bl 0x821413c8
	ctx.lr = 0x822BD9C0;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BD9CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-19780
	ctx.r4.s64 = ctx.r11.s64 + -19780;
	// bl 0x822e8058
	ctx.lr = 0x822BD9DC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bda20
	if (!ctx.cr6.eq) goto loc_822BDA20;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82139f50
	ctx.lr = 0x822BDA04;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821396a0
	ctx.lr = 0x822BDA18;
	sub_821396A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDA20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-19788
	ctx.r4.s64 = ctx.r11.s64 + -19788;
	// bl 0x822e8058
	ctx.lr = 0x822BDA30;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bda7c
	if (!ctx.cr6.eq) goto loc_822BDA7C;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82139f50
	ctx.lr = 0x822BDA58;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82141340
	ctx.lr = 0x822BDA6C;
	sub_82141340(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821397f0
	ctx.lr = 0x822BDA74;
	sub_821397F0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDA7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3580
	ctx.r4.s64 = ctx.r11.s64 + 3580;
	// bl 0x822e8058
	ctx.lr = 0x822BDA8C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bdb1c
	if (!ctx.cr6.eq) goto loc_822BDB1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,29088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bdaf0
	if (ctx.cr6.eq) goto loc_822BDAF0;
	// bl 0x82139f50
	ctx.lr = 0x822BDAB4;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdae0
	if (ctx.cr6.eq) goto loc_822BDAE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a080
	ctx.lr = 0x822BDAC8;
	sub_8213A080(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bd974
	if (!ctx.cr6.eq) goto loc_822BD974;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDAE0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDAF0:
	// bl 0x82141340
	ctx.lr = 0x822BDAF4;
	sub_82141340(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d660
	ctx.lr = 0x822BDAFC;
	sub_8213D660(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bdb14
	if (!ctx.cr6.eq) goto loc_822BDB14;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
loc_822BDB14:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDB1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3608
	ctx.r4.s64 = ctx.r11.s64 + 3608;
	// bl 0x822e8058
	ctx.lr = 0x822BDB2C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822bdb8c
	if (!ctx.cr6.eq) goto loc_822BDB8C;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdb70
	if (ctx.cr6.eq) goto loc_822BDB70;
	// bl 0x82139f50
	ctx.lr = 0x822BDB54;
	sub_82139F50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdba0
	if (ctx.cr6.eq) goto loc_822BDBA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a0e0
	ctx.lr = 0x822BDB68;
	sub_8213A0E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDB70:
	// bl 0x82141340
	ctx.lr = 0x822BDB74;
	sub_82141340(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d660
	ctx.lr = 0x822BDB7C;
	sub_8213D660(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822bdba0
	goto loc_822BDBA0;
loc_822BDB8C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-19840
	ctx.r4.s64 = ctx.r11.s64 + -19840;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BDBA0;
	sub_82280B08(ctx, base);
loc_822BDBA0:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bdbf8
	if (ctx.cr6.eq) goto loc_822BDBF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b8180
	ctx.lr = 0x822BDBBC;
	sub_822B8180(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-19864
	ctx.r4.s64 = ctx.r11.s64 + -19864;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BDBD8;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BDBE0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-19936
	ctx.r4.s64 = ctx.r11.s64 + -19936;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822BDBF8;
	sub_82280B08(ctx, base);
loc_822BDBF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BD8A0) {
	__imp__sub_822BD8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDC00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r9,29088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bdc2c
	if (!ctx.cr6.eq) goto loc_822BDC2C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822BDC2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDC00) {
	__imp__sub_822BDC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDC38) {
	__imp__sub_822BDC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDC50) {
	__imp__sub_822BDC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDC68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDC68) {
	__imp__sub_822BDC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDC78) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bdcb0
	if (!ctx.cr6.eq) goto loc_822BDCB0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bdcc0
	goto loc_822BDCC0;
loc_822BDCB0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bdcc0
	if (ctx.cr6.eq) goto loc_822BDCC0;
	// bl 0x823deaf8
	ctx.lr = 0x822BDCC0;
	sub_823DEAF8(ctx, base);
loc_822BDCC0:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x822bdd58
	if (ctx.cr6.gt) goto loc_822BDD58;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822bdd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BDD70;
	// bdzf 4*cr6+eq,0x822bdd7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822BDD7C;
	// bne cr6,0x822bdd88
	if (!ctx.cr6.eq) goto loc_822BDD88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19604
	ctx.r3.s64 = ctx.r11.s64 + -19604;
loc_822BDCE4:
	// bl 0x822c4080
	ctx.lr = 0x822BDCE8;
	sub_822C4080(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-19624
	ctx.r3.s64 = ctx.r11.s64 + -19624;
	// bl 0x822c4080
	ctx.lr = 0x822BDCF8;
	sub_822C4080(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_822BDCFC:
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r8,-14280
	ctx.r11.s64 = ctx.r8.s64 + -14280;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r10,r11,-8448
	ctx.r10.s64 = ctx.r11.s64 + -8448;
	// lwz r11,-14280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14280);
	// addi r5,r5,-10520
	ctx.r5.s64 = ctx.r5.s64 + -10520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,-14280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14280, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BDD38;
	sub_822E8368(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822bdd4c
	if (!ctx.cr6.eq) goto loc_822BDD4C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
loc_822BDD4C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822BDD58:
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
loc_822BDD70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19644
	ctx.r3.s64 = ctx.r11.s64 + -19644;
	// b 0x822bdce4
	goto loc_822BDCE4;
loc_822BDD7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19668
	ctx.r3.s64 = ctx.r11.s64 + -19668;
	// b 0x822bdce4
	goto loc_822BDCE4;
loc_822BDD88:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-19692
	ctx.r3.s64 = ctx.r11.s64 + -19692;
	// bl 0x822c4080
	ctx.lr = 0x822BDD94;
	sub_822C4080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230b200
	ctx.lr = 0x822BDD9C;
	sub_8230B200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5380
	ctx.lr = 0x822BDDA8;
	sub_822C5380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x822BDDB0;
	sub_82310110(ctx, base);
	// addi r10,r3,999
	ctx.r10.s64 = ctx.r3.s64 + 999;
	// li r9,500
	ctx.r9.s64 = 500;
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822bddfc
	if (ctx.cr6.eq) goto loc_822BDDFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bddf0
	if (ctx.cr6.eq) goto loc_822BDDF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822bdde4
	if (ctx.cr6.eq) goto loc_822BDDE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-19696
	ctx.r7.s64 = ctx.r11.s64 + -19696;
	// b 0x822bdcfc
	goto loc_822BDCFC;
loc_822BDDE4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-19700
	ctx.r7.s64 = ctx.r11.s64 + -19700;
	// b 0x822bdcfc
	goto loc_822BDCFC;
loc_822BDDF0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-19704
	ctx.r7.s64 = ctx.r11.s64 + -19704;
	// b 0x822bdcfc
	goto loc_822BDCFC;
loc_822BDDFC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-19708
	ctx.r7.s64 = ctx.r11.s64 + -19708;
	// b 0x822bdcfc
	goto loc_822BDCFC;
}

PPC_WEAK_FUNC(sub_822BDC78) {
	__imp__sub_822BDC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDE08) {
	__imp__sub_822BDE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE18) {
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c6f0
	ctx.lr = 0x822BDE38;
	sub_8213C6F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_822BDE18) {
	__imp__sub_822BDE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BDE5C) {
	__imp__sub_822BDE5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDE60) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8213c6f0
	ctx.lr = 0x822BDE80;
	sub_8213C6F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_822BDE60) {
	__imp__sub_822BDE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BDEA4) {
	__imp__sub_822BDEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BDEA8) {
	__imp__sub_822BDEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BDEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822BDEC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5040(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5040);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r10,-84
	ctx.r10.s64 = -84;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// dcbt r9,r10
	// lwz r11,240(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 240);
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,-3128
	ctx.r7.s64 = ctx.r8.s64 + -3128;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r28,-4(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// dcbt r28,r7
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r28,29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 29, ctx.xer);
	// stw r11,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r11.u32);
	// bgt cr6,0x822be310
	if (ctx.cr6.gt) goto loc_822BE310;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bgt cr6,0x822bf2f4
	if (ctx.cr6.gt) goto loc_822BF2F4;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8384
	ctx.r12.s64 = ctx.r12.s64 + -8384;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_822BDFB4;
	case 1:
		goto loc_822BE20C;
	case 2:
		goto loc_822BE20C;
	case 3:
		goto loc_822BE20C;
	case 4:
		goto loc_822BE20C;
	case 5:
		goto loc_822BE170;
	case 6:
		goto loc_822BE0E0;
	case 7:
		goto loc_822BE20C;
	case 8:
		goto loc_822BE20C;
	case 9:
		goto loc_822BE20C;
	case 10:
		goto loc_822BE20C;
	case 11:
		goto loc_822BE20C;
	case 12:
		goto loc_822BE20C;
	case 13:
		goto loc_822BE20C;
	case 14:
		goto loc_822BE20C;
	case 15:
		goto loc_822BF2F4;
	case 16:
		goto loc_822BE244;
	case 17:
		goto loc_822BE20C;
	case 18:
		goto loc_822BE20C;
	case 19:
		goto loc_822BE0FC;
	case 20:
		goto loc_822BE118;
	case 21:
		goto loc_822BE144;
	case 22:
		goto loc_822BE290;
	case 23:
		goto loc_822BE2B0;
	case 24:
		goto loc_822BE2D0;
	case 25:
		goto loc_822BE2F0;
	case 26:
		goto loc_822BE064;
	case 27:
		goto loc_822BE088;
	case 28:
		goto loc_822BE0BC;
	default:
		return;
	}
	// lwz r17,-8268(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8268);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7824(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7824);
	// lwz r17,-7968(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7968);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-3340(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3340);
	// lwz r17,-7612(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7612);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7668);
	// lwz r17,-7940(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7940);
	// lwz r17,-7912(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7912);
	// lwz r17,-7868(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7868);
	// lwz r17,-7536(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7536);
	// lwz r17,-7504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7504);
	// lwz r17,-7472(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7472);
	// lwz r17,-7440(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7440);
	// lwz r17,-8092(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8092);
	// lwz r17,-8056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8056);
	// lwz r17,-8004(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8004);
loc_822BDFB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822be034
	if (ctx.cr6.eq) goto loc_822BE034;
loc_822BDFBC:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,-4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x822bdec0
	ctx.lr = 0x822BDFE0;
	sub_822BDEC0(ctx, base);
	// cmpwi cr6,r28,23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 23, ctx.xer);
	// blt cr6,0x822bdff8
	if (ctx.cr6.lt) goto loc_822BDFF8;
	// cmpwi cr6,r28,185
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 185, ctx.xer);
	// bgt cr6,0x822bdff8
	if (ctx.cr6.gt) goto loc_822BDFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822be004
	goto loc_822BE004;
loc_822BDFF8:
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822BE004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822be01c
	if (!ctx.cr6.eq) goto loc_822BE01C;
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bdfbc
	if (!ctx.cr6.eq) goto loc_822BDFBC;
loc_822BE01C:
	// cmpwi cr6,r28,23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 23, ctx.xer);
	// blt cr6,0x822be02c
	if (ctx.cr6.lt) goto loc_822BE02C;
	// cmpwi cr6,r28,185
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 185, ctx.xer);
	// ble cr6,0x822be03c
	if (!ctx.cr6.gt) goto loc_822BE03C;
loc_822BE02C:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x822be03c
	if (ctx.cr6.eq) goto loc_822BE03C;
loc_822BE034:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822be040
	goto loc_822BE040;
loc_822BE03C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BE040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf2f4
	if (!ctx.cr6.eq) goto loc_822BF2F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19540
	ctx.r4.s64 = ctx.r11.s64 + -19540;
	// bl 0x82280b08
	ctx.lr = 0x822BE05C;
	sub_82280B08(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE064:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE070;
	sub_822BC890(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822b8370
	ctx.lr = 0x822BE080;
	sub_822B8370(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE088:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE094;
	sub_822BC890(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822b8180
	ctx.lr = 0x822BE0A4;
	sub_822B8180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822be0b4
	if (!ctx.cr6.eq) goto loc_822BE0B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822BE0B4:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE0BC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE0C8;
	sub_822BC890(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822b82f8
	ctx.lr = 0x822BE0D8;
	sub_822B82F8(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE0E0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE0EC;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bae90
	ctx.lr = 0x822BE0F8;
	sub_822BAE90(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE0FC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE108;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822baf90
	ctx.lr = 0x822BE114;
	sub_822BAF90(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE118:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE124;
	sub_822BC890(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE130;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bb068
	ctx.lr = 0x822BE140;
	sub_822BB068(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE144:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE150;
	sub_822BC890(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE15C;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bb138
	ctx.lr = 0x822BE16C;
	sub_822BB138(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE170:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE17C;
	sub_822BC890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf2f4
	if (ctx.cr6.eq) goto loc_822BF2F4;
	// lwz r11,5040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x822be218
	if (!ctx.cr6.lt) goto loc_822BE218;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822be1c4
	if (!ctx.cr6.eq) goto loc_822BE1C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x822bbcb0
	ctx.lr = 0x822BE1BC;
	sub_822BBCB0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE1C4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822be1f0
	if (!ctx.cr6.eq) goto loc_822BE1F0;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbcb0
	ctx.lr = 0x822BE1E8;
	sub_822BBCB0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE1F0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19580
	ctx.r4.s64 = ctx.r11.s64 + -19580;
	// bl 0x82280b08
	ctx.lr = 0x822BE204;
	sub_82280B08(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE20C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE218;
	sub_822BC890(ctx, base);
loc_822BE218:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE224;
	sub_822BC890(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822bbec8
	ctx.lr = 0x822BE23C;
	sub_822BBEC8(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE244:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE250;
	sub_822BC9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf2f4
	if (ctx.cr6.eq) goto loc_822BF2F4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE268;
	sub_822BC9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf2f4
	if (ctx.cr6.eq) goto loc_822BF2F4;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbd48
	ctx.lr = 0x822BE288;
	sub_822BBD48(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822BE290:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE29C;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b8480
	ctx.lr = 0x822BE2AC;
	sub_822B8480(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE2B0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE2BC;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b8668
	ctx.lr = 0x822BE2CC;
	sub_822B8668(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE2D0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE2DC;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b8568
	ctx.lr = 0x822BE2EC;
	sub_822B8568(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE2F0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE2FC;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b8758
	ctx.lr = 0x822BE30C;
	sub_822B8758(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE310:
	// addi r11,r28,-30
	ctx.r11.s64 = ctx.r28.s64 + -30;
	// cmplwi cr6,r11,154
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 154, ctx.xer);
	// bgt cr6,0x822bf2f4
	if (ctx.cr6.gt) goto loc_822BF2F4;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7372
	ctx.r12.s64 = ctx.r12.s64 + -7372;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822BE5A0;
	case 1:
		goto loc_822BE5BC;
	case 2:
		goto loc_822BE5D8;
	case 3:
		goto loc_822BE5F4;
	case 4:
		goto loc_822BE610;
	case 5:
		goto loc_822BE624;
	case 6:
		goto loc_822BE640;
	case 7:
		goto loc_822BE65C;
	case 8:
		goto loc_822BE678;
	case 9:
		goto loc_822BED6C;
	case 10:
		goto loc_822BE850;
	case 11:
		goto loc_822BE860;
	case 12:
		goto loc_822BE870;
	case 13:
		goto loc_822BE880;
	case 14:
		goto loc_822BE890;
	case 15:
		goto loc_822BE8A0;
	case 16:
		goto loc_822BE8B0;
	case 17:
		goto loc_822BE920;
	case 18:
		goto loc_822BEA28;
	case 19:
		goto loc_822BE744;
	case 20:
		goto loc_822BE764;
	case 21:
		goto loc_822BE938;
	case 22:
		goto loc_822BE948;
	case 23:
		goto loc_822BE7B0;
	case 24:
		goto loc_822BE7D4;
	case 25:
		goto loc_822BE7B0;
	case 26:
		goto loc_822BE7D4;
	case 27:
		goto loc_822BE7F8;
	case 28:
		goto loc_822BE818;
	case 29:
		goto loc_822BEA8C;
	case 30:
		goto loc_822BEAD0;
	case 31:
		goto loc_822BEB08;
	case 32:
		goto loc_822BEB40;
	case 33:
		goto loc_822BEB78;
	case 34:
		goto loc_822BEBB0;
	case 35:
		goto loc_822BEBC0;
	case 36:
		goto loc_822BEBE0;
	case 37:
		goto loc_822BEBF0;
	case 38:
		goto loc_822BEC00;
	case 39:
		goto loc_822BEC10;
	case 40:
		goto loc_822BEC20;
	case 41:
		goto loc_822BEC30;
	case 42:
		goto loc_822BEC40;
	case 43:
		goto loc_822BECDC;
	case 44:
		goto loc_822BED18;
	case 45:
		goto loc_822BED34;
	case 46:
		goto loc_822BED50;
	case 47:
		goto loc_822BE694;
	case 48:
		goto loc_822BE6BC;
	case 49:
		goto loc_822BE6DC;
	case 50:
		goto loc_822BE6FC;
	case 51:
		goto loc_822BE71C;
	case 52:
		goto loc_822BEA28;
	case 53:
		goto loc_822BECF8;
	case 54:
		goto loc_822BEE54;
	case 55:
		goto loc_822BECA8;
	case 56:
		goto loc_822BECA8;
	case 57:
		goto loc_822BECA8;
	case 58:
		goto loc_822BEA1C;
	case 59:
		goto loc_822BEA28;
	case 60:
		goto loc_822BEA28;
	case 61:
		goto loc_822BEA28;
	case 62:
		goto loc_822BEDB0;
	case 63:
		goto loc_822BEDF4;
	case 64:
		goto loc_822BEE14;
	case 65:
		goto loc_822BEE34;
	case 66:
		goto loc_822BEA28;
	case 67:
		goto loc_822BEA28;
	case 68:
		goto loc_822BE8E8;
	case 69:
		goto loc_822BEAC4;
	case 70:
		goto loc_822BEA28;
	case 71:
		goto loc_822BE6B0;
	case 72:
		goto loc_822BEA28;
	case 73:
		goto loc_822BEA28;
	case 74:
		goto loc_822BECA8;
	case 75:
		goto loc_822BE958;
	case 76:
		goto loc_822BEA28;
	case 77:
		goto loc_822BE96C;
	case 78:
		goto loc_822BE980;
	case 79:
		goto loc_822BE9C4;
	case 80:
		goto loc_822BEA1C;
	case 81:
		goto loc_822BEA1C;
	case 82:
		goto loc_822BEA38;
	case 83:
		goto loc_822BEA54;
	case 84:
		goto loc_822BEA70;
	case 85:
		goto loc_822BE980;
	case 86:
		goto loc_822BEA1C;
	case 87:
		goto loc_822BEC50;
	case 88:
		goto loc_822BEC60;
	case 89:
		goto loc_822BEC70;
	case 90:
		goto loc_822BEA1C;
	case 91:
		goto loc_822BEC80;
	case 92:
		goto loc_822BEC9C;
	case 93:
		goto loc_822BECC0;
	case 94:
		goto loc_822BECA8;
	case 95:
		goto loc_822BECA8;
	case 96:
		goto loc_822BECA8;
	case 97:
		goto loc_822BECA8;
	case 98:
		goto loc_822BECA8;
	case 99:
		goto loc_822BEA28;
	case 100:
		goto loc_822BEA28;
	case 101:
		goto loc_822BEA28;
	case 102:
		goto loc_822BECA8;
	case 103:
		goto loc_822BEA28;
	case 104:
		goto loc_822BECA8;
	case 105:
		goto loc_822BEE74;
	case 106:
		goto loc_822BEE84;
	case 107:
		goto loc_822BEE94;
	case 108:
		goto loc_822BEEA4;
	case 109:
		goto loc_822BEEB4;
	case 110:
		goto loc_822BEEC4;
	case 111:
		goto loc_822BEED4;
	case 112:
		goto loc_822BEEE4;
	case 113:
		goto loc_822BEEF4;
	case 114:
		goto loc_822BEF3C;
	case 115:
		goto loc_822BEF84;
	case 116:
		goto loc_822BEFCC;
	case 117:
		goto loc_822BF010;
	case 118:
		goto loc_822BF054;
	case 119:
		goto loc_822BF064;
	case 120:
		goto loc_822BF074;
	case 121:
		goto loc_822BF084;
	case 122:
		goto loc_822BF094;
	case 123:
		goto loc_822BF0A4;
	case 124:
		goto loc_822BF0C4;
	case 125:
		goto loc_822BF0E4;
	case 126:
		goto loc_822BF104;
	case 127:
		goto loc_822BF148;
	case 128:
		goto loc_822BF174;
	case 129:
		goto loc_822BE980;
	case 130:
		goto loc_822BE9E0;
	case 131:
		goto loc_822BECA8;
	case 132:
		goto loc_822BECA8;
	case 133:
		goto loc_822BF124;
	case 134:
		goto loc_822BECA8;
	case 135:
		goto loc_822BF18C;
	case 136:
		goto loc_822BEA44;
	case 137:
		goto loc_822BF1A8;
	case 138:
		goto loc_822BF1C8;
	case 139:
		goto loc_822BECA8;
	case 140:
		goto loc_822BECA8;
	case 141:
		goto loc_822BF200;
	case 142:
		goto loc_822BEA28;
	case 143:
		goto loc_822BF220;
	case 144:
		goto loc_822BF23C;
	case 145:
		goto loc_822BF25C;
	case 146:
		goto loc_822BF274;
	case 147:
		goto loc_822BEA28;
	case 148:
		goto loc_822BECA8;
	case 149:
		goto loc_822BF290;
	case 150:
		goto loc_822BF2B0;
	case 151:
		goto loc_822BECA8;
	case 152:
		goto loc_822BEA44;
	case 153:
		goto loc_822BEA44;
	case 154:
		goto loc_822BF2D0;
	default:
		return;
	}
	// lwz r17,-6752(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6752);
	// lwz r17,-6724(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6724);
	// lwz r17,-6696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6696);
	// lwz r17,-6668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6668);
	// lwz r17,-6640(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6640);
	// lwz r17,-6620(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6620);
	// lwz r17,-6592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6592);
	// lwz r17,-6564(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6564);
	// lwz r17,-6536(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6536);
	// lwz r17,-4756(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4756);
	// lwz r17,-6064(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6064);
	// lwz r17,-6048(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6048);
	// lwz r17,-6032(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6032);
	// lwz r17,-6016(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6016);
	// lwz r17,-6000(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6000);
	// lwz r17,-5984(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5984);
	// lwz r17,-5968(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5968);
	// lwz r17,-5856(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5856);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-6332(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6332);
	// lwz r17,-6300(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6300);
	// lwz r17,-5832(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5832);
	// lwz r17,-5816(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5816);
	// lwz r17,-6224(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6224);
	// lwz r17,-6188(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6188);
	// lwz r17,-6224(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6224);
	// lwz r17,-6188(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6188);
	// lwz r17,-6152(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6152);
	// lwz r17,-6120(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6120);
	// lwz r17,-5492(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5492);
	// lwz r17,-5424(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5424);
	// lwz r17,-5368(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5368);
	// lwz r17,-5312(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5312);
	// lwz r17,-5256(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5256);
	// lwz r17,-5200(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5200);
	// lwz r17,-5184(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5184);
	// lwz r17,-5152(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5152);
	// lwz r17,-5136(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5136);
	// lwz r17,-5120(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5120);
	// lwz r17,-5104(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5104);
	// lwz r17,-5088(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5088);
	// lwz r17,-5072(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5072);
	// lwz r17,-5056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// lwz r17,-4900(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// lwz r17,-4840(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4840);
	// lwz r17,-4812(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// lwz r17,-4784(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4784);
	// lwz r17,-6508(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6508);
	// lwz r17,-6468(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6468);
	// lwz r17,-6436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6436);
	// lwz r17,-6404(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6404);
	// lwz r17,-6372(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6372);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4872(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4872);
	// lwz r17,-4524(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4524);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-5604(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5604);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4688(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4688);
	// lwz r17,-4620(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4620);
	// lwz r17,-4588(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4588);
	// lwz r17,-4556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4556);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5912(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5912);
	// lwz r17,-5436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5436);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-6480(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6480);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-5800(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5800);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5780(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5780);
	// lwz r17,-5760(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5760);
	// lwz r17,-5692(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5692);
	// lwz r17,-5604(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5604);
	// lwz r17,-5604(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5604);
	// lwz r17,-5576(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5576);
	// lwz r17,-5548(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5548);
	// lwz r17,-5520(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5520);
	// lwz r17,-5760(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5760);
	// lwz r17,-5604(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5604);
	// lwz r17,-5040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5040);
	// lwz r17,-5024(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5024);
	// lwz r17,-5008(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// lwz r17,-5604(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5604);
	// lwz r17,-4992(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4992);
	// lwz r17,-4964(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// lwz r17,-4928(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4928);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4492(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4492);
	// lwz r17,-4476(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4476);
	// lwz r17,-4460(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	// lwz r17,-4444(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4444);
	// lwz r17,-4428(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4428);
	// lwz r17,-4412(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4412);
	// lwz r17,-4396(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4396);
	// lwz r17,-4380(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4380);
	// lwz r17,-4364(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4364);
	// lwz r17,-4292(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4292);
	// lwz r17,-4220(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4220);
	// lwz r17,-4148(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4148);
	// lwz r17,-4080(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4080);
	// lwz r17,-4012(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	// lwz r17,-3996(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3996);
	// lwz r17,-3980(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3980);
	// lwz r17,-3964(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3964);
	// lwz r17,-3948(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3948);
	// lwz r17,-3932(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3932);
	// lwz r17,-3900(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3900);
	// lwz r17,-3868(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3868);
	// lwz r17,-3836(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3836);
	// lwz r17,-3768(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3768);
	// lwz r17,-3724(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3724);
	// lwz r17,-5760(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5760);
	// lwz r17,-5664(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5664);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-3804(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3804);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-3700(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3700);
	// lwz r17,-5564(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5564);
	// lwz r17,-3672(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3672);
	// lwz r17,-3640(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3640);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-3584(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3584);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-3552(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3552);
	// lwz r17,-3524(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3524);
	// lwz r17,-3492(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3492);
	// lwz r17,-3468(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3468);
	// lwz r17,-5592(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5592);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-3440(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3440);
	// lwz r17,-3408(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	// lwz r17,-4952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// lwz r17,-5564(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5564);
	// lwz r17,-5564(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5564);
	// lwz r17,-3376(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3376);
loc_822BE5A0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE5AC;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b9028
	ctx.lr = 0x822BE5B8;
	sub_822B9028(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE5BC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE5C8;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b90b0
	ctx.lr = 0x822BE5D4;
	sub_822B90B0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE5D8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE5E4;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bc6b0
	ctx.lr = 0x822BE5F0;
	sub_822BC6B0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE5F4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE600;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bc7a0
	ctx.lr = 0x822BE60C;
	sub_822BC7A0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE610:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x822BE61C;
	sub_82310110(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE624:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE630;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b8a60
	ctx.lr = 0x822BE63C;
	sub_822B8A60(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE640:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE64C;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b8968
	ctx.lr = 0x822BE658;
	sub_822B8968(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE65C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE668;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b8b58
	ctx.lr = 0x822BE674;
	sub_822B8B58(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE678:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE684;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b8820
	ctx.lr = 0x822BE690;
	sub_822B8820(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE694:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE6A0;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bcb70
	ctx.lr = 0x822BE6AC;
	sub_822BCB70(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE6B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bcf08
	ctx.lr = 0x822BE6B8;
	sub_822BCF08(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE6BC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE6C8;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b8f08
	ctx.lr = 0x822BE6D8;
	sub_822B8F08(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE6DC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE6E8;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b8e80
	ctx.lr = 0x822BE6F8;
	sub_822B8E80(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE6FC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE708;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b8f90
	ctx.lr = 0x822BE718;
	sub_822B8F90(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE71C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE728;
	sub_822BC890(ctx, base);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b8de0
	ctx.lr = 0x822BE740;
	sub_822B8DE0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE744:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE750;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b91b0
	ctx.lr = 0x822BE760;
	sub_822B91B0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE764:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE770;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24284
	ctx.r4.s64 = ctx.r11.s64 + -24284;
	// bl 0x82280900
	ctx.lr = 0x822BE7AC;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE7B0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE7BC;
	sub_822BC890(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9780
	ctx.lr = 0x822BE7D0;
	sub_822B9780(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE7D4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE7E0;
	sub_822BC890(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9780
	ctx.lr = 0x822BE7F4;
	sub_822B9780(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE7F8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BE804;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bad60
	ctx.lr = 0x822BE814;
	sub_822BAD60(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE818:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22052
	ctx.r4.s64 = ctx.r11.s64 + -22052;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BE84C;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE850:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9a38
	ctx.lr = 0x822BE85C;
	sub_822B9A38(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE860:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9a98
	ctx.lr = 0x822BE86C;
	sub_822B9A98(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE870:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9af8
	ctx.lr = 0x822BE87C;
	sub_822B9AF8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE880:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9b58
	ctx.lr = 0x822BE88C;
	sub_822B9B58(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE890:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9bb8
	ctx.lr = 0x822BE89C;
	sub_822B9BB8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE8A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9c18
	ctx.lr = 0x822BE8AC;
	sub_822B9C18(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE8B0:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23568
	ctx.r4.s64 = ctx.r11.s64 + -23568;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BE8E4;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE8E8:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23540
	ctx.r4.s64 = ctx.r11.s64 + -23540;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BE91C;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE920:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82121098
	ctx.lr = 0x822BE934;
	sub_82121098(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE938:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9d08
	ctx.lr = 0x822BE944;
	sub_822B9D08(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE948:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b9d68
	ctx.lr = 0x822BE954;
	sub_822B9D68(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE958:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82308370
	ctx.lr = 0x822BE964;
	sub_82308370(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE96C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82141398
	ctx.lr = 0x822BE978;
	sub_82141398(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE980:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE98C;
	sub_822BC9B8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BE9C0;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE9C4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BE9D0;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba5c8
	ctx.lr = 0x822BE9DC;
	sub_822BA5C8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BE9E0:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23116
	ctx.r4.s64 = ctx.r11.s64 + -23116;
	// bl 0x82280900
	ctx.lr = 0x822BEA18;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEA1C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEA28;
	sub_822BC890(ctx, base);
loc_822BEA28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEA38:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEA44;
	sub_822BC890(ctx, base);
loc_822BEA44:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822bf2e0
	goto loc_822BF2E0;
loc_822BEA54:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BEA60;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba898
	ctx.lr = 0x822BEA6C;
	sub_822BA898(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEA70:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BEA7C;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b9fd0
	ctx.lr = 0x822BEA88;
	sub_822B9FD0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEA8C:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23212
	ctx.r4.s64 = ctx.r11.s64 + -23212;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEAC0;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEAC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ba058
	ctx.lr = 0x822BEACC;
	sub_822BA058(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEAD0:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEB04;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEB08:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEB3C;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEB40:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23460
	ctx.r4.s64 = ctx.r11.s64 + -23460;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEB74;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEB78:
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23428
	ctx.r4.s64 = ctx.r11.s64 + -23428;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEBAC;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEBB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb208
	ctx.lr = 0x822BEBBC;
	sub_822BB208(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEBC0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEBCC;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb290
	ctx.lr = 0x822BEBDC;
	sub_822BB290(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEBE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb350
	ctx.lr = 0x822BEBEC;
	sub_822BB350(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEBF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb3d8
	ctx.lr = 0x822BEBFC;
	sub_822BB3D8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb460
	ctx.lr = 0x822BEC0C;
	sub_822BB460(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb4e8
	ctx.lr = 0x822BEC1C;
	sub_822BB4E8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb570
	ctx.lr = 0x822BEC2C;
	sub_822BB570(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb5f8
	ctx.lr = 0x822BEC3C;
	sub_822BB5F8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb660
	ctx.lr = 0x822BEC4C;
	sub_822BB660(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb6c8
	ctx.lr = 0x822BEC5C;
	sub_822BB6C8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb768
	ctx.lr = 0x822BEC6C;
	sub_822BB768(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bb7f0
	ctx.lr = 0x822BEC7C;
	sub_822BB7F0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC80:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BEC8C;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba748
	ctx.lr = 0x822BEC98;
	sub_822BA748(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEC9C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BECA8;
	sub_822BC9B8(ctx, base);
loc_822BECA8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BECC0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BECCC;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ba7c8
	ctx.lr = 0x822BECD8;
	sub_822BA7C8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BECDC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BECE8;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bb850
	ctx.lr = 0x822BECF4;
	sub_822BB850(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BECF8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BED04;
	sub_822BC890(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b8370
	ctx.lr = 0x822BED0C;
	sub_822B8370(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822bb980
	ctx.lr = 0x822BED14;
	sub_822BB980(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BED18:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BED24;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bc180
	ctx.lr = 0x822BED30;
	sub_822BC180(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BED34:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BED40;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bc378
	ctx.lr = 0x822BED4C;
	sub_822BC378(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BED50:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BED5C;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822bc548
	ctx.lr = 0x822BED68;
	sub_822BC548(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BED6C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BED78;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEDAC;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEDB0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BEDBC;
	sub_822BC9B8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BEDF0;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEDF4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEE00;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ba918
	ctx.lr = 0x822BEE10;
	sub_822BA918(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE14:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEE20;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822baa28
	ctx.lr = 0x822BEE30;
	sub_822BAA28(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE34:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEE40;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bab80
	ctx.lr = 0x822BEE50;
	sub_822BAB80(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE54:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEE60;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbaf8
	ctx.lr = 0x822BEE70;
	sub_822BBAF8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE74:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bcf88
	ctx.lr = 0x822BEE80;
	sub_822BCF88(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bcfe8
	ctx.lr = 0x822BEE90;
	sub_822BCFE8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEE94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd050
	ctx.lr = 0x822BEEA0;
	sub_822BD050(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEEA4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd0b0
	ctx.lr = 0x822BEEB0;
	sub_822BD0B0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEEB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd110
	ctx.lr = 0x822BEEC0;
	sub_822BD110(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEEC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd178
	ctx.lr = 0x822BEED0;
	sub_822BD178(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEED4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd1d8
	ctx.lr = 0x822BEEE0;
	sub_822BD1D8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEEE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd240
	ctx.lr = 0x822BEEF0;
	sub_822BD240(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEEF4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEF00;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20088
	ctx.r4.s64 = ctx.r11.s64 + -20088;
	// bl 0x82280900
	ctx.lr = 0x822BEF38;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEF3C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEF48;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20060
	ctx.r4.s64 = ctx.r11.s64 + -20060;
	// bl 0x82280900
	ctx.lr = 0x822BEF80;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEF84:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEF90;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-20028
	ctx.r4.s64 = ctx.r11.s64 + -20028;
	// bl 0x82280900
	ctx.lr = 0x822BEFC8;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BEFCC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BEFD8;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19996
	ctx.r4.s64 = ctx.r11.s64 + -19996;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BF00C;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF010:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF01C;
	sub_822BC890(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19968
	ctx.r4.s64 = ctx.r11.s64 + -19968;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822BF050;
	sub_82280900(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF054:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd3f8
	ctx.lr = 0x822BF060;
	sub_822BD3F8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF064:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd480
	ctx.lr = 0x822BF070;
	sub_822BD480(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF074:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd4e0
	ctx.lr = 0x822BF080;
	sub_822BD4E0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF084:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd540
	ctx.lr = 0x822BF090;
	sub_822BD540(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF094:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd5a0
	ctx.lr = 0x822BF0A0;
	sub_822BD5A0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF0A4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF0B0;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd600
	ctx.lr = 0x822BF0C0;
	sub_822BD600(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF0C4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF0D0;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd678
	ctx.lr = 0x822BF0E0;
	sub_822BD678(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF0E4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF0F0;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd6f0
	ctx.lr = 0x822BF100;
	sub_822BD6F0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF104:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF110;
	sub_822BC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd768
	ctx.lr = 0x822BF120;
	sub_822BD768(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF124:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF130;
	sub_822BC890(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF148:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF154;
	sub_822BC890(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23724
	ctx.r4.s64 = ctx.r11.s64 + -23724;
	// bl 0x82280b08
	ctx.lr = 0x822BF164;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF174:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF18C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BF198;
	sub_822BC9B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF1A8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BF1B4;
	sub_822BC9B8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bd8a0
	ctx.lr = 0x822BF1C4;
	sub_822BD8A0(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF1C8:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r9,29088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822bf1f4
	if (!ctx.cr6.eq) goto loc_822BF1F4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf2e4
	if (ctx.cr6.eq) goto loc_822BF2E4;
loc_822BF1F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF200:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BF20C;
	sub_822BC9B8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ba2b8
	ctx.lr = 0x822BF21C;
	sub_822BA2B8(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF220:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BF22C;
	sub_822BC9B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b8c60
	ctx.lr = 0x822BF238;
	sub_822B8C60(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF23C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc9b8
	ctx.lr = 0x822BF248;
	sub_822BC9B8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ba470
	ctx.lr = 0x822BF258;
	sub_822BA470(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF25C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82141340
	ctx.lr = 0x822BF26C;
	sub_82141340(ctx, base);
	// bl 0x8213af90
	ctx.lr = 0x822BF270;
	sub_8213AF90(ctx, base);
	// b 0x822bf2dc
	goto loc_822BF2DC;
loc_822BF274:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bc890
	ctx.lr = 0x822BF280;
	sub_822BC890(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bdc78
	ctx.lr = 0x822BF28C;
	sub_822BDC78(ctx, base);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF290:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8213c6f0
	ctx.lr = 0x822BF29C;
	sub_8213C6F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF2B0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c6f0
	ctx.lr = 0x822BF2BC;
	sub_8213C6F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822bf2e4
	goto loc_822BF2E4;
loc_822BF2D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821418e0
	ctx.lr = 0x822BF2DC;
	sub_821418E0(ctx, base);
loc_822BF2DC:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
loc_822BF2E0:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_822BF2E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbcb0
	ctx.lr = 0x822BF2F4;
	sub_822BBCB0(ctx, base);
loc_822BF2F4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BDEC0) {
	__imp__sub_822BDEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF2FC) {
	__imp__sub_822BF2FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF300) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x822bf320
	if (ctx.cr6.lt) goto loc_822BF320;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x822bf318
	if (!ctx.cr6.gt) goto loc_822BF318;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x822bf320
	if (!ctx.cr6.eq) goto loc_822BF320;
loc_822BF318:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BF320:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF300) {
	__imp__sub_822BF300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF328) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// blt cr6,0x822bf338
	if (ctx.cr6.lt) goto loc_822BF338;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_822BF338:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15048
	ctx.r9.s64 = ctx.r11.s64 + 15048;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF328) {
	__imp__sub_822BF328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF34C) {
	__imp__sub_822BF34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822BF358;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 23, ctx.xer);
	// addi r25,r11,15048
	ctx.r25.s64 = ctx.r11.s64 + 15048;
	// blt cr6,0x822bf388
	if (ctx.cr6.lt) goto loc_822BF388;
	// li r24,5
	ctx.r24.s64 = 5;
	// b 0x822bf390
	goto loc_822BF390;
loc_822BF388:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r25
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
loc_822BF390:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x822bf3b0
	if (ctx.cr6.lt) goto loc_822BF3B0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x822bf3a8
	if (!ctx.cr6.gt) goto loc_822BF3A8;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x822bf3b0
	if (!ctx.cr6.eq) goto loc_822BF3B0;
loc_822BF3A8:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x822bf3b4
	goto loc_822BF3B4;
loc_822BF3B0:
	// li r23,1
	ctx.r23.s64 = 1;
loc_822BF3B4:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822bf4a8
	if (ctx.cr0.lt) goto loc_822BF4A8;
	// bne cr6,0x822bf438
	if (!ctx.cr6.eq) goto loc_822BF438;
loc_822BF3C8:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf4a8
	if (ctx.cr6.eq) goto loc_822BF4A8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// blt cr6,0x822bf3f0
	if (ctx.cr6.lt) goto loc_822BF3F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822bf3f8
	goto loc_822BF3F8;
loc_822BF3F0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
loc_822BF3F8:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x822bf414
	if (ctx.cr6.lt) goto loc_822BF414;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf4a8
	if (!ctx.cr6.eq) goto loc_822BF4A8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822bf4a8
	if (!ctx.cr6.eq) goto loc_822BF4A8;
loc_822BF414:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bdec0
	ctx.lr = 0x822BF428;
	sub_822BDEC0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822bf3c8
	if (!ctx.cr6.lt) goto loc_822BF3C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822BF438:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf4a8
	if (ctx.cr6.eq) goto loc_822BF4A8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// blt cr6,0x822bf460
	if (ctx.cr6.lt) goto loc_822BF460;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822bf468
	goto loc_822BF468;
loc_822BF460:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
loc_822BF468:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x822bf478
	if (!ctx.cr6.lt) goto loc_822BF478;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822bf48c
	if (!ctx.cr6.eq) goto loc_822BF48C;
loc_822BF478:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822bf4a8
	if (!ctx.cr6.eq) goto loc_822BF4A8;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822bf4a8
	if (!ctx.cr6.eq) goto loc_822BF4A8;
loc_822BF48C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bdec0
	ctx.lr = 0x822BF4A0;
	sub_822BDEC0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822bf438
	if (!ctx.cr6.lt) goto loc_822BF438;
loc_822BF4A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF350) {
	__imp__sub_822BF350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822BF4B8;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5440(r1)
	ea = -5440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31858
	ctx.r26.s64 = -2087845888;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-22732(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22732);
	// stw r4,-22740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22740, ctx.r4.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822bf684
	if (ctx.cr6.eq) goto loc_822BF684;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r11,5376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 5376, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// ble cr6,0x822bf610
	if (!ctx.cr6.gt) goto loc_822BF610;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822BF514:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bf574
	if (!ctx.cr6.eq) goto loc_822BF574;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// beq cr6,0x822bf54c
	if (ctx.cr6.eq) goto loc_822BF54C;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bf350
	ctx.lr = 0x822BF548;
	sub_822BF350(ctx, base);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
loc_822BF54C:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// beq cr6,0x822bf600
	if (ctx.cr6.eq) goto loc_822BF600;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// b 0x822bf59c
	goto loc_822BF59C;
loc_822BF574:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bf59c
	if (!ctx.cr6.eq) goto loc_822BF59C;
	// lwz r11,5376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5376);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x822bf61c
	if (ctx.cr6.eq) goto loc_822BF61C;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bbcb0
	ctx.lr = 0x822BF598;
	sub_822BBCB0(ctx, base);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
loc_822BF59C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bf514
	if (ctx.cr6.lt) goto loc_822BF514;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822bf5d8
	if (ctx.cr6.eq) goto loc_822BF5D8;
loc_822BF5B8:
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bdec0
	ctx.lr = 0x822BF5CC;
	sub_822BDEC0(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bf5b8
	if (!ctx.cr6.eq) goto loc_822BF5B8;
loc_822BF5D8:
	// lwz r11,5376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822bf638
	if (!ctx.cr6.gt) goto loc_822BF638;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// bl 0x82280b08
	ctx.lr = 0x822BF5F4;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822BF600:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19392
	ctx.r4.s64 = ctx.r11.s64 + -19392;
	// bl 0x82280b08
	ctx.lr = 0x822BF610;
	sub_82280B08(ctx, base);
loc_822BF610:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822BF61C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19432
	ctx.r4.s64 = ctx.r11.s64 + -19432;
	// bl 0x82280b08
	ctx.lr = 0x822BF62C;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822BF638:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf610
	if (ctx.cr6.eq) goto loc_822BF610;
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822bf668
	if (!ctx.cr6.gt) goto loc_822BF668;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-19484
	ctx.r4.s64 = ctx.r11.s64 + -19484;
	// bl 0x82280b08
	ctx.lr = 0x822BF65C;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822BF668:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bf67c
	if (ctx.cr6.eq) goto loc_822BF67C;
	// lwz r11,-22732(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22732);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_822BF67C:
	// ld r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822BF684:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822BF4B0) {
	__imp__sub_822BF4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF690) {
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
	// bl 0x822bf4b0
	ctx.lr = 0x822BF6A8;
	sub_822BF4B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bf6bc
	if (!ctx.cr6.eq) goto loc_822BF6BC;
loc_822BF6B0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x822bf770
	goto loc_822BF770;
loc_822BF6BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822bf70c
	if (ctx.cr6.lt) goto loc_822BF70C;
	// beq cr6,0x822bf6e0
	if (ctx.cr6.eq) goto loc_822BF6E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822bf6b0
	if (!ctx.cr6.lt) goto loc_822BF6B0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// b 0x822bf714
	goto loc_822BF714;
loc_822BF6E0:
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r31,r11,-3384
	ctx.r31.s64 = ctx.r11.s64 + -3384;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18316
	ctx.r5.s64 = ctx.r11.s64 + -18316;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x822e8368
	ctx.lr = 0x822BF708;
	sub_822E8368(ctx, base);
	// b 0x822bf72c
	goto loc_822BF72C;
loc_822BF70C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r10,13712
	ctx.r5.s64 = ctx.r10.s64 + 13712;
loc_822BF714:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-3384
	ctx.r31.s64 = ctx.r11.s64 + -3384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822BF72C;
	sub_822E8368(ctx, base);
loc_822BF72C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822bf76c
	if (!ctx.cr6.lt) goto loc_822BF76C;
	// bl 0x82310110
	ctx.lr = 0x822BF738;
	sub_82310110(ctx, base);
	// lis r30,-31858
	ctx.r30.s64 = -2087845888;
	// lwz r11,-3388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3388);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5000, ctx.xer);
	// ble cr6,0x822bf76c
	if (!ctx.cr6.gt) goto loc_822BF76C;
	// bl 0x82310110
	ctx.lr = 0x822BF750;
	sub_82310110(ctx, base);
	// stw r3,-3388(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3388, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-19296
	ctx.r4.s64 = ctx.r11.s64 + -19296;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280c30
	ctx.lr = 0x822BF76C;
	sub_82280C30(ctx, base);
loc_822BF76C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822BF770:
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

PPC_WEAK_FUNC(sub_822BF690) {
	__imp__sub_822BF690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF788) {
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
	// bl 0x822bf4b0
	ctx.lr = 0x822BF798;
	sub_822BF4B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bf7b0
	if (!ctx.cr6.eq) goto loc_822BF7B0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BF7B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bf7d0
	if (!ctx.cr6.eq) goto loc_822BF7D0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822bf7e0
	goto loc_822BF7E0;
loc_822BF7D0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf7e0
	if (ctx.cr6.eq) goto loc_822BF7E0;
	// bl 0x823deaf8
	ctx.lr = 0x822BF7E0;
	sub_823DEAF8(ctx, base);
loc_822BF7E0:
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

PPC_WEAK_FUNC(sub_822BF788) {
	__imp__sub_822BF788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF7F8) {
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
	// bl 0x822bf4b0
	ctx.lr = 0x822BF808;
	sub_822BF4B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bf820
	if (!ctx.cr6.eq) goto loc_822BF820;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BF820:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bf84c
	if (!ctx.cr6.eq) goto loc_822BF84C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822BF84C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bf85c
	if (ctx.cr6.eq) goto loc_822BF85C;
	// bl 0x823deaf8
	ctx.lr = 0x822BF85C;
	sub_823DEAF8(ctx, base);
loc_822BF85C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF7F8) {
	__imp__sub_822BF7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF86C) {
	__imp__sub_822BF86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF870) {
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
	// bl 0x822bf4b0
	ctx.lr = 0x822BF880;
	sub_822BF4B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822bf8a0
	if (!ctx.cr6.eq) goto loc_822BF8A0;
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
loc_822BF8A0:
	// bl 0x822b82f8
	ctx.lr = 0x822BF8A4;
	sub_822B82F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF870) {
	__imp__sub_822BF870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF8B4) {
	__imp__sub_822BF8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF8B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e8058
	ctx.lr = 0x822BF8E0;
	sub_822E8058(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822BF8B8) {
	__imp__sub_822BF8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF900) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e8058
	ctx.lr = 0x822BF928;
	sub_822E8058(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822BF900) {
	__imp__sub_822BF900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF948) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF948) {
	__imp__sub_822BF948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF96C) {
	__imp__sub_822BF96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF970) {
	__imp__sub_822BF970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BF994) {
	__imp__sub_822BF994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x822bf9c8
	if (!ctx.cr6.eq) goto loc_822BF9C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BF9C8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF998) {
	__imp__sub_822BF998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BF9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x822bfa00
	if (!ctx.cr6.eq) goto loc_822BFA00;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFA00:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BF9D0) {
	__imp__sub_822BF9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822bfa24
	if (!ctx.cr6.eq) goto loc_822BFA24;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFA24:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFA08) {
	__imp__sub_822BFA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFA2C) {
	__imp__sub_822BFA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x822bfa60
	if (ctx.cr6.eq) goto loc_822BFA60;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFA60:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFA30) {
	__imp__sub_822BFA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x822bfa98
	if (ctx.cr6.eq) goto loc_822BFA98;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFA98:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFA68) {
	__imp__sub_822BFA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822bfabc
	if (ctx.cr6.eq) goto loc_822BFABC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFABC:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFAA0) {
	__imp__sub_822BFAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFAC4) {
	__imp__sub_822BFAC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFAC8) {
	__imp__sub_822BFAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFAF4) {
	__imp__sub_822BFAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x822bfb28
	if (!ctx.cr6.lt) goto loc_822BFB28;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFB28:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFAF8) {
	__imp__sub_822BFAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822bfb60
	if (!ctx.cr6.lt) goto loc_822BFB60;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFB60:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFB30) {
	__imp__sub_822BFB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822bfb84
	if (!ctx.cr6.lt) goto loc_822BFB84;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFB84:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFB68) {
	__imp__sub_822BFB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822BFB8C) {
	__imp__sub_822BFB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFB90) {
	__imp__sub_822BFB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x822bfbe8
	if (ctx.cr6.lt) goto loc_822BFBE8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFBE8:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFBB8) {
	__imp__sub_822BFBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x822bfc20
	if (ctx.cr6.lt) goto loc_822BFC20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFC20:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFBF0) {
	__imp__sub_822BFBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822BFC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x822bfc58
	if (ctx.cr6.gt) goto loc_822BFC58;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BFC58:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822BFC28) {
	__imp__sub_822BFC28(ctx, base);
}

