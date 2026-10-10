#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822ACB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r10,r11,-3336
	ctx.r10.s64 = ctx.r11.s64 + -3336;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ACB68) {
	__imp__sub_822ACB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACB78) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACB94;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acbbc
	if (!ctx.cr6.eq) goto loc_822ACBBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACBB8;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACBBC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822ACB78) {
	__imp__sub_822ACB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACBF8) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACC14;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acc3c
	if (!ctx.cr6.eq) goto loc_822ACC3C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACC38;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACC3C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822ACBF8) {
	__imp__sub_822ACBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACC78) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822aabe8
	ctx.lr = 0x822ACC94;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822accbc
	if (!ctx.cr6.eq) goto loc_822ACCBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACCB8;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACCBC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_822ACC78) {
	__imp__sub_822ACC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACCF8) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACD14;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acd3c
	if (!ctx.cr6.eq) goto loc_822ACD3C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACD38;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACD3C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822ACCF8) {
	__imp__sub_822ACCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACD78) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACD8C;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acdb4
	if (!ctx.cr6.eq) goto loc_822ACDB4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACDB0;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACDB4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822ACD78) {
	__imp__sub_822ACD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACDE4) {
	__imp__sub_822ACDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACDE8) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACE04;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ace2c
	if (!ctx.cr6.eq) goto loc_822ACE2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACE28;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACE2C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x822a32c0
	ctx.lr = 0x822ACE58;
	sub_822A32C0(ctx, base);
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

PPC_WEAK_FUNC(sub_822ACDE8) {
	__imp__sub_822ACDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACE70) {
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
	// bl 0x822a8b50
	ctx.lr = 0x822ACE80;
	sub_822A8B50(ctx, base);
	// bl 0x822acde8
	ctx.lr = 0x822ACE84;
	sub_822ACDE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ACE70) {
	__imp__sub_822ACE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACE94) {
	__imp__sub_822ACE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACE98) {
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
	// bl 0x822a3098
	ctx.lr = 0x822ACEAC;
	sub_822A3098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acde8
	ctx.lr = 0x822ACEB4;
	sub_822ACDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822ACEBC;
	sub_822A90E8(ctx, base);
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

PPC_WEAK_FUNC(sub_822ACE98) {
	__imp__sub_822ACE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACED0) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACEEC;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acf14
	if (!ctx.cr6.eq) goto loc_822ACF14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACF10;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACF14:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x822a1d50
	ctx.lr = 0x822ACF3C;
	sub_822A1D50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822ACED0) {
	__imp__sub_822ACED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACF5C) {
	__imp__sub_822ACF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACF60) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822ACF7C;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822acfa4
	if (!ctx.cr6.eq) goto loc_822ACFA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822ACFA0;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822ACFA4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x822a1d50
	ctx.lr = 0x822ACFCC;
	sub_822A1D50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822ACF60) {
	__imp__sub_822ACF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACFEC) {
	__imp__sub_822ACFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACFF0) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822AD00C;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ad034
	if (!ctx.cr6.eq) goto loc_822AD034;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822AD030;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AD034:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x822a1ee8
	ctx.lr = 0x822AD060;
	sub_822A1EE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822ACFF0) {
	__imp__sub_822ACFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD078) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822AD094;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ad0bc
	if (!ctx.cr6.eq) goto loc_822AD0BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822AD0B8;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AD0BC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x822a33a8
	ctx.lr = 0x822AD0E0;
	sub_822A33A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822AD078) {
	__imp__sub_822AD078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD100) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822AD11C;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ad144
	if (!ctx.cr6.eq) goto loc_822AD144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822AD140;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AD144:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822a3458
	ctx.lr = 0x822AD174;
	sub_822A3458(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD100) {
	__imp__sub_822AD100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD18C) {
	__imp__sub_822AD18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD190) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822AD1A4;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ad1cc
	if (!ctx.cr6.eq) goto loc_822AD1CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822AD1C8;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AD1CC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x822a3148
	ctx.lr = 0x822AD1EC;
	sub_822A3148(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822AD190) {
	__imp__sub_822AD190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD208) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r30,r11,-3336
	ctx.r30.s64 = ctx.r11.s64 + -3336;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwzu r31,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822a3a58
	ctx.lr = 0x822AD244;
	sub_822A3A58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a66d0
	ctx.lr = 0x822AD250;
	sub_822A66D0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3898
	ctx.lr = 0x822AD264;
	sub_822A3898(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD208) {
	__imp__sub_822AD208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD27C) {
	__imp__sub_822AD27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD280) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-3336
	ctx.r30.s64 = ctx.r11.s64 + -3336;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwzu r31,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822a67b8
	ctx.lr = 0x822AD2C0;
	sub_822A67B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3898
	ctx.lr = 0x822AD2D4;
	sub_822A3898(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD280) {
	__imp__sub_822AD280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD2EC) {
	__imp__sub_822AD2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD2F0) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad338
	if (!ctx.cr6.eq) goto loc_822AD338;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD330;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822AD338:
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

PPC_WEAK_FUNC(sub_822AD2F0) {
	__imp__sub_822AD2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD350) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad398
	if (!ctx.cr6.eq) goto loc_822AD398;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD390;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822AD398:
	// bl 0x822aab48
	ctx.lr = 0x822AD39C;
	sub_822AAB48(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD350) {
	__imp__sub_822AD350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD3B4) {
	__imp__sub_822AD3B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD3B8) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD3E8;
	sub_822E7E98(ctx, base);
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// addi r8,r10,9592
	ctx.r8.s64 = ctx.r10.s64 + 9592;
	// addi r7,r9,-6904
	ctx.r7.s64 = ctx.r9.s64 + -6904;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// bl 0x822aab48
	ctx.lr = 0x822AD408;
	sub_822AAB48(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD3B8) {
	__imp__sub_822AD3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AD428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a4e90
	ctx.lr = 0x822AD434;
	sub_822A4E90(ctx, base);
	// bl 0x822a28f8
	ctx.lr = 0x822AD438;
	sub_822A28F8(ctx, base);
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r9,r10,-3336
	ctx.r9.s64 = ctx.r10.s64 + -3336;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,22(r9)
	PPC_STORE_U8(ctx.r9.u32 + 22, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad47c
	if (!ctx.cr6.eq) goto loc_822AD47C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r29,r11,13984
	ctx.r29.s64 = ctx.r11.s64 + 13984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD474;
	sub_822E7E98(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_822AD47C:
	// bl 0x822aab48
	ctx.lr = 0x822AD480;
	sub_822AAB48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AD420) {
	__imp__sub_822AD420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD488) {
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
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ad4cc
	if (ctx.cr6.eq) goto loc_822AD4CC;
	// bl 0x822ad2f0
	ctx.lr = 0x822AD4AC;
	sub_822AD2F0(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r10,r10,17840
	ctx.r10.s64 = ctx.r10.s64 + 17840;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AD4CC;
	sub_823E08C0(ctx, base);
loc_822AD4CC:
	// bl 0x822ad350
	ctx.lr = 0x822AD4D0;
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

PPC_WEAK_FUNC(sub_822AD488) {
	__imp__sub_822AD488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD4E0) {
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
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r31,r10,-6904
	ctx.r31.s64 = ctx.r10.s64 + -6904;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ad52c
	if (!ctx.cr6.eq) goto loc_822AD52C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD524;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822AD52C:
	// bl 0x822aab48
	ctx.lr = 0x822AD530;
	sub_822AAB48(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD4E0) {
	__imp__sub_822AD4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD548) {
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
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r31,r10,-6904
	ctx.r31.s64 = ctx.r10.s64 + -6904;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ad598
	if (!ctx.cr6.eq) goto loc_822AD598;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AD590;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822AD598:
	// bl 0x822aab48
	ctx.lr = 0x822AD59C;
	sub_822AAB48(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD548) {
	__imp__sub_822AD548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD5B4) {
	__imp__sub_822AD5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD5B8) {
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
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,-3336
	ctx.r31.s64 = ctx.r10.s64 + -3336;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x8222b040
	ctx.lr = 0x822AD5E0;
	sub_8222B040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ad604
	if (!ctx.cr6.eq) goto loc_822AD604;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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
loc_822AD604:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ad634
	if (ctx.cr6.eq) goto loc_822AD634;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822AD620;
	sub_822A34B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822AD634:
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

PPC_WEAK_FUNC(sub_822AD5B8) {
	__imp__sub_822AD5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD64C) {
	__imp__sub_822AD64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD650) {
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
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// lis r31,-31860
	ctx.r31.s64 = -2087976960;
	// addi r30,r10,-3336
	ctx.r30.s64 = ctx.r10.s64 + -3336;
	// addi r11,r31,9592
	ctx.r11.s64 = ctx.r31.s64 + 9592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8222b1b8
	ctx.lr = 0x822AD688;
	sub_8222B1B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r3,9592(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 9592);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822AD650) {
	__imp__sub_822AD650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD6AC) {
	__imp__sub_822AD6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD6B0) {
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
	// bl 0x822a62f8
	ctx.lr = 0x822AD6CC;
	sub_822A62F8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 65536;
	// addi r31,r31,-28670
	ctx.r31.s64 = ctx.r31.s64 + -28670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2b08
	ctx.lr = 0x822AD6F0;
	sub_822A2B08(ctx, base);
	// lis r7,-31859
	ctx.r7.s64 = -2087911424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r7,-3336
	ctx.r30.s64 = ctx.r7.s64 + -3336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822a7080
	ctx.lr = 0x822AD710;
	sub_822A7080(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822AD6B0) {
	__imp__sub_822AD6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD734) {
	__imp__sub_822AD734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD738) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822a8b50
	ctx.lr = 0x822AD750;
	sub_822A8B50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ad6b0
	ctx.lr = 0x822AD758;
	sub_822AD6B0(ctx, base);
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

PPC_WEAK_FUNC(sub_822AD738) {
	__imp__sub_822AD738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD76C) {
	__imp__sub_822AD76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stb r10,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AD770) {
	__imp__sub_822AD770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD790) {
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
	// bl 0x82310110
	ctx.lr = 0x822AD7A0;
	sub_82310110(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AD790) {
	__imp__sub_822AD790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD7BC) {
	__imp__sub_822AD7BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r10,r11,800
	ctx.r10.s64 = ctx.r11.s64 + 800;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AD7C0) {
	__imp__sub_822AD7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AD7D4) {
	__imp__sub_822AD7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AD7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822AD7E0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31860
	ctx.r31.s64 = -2087976960;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r9,r9,13984
	ctx.r9.s64 = ctx.r9.s64 + 13984;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,17812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17812);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r11,17812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17812, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r11,r11,25508
	ctx.r11.s64 = ctx.r11.s64 + 25508;
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r7,r7,25716
	ctx.r7.s64 = ctx.r7.s64 + 25716;
	// addi r6,r6,25696
	ctx.r6.s64 = ctx.r6.s64 + 25696;
	// addi r5,r5,25664
	ctx.r5.s64 = ctx.r5.s64 + 25664;
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// addi r11,r30,25608
	ctx.r11.s64 = ctx.r30.s64 + 25608;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// addi r4,r4,25556
	ctx.r4.s64 = ctx.r4.s64 + 25556;
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// addi r3,r3,25456
	ctx.r3.s64 = ctx.r3.s64 + 25456;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r9,r29,25408
	ctx.r9.s64 = ctx.r29.s64 + 25408;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r27,-32253
	ctx.r27.s64 = -2113732608;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// lis r23,-32253
	ctx.r23.s64 = -2113732608;
	// lis r25,-32253
	ctx.r25.s64 = -2113732608;
	// lis r24,-32253
	ctx.r24.s64 = -2113732608;
	// lis r22,-32253
	ctx.r22.s64 = -2113732608;
	// addi r7,r28,25372
	ctx.r7.s64 = ctx.r28.s64 + 25372;
	// addi r6,r27,25296
	ctx.r6.s64 = ctx.r27.s64 + 25296;
	// addi r5,r26,25224
	ctx.r5.s64 = ctx.r26.s64 + 25224;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r11,r23,25192
	ctx.r11.s64 = ctx.r23.s64 + 25192;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// addi r4,r25,25164
	ctx.r4.s64 = ctx.r25.s64 + 25164;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addi r3,r24,25132
	ctx.r3.s64 = ctx.r24.s64 + 25132;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r9,r22,25072
	ctx.r9.s64 = ctx.r22.s64 + 25072;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// lis r21,-32253
	ctx.r21.s64 = -2113732608;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lis r20,-32253
	ctx.r20.s64 = -2113732608;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r19,-32253
	ctx.r19.s64 = -2113732608;
	// lis r16,-32253
	ctx.r16.s64 = -2113732608;
	// lis r18,-32253
	ctx.r18.s64 = -2113732608;
	// lis r17,-31918
	ctx.r17.s64 = -2091778048;
	// lis r15,-32253
	ctx.r15.s64 = -2113732608;
	// addi r7,r21,25040
	ctx.r7.s64 = ctx.r21.s64 + 25040;
	// addi r6,r20,25020
	ctx.r6.s64 = ctx.r20.s64 + 25020;
	// addi r5,r19,21416
	ctx.r5.s64 = ctx.r19.s64 + 21416;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// addi r11,r16,24976
	ctx.r11.s64 = ctx.r16.s64 + 24976;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r4,r18,24956
	ctx.r4.s64 = ctx.r18.s64 + 24956;
	// addi r3,r17,12184
	ctx.r3.s64 = ctx.r17.s64 + 12184;
	// addi r9,r15,23884
	ctx.r9.s64 = ctx.r15.s64 + 23884;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r31,r10,9588
	ctx.r31.s64 = ctx.r10.s64 + 9588;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r14,r8,-29844
	ctx.r14.s64 = ctx.r8.s64 + -29844;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r21,r11,14816
	ctx.r21.s64 = ctx.r11.s64 + 14816;
	// lfs f31,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f30,5996(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5996);
	ctx.f30.f64 = double(temp.f32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f29,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r27,r11,-6904
	ctx.r27.s64 = ctx.r11.s64 + -6904;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// ori r17,r4,51201
	ctx.r17.u64 = ctx.r4.u64 | 51201;
	// addi r28,r11,-3336
	ctx.r28.s64 = ctx.r11.s64 + -3336;
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r9,r11,17840
	ctx.r9.s64 = ctx.r11.s64 + 17840;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r19,r10,36866
	ctx.r19.u64 = ctx.r10.u64 | 36866;
	// addi r8,r11,13848
	ctx.r8.s64 = ctx.r11.s64 + 13848;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// rotlwi r26,r8,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_822AD99C:
	// bl 0x822db700
	ctx.lr = 0x822AD9A0;
	sub_822DB700(ctx, base);
	// lis r30,-31860
	ctx.r30.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,17812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17812);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// stwx r3,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823dff10
	ctx.lr = 0x822AD9C0;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b0cfc
	if (!ctx.cr6.eq) goto loc_822B0CFC;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r18,116(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_822AD9E0:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AD9E4:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AD9E8:
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// cmplwi cr6,r10,139
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 139, ctx.xer);
	// stw r10,-4(r23)
	PPC_STORE_U32(ctx.r23.u32 + -4, ctx.r10.u32);
	// bgt cr6,0x822ad9e8
	if (ctx.cr6.gt) goto loc_822AD9E8;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9696
	ctx.r12.s64 = ctx.r12.s64 + -9696;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_822ADC50;
	case 1:
		goto loc_822ADCDC;
	case 2:
		goto loc_822AF8AC;
	case 3:
		goto loc_822ADDA4;
	case 4:
		goto loc_822ADDC4;
	case 5:
		goto loc_822ADDF4;
	case 6:
		goto loc_822ADE28;
	case 7:
		goto loc_822ADE30;
	case 8:
		goto loc_822ADE74;
	case 9:
		goto loc_822ADEC0;
	case 10:
		goto loc_822ADEC8;
	case 11:
		goto loc_822ADF08;
	case 12:
		goto loc_822ADF40;
	case 13:
		goto loc_822ADF48;
	case 14:
		goto loc_822ADF90;
	case 15:
		goto loc_822ADFC4;
	case 16:
		goto loc_822ADFD0;
	case 17:
		goto loc_822ADFDC;
	case 18:
		goto loc_822AE008;
	case 19:
		goto loc_822AE030;
	case 20:
		goto loc_822AE054;
	case 21:
		goto loc_822AE074;
	case 22:
		goto loc_822AE098;
	case 23:
		goto loc_822AE0E4;
	case 24:
		goto loc_822AE100;
	case 25:
		goto loc_822AE14C;
	case 26:
		goto loc_822AE194;
	case 27:
		goto loc_822AE1E8;
	case 28:
		goto loc_822AE20C;
	case 29:
		goto loc_822AE230;
	case 30:
		goto loc_822AE254;
	case 31:
		goto loc_822AE278;
	case 32:
		goto loc_822AE29C;
	case 33:
		goto loc_822AE2C0;
	case 34:
		goto loc_822AE300;
	case 35:
		goto loc_822AE33C;
	case 36:
		goto loc_822AE3A0;
	case 37:
		goto loc_822AE35C;
	case 38:
		goto loc_822AE3BC;
	case 39:
		goto loc_822AE3F0;
	case 40:
		goto loc_822AE5E8;
	case 41:
		goto loc_822AE60C;
	case 42:
		goto loc_822AE628;
	case 43:
		goto loc_822AE64C;
	case 44:
		goto loc_822AE654;
	case 45:
		goto loc_822AE6A0;
	case 46:
		goto loc_822AE6C8;
	case 47:
		goto loc_822AE700;
	case 48:
		goto loc_822AE708;
	case 49:
		goto loc_822AE710;
	case 50:
		goto loc_822AE724;
	case 51:
		goto loc_822AE778;
	case 52:
		goto loc_822AE7A4;
	case 53:
		goto loc_822AE7F0;
	case 54:
		goto loc_822AE824;
	case 55:
		goto loc_822AE86C;
	case 56:
		goto loc_822AE8E8;
	case 57:
		goto loc_822AE920;
	case 58:
		goto loc_822AE964;
	case 59:
		goto loc_822AD9E8;
	case 60:
		goto loc_822AE990;
	case 61:
		goto loc_822AE9D0;
	case 62:
		goto loc_822AEA68;
	case 63:
		goto loc_822AEAE4;
	case 64:
		goto loc_822AEA04;
	case 65:
		goto loc_822AE7FC;
	case 66:
		goto loc_822AEB18;
	case 67:
		goto loc_822AE830;
	case 68:
		goto loc_822AEB64;
	case 69:
		goto loc_822AEB64;
	case 70:
		goto loc_822AEB64;
	case 71:
		goto loc_822AEB64;
	case 72:
		goto loc_822AEB64;
	case 73:
		goto loc_822AEB64;
	case 74:
		goto loc_822AEB6C;
	case 75:
		goto loc_822AEB9C;
	case 76:
		goto loc_822AEB9C;
	case 77:
		goto loc_822AEB9C;
	case 78:
		goto loc_822AEB9C;
	case 79:
		goto loc_822AEB9C;
	case 80:
		goto loc_822AEB9C;
	case 81:
		goto loc_822AEBA4;
	case 82:
		goto loc_822AFA40;
	case 83:
		goto loc_822AFD3C;
	case 84:
		goto loc_822B0794;
	case 85:
		goto loc_822AEBD4;
	case 86:
		goto loc_822AEBE8;
	case 87:
		goto loc_822AECF8;
	case 88:
		goto loc_822AEE2C;
	case 89:
		goto loc_822AEEBC;
	case 90:
		goto loc_822AEF70;
	case 91:
		goto loc_822AEF90;
	case 92:
		goto loc_822AF0D0;
	case 93:
		goto loc_822AF0FC;
	case 94:
		goto loc_822AF3E0;
	case 95:
		goto loc_822AF404;
	case 96:
		goto loc_822AF4B4;
	case 97:
		goto loc_822AF4F0;
	case 98:
		goto loc_822AF2C4;
	case 99:
		goto loc_822AF5D0;
	case 100:
		goto loc_822AFD94;
	case 101:
		goto loc_822AFDB8;
	case 102:
		goto loc_822AFDE0;
	case 103:
		goto loc_822AFE14;
	case 104:
		goto loc_822AFE20;
	case 105:
		goto loc_822AFE2C;
	case 106:
		goto loc_822AFE38;
	case 107:
		goto loc_822AFE84;
	case 108:
		goto loc_822AFED0;
	case 109:
		goto loc_822AFF14;
	case 110:
		goto loc_822AFF58;
	case 111:
		goto loc_822AFF8C;
	case 112:
		goto loc_822B0150;
	case 113:
		goto loc_822B01F0;
	case 114:
		goto loc_822B02FC;
	case 115:
		goto loc_822B031C;
	case 116:
		goto loc_822B033C;
	case 117:
		goto loc_822B035C;
	case 118:
		goto loc_822B037C;
	case 119:
		goto loc_822B039C;
	case 120:
		goto loc_822B03BC;
	case 121:
		goto loc_822B03DC;
	case 122:
		goto loc_822B03FC;
	case 123:
		goto loc_822B041C;
	case 124:
		goto loc_822B043C;
	case 125:
		goto loc_822B045C;
	case 126:
		goto loc_822B047C;
	case 127:
		goto loc_822B049C;
	case 128:
		goto loc_822B04BC;
	case 129:
		goto loc_822B04DC;
	case 130:
		goto loc_822B04FC;
	case 131:
		goto loc_822B0508;
	case 132:
		goto loc_822AD9E8;
	case 133:
		goto loc_822B0510;
	case 134:
		goto loc_822B067C;
	case 135:
		goto loc_822B0740;
	case 136:
		goto loc_822B0794;
	case 137:
		goto loc_822B07A8;
	case 138:
		goto loc_822B096C;
	case 139:
		goto loc_822B099C;
	default:
		return;
	}
	// lwz r17,-9136(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9136);
	// lwz r17,-8996(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8996);
	// lwz r17,-1876(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1876);
	// lwz r17,-8796(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8796);
	// lwz r17,-8764(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8764);
	// lwz r17,-8716(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8716);
	// lwz r17,-8664(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8664);
	// lwz r17,-8656(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8656);
	// lwz r17,-8588(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8588);
	// lwz r17,-8512(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8512);
	// lwz r17,-8504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8504);
	// lwz r17,-8440(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8440);
	// lwz r17,-8384(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8384);
	// lwz r17,-8376(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8376);
	// lwz r17,-8304(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8304);
	// lwz r17,-8252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8252);
	// lwz r17,-8240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8240);
	// lwz r17,-8228(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8228);
	// lwz r17,-8184(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8184);
	// lwz r17,-8144(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8144);
	// lwz r17,-8108(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8108);
	// lwz r17,-8076(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8076);
	// lwz r17,-8040(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8040);
	// lwz r17,-7964(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7964);
	// lwz r17,-7936(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7936);
	// lwz r17,-7860(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7860);
	// lwz r17,-7788(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7788);
	// lwz r17,-7704(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7704);
	// lwz r17,-7668(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7668);
	// lwz r17,-7632(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7632);
	// lwz r17,-7596(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7596);
	// lwz r17,-7560(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7560);
	// lwz r17,-7524(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7524);
	// lwz r17,-7488(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// lwz r17,-7424(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7424);
	// lwz r17,-7364(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7364);
	// lwz r17,-7264(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7264);
	// lwz r17,-7332(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7332);
	// lwz r17,-7236(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7236);
	// lwz r17,-7184(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7184);
	// lwz r17,-6680(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6680);
	// lwz r17,-6644(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6644);
	// lwz r17,-6616(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6616);
	// lwz r17,-6580(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6580);
	// lwz r17,-6572(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6572);
	// lwz r17,-6496(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6496);
	// lwz r17,-6456(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6456);
	// lwz r17,-6400(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6400);
	// lwz r17,-6392(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6392);
	// lwz r17,-6384(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6384);
	// lwz r17,-6364(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6364);
	// lwz r17,-6280(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6280);
	// lwz r17,-6236(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6236);
	// lwz r17,-6160(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6160);
	// lwz r17,-6108(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6108);
	// lwz r17,-6036(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6036);
	// lwz r17,-5912(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5912);
	// lwz r17,-5856(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5856);
	// lwz r17,-5788(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5788);
	// lwz r17,-9752(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9752);
	// lwz r17,-5744(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5744);
	// lwz r17,-5680(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5680);
	// lwz r17,-5528(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5528);
	// lwz r17,-5404(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5404);
	// lwz r17,-5628(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5628);
	// lwz r17,-6148(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6148);
	// lwz r17,-5352(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5352);
	// lwz r17,-6096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6096);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5276(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// lwz r17,-5268(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5268);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5220(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// lwz r17,-5212(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5212);
	// lwz r17,-1472(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1472);
	// lwz r17,-708(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -708);
	// lwz r17,1940(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	// lwz r17,-5164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5164);
	// lwz r17,-5144(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5144);
	// lwz r17,-4872(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4872);
	// lwz r17,-4564(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4564);
	// lwz r17,-4420(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4420);
	// lwz r17,-4240(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4240);
	// lwz r17,-4208(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4208);
	// lwz r17,-3888(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3888);
	// lwz r17,-3844(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3844);
	// lwz r17,-3104(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3104);
	// lwz r17,-3068(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3068);
	// lwz r17,-2892(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2892);
	// lwz r17,-2832(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2832);
	// lwz r17,-3388(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3388);
	// lwz r17,-2608(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2608);
	// lwz r17,-620(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -620);
	// lwz r17,-584(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -584);
	// lwz r17,-544(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -544);
	// lwz r17,-492(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -492);
	// lwz r17,-480(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -480);
	// lwz r17,-468(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// lwz r17,-456(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -456);
	// lwz r17,-380(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -380);
	// lwz r17,-304(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -304);
	// lwz r17,-236(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -236);
	// lwz r17,-168(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -168);
	// lwz r17,-116(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -116);
	// lwz r17,336(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r17,496(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// lwz r17,764(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// lwz r17,796(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// lwz r17,828(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 828);
	// lwz r17,860(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	// lwz r17,892(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 892);
	// lwz r17,924(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// lwz r17,956(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// lwz r17,988(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// lwz r17,1020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// lwz r17,1052(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// lwz r17,1084(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// lwz r17,1116(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// lwz r17,1148(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// lwz r17,1180(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// lwz r17,1212(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// lwz r17,1244(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// lwz r17,1276(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	// lwz r17,1288(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// lwz r17,-9752(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9752);
	// lwz r17,1296(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// lwz r17,1660(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	// lwz r17,1856(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// lwz r17,1940(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	// lwz r17,1960(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// lwz r17,2412(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	// lwz r17,2460(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2460);
loc_822ADC50:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a2d78
	ctx.lr = 0x822ADC58;
	sub_822A2D78(ctx, base);
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822ADC68;
	sub_822AA6E0(ctx, base);
	// lwz r10,8240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x822adcb0
	if (ctx.cr6.eq) goto loc_822ADCB0;
loc_822ADC8C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822ADC98;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822adc8c
	if (!ctx.cr6.eq) goto loc_822ADC8C;
loc_822ADCB0:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// beq cr6,0x822b0610
	if (ctx.cr6.eq) goto loc_822B0610;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822add7c
	goto loc_822ADD7C;
loc_822ADCDC:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// bl 0x822a2d78
	ctx.lr = 0x822ADCEC;
	sub_822A2D78(ctx, base);
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822ADCFC;
	sub_822AA6E0(ctx, base);
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x822add4c
	if (ctx.cr6.eq) goto loc_822ADD4C;
loc_822ADD28:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822ADD34;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822add28
	if (!ctx.cr6.eq) goto loc_822ADD28;
loc_822ADD4C:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// bne cr6,0x822add78
	if (!ctx.cr6.eq) goto loc_822ADD78;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x822b061c
	goto loc_822B061C;
loc_822ADD78:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_822ADD7C:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a90e8
	ctx.lr = 0x822ADD84;
	sub_822A90E8(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r9.u32);
	// stw r29,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r29.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822ADDA4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADDC4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822ADDF4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822ADE28:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x822adecc
	goto loc_822ADECC;
loc_822ADE30:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,8244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lhzux r10,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADE74:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r8,r9,0,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADEC0:
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x822adecc
	goto loc_822ADECC;
loc_822ADEC8:
	// li r10,11
	ctx.r10.s64 = 11;
loc_822ADECC:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lwz r9,8244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lhzux r10,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADF08:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADF40:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822adf4c
	goto loc_822ADF4C;
loc_822ADF48:
	// li r10,3
	ctx.r10.s64 = 3;
loc_822ADF4C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,8244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lhzux r5,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r5.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a1ee8
	ctx.lr = 0x822ADF8C;
	sub_822A1EE8(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADF90:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822ADFC4:
	// lwz r24,36(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822ADFD0:
	// lwz r24,44(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822ADFDC:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r16,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r16.u32);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822ADFF0;
	sub_822A32A8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a32c0
	ctx.lr = 0x822AE004;
	sub_822A32C0(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE008:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r16,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r16.u32);
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a32c0
	ctx.lr = 0x822AE02C;
	sub_822A32C0(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE030:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r16,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r16.u32);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// bl 0x822a32c0
	ctx.lr = 0x822AE050;
	sub_822A32C0(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE054:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// bl 0x822a70a0
	ctx.lr = 0x822AE068;
	sub_822A70A0(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE074:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r16,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r16.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x822a32c0
	ctx.lr = 0x822AE094;
	sub_822A32C0(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE098:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r8,r9,0,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE0E4:
	// lwz r25,40(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE100:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r8,r9,0,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE14C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,8240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// stw r10,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r10.u32);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lhzux r4,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a67b8
	ctx.lr = 0x822AE188;
	sub_822A67B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r6,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// beq cr6,0x822ad9e8
	if (ctx.cr6.eq) goto loc_822AD9E8;
loc_822AE1C8:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a6af8
	ctx.lr = 0x822AE1D0;
	sub_822A6AF8(ctx, base);
	// addi r11,r29,255
	ctx.r11.s64 = ctx.r29.s64 + 255;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822ae1c8
	if (!ctx.cr6.eq) goto loc_822AE1C8;
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE1E8:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a7160
	ctx.lr = 0x822AE200;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE20C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x822a7160
	ctx.lr = 0x822AE224;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE230:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x822a7160
	ctx.lr = 0x822AE248;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE254:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,-12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// bl 0x822a7160
	ctx.lr = 0x822AE26C;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE278:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// bl 0x822a7160
	ctx.lr = 0x822AE290;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE29C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// bl 0x822a7160
	ctx.lr = 0x822AE2B4;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE2C0:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x822a7160
	ctx.lr = 0x822AE2E4;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AE2F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE300:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x822a7160
	ctx.lr = 0x822AE324;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822AE33C:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a9cd0
	ctx.lr = 0x822AE348;
	sub_822A9CD0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE35C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,8240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r9,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r9.u32);
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lhzux r4,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a67b8
	ctx.lr = 0x822AE398;
	sub_822A67B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_822AE3A0:
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// mullw r8,r9,r17
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// lwz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r26,r8,r19
	ctx.r26.u64 = ctx.r8.u64 + ctx.r19.u64;
	// b 0x822ae3e8
	goto loc_822AE3E8;
loc_822AE3BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,8236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// mullw r4,r5,r17
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r17.s32);
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// add r26,r4,r19
	ctx.r26.u64 = ctx.r4.u64 + ctx.r19.u64;
loc_822AE3E8:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
loc_822AE3F0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a9f50
	ctx.lr = 0x822AE3FC;
	sub_822A9F50(ctx, base);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822ae4e4
	if (!ctx.cr6.eq) goto loc_822AE4E4;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a3518
	ctx.lr = 0x822AE41C;
	sub_822A3518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ae4c8
	if (!ctx.cr6.eq) goto loc_822AE4C8;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x822AE438;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ae45c
	if (!ctx.cr6.eq) goto loc_822AE45C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AE454;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AE45C:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ae4b0
	if (!ctx.cr6.eq) goto loc_822AE4B0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ae4b0
	if (!ctx.cr6.eq) goto loc_822AE4B0;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ae494
	if (!ctx.cr6.eq) goto loc_822AE494;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae4bc
	if (ctx.cr6.eq) goto loc_822AE4BC;
loc_822AE494:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AE4B0;
	sub_823E08C0(ctx, base);
loc_822AE4B0:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae4c8
	if (ctx.cr6.eq) goto loc_822AE4C8;
loc_822AE4BC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AE4C8;
	sub_8230D720(ctx, base);
loc_822AE4C8:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a62b0
	ctx.lr = 0x822AE4D8;
	sub_822A62B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// b 0x822ae5b0
	goto loc_822AE5B0;
loc_822AE4E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822ae510
	if (!ctx.cr6.eq) goto loc_822AE510;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a5a00
	ctx.lr = 0x822AE4F8;
	sub_822A5A00(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822AE50C;
	sub_822A2468(ctx, base);
	// b 0x822ae5b0
	goto loc_822AE5B0;
loc_822AE510:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AE520;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ae544
	if (!ctx.cr6.eq) goto loc_822AE544;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AE53C;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AE544:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ae598
	if (!ctx.cr6.eq) goto loc_822AE598;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ae598
	if (!ctx.cr6.eq) goto loc_822AE598;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ae57c
	if (!ctx.cr6.eq) goto loc_822AE57C;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae5a4
	if (ctx.cr6.eq) goto loc_822AE5A4;
loc_822AE57C:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AE598;
	sub_823E08C0(ctx, base);
loc_822AE598:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae5b0
	if (ctx.cr6.eq) goto loc_822AE5B0;
loc_822AE5A4:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AE5B0;
	sub_8230D720(ctx, base);
loc_822AE5B0:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mullw r10,r11,r17
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// add r26,r10,r19
	ctx.r26.u64 = ctx.r10.u64 + ctx.r19.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2b08
	ctx.lr = 0x822AE5CC;
	sub_822A2B08(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE5E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa248
	ctx.lr = 0x822AE5F8;
	sub_822AA248(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE60C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r16,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r16.u32);
	// bl 0x822a3148
	ctx.lr = 0x822AE61C;
	sub_822A3148(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE628:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AE630;
	sub_822A32A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822a3d28
	ctx.lr = 0x822AE63C;
	sub_822A3D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b09d4
	if (ctx.cr6.eq) goto loc_822B09D4;
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE64C:
	// lwz r24,36(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// b 0x822ae658
	goto loc_822AE658;
loc_822AE654:
	// lwz r24,44(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
loc_822AE658:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lhzux r4,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a3628
	ctx.lr = 0x822AE688;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a7160
	ctx.lr = 0x822AE694;
	sub_822A7160(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE6A0:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AE6A8;
	sub_822A32A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822a3d28
	ctx.lr = 0x822AE6B4;
	sub_822A3D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// beq cr6,0x822b09ac
	if (ctx.cr6.eq) goto loc_822B09AC;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AE6C8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lhzux r4,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822aa610
	ctx.lr = 0x822AE6F4;
	sub_822AA610(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE700:
	// lwz r24,36(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// b 0x822ae720
	goto loc_822AE720;
loc_822AE708:
	// lwz r24,44(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// b 0x822ae720
	goto loc_822AE720;
loc_822AE710:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AE718;
	sub_822A32A8(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_822AE720:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_822AE724:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r4,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a62f8
	ctx.lr = 0x822AE748;
	sub_822A62F8(ctx, base);
	// clrlwi r6,r24,31
	ctx.r6.u64 = ctx.r24.u32 & 0x1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mullw r5,r6,r17
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r17.s32);
	// add r26,r5,r19
	ctx.r26.u64 = ctx.r5.u64 + ctx.r19.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2b08
	ctx.lr = 0x822AE76C;
	sub_822A2B08(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE778:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r4,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a91f8
	ctx.lr = 0x822AE7A0;
	sub_822A91F8(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE7A4:
	// lwz r9,8240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r9,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lhzux r4,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a67b8
	ctx.lr = 0x822AE7E0;
	sub_822A67B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AE7F0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x822ad9e8
	if (ctx.cr6.eq) goto loc_822AD9E8;
loc_822AE7FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_822AE808:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822a3878
	ctx.lr = 0x822AE810;
	sub_822A3878(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AE814:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AE818:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE824:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x822ae2f4
	if (ctx.cr6.eq) goto loc_822AE2F4;
loc_822AE830:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822a3878
	ctx.lr = 0x822AE850;
	sub_822A3878(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822AE85C:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE86C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x822ae8b4
	if (ctx.cr6.eq) goto loc_822AE8B4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822a3878
	ctx.lr = 0x822AE898;
	sub_822A3878(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE8B4:
	// lwz r10,8236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mullw r5,r7,r17
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r17.s32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r3,r5,r19
	ctx.r3.u64 = ctx.r5.u64 + ctx.r19.u64;
	// bl 0x822a3910
	ctx.lr = 0x822AE8D8;
	sub_822A3910(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822AE8E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x822ad9e8
	if (ctx.cr6.eq) goto loc_822AD9E8;
loc_822AE8F4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AE900;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822ae8f4
	if (!ctx.cr6.eq) goto loc_822AE8F4;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE920:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822ae938
	if (!ctx.cr6.eq) goto loc_822AE938;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AE938:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ae958
	if (!ctx.cr6.eq) goto loc_822AE958;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AE954;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AE958:
	// bl 0x822aab48
	ctx.lr = 0x822AE95C;
	sub_822AAB48(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AE964:
	// lwz r10,8236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mullw r7,r8,r17
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r17.s32);
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// add r26,r7,r19
	ctx.r26.u64 = ctx.r7.u64 + ctx.r19.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE990:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,8236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// mullw r4,r5,r17
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r17.s32);
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// add r26,r4,r19
	ctx.r26.u64 = ctx.r4.u64 + ctx.r19.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AE9D0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r4,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a6760
	ctx.lr = 0x822AE9F4;
	sub_822A6760(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822ae808
	goto loc_822AE808;
loc_822AEA04:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r30,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a32a8
	ctx.lr = 0x822AEA28;
	sub_822A32A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822a62f8
	ctx.lr = 0x822AEA38;
	sub_822A62F8(ctx, base);
	// clrlwi r6,r24,31
	ctx.r6.u64 = ctx.r24.u32 & 0x1;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mullw r5,r6,r17
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r17.s32);
	// add r26,r5,r19
	ctx.r26.u64 = ctx.r5.u64 + ctx.r19.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2b08
	ctx.lr = 0x822AEA5C;
	sub_822A2B08(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_822AEA68:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822aeac0
	if (ctx.cr6.eq) goto loc_822AEAC0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822aeaa0
	if (ctx.cr6.eq) goto loc_822AEAA0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a37a8
	ctx.lr = 0x822AEA8C;
	sub_822A37A8(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AEAA0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a6ed8
	ctx.lr = 0x822AEAAC;
	sub_822A6ED8(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AEAC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a7080
	ctx.lr = 0x822AEAD0;
	sub_822A7080(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AEAE4:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r4,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a6760
	ctx.lr = 0x822AEB08;
	sub_822A6760(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822ae808
	goto loc_822AE808;
loc_822AEB18:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,8240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r9,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r9.u32);
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// lhzux r4,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a67b8
	ctx.lr = 0x822AEB54;
	sub_822A67B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// b 0x822ae7fc
	goto loc_822AE7FC;
loc_822AEB64:
	// addi r10,r10,-68
	ctx.r10.s64 = ctx.r10.s64 + -68;
	// b 0x822aeb78
	goto loc_822AEB78;
loc_822AEB6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822AEB78:
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822af3b4
	goto loc_822AF3B4;
loc_822AEB9C:
	// addi r10,r10,-75
	ctx.r10.s64 = ctx.r10.s64 + -75;
	// b 0x822aebb0
	goto loc_822AEBB0;
loc_822AEBA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822AEBB0:
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r29,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r29.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822af7d0
	goto loc_822AF7D0;
loc_822AEBD4:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AEBE8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822aec64
	if (!ctx.cr6.lt) goto loc_822AEC64;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AEBFC;
	sub_822A32A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AEC04;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a3240
	ctx.lr = 0x822AEC10;
	sub_822A3240(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// rlwinm r7,r8,0,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1C;
	// clrlwi r6,r8,30
	ctx.r6.u64 = ctx.r8.u32 & 0x3;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf r9,r8,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822af788
	goto loc_822AF788;
loc_822AEC64:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822aec8c
	if (!ctx.cr6.eq) goto loc_822AEC8C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AEC80;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AEC8C:
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aece0
	if (!ctx.cr6.eq) goto loc_822AECE0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r9,r15,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822aece0
	if (!ctx.cr6.eq) goto loc_822AECE0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822aecc4
	if (!ctx.cr6.eq) goto loc_822AECC4;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aecec
	if (ctx.cr6.eq) goto loc_822AECEC;
loc_822AECC4:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AECE0;
	sub_823E08C0(ctx, base);
loc_822AECE0:
	// lbz r11,22(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aecfc
	if (ctx.cr6.eq) goto loc_822AECFC;
loc_822AECEC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AECF4;
	sub_8230D720(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AECF8:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AECFC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822aed84
	if (!ctx.cr6.eq) goto loc_822AED84;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822aed58
	if (!ctx.cr6.lt) goto loc_822AED58;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AED1C;
	sub_822A32A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AED24;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a3240
	ctx.lr = 0x822AED30;
	sub_822A3240(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822af788
	goto loc_822AF788;
loc_822AED58:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822aed7c
	if (!ctx.cr6.eq) goto loc_822AED7C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AED78;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AED7C:
	// bl 0x822aab48
	ctx.lr = 0x822AED80;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AED84:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AED98;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aedbc
	if (!ctx.cr6.eq) goto loc_822AEDBC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AEDB4;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AEDBC:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822aee10
	if (!ctx.cr6.eq) goto loc_822AEE10;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822aee10
	if (!ctx.cr6.eq) goto loc_822AEE10;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822aedf4
	if (!ctx.cr6.eq) goto loc_822AEDF4;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aee1c
	if (ctx.cr6.eq) goto loc_822AEE1C;
loc_822AEDF4:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AEE10;
	sub_823E08C0(ctx, base);
loc_822AEE10:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aeeb4
	if (ctx.cr6.eq) goto loc_822AEEB4;
loc_822AEE1C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AEE28;
	sub_8230D720(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AEE2C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AEE30:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822b0a04
	if (!ctx.cr6.eq) goto loc_822B0A04;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bge cr6,0x822b09e0
	if (!ctx.cr6.lt) goto loc_822B09E0;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a3240
	ctx.lr = 0x822AEE54;
	sub_822A3240(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// rlwinm r7,r8,0,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1C;
	// clrlwi r6,r8,30
	ctx.r6.u64 = ctx.r8.u32 & 0x3;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf r9,r8,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822af788
	goto loc_822AF788;
loc_822AEEB4:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// b 0x822aee30
	goto loc_822AEE30;
loc_822AEEBC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x822aef20
	if (!ctx.cr6.eq) goto loc_822AEF20;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822b0a9c
	if (!ctx.cr6.lt) goto loc_822B0A9C;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a3240
	ctx.lr = 0x822AEEF8;
	sub_822A3240(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r29,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r29.u32);
	// b 0x822af788
	goto loc_822AF788;
loc_822AEF20:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AEF2C;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AEF4C;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aef6c
	if (!ctx.cr6.eq) goto loc_822AEF6C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AEF68;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AEF6C:
	// bl 0x822aab48
	ctx.lr = 0x822AEF70;
	sub_822AAB48(ctx, base);
loc_822AEF70:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822aef9c
	if (!ctx.cr6.lt) goto loc_822AEF9C;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AEF84;
	sub_822A32A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a31e8
	ctx.lr = 0x822AEF8C;
	sub_822A31E8(ctx, base);
	// b 0x822af048
	goto loc_822AF048;
loc_822AEF90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x822af034
	if (ctx.cr6.lt) goto loc_822AF034;
loc_822AEF9C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822aefc4
	if (!ctx.cr6.eq) goto loc_822AEFC4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AEFC0;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AEFC4:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af018
	if (!ctx.cr6.eq) goto loc_822AF018;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af018
	if (!ctx.cr6.eq) goto loc_822AF018;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822aeffc
	if (!ctx.cr6.eq) goto loc_822AEFFC;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822af024
	if (ctx.cr6.eq) goto loc_822AF024;
loc_822AEFFC:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF018;
	sub_823E08C0(ctx, base);
loc_822AF018:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aef90
	if (ctx.cr6.eq) goto loc_822AEF90;
loc_822AF024:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8230d720
	ctx.lr = 0x822AF030;
	sub_8230D720(ctx, base);
	// b 0x822aef90
	goto loc_822AEF90;
loc_822AF034:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AF03C;
	sub_822A32A8(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a5fb8
	ctx.lr = 0x822AF048;
	sub_822A5FB8(ctx, base);
loc_822AF048:
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AF054;
	sub_822A32C0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// rlwinm r6,r7,0,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C;
	// clrlwi r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r4,r5,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x822af750
	goto loc_822AF750;
loc_822AF0D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822af214
	if (!ctx.cr6.eq) goto loc_822AF214;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bge cr6,0x822af174
	if (!ctx.cr6.lt) goto loc_822AF174;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AF0F0;
	sub_822A32A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a31e8
	ctx.lr = 0x822AF0F8;
	sub_822A31E8(ctx, base);
	// b 0x822af138
	goto loc_822AF138;
loc_822AF0FC:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x822af108
	goto loc_822AF108;
loc_822AF104:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF108:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822af214
	if (!ctx.cr6.eq) goto loc_822AF214;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bge cr6,0x822af178
	if (!ctx.cr6.lt) goto loc_822AF178;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822AF128;
	sub_822A32A8(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a5fb8
	ctx.lr = 0x822AF134;
	sub_822A5FB8(ctx, base);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_822AF138:
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AF144;
	sub_822A32C0(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r9,8232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// b 0x822af730
	goto loc_822AF730;
loc_822AF174:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AF178:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822af1a8
	if (!ctx.cr6.eq) goto loc_822AF1A8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AF198;
	sub_822E7E98(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF1A8:
	// lbz r9,7(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822af1fc
	if (!ctx.cr6.eq) goto loc_822AF1FC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r8,r11,44
	ctx.r8.u64 = ctx.r11.u64 | 44;
	// lbzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822af1fc
	if (!ctx.cr6.eq) goto loc_822AF1FC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822af1e0
	if (!ctx.cr6.eq) goto loc_822AF1E0;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822af208
	if (ctx.cr6.eq) goto loc_822AF208;
loc_822AF1E0:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF1FC;
	sub_823E08C0(ctx, base);
loc_822AF1FC:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af214
	if (ctx.cr6.eq) goto loc_822AF214;
loc_822AF208:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF210;
	sub_8230D720(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF214:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF228;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822af24c
	if (!ctx.cr6.eq) goto loc_822AF24C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AF244;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF24C:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af2a4
	if (!ctx.cr6.eq) goto loc_822AF2A4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af2a4
	if (!ctx.cr6.eq) goto loc_822AF2A4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822af288
	if (!ctx.cr6.eq) goto loc_822AF288;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af2b0
	if (ctx.cr6.eq) goto loc_822AF2B0;
loc_822AF288:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF2A4;
	sub_823E08C0(ctx, base);
loc_822AF2A4:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af2bc
	if (ctx.cr6.eq) goto loc_822AF2BC;
loc_822AF2B0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF2BC;
	sub_8230D720(ctx, base);
loc_822AF2BC:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF2C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x822af3a8
	if (ctx.cr6.eq) goto loc_822AF3A8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AF2EC;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF310;
	sub_822E84F0(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822af338
	if (!ctx.cr6.eq) goto loc_822AF338;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AF330;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF338:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af38c
	if (!ctx.cr6.eq) goto loc_822AF38C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af38c
	if (!ctx.cr6.eq) goto loc_822AF38C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822af370
	if (!ctx.cr6.eq) goto loc_822AF370;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822af398
	if (ctx.cr6.eq) goto loc_822AF398;
loc_822AF370:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF38C;
	sub_823E08C0(ctx, base);
loc_822AF38C:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af104
	if (ctx.cr6.eq) goto loc_822AF104;
loc_822AF398:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF3A0;
	sub_8230D720(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x822af104
	goto loc_822AF104;
loc_822AF3A8:
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r9.u32);
loc_822AF3B4:
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addis r9,r15,2
	ctx.r9.s64 = ctx.r15.s64 + 131072;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822AF3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822af838
	goto loc_822AF838;
loc_822AF3E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822b0a9c
	if (!ctx.cr6.lt) goto loc_822B0A9C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a31e8
	ctx.lr = 0x822AF400;
	sub_822A31E8(ctx, base);
	// b 0x822af428
	goto loc_822AF428;
loc_822AF404:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822b0a9c
	if (!ctx.cr6.lt) goto loc_822B0A9C;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a5fb8
	ctx.lr = 0x822AF428;
	sub_822A5FB8(ctx, base);
loc_822AF428:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// rlwinm r6,r7,0,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C;
	// clrlwi r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r4,r5,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x822af750
	goto loc_822AF750;
loc_822AF4B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x822af508
	if (!ctx.cr6.eq) goto loc_822AF508;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822b0adc
	if (!ctx.cr6.lt) goto loc_822B0ADC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a31e8
	ctx.lr = 0x822AF4EC;
	sub_822A31E8(ctx, base);
	// b 0x822af704
	goto loc_822AF704;
loc_822AF4F0:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x822af4fc
	goto loc_822AF4FC;
loc_822AF4F8:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF4FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x822af6d0
	if (ctx.cr6.eq) goto loc_822AF6D0;
loc_822AF508:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AF514;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF534;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822af558
	if (!ctx.cr6.eq) goto loc_822AF558;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AF550;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF558:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af5b0
	if (!ctx.cr6.eq) goto loc_822AF5B0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af5b0
	if (!ctx.cr6.eq) goto loc_822AF5B0;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822af594
	if (!ctx.cr6.eq) goto loc_822AF594;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af5bc
	if (ctx.cr6.eq) goto loc_822AF5BC;
loc_822AF594:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF5B0;
	sub_823E08C0(ctx, base);
loc_822AF5B0:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af5c8
	if (ctx.cr6.eq) goto loc_822AF5C8;
loc_822AF5BC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF5C8;
	sub_8230D720(ctx, base);
loc_822AF5C8:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF5D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x822af7c4
	if (ctx.cr6.eq) goto loc_822AF7C4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AF5F8;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822AF614;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF638;
	sub_822E84F0(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822af660
	if (!ctx.cr6.eq) goto loc_822AF660;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AF658;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF660:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af6b4
	if (!ctx.cr6.eq) goto loc_822AF6B4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af6b4
	if (!ctx.cr6.eq) goto loc_822AF6B4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822af698
	if (!ctx.cr6.eq) goto loc_822AF698;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822af6c0
	if (ctx.cr6.eq) goto loc_822AF6C0;
loc_822AF698:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF6B4;
	sub_823E08C0(ctx, base);
loc_822AF6B4:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af4f8
	if (ctx.cr6.eq) goto loc_822AF4F8;
loc_822AF6C0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF6C8;
	sub_8230D720(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x822af4f8
	goto loc_822AF4F8;
loc_822AF6D0:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x822b0ae0
	if (!ctx.cr6.lt) goto loc_822B0AE0;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a5fb8
	ctx.lr = 0x822AF700;
	sub_822A5FB8(ctx, base);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_822AF704:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r29,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r29.u32);
loc_822AF730:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_822AF750:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,8248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8248, ctx.r11.u32);
	// lwz r9,-17324(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17324);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r9,-17324(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17324, ctx.r9.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AF788:
	// dcbt r0,r11
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,8236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AF7C4:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
loc_822AF7D0:
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822af97c
	if (!ctx.cr6.eq) goto loc_822AF97C;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x822a3e18
	ctx.lr = 0x822AF7F4;
	sub_822A3E18(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x822af8c0
	if (!ctx.cr6.eq) goto loc_822AF8C0;
	// bl 0x822a4460
	ctx.lr = 0x822AF804;
	sub_822A4460(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AF810;
	sub_822A90E8(ctx, base);
	// addis r11,r15,2
	ctx.r11.s64 = ctx.r15.s64 + 131072;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822AF838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AF838:
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r29,28(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// beq cr6,0x822af894
	if (ctx.cr6.eq) goto loc_822AF894;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_822AF86C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AF87C;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// bne 0x822af86c
	if (!ctx.cr0.eq) goto loc_822AF86C;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822AF894:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af8ac
	if (ctx.cr6.eq) goto loc_822AF8AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AF8AC:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AF8C0:
	// bl 0x822a3e18
	ctx.lr = 0x822AF8C4;
	sub_822A3E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AF8D0;
	sub_822A90E8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF8E8;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822af90c
	if (!ctx.cr6.eq) goto loc_822AF90C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AF904;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF90C:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822af960
	if (!ctx.cr6.eq) goto loc_822AF960;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822af960
	if (!ctx.cr6.eq) goto loc_822AF960;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822af944
	if (!ctx.cr6.eq) goto loc_822AF944;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af96c
	if (ctx.cr6.eq) goto loc_822AF96C;
loc_822AF944:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AF960;
	sub_823E08C0(ctx, base);
loc_822AF960:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822af978
	if (ctx.cr6.eq) goto loc_822AF978;
loc_822AF96C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AF978;
	sub_8230D720(ctx, base);
loc_822AF978:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AF97C:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AF994;
	sub_822A34B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AF9AC;
	sub_822E84F0(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822af9d4
	if (!ctx.cr6.eq) goto loc_822AF9D4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AF9CC;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AF9D4:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822afa28
	if (!ctx.cr6.eq) goto loc_822AFA28;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822afa28
	if (!ctx.cr6.eq) goto loc_822AFA28;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822afa0c
	if (!ctx.cr6.eq) goto loc_822AFA0C;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822afa34
	if (ctx.cr6.eq) goto loc_822AFA34;
loc_822AFA0C:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AFA28;
	sub_823E08C0(ctx, base);
loc_822AFA28:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822afaa0
	if (ctx.cr6.eq) goto loc_822AFAA0;
loc_822AFA34:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AFA3C;
	sub_8230D720(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AFA40:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AFA44:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822afaa8
	if (!ctx.cr6.eq) goto loc_822AFAA8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x822afcb4
	if (ctx.cr6.lt) goto loc_822AFCB4;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x822AFA68;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.f12.u64);
	// lwz r20,228(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// bne cr6,0x822afb78
	if (!ctx.cr6.eq) goto loc_822AFB78;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822afb78
	if (ctx.cr6.eq) goto loc_822AFB78;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// b 0x822afb94
	goto loc_822AFB94;
loc_822AFAA0:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// b 0x822afa44
	goto loc_822AFA44;
loc_822AFAA8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822afac8
	if (!ctx.cr6.eq) goto loc_822AFAC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// b 0x822afb7c
	goto loc_822AFB7C;
loc_822AFAC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AFAE4;
	sub_822E84F0(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822afb0c
	if (!ctx.cr6.eq) goto loc_822AFB0C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822AFB04;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AFB0C:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822afb60
	if (!ctx.cr6.eq) goto loc_822AFB60;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822afb60
	if (!ctx.cr6.eq) goto loc_822AFB60;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822afb44
	if (!ctx.cr6.eq) goto loc_822AFB44;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822afb6c
	if (ctx.cr6.eq) goto loc_822AFB6C;
loc_822AFB44:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AFB60;
	sub_823E08C0(ctx, base);
loc_822AFB60:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822afc10
	if (ctx.cr6.eq) goto loc_822AFC10;
loc_822AFB6C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AFB74;
	sub_8230D720(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822AFB78:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AFB7C:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822afc18
	if (!ctx.cr6.lt) goto loc_822AFC18;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x822afba0
	if (ctx.cr6.eq) goto loc_822AFBA0;
loc_822AFB94:
	// bl 0x82310110
	ctx.lr = 0x822AFB98;
	sub_82310110(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_822AFBA0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// li r9,12
	ctx.r9.s64 = 12;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// clrlwi r20,r8,8
	ctx.r20.u64 = ctx.r8.u32 & 0xFFFFFF;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// bl 0x822ab538
	ctx.lr = 0x822AFBC4;
	sub_822AB538(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x822a6760
	ctx.lr = 0x822AFBD4;
	sub_822A6760(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AFBE4;
	sub_822A3C58(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822AFBF0;
	sub_822A68A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3898
	ctx.lr = 0x822AFC00;
	sub_822A3898(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a2cd0
	ctx.lr = 0x822AFC0C;
	sub_822A2CD0(ctx, base);
	// b 0x822b0610
	goto loc_822B0610;
loc_822AFC10:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// b 0x822afb7c
	goto loc_822AFB7C;
loc_822AFC18:
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// blt cr6,0x822afcb4
	if (ctx.cr6.lt) goto loc_822AFCB4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822afc48
	if (!ctx.cr6.eq) goto loc_822AFC48;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AFC40;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AFC48:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822afc9c
	if (!ctx.cr6.eq) goto loc_822AFC9C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822afc9c
	if (!ctx.cr6.eq) goto loc_822AFC9C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822afc80
	if (!ctx.cr6.eq) goto loc_822AFC80;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822afca8
	if (ctx.cr6.eq) goto loc_822AFCA8;
loc_822AFC80:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AFC9C;
	sub_823E08C0(ctx, base);
loc_822AFC9C:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822afcb4
	if (ctx.cr6.eq) goto loc_822AFCB4;
loc_822AFCA8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AFCB0;
	sub_8230D720(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822AFCB4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822afcd4
	if (!ctx.cr6.eq) goto loc_822AFCD4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822AFCCC;
	sub_822E7E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822AFCD4:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822afd28
	if (!ctx.cr6.eq) goto loc_822AFD28;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r8,r15,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822afd28
	if (!ctx.cr6.eq) goto loc_822AFD28;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822afd0c
	if (!ctx.cr6.eq) goto loc_822AFD0C;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822afd34
	if (ctx.cr6.eq) goto loc_822AFD34;
loc_822AFD0C:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822AFD28;
	sub_823E08C0(ctx, base);
loc_822AFD28:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822afd3c
	if (ctx.cr6.eq) goto loc_822AFD3C;
loc_822AFD34:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822AFD3C;
	sub_8230D720(ctx, base);
loc_822AFD3C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x822ab538
	ctx.lr = 0x822AFD48;
	sub_822AB538(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x822a6760
	ctx.lr = 0x822AFD58;
	sub_822A6760(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AFD68;
	sub_822A3C58(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a69c0
	ctx.lr = 0x822AFD74;
	sub_822A69C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3898
	ctx.lr = 0x822AFD84;
	sub_822A3898(ctx, base);
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a2cd0
	ctx.lr = 0x822AFD90;
	sub_822A2CD0(ctx, base);
	// b 0x822b0610
	goto loc_822B0610;
loc_822AFD94:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822AFDA4;
	sub_822A34B8(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFDB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a7700
	ctx.lr = 0x822AFDC4;
	sub_822A7700(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFDE0:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822a39c0
	ctx.lr = 0x822AFDFC;
	sub_822A39C0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822AFE14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7200
	ctx.lr = 0x822AFE1C;
	sub_822A7200(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AFE20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a9580
	ctx.lr = 0x822AFE28;
	sub_822A9580(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AFE2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7180
	ctx.lr = 0x822AFE34;
	sub_822A7180(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822AFE38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7200
	ctx.lr = 0x822AFE40;
	sub_822A7200(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822ae818
	if (!ctx.cr6.eq) goto loc_822AE818;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFE84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7200
	ctx.lr = 0x822AFE8C;
	sub_822A7200(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822ae818
	if (ctx.cr6.eq) goto loc_822AE818;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFED0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7200
	ctx.lr = 0x822AFED8;
	sub_822A7200(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822ae818
	if (!ctx.cr6.eq) goto loc_822AE818;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFF14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7200
	ctx.lr = 0x822AFF1C;
	sub_822A7200(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822ae818
	if (ctx.cr6.eq) goto loc_822AE818;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFF58:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822AFF8C:
	// bl 0x82310110
	ctx.lr = 0x822AFF90;
	sub_82310110(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5000, ctx.xer);
	// bge cr6,0x822affcc
	if (!ctx.cr6.lt) goto loc_822AFFCC;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e4
	goto loc_822AD9E4;
loc_822AFFCC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b0034
	if (ctx.cr6.eq) goto loc_822B0034;
	// bl 0x82310110
	ctx.lr = 0x822AFFDC;
	sub_82310110(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,5000
	ctx.r6.s64 = 5000;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x822AFFF4;
	sub_82280C30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,8232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// bl 0x8229e260
	ctx.lr = 0x822B0004;
	sub_8229E260(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r6,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x822B002C;
	sub_82310110(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822B0034:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b0118
	if (!ctx.cr6.eq) goto loc_822B0118;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82280b08
	ctx.lr = 0x822B004C;
	sub_82280B08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,8232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// bl 0x8229e260
	ctx.lr = 0x822B005C;
	sub_8229E260(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x822B0060;
	sub_82310110(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
loc_822B0068:
	// bl 0x822a2d78
	ctx.lr = 0x822B006C;
	sub_822A2D78(ctx, base);
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822B007C;
	sub_822AA6E0(ctx, base);
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x822b00c4
	if (ctx.cr6.eq) goto loc_822B00C4;
loc_822B00A0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B00AC;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822b00a0
	if (!ctx.cr6.eq) goto loc_822B00A0;
loc_822B00C4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// beq cr6,0x822b0610
	if (ctx.cr6.eq) goto loc_822B0610;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a90e8
	ctx.lr = 0x822B00EC;
	sub_822A90E8(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r30.u32);
	// stw r9,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r9.u32);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// b 0x822b0068
	goto loc_822B0068;
loc_822B0118:
	// bl 0x822a4e90
	ctx.lr = 0x822B011C;
	sub_822A4E90(ctx, base);
	// bl 0x822a28f8
	ctx.lr = 0x822B0120;
	sub_822A28F8(ctx, base);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stb r16,22(r28)
	PPC_STORE_U8(ctx.r28.u32 + 22, ctx.r16.u8);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b0148
	if (!ctx.cr6.eq) goto loc_822B0148;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0144;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0148:
	// bl 0x822aab48
	ctx.lr = 0x822B014C;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B0150:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a9450
	ctx.lr = 0x822B0164;
	sub_822A9450(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822b01b8
	if (!ctx.cr6.eq) goto loc_822B01B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r5,8244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a7080
	ctx.lr = 0x822B01A4;
	sub_822A7080(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B01B8:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B01C8;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b01e8
	if (!ctx.cr6.eq) goto loc_822B01E8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B01E4;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B01E8:
	// bl 0x822aab48
	ctx.lr = 0x822B01EC;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B01F0:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a9450
	ctx.lr = 0x822B0204;
	sub_822A9450(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822b0258
	if (!ctx.cr6.eq) goto loc_822B0258;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r5,8244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a7080
	ctx.lr = 0x822B0244;
	sub_822A7080(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B0258:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B0268;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b028c
	if (!ctx.cr6.eq) goto loc_822B028C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0284;
	sub_822E7E98(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B028C:
	// lbz r10,7(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b02e0
	if (!ctx.cr6.eq) goto loc_822B02E0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b02e0
	if (!ctx.cr6.eq) goto loc_822B02E0;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822b02c4
	if (!ctx.cr6.eq) goto loc_822B02C4;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b02ec
	if (ctx.cr6.eq) goto loc_822B02EC;
loc_822B02C4:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822B02E0;
	sub_823E08C0(ctx, base);
loc_822B02E0:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b02f8
	if (ctx.cr6.eq) goto loc_822B02F8;
loc_822B02EC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8230d720
	ctx.lr = 0x822B02F8;
	sub_8230D720(ctx, base);
loc_822B02F8:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B02FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7e10
	ctx.lr = 0x822B0308;
	sub_822A7E10(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B031C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7e40
	ctx.lr = 0x822B0328;
	sub_822A7E40(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B033C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7e70
	ctx.lr = 0x822B0348;
	sub_822A7E70(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B035C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a95c8
	ctx.lr = 0x822B0368;
	sub_822A95C8(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B037C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a9878
	ctx.lr = 0x822B0388;
	sub_822A9878(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B039C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7ea0
	ctx.lr = 0x822B03A8;
	sub_822A7EA0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B03BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7f88
	ctx.lr = 0x822B03C8;
	sub_822A7F88(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B03DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a8030
	ctx.lr = 0x822B03E8;
	sub_822A8030(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B03FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a7f48
	ctx.lr = 0x822B0408;
	sub_822A7F48(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B041C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a8070
	ctx.lr = 0x822B0428;
	sub_822A8070(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B043C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a80a0
	ctx.lr = 0x822B0448;
	sub_822A80A0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B045C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a80d0
	ctx.lr = 0x822B0468;
	sub_822A80D0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B047C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a8330
	ctx.lr = 0x822B0488;
	sub_822A8330(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B049C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a8490
	ctx.lr = 0x822B04A8;
	sub_822A8490(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B04BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a85f0
	ctx.lr = 0x822B04C8;
	sub_822A85F0(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B04DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x822a8888
	ctx.lr = 0x822B04E8;
	sub_822A8888(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B04FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a9470
	ctx.lr = 0x822B0504;
	sub_822A9470(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822B0508:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822B0510:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a3d28
	ctx.lr = 0x822B0524;
	sub_822A3D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0be4
	if (ctx.cr6.eq) goto loc_822B0BE4;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x822b0b8c
	if (!ctx.cr6.eq) goto loc_822B0B8C;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x822ab538
	ctx.lr = 0x822B0568;
	sub_822AB538(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x822a6840
	ctx.lr = 0x822B0578;
	sub_822A6840(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822B0588;
	sub_822A3C58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a6760
	ctx.lr = 0x822B0594;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822B05A0;
	sub_822A3C58(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822B05AC;
	sub_822A68A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// bl 0x822a3898
	ctx.lr = 0x822B05BC;
	sub_822A3898(ctx, base);
	// stw r16,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a32a8
	ctx.lr = 0x822B05C8;
	sub_822A32A8(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a6840
	ctx.lr = 0x822B05D8;
	sub_822A6840(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822B05E8;
	sub_822A3C58(ctx, base);
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822B05F4;
	sub_822A68A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// bl 0x822a3898
	ctx.lr = 0x822B0604;
	sub_822A3898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x822a2c58
	ctx.lr = 0x822B0610;
	sub_822A2C58(ctx, base);
loc_822B0610:
	// lwz r11,8248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822B061C:
	// lwz r11,-17324(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17324);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b13ac
	if (ctx.cr6.eq) goto loc_822B13AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-17324(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17324, ctx.r11.u32);
	// bl 0x822a90e8
	ctx.lr = 0x822B0638;
	sub_822A90E8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,8232
	ctx.r10.s64 = ctx.r31.s64 + 8232;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_822B0650:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822b0650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B0650;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B067C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0acc
	if (!ctx.cr6.eq) goto loc_822B0ACC;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3d28
	ctx.lr = 0x822B0694;
	sub_822A3D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0be4
	if (ctx.cr6.eq) goto loc_822B0BE4;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822b0bb0
	if (!ctx.cr6.eq) goto loc_822B0BB0;
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r5,8244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// bl 0x822abe70
	ctx.lr = 0x822B06E0;
	sub_822ABE70(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bl 0x822a90e8
	ctx.lr = 0x822B06F4;
	sub_822A90E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2468
	ctx.lr = 0x822B06FC;
	sub_822A2468(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822ae814
	if (ctx.cr6.eq) goto loc_822AE814;
loc_822B070C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B0718;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822b070c
	if (!ctx.cr6.eq) goto loc_822B070C;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B0740:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b0a04
	if (!ctx.cr6.eq) goto loc_822B0A04;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a3d28
	ctx.lr = 0x822B0754;
	sub_822A3D28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0c1c
	if (ctx.cr6.eq) goto loc_822B0C1C;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822b0bf8
	if (!ctx.cr6.eq) goto loc_822B0BF8;
	// lwz r4,8236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822ac2c0
	ctx.lr = 0x822B0780;
	sub_822AC2C0(ctx, base);
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r30,r10,-16
	ctx.r30.s64 = ctx.r10.s64 + -16;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B0794:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822B07A8:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// srawi r3,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 5;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// lhzux r10,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b08ac
	if (ctx.cr6.eq) goto loc_822B08AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822b084c
	if (ctx.cr6.eq) goto loc_822B084C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B0824;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b0844
	if (!ctx.cr6.eq) goto loc_822B0844;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0840;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0844:
	// bl 0x822aab48
	ctx.lr = 0x822B0848;
	sub_822AAB48(ctx, base);
	// b 0x822b08bc
	goto loc_822B08BC;
loc_822B084C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a3518
	ctx.lr = 0x822B0854;
	sub_822A3518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// beq cr6,0x822b0878
	if (ctx.cr6.eq) goto loc_822B0878;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a3538
	ctx.lr = 0x822B086C;
	sub_822A3538(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x822b08bc
	goto loc_822B08BC;
loc_822B0878:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x822B0884;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b08a4
	if (!ctx.cr6.eq) goto loc_822B08A4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B08A0;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B08A4:
	// bl 0x822aab48
	ctx.lr = 0x822B08A8;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B08AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x822a2468
	ctx.lr = 0x822B08BC;
	sub_822A2468(ctx, base);
loc_822B08BC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822ae85c
	if (ctx.cr6.eq) goto loc_822AE85C;
loc_822B08CC:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.s64 = -4 - ctx.r11.s64;
	// rlwinm r4,r10,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// beq cr6,0x822b0950
	if (ctx.cr6.eq) goto loc_822B0950;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822b08cc
	if (!ctx.cr0.eq) goto loc_822B08CC;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bne cr6,0x822ae818
	if (!ctx.cr6.eq) goto loc_822AE818;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B0950:
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// stw r30,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r30.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B096C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// rlwinm r9,r6,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad9e8
	goto loc_822AD9E8;
loc_822B099C:
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// stw r3,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r3.u32);
	// bl 0x822a7600
	ctx.lr = 0x822B09A8;
	sub_822A7600(ctx, base);
	// b 0x822ad9e0
	goto loc_822AD9E0;
loc_822B09AC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r10,8244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r10,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r10.u32);
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822B09D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a3e18
	ctx.lr = 0x822B09DC;
	sub_822A3E18(ctx, base);
	// b 0x822b0a10
	goto loc_822B0A10;
loc_822B09E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b09fc
	if (!ctx.cr6.eq) goto loc_822B09FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B09F8;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B09FC:
	// bl 0x822aab48
	ctx.lr = 0x822B0A00;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B0A04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_822B0A08:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822B0A0C:
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_822B0A10:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B0A20;
	sub_822E84F0(ctx, base);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822b0a48
	if (!ctx.cr6.eq) goto loc_822B0A48;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B0A40;
	sub_822E7E98(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0A48:
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b0c2c
	if (!ctx.cr6.eq) goto loc_822B0C2C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// lbzx r9,r15,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b0c2c
	if (!ctx.cr6.eq) goto loc_822B0C2C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b0a80
	if (!ctx.cr6.eq) goto loc_822B0A80;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0c38
	if (ctx.cr6.eq) goto loc_822B0C38;
loc_822B0A80:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822B0A9C;
	sub_823E08C0(ctx, base);
loc_822B0A9C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b0ac4
	if (!ctx.cr6.eq) goto loc_822B0AC4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0AC0;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0AC4:
	// bl 0x822aab48
	ctx.lr = 0x822B0AC8;
	sub_822AAB48(ctx, base);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B0ACC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822b0a0c
	goto loc_822B0A0C;
loc_822B0ADC:
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822B0AE0:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b0b10
	if (!ctx.cr6.eq) goto loc_822B0B10;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0B00;
	sub_822E7E98(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B0B10:
	// lbz r9,7(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b0b64
	if (!ctx.cr6.eq) goto loc_822B0B64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r8,r10,44
	ctx.r8.u64 = ctx.r10.u64 | 44;
	// lbzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822b0b64
	if (!ctx.cr6.eq) goto loc_822B0B64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b0b48
	if (!ctx.cr6.eq) goto loc_822B0B48;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0b70
	if (ctx.cr6.eq) goto loc_822B0B70;
loc_822B0B48:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e08c0
	ctx.lr = 0x822B0B64;
	sub_823E08C0(ctx, base);
loc_822B0B64:
	// lbz r10,22(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b0acc
	if (ctx.cr6.eq) goto loc_822B0ACC;
loc_822B0B70:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8230d720
	ctx.lr = 0x822B0B78;
	sub_8230D720(ctx, base);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r30,8244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x822b0a0c
	goto loc_822B0A0C;
loc_822B0B8C:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// bne cr6,0x822b0be0
	if (!ctx.cr6.eq) goto loc_822B0BE0;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x822b0bd0
	goto loc_822B0BD0;
loc_822B0BB0:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b0be0
	if (!ctx.cr6.eq) goto loc_822B0BE0;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_822B0BD0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B0BDC;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0BE0:
	// bl 0x822aab48
	ctx.lr = 0x822B0BE4;
	sub_822AAB48(ctx, base);
loc_822B0BE4:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a3e18
	ctx.lr = 0x822B0BF0;
	sub_822A3E18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822b0a0c
	goto loc_822B0A0C;
loc_822B0BF8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b0c18
	if (!ctx.cr6.eq) goto loc_822B0C18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x822B0C14;
	sub_822E7E98(ctx, base);
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
loc_822B0C18:
	// bl 0x822aab48
	ctx.lr = 0x822B0C1C;
	sub_822AAB48(ctx, base);
loc_822B0C1C:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a3e18
	ctx.lr = 0x822B0C28;
	sub_822A3E18(ctx, base);
	// b 0x822b0a08
	goto loc_822B0A08;
loc_822B0C2C:
	// lbz r11,22(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0c48
	if (ctx.cr6.eq) goto loc_822B0C48;
loc_822B0C38:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8230d720
	ctx.lr = 0x822B0C44;
	sub_8230D720(ctx, base);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_822B0C48:
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822B0C50:
	// lwz r11,-4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bgt cr6,0x822b0d2c
	if (ctx.cr6.gt) goto loc_822B0D2C;
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bge cr6,0x822b0d50
	if (!ctx.cr6.lt) goto loc_822B0D50;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x822b0dac
	if (ctx.cr6.gt) goto loc_822B0DAC;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3208
	ctx.r12.s64 = ctx.r12.s64 + 3208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822B0D14;
	case 1:
		goto loc_822B0D14;
	case 2:
		goto loc_822B0D14;
	case 3:
		goto loc_822B0D14;
	case 4:
		goto loc_822B0D14;
	case 5:
		goto loc_822B0DAC;
	case 6:
		goto loc_822B0DAC;
	case 7:
		goto loc_822B0DAC;
	case 8:
		goto loc_822B0DAC;
	case 9:
		goto loc_822B0DA0;
	case 10:
		goto loc_822B0DA0;
	case 11:
		goto loc_822B0DAC;
	case 12:
		goto loc_822B0DAC;
	case 13:
		goto loc_822B0DAC;
	case 14:
		goto loc_822B0DAC;
	case 15:
		goto loc_822B0DA0;
	case 16:
		goto loc_822B0DAC;
	case 17:
		goto loc_822B0DAC;
	case 18:
		goto loc_822B0DAC;
	case 19:
		goto loc_822B0DAC;
	case 20:
		goto loc_822B0DAC;
	case 21:
		goto loc_822B0DAC;
	case 22:
		goto loc_822B0DAC;
	case 23:
		goto loc_822B0DAC;
	case 24:
		goto loc_822B0DAC;
	case 25:
		goto loc_822B0DAC;
	case 26:
		goto loc_822B0DA0;
	case 27:
		goto loc_822B0DAC;
	case 28:
		goto loc_822B0DA0;
	default:
		return;
	}
	// lwz r17,3348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3348);
	// lwz r17,3348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3348);
	// lwz r17,3348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3348);
	// lwz r17,3348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3348);
	// lwz r17,3348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3348);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3488(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r17,3488(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3488(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3488(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r17,3500(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3500);
	// lwz r17,3488(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
loc_822B0CFC:
	// lwz r11,17812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17812);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x822db750
	ctx.lr = 0x822B0D0C;
	sub_822DB750(ctx, base);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x822b0c50
	goto loc_822B0C50;
loc_822B0D14:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_822B0D1C:
	// bge cr6,0x822b0db0
	if (!ctx.cr6.lt) goto loc_822B0DB0;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r16.u32);
	// b 0x822b0db0
	goto loc_822B0DB0;
loc_822B0D2C:
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// bgt cr6,0x822b0d90
	if (ctx.cr6.gt) goto loc_822B0D90;
	// beq cr6,0x822b0d70
	if (ctx.cr6.eq) goto loc_822B0D70;
	// cmplwi cr6,r11,75
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 75, ctx.xer);
	// blt cr6,0x822b0dac
	if (ctx.cr6.lt) goto loc_822B0DAC;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// ble cr6,0x822b0d70
	if (!ctx.cr6.gt) goto loc_822B0D70;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// bne cr6,0x822b0dac
	if (!ctx.cr6.eq) goto loc_822B0DAC;
loc_822B0D50:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b0db0
	if (!ctx.cr6.gt) goto loc_822B0DB0;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// b 0x822b0db0
	goto loc_822B0DB0;
loc_822B0D70:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b0d1c
	if (!ctx.cr6.gt) goto loc_822B0D1C;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// b 0x822b0db0
	goto loc_822B0DB0;
loc_822B0D90:
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// blt cr6,0x822b0dac
	if (ctx.cr6.lt) goto loc_822B0DAC;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// bgt cr6,0x822b0dac
	if (ctx.cr6.gt) goto loc_822B0DAC;
loc_822B0DA0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// b 0x822b0db0
	goto loc_822B0DB0;
loc_822B0DAC:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_822B0DB0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,8232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// bl 0x8229e628
	ctx.lr = 0x822B0DC0;
	sub_8229E628(ctx, base);
	// lwz r11,-4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x822ad99c
	if (ctx.cr6.gt) goto loc_822AD99C;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3580
	ctx.r12.s64 = ctx.r12.s64 + 3580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822B1124;
	case 1:
		goto loc_822B1124;
	case 2:
		goto loc_822B0FC8;
	case 3:
		goto loc_822B0FC8;
	case 4:
		goto loc_822B0FC8;
	case 5:
		goto loc_822B0FC8;
	case 6:
		goto loc_822B1388;
	case 7:
		goto loc_822AD99C;
	case 8:
		goto loc_822B1020;
	case 9:
		goto loc_822AD99C;
	case 10:
		goto loc_822AD99C;
	case 11:
		goto loc_822B1154;
	case 12:
		goto loc_822B1154;
	case 13:
		goto loc_822AD99C;
	case 14:
		goto loc_822AD99C;
	case 15:
		goto loc_822B0FA8;
	case 16:
		goto loc_822B0FA8;
	case 17:
		goto loc_822B1040;
	case 18:
		goto loc_822AD99C;
	case 19:
		goto loc_822AD99C;
	case 20:
		goto loc_822AD99C;
	case 21:
		goto loc_822AD99C;
	case 22:
		goto loc_822AD99C;
	case 23:
		goto loc_822B1160;
	case 24:
		goto loc_822AD99C;
	case 25:
		goto loc_822AD99C;
	case 26:
		goto loc_822AD99C;
	case 27:
		goto loc_822AD99C;
	case 28:
		goto loc_822B1084;
	case 29:
		goto loc_822AD99C;
	case 30:
		goto loc_822B1058;
	case 31:
		goto loc_822AD99C;
	case 32:
		goto loc_822AD99C;
	case 33:
		goto loc_822AD99C;
	case 34:
		goto loc_822B10BC;
	case 35:
		goto loc_822B10BC;
	case 36:
		goto loc_822B10BC;
	case 37:
		goto loc_822B10BC;
	case 38:
		goto loc_822B10BC;
	case 39:
		goto loc_822B10BC;
	case 40:
		goto loc_822B10BC;
	case 41:
		goto loc_822B10BC;
	case 42:
		goto loc_822B10BC;
	case 43:
		goto loc_822B10BC;
	case 44:
		goto loc_822B10BC;
	case 45:
		goto loc_822B10BC;
	case 46:
		goto loc_822B10BC;
	case 47:
		goto loc_822B10BC;
	case 48:
		goto loc_822B1388;
	case 49:
		goto loc_822AD99C;
	case 50:
		goto loc_822AD99C;
	case 51:
		goto loc_822B11A0;
	case 52:
		goto loc_822B11A0;
	case 53:
		goto loc_822B11C8;
	case 54:
		goto loc_822B11A0;
	case 55:
		goto loc_822B11C8;
	case 56:
		goto loc_822B1228;
	case 57:
		goto loc_822B1228;
	case 58:
		goto loc_822B1204;
	case 59:
		goto loc_822B1204;
	case 60:
		goto loc_822B1228;
	case 61:
		goto loc_822B1228;
	case 62:
		goto loc_822B1258;
	case 63:
		goto loc_822B1258;
	case 64:
		goto loc_822B10BC;
	case 65:
		goto loc_822B10BC;
	case 66:
		goto loc_822AD99C;
	case 67:
		goto loc_822B0FE8;
	case 68:
		goto loc_822B1014;
	case 69:
		goto loc_822AD99C;
	case 70:
		goto loc_822AD99C;
	case 71:
		goto loc_822AD99C;
	case 72:
		goto loc_822B12A8;
	case 73:
		goto loc_822B12A8;
	case 74:
		goto loc_822B12A8;
	case 75:
		goto loc_822B12A8;
	case 76:
		goto loc_822AD99C;
	case 77:
		goto loc_822B10D4;
	case 78:
		goto loc_822B0F9C;
	case 79:
		goto loc_822B0F9C;
	case 80:
		goto loc_822B139C;
	case 81:
		goto loc_822B139C;
	case 82:
		goto loc_822B139C;
	case 83:
		goto loc_822B139C;
	case 84:
		goto loc_822B139C;
	case 85:
		goto loc_822B139C;
	case 86:
		goto loc_822B139C;
	case 87:
		goto loc_822B139C;
	case 88:
		goto loc_822B139C;
	case 89:
		goto loc_822B139C;
	case 90:
		goto loc_822B139C;
	case 91:
		goto loc_822B139C;
	case 92:
		goto loc_822B139C;
	case 93:
		goto loc_822B139C;
	case 94:
		goto loc_822B139C;
	case 95:
		goto loc_822B139C;
	case 96:
		goto loc_822AD99C;
	case 97:
		goto loc_822B1100;
	case 98:
		goto loc_822AD99C;
	case 99:
		goto loc_822B1100;
	case 100:
		goto loc_822B12D8;
	case 101:
		goto loc_822B1100;
	case 102:
		goto loc_822AD99C;
	case 103:
		goto loc_822B1310;
	default:
		return;
	}
	// lwz r17,4388(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4388);
	// lwz r17,4388(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4388);
	// lwz r17,4040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4040);
	// lwz r17,4040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4040);
	// lwz r17,4040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4040);
	// lwz r17,4040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4040);
	// lwz r17,5000(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5000);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4128(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4128);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4436);
	// lwz r17,4436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4436);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4008(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4008);
	// lwz r17,4008(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4008);
	// lwz r17,4160(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4160);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4448(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4448);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4228(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4228);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4184(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4184);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,5000(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5000);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4512(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4512);
	// lwz r17,4512(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4512);
	// lwz r17,4552(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4552);
	// lwz r17,4512(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4512);
	// lwz r17,4552(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4552);
	// lwz r17,4648(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4648);
	// lwz r17,4648(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4648);
	// lwz r17,4612(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4612);
	// lwz r17,4612(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4612);
	// lwz r17,4648(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4648);
	// lwz r17,4648(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4648);
	// lwz r17,4696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4696);
	// lwz r17,4696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4696);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,4284(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4284);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4072(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4072);
	// lwz r17,4116(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4116);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4776);
	// lwz r17,4776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4776);
	// lwz r17,4776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4776);
	// lwz r17,4776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4776);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4308(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4308);
	// lwz r17,3996(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3996);
	// lwz r17,3996(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3996);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,5020(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4352(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4352(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	// lwz r17,4824(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4824);
	// lwz r17,4352(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4352);
	// lwz r17,-9828(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9828);
	// lwz r17,4880(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4880);
loc_822B0F9C:
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x822b1384
	goto loc_822B1384;
loc_822B0FA8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B0FB8;
	sub_822A3910(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B0FC8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B0FD8;
	sub_822A3910(ctx, base);
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x822b1388
	goto loc_822B1388;
loc_822B0FE8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B0FF4;
	sub_822A3910(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3bb0
	ctx.lr = 0x822B1000;
	sub_822A3BB0(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1014:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822B1020:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B102C;
	sub_822A3910(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x822a3bb0
	ctx.lr = 0x822B1038;
	sub_822A3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1040:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ad99c
	if (ctx.cr6.eq) goto loc_822AD99C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1058:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B106C;
	sub_822A34B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1084:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b139c
	if (ctx.cr6.eq) goto loc_822B139C;
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B10A4;
	sub_822A34B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B10BC:
	// bl 0x822aabe8
	ctx.lr = 0x822B10C0;
	sub_822AABE8(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B10D4:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lhzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1100:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B1114;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822b138c
	goto loc_822B138C;
loc_822B1124:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B1138;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a34b8
	ctx.lr = 0x822B1154;
	sub_822A34B8(ctx, base);
loc_822B1154:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1160:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822b1194
	if (ctx.cr6.eq) goto loc_822B1194;
loc_822B1170:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B117C;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822b1170
	if (!ctx.cr6.eq) goto loc_822B1170;
loc_822B1194:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B11A0:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
loc_822B11C8:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822b11fc
	if (ctx.cr6.eq) goto loc_822B11FC;
loc_822B11D8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B11E4;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822b11d8
	if (!ctx.cr6.eq) goto loc_822B11D8;
loc_822B11FC:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B1204:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B1218;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822b125c
	goto loc_822B125C;
loc_822B1228:
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// rlwinm r9,r10,0,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// b 0x822b1260
	goto loc_822B1260;
loc_822B1258:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B125C:
	// lwz r10,8232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822B1260:
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822b1298
	if (ctx.cr6.eq) goto loc_822B1298;
loc_822B1274:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B1284;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// bne 0x822b1274
	if (!ctx.cr0.eq) goto loc_822B1274;
loc_822B1298:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B12A8:
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B12D8:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822b138c
	if (ctx.cr6.eq) goto loc_822B138C;
loc_822B12E8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B12F4;
	sub_822A34B8(ctx, base);
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822b12e8
	if (!ctx.cr6.eq) goto loc_822B12E8;
	// b 0x822b138c
	goto loc_822B138C;
loc_822B1310:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b1388
	if (ctx.cr6.eq) goto loc_822B1388;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
loc_822B1320:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.s64 = -4 - ctx.r11.s64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r4,r10,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// cntlzw r8,r4
	ctx.r8.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r11.u32);
	// bne 0x822b1320
	if (!ctx.cr0.eq) goto loc_822B1320;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b1388
	if (!ctx.cr6.eq) goto loc_822B1388;
loc_822B1384:
	// stw r10,8232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8232, ctx.r10.u32);
loc_822B1388:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
loc_822B138C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822B139C;
	sub_822A34B8(ctx, base);
loc_822B139C:
	// lwz r11,8244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8244);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r11.u32);
	// b 0x822ad99c
	goto loc_822AD99C;
loc_822B13AC:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lwz r10,17812(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,17812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17812, ctx.r10.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AD7D8) {
	__imp__sub_822AD7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B13D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822B13D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// dcbt r0,r9
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r8,r4,11
	ctx.r8.s64 = ctx.r4.s64 + 11;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// addi r10,r31,800
	ctx.r10.s64 = ctx.r31.s64 + 800;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b147c
	if (ctx.cr6.eq) goto loc_822B147C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_822B142C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x822b146c
	if (!ctx.cr6.eq) goto loc_822B146C;
	// lwz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// b 0x822b1474
	goto loc_822B1474;
loc_822B146C:
	// lwz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822B1474:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822b142c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B142C;
loc_822B147C:
	// lis r9,-31860
	ctx.r9.s64 = -2087976960;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r9,9592
	ctx.r28.s64 = ctx.r9.s64 + 9592;
	// stw r10,8240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8240, ctx.r10.u32);
	// stw r11,8228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8228, ctx.r11.u32);
	// lhz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// stw r29,8232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8232, ctx.r29.u32);
	// bl 0x822a2d10
	ctx.lr = 0x822B149C;
	sub_822A2D10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r29,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r29.u32);
	// beq 0x822b14e8
	if (ctx.cr0.eq) goto loc_822B14E8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822B14D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2d58
	ctx.lr = 0x822B14D8;
	sub_822A2D58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,-24(r27)
	ea = -24 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// bne 0x822b14d0
	if (!ctx.cr0.eq) goto loc_822B14D0;
loc_822B14E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822b1528
	if (ctx.cr6.eq) goto loc_822B1528;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822B150C:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x822ab670
	ctx.lr = 0x822B1514;
	sub_822AB670(ctx, base);
	// stwu r3,24(r29)
	ea = 24 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822b150c
	if (!ctx.cr6.eq) goto loc_822B150C;
loc_822B1528:
	// lwz r3,8232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8232);
	// bl 0x822ab670
	ctx.lr = 0x822B1530;
	sub_822AB670(ctx, base);
	// stw r3,8236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8236, ctx.r3.u32);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,10(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 10);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822b1558
	if (ctx.cr6.eq) goto loc_822B1558;
	// bl 0x82310110
	ctx.lr = 0x822B1554;
	sub_82310110(ctx, base);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
loc_822B1558:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,6(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// bl 0x8229e118
	ctx.lr = 0x822B1564;
	sub_8229E118(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B13D0) {
	__imp__sub_822B13D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B156C) {
	__imp__sub_822B156C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822B1578;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x822B1584;
	sub_82310110(ctx, base);
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r10,9592
	ctx.r30.s64 = ctx.r10.s64 + 9592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x822a32c0
	ctx.lr = 0x822B159C;
	sub_822A32C0(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// addi r29,r11,-3336
	ctx.r29.s64 = ctx.r11.s64 + -3336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,800
	ctx.r10.s64 = ctx.r29.s64 + 800;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r11,-3340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3340, ctx.r11.u32);
	// clrlwi r7,r31,31
	ctx.r7.u64 = ctx.r31.u32 & 0x1;
	// stw r10,8244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8244, ctx.r10.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r8,51201
	ctx.r5.u64 = ctx.r8.u64 | 51201;
	// ori r27,r6,36866
	ctx.r27.u64 = ctx.r6.u64 | 36866;
	// mullw r4,r7,r5
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r4,r27
	ctx.r28.u64 = ctx.r4.u64 + ctx.r27.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822B15DC;
	sub_822A3A70(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-6904
	ctx.r26.s64 = ctx.r11.s64 + -6904;
	// beq cr6,0x822b166c
	if (ctx.cr6.eq) goto loc_822B166C;
loc_822B15F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822B15FC;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b1678
	if (ctx.cr6.eq) goto loc_822B1678;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822B1610;
	sub_822A2AE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822B1620;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a6bb0
	ctx.lr = 0x822B1634;
	sub_822A6BB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822b13d0
	ctx.lr = 0x822B1640;
	sub_822B13D0(ctx, base);
	// bl 0x822ad7d8
	ctx.lr = 0x822B1644;
	sub_822AD7D8(ctx, base);
	// bl 0x822a90e8
	ctx.lr = 0x822B1648;
	sub_822A90E8(ctx, base);
	// lwz r3,812(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 812);
	// lwz r4,808(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 808);
	// addi r11,r29,808
	ctx.r11.s64 = ctx.r29.s64 + 808;
	// bl 0x822a34b8
	ctx.lr = 0x822B1658;
	sub_822A34B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822B1660;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b15f0
	if (!ctx.cr6.eq) goto loc_822B15F0;
loc_822B166C:
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x822a6c70
	ctx.lr = 0x822B1678;
	sub_822A6C70(ctx, base);
loc_822B1678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822B1680;
	sub_822A90E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,52(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B168C;
	sub_822A3910(ctx, base);
	// addi r11,r29,800
	ctx.r11.s64 = ctx.r29.s64 + 800;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1570) {
	__imp__sub_822B1570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B169C) {
	__imp__sub_822B169C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B16A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822B16A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822aabe8
	ctx.lr = 0x822B16BC;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r29,r8,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r25,r30,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x822b180c
	if (!ctx.cr6.lt) goto loc_822B180C;
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r30,r10,17820
	ctx.r30.s64 = ctx.r10.s64 + 17820;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822B16FC:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822b16fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B16FC;
	// lis r28,-31859
	ctx.r28.s64 = -2087911424;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r24,-3340(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3340);
	// beq cr6,0x822b173c
	if (ctx.cr6.eq) goto loc_822B173C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
loc_822B173C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r8,-3340(r28)
	PPC_STORE_U32(ctx.r28.u32 + -3340, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x822ad7d8
	ctx.lr = 0x822B1790;
	sub_822AD7D8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B17A4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822b17a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B17A4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// stw r24,-3340(r28)
	PPC_STORE_U32(ctx.r28.u32 + -3340, ctx.r24.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822B17E0;
	sub_822A3910(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b1800
	if (ctx.cr6.eq) goto loc_822B1800;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822B1800:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822B180C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822B1814;
	sub_822AA6E0(ctx, base);
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// beq cr6,0x822b1848
	if (ctx.cr6.eq) goto loc_822B1848;
loc_822B1828:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822B1834;
	sub_822A34B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x822b1828
	if (!ctx.cr0.eq) goto loc_822B1828;
loc_822B1848:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,25072
	ctx.r5.s64 = ctx.r9.s64 + 25072;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e628
	ctx.lr = 0x822B1870;
	sub_8229E628(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B16A0) {
	__imp__sub_822B16A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B187C) {
	__imp__sub_822B187C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B1888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// dcbt r11,r3
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b18c8
	if (!ctx.cr6.eq) goto loc_822B18C8;
	// bl 0x82310110
	ctx.lr = 0x822B18BC;
	sub_82310110(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
loc_822B18C8:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a32c0
	ctx.lr = 0x822B18D0;
	sub_822A32C0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a31e8
	ctx.lr = 0x822B18D8;
	sub_822A31E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B18E4;
	sub_822B16A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822B18F8;
	sub_822A34B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1880) {
	__imp__sub_822B1880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822B1930;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// dcbt r11,r5
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b1978
	if (!ctx.cr6.eq) goto loc_822B1978;
	// bl 0x82310110
	ctx.lr = 0x822B196C;
	sub_82310110(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
loc_822B1978:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a8b50
	ctx.lr = 0x822B1984;
	sub_822A8B50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822B198C;
	sub_822A32C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a31e8
	ctx.lr = 0x822B1994;
	sub_822A31E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B19A0;
	sub_822B16A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822B19B4;
	sub_822A34B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1928) {
	__imp__sub_822B1928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B19E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B19E4) {
	__imp__sub_822B19E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B19E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B19F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// dcbt r11,r3
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b1a30
	if (!ctx.cr6.eq) goto loc_822B1A30;
	// bl 0x82310110
	ctx.lr = 0x822B1A24;
	sub_82310110(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
loc_822B1A30:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a32c0
	ctx.lr = 0x822B1A38;
	sub_822A32C0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a31e8
	ctx.lr = 0x822B1A40;
	sub_822A31E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B1A4C;
	sub_822B16A0(ctx, base);
	// bl 0x822a90e8
	ctx.lr = 0x822B1A50;
	sub_822A90E8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B19E8) {
	__imp__sub_822B19E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822B1A78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// dcbt r11,r5
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b1ac0
	if (!ctx.cr6.eq) goto loc_822B1AC0;
	// bl 0x82310110
	ctx.lr = 0x822B1AB4;
	sub_82310110(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
loc_822B1AC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a8b50
	ctx.lr = 0x822B1ACC;
	sub_822A8B50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822B1AD4;
	sub_822A32C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a31e8
	ctx.lr = 0x822B1ADC;
	sub_822A31E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B1AE8;
	sub_822B16A0(ctx, base);
	// bl 0x822a90e8
	ctx.lr = 0x822B1AEC;
	sub_822A90E8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1A70) {
	__imp__sub_822B1A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B1B0C) {
	__imp__sub_822B1B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B1B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82310110
	ctx.lr = 0x822B1B28;
	sub_82310110(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// addi r9,r10,9592
	ctx.r9.s64 = ctx.r10.s64 + 9592;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stw r3,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r3.u32);
	// beq cr6,0x822b1b60
	if (ctx.cr6.eq) goto loc_822B1B60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B1B5C;
	sub_822B16A0(ctx, base);
	// b 0x822b1b98
	goto loc_822B1B98;
loc_822B1B60:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a32c0
	ctx.lr = 0x822B1B70;
	sub_822A32C0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x822a31e8
	ctx.lr = 0x822B1B78;
	sub_822A31E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822b16a0
	ctx.lr = 0x822B1B88;
	sub_822B16A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822B1B90;
	sub_822AA6E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822B1B98;
	sub_822A90E8(ctx, base);
loc_822B1B98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b1bdc
	if (ctx.cr6.eq) goto loc_822B1BDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B1BDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1B10) {
	__imp__sub_822B1B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1BF8) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c3c
	if (ctx.cr6.eq) goto loc_822B1C3C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a3628
	ctx.lr = 0x822B1C24;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b1c3c
	if (ctx.cr6.eq) goto loc_822B1C3C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822B1C38;
	sub_822A3CF8(ctx, base);
	// bl 0x822b1570
	ctx.lr = 0x822B1C3C;
	sub_822B1570(ctx, base);
loc_822B1C3C:
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

PPC_WEAK_FUNC(sub_822B1BF8) {
	__imp__sub_822B1BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1C50) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b1cd0
	if (!ctx.cr6.lt) goto loc_822B1CD0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x822b1ca4
	if (!ctx.cr6.eq) goto loc_822B1CA4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b1d14
	goto loc_822B1D14;
loc_822B1CA4:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,14816
	ctx.r6.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,25764
	ctx.r3.s64 = ctx.r8.s64 + 25764;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B1CCC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B1CD0;
	sub_822AD350(ctx, base);
loc_822B1CD0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B1CE0;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b1d0c
	if (!ctx.cr6.eq) goto loc_822B1D0C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B1D04;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B1D0C:
	// bl 0x822aab48
	ctx.lr = 0x822B1D10;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B1D14:
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

PPC_WEAK_FUNC(sub_822B1C50) {
	__imp__sub_822B1C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B1D2C) {
	__imp__sub_822B1D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822B1D38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r29,r10,-6904
	ctx.r29.s64 = ctx.r10.s64 + -6904;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b1e40
	if (!ctx.cr6.lt) goto loc_822B1E40;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x822b1e04
	if (!ctx.cr6.eq) goto loc_822B1E04;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// beq cr6,0x822b1df8
	if (ctx.cr6.eq) goto loc_822B1DF8;
	// lhz r28,82(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82293548
	ctx.lr = 0x822B1D98;
	sub_82293548(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f29c8
	ctx.lr = 0x822B1DA4;
	sub_822F29C8(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822b1df8
	if (ctx.cr6.eq) goto loc_822B1DF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f29c8
	ctx.lr = 0x822B1DB4;
	sub_822F29C8(ctx, base);
	// bl 0x822f4230
	ctx.lr = 0x822B1DB8;
	sub_822F4230(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82293548
	ctx.lr = 0x822B1DC4;
	sub_82293548(ctx, base);
	// bl 0x822f4230
	ctx.lr = 0x822B1DC8;
	sub_822F4230(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82293548
	ctx.lr = 0x822B1DD4;
	sub_82293548(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f4200
	ctx.lr = 0x822B1DDC;
	sub_822F4200(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,25816
	ctx.r3.s64 = ctx.r10.s64 + 25816;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822B1DF4;
	sub_822E84F0(ctx, base);
	// b 0x822b1e20
	goto loc_822B1E20;
loc_822B1DF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822B1E04:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,25788
	ctx.r3.s64 = ctx.r7.s64 + 25788;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B1E20;
	sub_822E84F0(ctx, base);
loc_822B1E20:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822B1E30;
	sub_822A34B8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x822aab48
	ctx.lr = 0x822B1E40;
	sub_822AAB48(ctx, base);
loc_822B1E40:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B1E50;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b1e7c
	if (!ctx.cr6.eq) goto loc_822B1E7C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B1E74;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_822B1E7C:
	// bl 0x822aab48
	ctx.lr = 0x822B1E80;
	sub_822AAB48(ctx, base);
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// sth r25,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r25.u16);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1D30) {
	__imp__sub_822B1D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B1E94) {
	__imp__sub_822B1E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B1EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r29,r10,-6904
	ctx.r29.s64 = ctx.r10.s64 + -6904;
	// lis r9,-31918
	ctx.r9.s64 = -2091778048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r9,11128
	ctx.r28.s64 = ctx.r9.s64 + 11128;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b1f64
	if (!ctx.cr6.lt) goto loc_822B1F64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822b1f24
	if (!ctx.cr6.eq) goto loc_822B1F24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1040(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1040);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822b1f14
	if (ctx.cr6.gt) goto loc_822B1F14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,524
	ctx.r11.s64 = ctx.r28.s64 + 524;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b1f14
	if (ctx.cr6.eq) goto loc_822B1F14;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822B1F14:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,25920
	ctx.r11.s64 = ctx.r11.s64 + 25920;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x822b1f44
	goto loc_822B1F44;
loc_822B1F24:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,25892
	ctx.r3.s64 = ctx.r7.s64 + 25892;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B1F40;
	sub_822E84F0(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
loc_822B1F44:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822B1F50;
	sub_822A34B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x822aab48
	ctx.lr = 0x822B1F64;
	sub_822AAB48(ctx, base);
loc_822B1F64:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B1F74;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b1fa0
	if (!ctx.cr6.eq) goto loc_822B1FA0;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B1F98;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_822B1FA0:
	// bl 0x822aab48
	ctx.lr = 0x822B1FA4;
	sub_822AAB48(ctx, base);
	// lwz r3,524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B1E98) {
	__imp__sub_822B1E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B1FB0) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2054
	if (!ctx.cr6.lt) goto loc_822B2054;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822b2004
	if (!ctx.cr6.eq) goto loc_822B2004;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822b209c
	goto loc_822B209C;
loc_822B2004:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822b2028
	if (!ctx.cr6.eq) goto loc_822B2028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// b 0x822b209c
	goto loc_822B209C;
loc_822B2028:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r9,14816
	ctx.r7.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,21416
	ctx.r3.s64 = ctx.r8.s64 + 21416;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B2050;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2054;
	sub_822AD350(ctx, base);
loc_822B2054:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2064;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2090
	if (!ctx.cr6.eq) goto loc_822B2090;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2088;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B2090:
	// bl 0x822aab48
	ctx.lr = 0x822B2094;
	sub_822AAB48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_822B209C:
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

PPC_WEAK_FUNC(sub_822B1FB0) {
	__imp__sub_822B1FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B20B4) {
	__imp__sub_822B20B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B20B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B20C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b211c
	if (!ctx.cr6.lt) goto loc_822B211C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a72b8
	ctx.lr = 0x822B20F8;
	sub_822A72B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b2110
	if (ctx.cr6.eq) goto loc_822B2110;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B2110:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x822aab48
	ctx.lr = 0x822B211C;
	sub_822AAB48(ctx, base);
loc_822B211C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B212C;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2158
	if (!ctx.cr6.eq) goto loc_822B2158;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2150;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B2158:
	// bl 0x822aab48
	ctx.lr = 0x822B215C;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B20B8) {
	__imp__sub_822B20B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B2170;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8320(r1)
	ea = -8320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b223c
	if (!ctx.cr6.lt) goto loc_822B223C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a72b8
	ctx.lr = 0x822B21B0;
	sub_822A72B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b2230
	if (ctx.cr6.eq) goto loc_822B2230;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822B21C8;
	sub_822A13A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822B21D8;
	sub_823DFA20(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822b220c
	if (ctx.cr6.eq) goto loc_822B220C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_822B21F0:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822B21FC;
	sub_823DFA20(ctx, base);
	// stbx r3,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b21f0
	if (!ctx.cr6.eq) goto loc_822B21F0;
loc_822B220C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1d50
	ctx.lr = 0x822B2218;
	sub_822A1D50(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x822B2224;
	sub_822A2468(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822B2230:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x822aab48
	ctx.lr = 0x822B223C;
	sub_822AAB48(ctx, base);
loc_822B223C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B224C;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2278
	if (!ctx.cr6.eq) goto loc_822B2278;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2270;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B2278:
	// bl 0x822aab48
	ctx.lr = 0x822B227C;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2168) {
	__imp__sub_822B2168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2288) {
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
	// bl 0x822b20b8
	ctx.lr = 0x822B2298;
	sub_822B20B8(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822B229C;
	sub_822A13A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B2288) {
	__imp__sub_822B2288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B22AC) {
	__imp__sub_822B22AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B22B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b22e4
	if (!ctx.cr6.lt) goto loc_822B22E4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b22e4
	if (!ctx.cr6.eq) goto loc_822B22E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822B22E4:
	// b 0x822b20b8
	sub_822B20B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B22B0) {
	__imp__sub_822B22B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B22E8) {
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
	// bl 0x822b20b8
	ctx.lr = 0x822B22F8;
	sub_822B20B8(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822B22FC;
	sub_822A13A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B22E8) {
	__imp__sub_822B22E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B230C) {
	__imp__sub_822B230C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2310) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2364
	if (!ctx.cr6.lt) goto loc_822B2364;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a73e0
	ctx.lr = 0x822B2348;
	sub_822A73E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822B2350;
	sub_822A13A0(ctx, base);
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
loc_822B2364:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2374;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2378;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822B2310) {
	__imp__sub_822B2310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2390) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2410
	if (!ctx.cr6.lt) goto loc_822B2410;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x822b23e4
	if (!ctx.cr6.eq) goto loc_822B23E4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b2454
	goto loc_822B2454;
loc_822B23E4:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,14816
	ctx.r6.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,25936
	ctx.r3.s64 = ctx.r8.s64 + 25936;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B240C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2410;
	sub_822AD350(ctx, base);
loc_822B2410:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2420;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b244c
	if (!ctx.cr6.eq) goto loc_822B244C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2444;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B244C:
	// bl 0x822aab48
	ctx.lr = 0x822B2450;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B2454:
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

PPC_WEAK_FUNC(sub_822B2390) {
	__imp__sub_822B2390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B246C) {
	__imp__sub_822B246C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2470) {
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
	// bl 0x822b2390
	ctx.lr = 0x822B2480;
	sub_822B2390(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822B2484;
	sub_822A13A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B2470) {
	__imp__sub_822B2470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2494) {
	__imp__sub_822B2494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2498) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2530
	if (!ctx.cr6.lt) goto loc_822B2530;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x822b2504
	if (!ctx.cr6.eq) goto loc_822B2504;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x822b2570
	goto loc_822B2570;
loc_822B2504:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r9,14816
	ctx.r7.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,25972
	ctx.r3.s64 = ctx.r8.s64 + 25972;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B252C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2530;
	sub_822AD350(ctx, base);
loc_822B2530:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2540;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b256c
	if (!ctx.cr6.eq) goto loc_822B256C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2564;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B256C:
	// bl 0x822aab48
	ctx.lr = 0x822B2570;
	sub_822AAB48(ctx, base);
loc_822B2570:
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

PPC_WEAK_FUNC(sub_822B2498) {
	__imp__sub_822B2498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2588) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2618
	if (!ctx.cr6.lt) goto loc_822B2618;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x822b25ec
	if (!ctx.cr6.eq) goto loc_822B25EC;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,-6904
	ctx.r8.s64 = ctx.r10.s64 + -6904;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x822b265c
	goto loc_822B265C;
loc_822B25EC:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,14816
	ctx.r6.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,25996
	ctx.r3.s64 = ctx.r8.s64 + 25996;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B2614;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2618;
	sub_822AD350(ctx, base);
loc_822B2618:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2628;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2654
	if (!ctx.cr6.eq) goto loc_822B2654;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B264C;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B2654:
	// bl 0x822aab48
	ctx.lr = 0x822B2658;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B265C:
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

PPC_WEAK_FUNC(sub_822B2588) {
	__imp__sub_822B2588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2674) {
	__imp__sub_822B2674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822B2680;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r27,r10,-6904
	ctx.r27.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2730
	if (!ctx.cr6.lt) goto loc_822B2730;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r29,r10,26024
	ctx.r29.s64 = ctx.r10.s64 + 26024;
	// addi r28,r11,14816
	ctx.r28.s64 = ctx.r11.s64 + 14816;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x822b2710
	if (!ctx.cr6.eq) goto loc_822B2710;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3e18
	ctx.lr = 0x822B26D8;
	sub_822A3E18(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x822b26f0
	if (!ctx.cr6.eq) goto loc_822B26F0;
	// bl 0x822a4460
	ctx.lr = 0x822B26E8;
	sub_822A4460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822B26F0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// bl 0x822a3e18
	ctx.lr = 0x822B26FC;
	sub_822A3E18(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B270C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2710;
	sub_822AD350(ctx, base);
loc_822B2710:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B272C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2730;
	sub_822AD350(ctx, base);
loc_822B2730:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2740;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b276c
	if (!ctx.cr6.eq) goto loc_822B276C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2764;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
loc_822B276C:
	// bl 0x822aab48
	ctx.lr = 0x822B2770;
	sub_822AAB48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2678) {
	__imp__sub_822B2678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2788) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2808
	if (!ctx.cr6.lt) goto loc_822B2808;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822b27dc
	if (!ctx.cr6.eq) goto loc_822B27DC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b284c
	goto loc_822B284C;
loc_822B27DC:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,14816
	ctx.r6.s64 = ctx.r9.s64 + 14816;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,26052
	ctx.r3.s64 = ctx.r8.s64 + 26052;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B2804;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2808;
	sub_822AD350(ctx, base);
loc_822B2808:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2818;
	sub_822E84F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2844
	if (!ctx.cr6.eq) goto loc_822B2844;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,13984
	ctx.r31.s64 = ctx.r11.s64 + 13984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B283C;
	sub_822E7E98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_822B2844:
	// bl 0x822aab48
	ctx.lr = 0x822B2848;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B284C:
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

PPC_WEAK_FUNC(sub_822B2788) {
	__imp__sub_822B2788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2864) {
	__imp__sub_822B2864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2868) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b28a4
	if (!ctx.cr6.lt) goto loc_822B28A4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B28A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B28B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B28B8;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822B2868) {
	__imp__sub_822B2868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B28CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B28CC) {
	__imp__sub_822B28CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B28D0) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2910
	if (!ctx.cr6.lt) goto loc_822B2910;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B2910:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2920;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B2924;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822B28D0) {
	__imp__sub_822B28D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2938) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2988
	if (!ctx.cr6.lt) goto loc_822B2988;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r7,r9,14816
	ctx.r7.s64 = ctx.r9.s64 + 14816;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B2988:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2998;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822B299C;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822B2938) {
	__imp__sub_822B2938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B29B0) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b2a28
	if (!ctx.cr6.lt) goto loc_822B2A28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b2a00
	if (!ctx.cr6.eq) goto loc_822B2A00;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a3e18
	ctx.lr = 0x822B29FC;
	sub_822A3E18(ctx, base);
	// b 0x822b2a74
	goto loc_822B2A74;
loc_822B2A00:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,26052
	ctx.r3.s64 = ctx.r7.s64 + 26052;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822B2A1C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x822B2A28;
	sub_822AD4E0(ctx, base);
loc_822B2A28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r11,25736
	ctx.r3.s64 = ctx.r11.s64 + 25736;
	// bl 0x822e84f0
	ctx.lr = 0x822B2A38;
	sub_822E84F0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b2a6c
	if (!ctx.cr6.eq) goto loc_822B2A6C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r30,r11,13984
	ctx.r30.s64 = ctx.r11.s64 + 13984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B2A64;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822B2A6C:
	// bl 0x822aab48
	ctx.lr = 0x822B2A70;
	sub_822AAB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B2A74:
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

PPC_WEAK_FUNC(sub_822B29B0) {
	__imp__sub_822B29B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2A8C) {
	__imp__sub_822B2A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2A90) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2ad4
	if (ctx.cr6.eq) goto loc_822B2AD4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a3628
	ctx.lr = 0x822B2ABC;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2ad4
	if (ctx.cr6.eq) goto loc_822B2AD4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822B2AD0;
	sub_822A3CF8(ctx, base);
	// bl 0x822b1570
	ctx.lr = 0x822B2AD4;
	sub_822B1570(ctx, base);
loc_822B2AD4:
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

PPC_WEAK_FUNC(sub_822B2A90) {
	__imp__sub_822B2A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2AE8) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
loc_822B2B04:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2bcc
	if (ctx.cr6.eq) goto loc_822B2BCC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a3628
	ctx.lr = 0x822B2B18;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2b30
	if (ctx.cr6.eq) goto loc_822B2B30;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822B2B2C;
	sub_822A3CF8(ctx, base);
	// bl 0x822b1570
	ctx.lr = 0x822B2B30;
	sub_822B1570(ctx, base);
loc_822B2B30:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2bcc
	if (ctx.cr6.eq) goto loc_822B2BCC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a3628
	ctx.lr = 0x822B2B44;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2b78
	if (ctx.cr6.eq) goto loc_822B2B78;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822B2B58;
	sub_822A3CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822B2B60;
	sub_822A3A70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b2b78
	if (ctx.cr6.eq) goto loc_822B2B78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6c60
	ctx.lr = 0x822B2B74;
	sub_822A6C60(ctx, base);
	// b 0x822b2b04
	goto loc_822B2B04;
loc_822B2B78:
	// bl 0x822a9be0
	ctx.lr = 0x822B2B7C;
	sub_822A9BE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a6760
	ctx.lr = 0x822B2B9C;
	sub_822A6760(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822B2BAC;
	sub_822A3C58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3598
	ctx.lr = 0x822B2BB8;
	sub_822A3598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b2bcc
	if (!ctx.cr6.eq) goto loc_822B2BCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6930
	ctx.lr = 0x822B2BCC;
	sub_822A6930(ctx, base);
loc_822B2BCC:
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

PPC_WEAK_FUNC(sub_822B2AE8) {
	__imp__sub_822B2AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2BE4) {
	__imp__sub_822B2BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2BE8) {
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
	// bl 0x822a3098
	ctx.lr = 0x822B2BFC;
	sub_822A3098(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x822B2C0C;
	sub_822A3148(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x822B2C14;
	sub_822A3148(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x822B2C1C;
	sub_822A3148(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x822a3098
	ctx.lr = 0x822B2C24;
	sub_822A3098(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x822a3098
	ctx.lr = 0x822B2C2C;
	sub_822A3098(ctx, base);
	// lis r9,-31860
	ctx.r9.s64 = -2087976960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,17812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17812, ctx.r10.u32);
	// bl 0x822b2ae8
	ctx.lr = 0x822B2C48;
	sub_822B2AE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822B2BE8) {
	__imp__sub_822B2BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2C5C) {
	__imp__sub_822B2C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,15017(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15017);
	// b 0x822a2718
	sub_822A2718(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2C60) {
	__imp__sub_822B2C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822B2C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r4,15017(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15017);
	// bl 0x822a1d20
	ctx.lr = 0x822B2C98;
	sub_822A1D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8229e828
	ctx.lr = 0x822B2CA8;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8229e828
	ctx.lr = 0x822B2CB8;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8229e828
	ctx.lr = 0x822B2CC8;
	sub_8229E828(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B2CD4;
	sub_8229E798(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e868
	ctx.lr = 0x822B2CE4;
	sub_8229E868(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B2CEC;
	sub_8229EBC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8229e8b8
	ctx.lr = 0x822B2D00;
	sub_8229E8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8229e7d8
	ctx.lr = 0x822B2D0C;
	sub_8229E7D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B2D1C;
	sub_8229E828(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2C70) {
	__imp__sub_822B2C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2D24) {
	__imp__sub_822B2D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822B2D30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r4,15017(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15017);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x822a1d20
	ctx.lr = 0x822B2D58;
	sub_822A1D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8229e828
	ctx.lr = 0x822B2D68;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8229e828
	ctx.lr = 0x822B2D78;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8229e828
	ctx.lr = 0x822B2D88;
	sub_8229E828(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B2D94;
	sub_8229E798(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e868
	ctx.lr = 0x822B2DA4;
	sub_8229E868(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B2DAC;
	sub_8229EBC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e868
	ctx.lr = 0x822B2DBC;
	sub_8229E868(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B2DC4;
	sub_8229EBC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8229e8b8
	ctx.lr = 0x822B2DD8;
	sub_8229E8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8229e7d8
	ctx.lr = 0x822B2DE4;
	sub_8229E7D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B2DF4;
	sub_8229E828(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2D28) {
	__imp__sub_822B2D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2DFC) {
	__imp__sub_822B2DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2E00) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8229e828
	ctx.lr = 0x822B2E24;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B2E34;
	sub_8229E828(ctx, base);
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

PPC_WEAK_FUNC(sub_822B2E00) {
	__imp__sub_822B2E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B2E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8229e798
	ctx.lr = 0x822B2E64;
	sub_8229E798(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e868
	ctx.lr = 0x822B2E74;
	sub_8229E868(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B2E7C;
	sub_8229EBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x8229e828
	ctx.lr = 0x822B2E8C;
	sub_8229E828(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2E48) {
	__imp__sub_822B2E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B2E94) {
	__imp__sub_822B2E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B2E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822B2EA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r8,r11,12184
	ctx.r8.s64 = ctx.r11.s64 + 12184;
	// ori r7,r9,40
	ctx.r7.u64 = ctx.r9.u64 | 40;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x822b2f04
	if (ctx.cr6.gt) goto loc_822B2F04;
loc_822B2EF4:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x822b2ef4
	if (!ctx.cr6.gt) goto loc_822B2EF4;
loc_822B2F04:
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// blt cr6,0x822b2f20
	if (ctx.cr6.lt) goto loc_822B2F20;
	// li r11,63
	ctx.r11.s64 = 63;
loc_822B2F20:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x822e7e98
	ctx.lr = 0x822B2F2C;
	sub_822E7E98(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B2F34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b2f34
	if (!ctx.cr6.eq) goto loc_822B2F34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x822b2f88
	if (ctx.cr6.gt) goto loc_822B2F88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822B2F70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x822b2f70
	if (!ctx.cr6.gt) goto loc_822B2F70;
loc_822B2F88:
	// lis r24,-31859
	ctx.r24.s64 = -2087911424;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r24,31436
	ctx.r11.s64 = ctx.r24.s64 + 31436;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,-16419(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -16419);
	// bl 0x822a1d20
	ctx.lr = 0x822B2FA0;
	sub_822A1D20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x822B2FA8;
	sub_822A1EE8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8229e828
	ctx.lr = 0x822B2FB8;
	sub_8229E828(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229e940
	ctx.lr = 0x822B2FD4;
	sub_8229E940(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8229e828
	ctx.lr = 0x822B2FE8;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B2FF8;
	sub_8229E828(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8229e7d8
	ctx.lr = 0x822B3008;
	sub_8229E7D8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r10,22036
	ctx.r3.s64 = ctx.r10.s64 + 22036;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x822b2c70
	ctx.lr = 0x822B3024;
	sub_822B2C70(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8229e7d8
	ctx.lr = 0x822B3034;
	sub_8229E7D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229e940
	ctx.lr = 0x822B304C;
	sub_8229E940(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B3058;
	sub_8229E798(ctx, base);
	// bl 0x8229eb68
	ctx.lr = 0x822B305C;
	sub_8229EB68(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8229ec20
	ctx.lr = 0x822B3064;
	sub_8229EC20(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8229ec20
	ctx.lr = 0x822B306C;
	sub_8229EC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x8229e8b8
	ctx.lr = 0x822B3080;
	sub_8229E8B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8229e828
	ctx.lr = 0x822B3094;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B30A4;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8229e7d8
	ctx.lr = 0x822B30B0;
	sub_8229E7D8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,24096
	ctx.r3.s64 = ctx.r9.s64 + 24096;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822b2c70
	ctx.lr = 0x822B30CC;
	sub_822B2C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x8229e7d8
	ctx.lr = 0x822B30D8;
	sub_8229E7D8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r8,22020
	ctx.r3.s64 = ctx.r8.s64 + 22020;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x822b2d28
	ctx.lr = 0x822B30FC;
	sub_822B2D28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229e940
	ctx.lr = 0x822B3114;
	sub_8229E940(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B3120;
	sub_8229E798(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8229e868
	ctx.lr = 0x822B3130;
	sub_8229E868(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B3138;
	sub_8229EBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x8229e828
	ctx.lr = 0x822B3148;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8229e940
	ctx.lr = 0x822B3160;
	sub_8229E940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8229e828
	ctx.lr = 0x822B3170;
	sub_8229E828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B3180;
	sub_8229E828(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229e940
	ctx.lr = 0x822B3198;
	sub_8229E940(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B31A4;
	sub_8229E798(ctx, base);
	// bl 0x8229eb68
	ctx.lr = 0x822B31A8;
	sub_8229EB68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8229ec20
	ctx.lr = 0x822B31B0;
	sub_8229EC20(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8229ec20
	ctx.lr = 0x822B31B8;
	sub_8229EC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x8229e8b8
	ctx.lr = 0x822B31CC;
	sub_8229E8B8(ctx, base);
	// lwz r10,31436(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 31436);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x8229eaf8
	ctx.lr = 0x822B31F4;
	sub_8229EAF8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B2E98) {
	__imp__sub_822B2E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B31FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B31FC) {
	__imp__sub_822B31FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822B3208;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// ori r8,r10,40
	ctx.r8.u64 = ctx.r10.u64 | 40;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x822b326c
	if (ctx.cr6.gt) goto loc_822B326C;
loc_822B325C:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x822b325c
	if (!ctx.cr6.gt) goto loc_822B325C;
loc_822B326C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// blt cr6,0x822b3284
	if (ctx.cr6.lt) goto loc_822B3284;
	// li r11,63
	ctx.r11.s64 = 63;
loc_822B3284:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x822e7e98
	ctx.lr = 0x822B3290;
	sub_822E7E98(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B3298:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b3298
	if (!ctx.cr6.eq) goto loc_822B3298;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x822b32ec
	if (ctx.cr6.gt) goto loc_822B32EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822B32D4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x822b32d4
	if (!ctx.cr6.gt) goto loc_822B32D4;
loc_822B32EC:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,15017(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15017);
	// bl 0x822a1d20
	ctx.lr = 0x822B3300;
	sub_822A1D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8229e828
	ctx.lr = 0x822B3310;
	sub_8229E828(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822b2e98
	ctx.lr = 0x822B3334;
	sub_822B2E98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3200) {
	__imp__sub_822B3200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B333C) {
	__imp__sub_822B333C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3340) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822B3354:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822b3354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3354;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3340) {
	__imp__sub_822B3340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3368) {
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
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a19a8
	ctx.lr = 0x822B3384;
	sub_822A19A8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// stw r3,31420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3368) {
	__imp__sub_822B3368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B339C) {
	__imp__sub_822B339C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B33A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8288(r1)
	ea = -8288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,8192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8192, ctx.xer);
	// blt cr6,0x822b33ec
	if (ctx.cr6.lt) goto loc_822B33EC;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,15017
	ctx.r9.s64 = ctx.r11.s64 + 15017;
	// addi r4,r10,23352
	ctx.r4.s64 = ctx.r10.s64 + 23352;
	// lwz r3,11(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11);
	// bl 0x8229e338
	ctx.lr = 0x822B33D8;
	sub_8229E338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8288
	ctx.r1.s64 = ctx.r1.s64 + 8288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B33EC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822b3474
	if (ctx.cr6.eq) goto loc_822B3474;
	// li r3,9
	ctx.r3.s64 = 9;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r7,10
	ctx.r7.s64 = 10;
loc_822B3404:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x822b341c
	if (ctx.cr6.eq) goto loc_822B341C;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x822b3464
	goto loc_822B3464;
loc_822B341C:
	// addic. r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822b3474
	if (ctx.cr0.eq) goto loc_822B3474;
	// lbzu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,110
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 110, ctx.xer);
	// beq cr6,0x822b345c
	if (ctx.cr6.eq) goto loc_822B345C;
	// cmplwi cr6,r9,114
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 114, ctx.xer);
	// beq cr6,0x822b3454
	if (ctx.cr6.eq) goto loc_822B3454;
	// cmplwi cr6,r9,116
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 116, ctx.xer);
	// beq cr6,0x822b344c
	if (ctx.cr6.eq) goto loc_822B344C;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x822b3460
	goto loc_822B3460;
loc_822B344C:
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// b 0x822b3460
	goto loc_822B3460;
loc_822B3454:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// b 0x822b3460
	goto loc_822B3460;
loc_822B345C:
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_822B3460:
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
loc_822B3464:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822b3404
	if (!ctx.cr6.eq) goto loc_822B3404;
loc_822B3474:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,15017(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15017);
	// bl 0x822a1d20
	ctx.lr = 0x822B3490;
	sub_822A1D20(ctx, base);
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,31420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31420, ctx.r11.u32);
	// addi r1,r1,8288
	ctx.r1.s64 = ctx.r1.s64 + 8288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B33A0) {
	__imp__sub_822B33A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B34B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,31420
	ctx.r5.s64 = ctx.r11.s64 + 31420;
	// addi r4,r10,20464
	ctx.r4.s64 = ctx.r10.s64 + 20464;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B34B0) {
	__imp__sub_822B34B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B34C4) {
	__imp__sub_822B34C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B34C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,31420
	ctx.r5.s64 = ctx.r11.s64 + 31420;
	// addi r4,r10,-18316
	ctx.r4.s64 = ctx.r10.s64 + -18316;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B34C8) {
	__imp__sub_822B34C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B34DC) {
	__imp__sub_822B34DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B34E0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// addi r4,r11,15020
	ctx.r4.s64 = ctx.r11.s64 + 15020;
	// lwz r11,15024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15024);
	// lwz r31,16448(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16448);
	// lwz r3,16452(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16452);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822b35e4
	if (!ctx.cr6.lt) goto loc_822B35E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-28056
	ctx.r11.s64 = ctx.r11.s64 + -28056;
loc_822B3510:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b352c
	if (ctx.cr6.eq) goto loc_822B352C;
	// addi r9,r11,-2432
	ctx.r9.s64 = ctx.r11.s64 + -2432;
	// rlwinm r8,r10,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x822b3530
	goto loc_822B3530;
loc_822B352C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822B3530:
	// addi r8,r11,-3000
	ctx.r8.s64 = ctx.r11.s64 + -3000;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822b3550
	if (ctx.cr6.eq) goto loc_822B3550;
	// stw r3,16440(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16440, ctx.r3.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
loc_822B3550:
	// addi r9,r11,-1168
	ctx.r9.s64 = ctx.r11.s64 + -1168;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r11,1088
	ctx.r7.s64 = ctx.r11.s64 + 1088;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822b35d0
	if (ctx.cr6.eq) goto loc_822B35D0;
loc_822B357C:
	// addi r9,r11,-584
	ctx.r9.s64 = ctx.r11.s64 + -584;
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpwi cr6,r7,283
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 283, ctx.xer);
	// blt cr6,0x822b35a0
	if (ctx.cr6.lt) goto loc_822B35A0;
	// addi r10,r11,-1408
	ctx.r10.s64 = ctx.r11.s64 + -1408;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
loc_822B35A0:
	// addi r9,r11,-1168
	ctx.r9.s64 = ctx.r11.s64 + -1168;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822b357c
	if (!ctx.cr6.eq) goto loc_822B357C;
loc_822B35D0:
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// blt cr6,0x822b3510
	if (ctx.cr6.lt) goto loc_822B3510;
loc_822B35E4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B34E0) {
	__imp__sub_822B34E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B35EC) {
	__imp__sub_822B35EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B35F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-28056
	ctx.r11.s64 = ctx.r11.s64 + -28056;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r11,-3000
	ctx.r9.s64 = ctx.r11.s64 + -3000;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b3624
	if (ctx.cr6.eq) goto loc_822B3624;
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// addi r7,r8,15020
	ctx.r7.s64 = ctx.r8.s64 + 15020;
	// lwz r9,16448(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16448);
	// stw r3,16440(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16440, ctx.r3.u32);
	// stw r9,15020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15020, ctx.r9.u32);
loc_822B3624:
	// addi r8,r11,-1168
	ctx.r8.s64 = ctx.r11.s64 + -1168;
	// addi r9,r11,1088
	ctx.r9.s64 = ctx.r11.s64 + 1088;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// lhzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r4,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x822b36a0
	if (ctx.cr6.eq) goto loc_822B36A0;
loc_822B364C:
	// addi r9,r11,-584
	ctx.r9.s64 = ctx.r11.s64 + -584;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,283
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 283, ctx.xer);
	// blt cr6,0x822b3670
	if (ctx.cr6.lt) goto loc_822B3670;
	// rlwinm r10,r6,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,-1408
	ctx.r9.s64 = ctx.r11.s64 + -1408;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
loc_822B3670:
	// addi r9,r11,-1168
	ctx.r9.s64 = ctx.r11.s64 + -1168;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,1088
	ctx.r5.s64 = ctx.r11.s64 + 1088;
	// lhzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822b364c
	if (!ctx.cr6.eq) goto loc_822B364C;
loc_822B36A0:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r10,r11,-282
	ctx.r10.s64 = ctx.r11.s64 + -282;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B35F0) {
	__imp__sub_822B35F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// lis r7,-31859
	ctx.r7.s64 = -2087911424;
	// addi r6,r8,15016
	ctx.r6.s64 = ctx.r8.s64 + 15016;
	// lis r5,-31859
	ctx.r5.s64 = -2087911424;
	// lwz r11,16448(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16448);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,15024(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15024, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,31476(r5)
	PPC_STORE_U32(ctx.r5.u32 + 31476, ctx.r11.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r10,16452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16452, ctx.r10.u32);
	// stw r9,16416(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16416, ctx.r9.u32);
	// stb r11,15016(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15016, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B36C8) {
	__imp__sub_822B36C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B3704) {
	__imp__sub_822B3704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3708) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16448);
	// stb r9,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r7,-31859
	ctx.r7.s64 = -2087911424;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r6,-31859
	ctx.r6.s64 = -2087911424;
	// stw r9,15024(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15024, ctx.r9.u32);
	// stw r9,16452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16452, ctx.r9.u32);
	// stw r8,16416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16416, ctx.r8.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,31476(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31476, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3708) {
	__imp__sub_822B3708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3780) {
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
	// bl 0x823e10e0
	ctx.lr = 0x822B3798;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B37AC;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B37B4;
	sub_823E0E60(ctx, base);
}

PPC_WEAK_FUNC(sub_822B3780) {
	__imp__sub_822B3780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B37B4) {
	__imp__sub_822B37B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230de10
	sub_8230DE10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B37B8) {
	__imp__sub_822B37B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B37BC) {
	__imp__sub_822B37BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e1380
	sub_823E1380(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B37C0) {
	__imp__sub_822B37C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B37C4) {
	__imp__sub_822B37C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230de80
	sub_8230DE80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B37C8) {
	__imp__sub_822B37C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B37CC) {
	__imp__sub_822B37CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B37D0) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b3800
	if (!ctx.cr6.eq) goto loc_822B3800;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-25868
	ctx.r4.s64 = ctx.r10.s64 + -25868;
	// lwz r3,15028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15028);
	// b 0x822b3828
	goto loc_822B3828;
loc_822B3800:
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x822b382c
	if (ctx.cr6.eq) goto loc_822B382C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-25880
	ctx.r4.s64 = ctx.r10.s64 + -25880;
	// lwz r11,15028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15028);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_822B3828:
	// bl 0x8229e338
	ctx.lr = 0x822B382C;
	sub_8229E338(ctx, base);
loc_822B382C:
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

PPC_WEAK_FUNC(sub_822B37D0) {
	__imp__sub_822B37D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3840) {
	__imp__sub_822B3840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// lwz r10,16448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16448);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b387c
	if (ctx.cr6.eq) goto loc_822B387C;
	// lwz r9,16452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16452);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,16416(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16416);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
loc_822B387C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r7,-31859
	ctx.r7.s64 = -2087911424;
	// lis r6,-31859
	ctx.r6.s64 = -2087911424;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,16448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16448, ctx.r3.u32);
	// stw r8,16440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16440, ctx.r8.u32);
	// stw r10,15024(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15024, ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,16452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16452, ctx.r10.u32);
	// stw r7,31476(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31476, ctx.r7.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,16416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16416, ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3848) {
	__imp__sub_822B3848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B38B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b390c
	if (ctx.cr6.eq) goto loc_822B390C;
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,31464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31464);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r11,31464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31464, ctx.r11.u32);
	// beq cr6,0x822b3904
	if (ctx.cr6.eq) goto loc_822B3904;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8230de80
	ctx.lr = 0x822B3904;
	sub_8230DE80(ctx, base);
loc_822B3904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230de80
	ctx.lr = 0x822B390C;
	sub_8230DE80(ctx, base);
loc_822B390C:
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

PPC_WEAK_FUNC(sub_822B38B8) {
	__imp__sub_822B38B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3920) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822b3708
	ctx.lr = 0x822B3934;
	sub_822B3708(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r3.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B3920) {
	__imp__sub_822B3920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3958) {
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
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x822b3a08
	if (ctx.cr6.lt) goto loc_822B3A08;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b3a08
	if (!ctx.cr6.eq) goto loc_822B3A08;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3a08
	if (!ctx.cr6.eq) goto loc_822B3A08;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8230de10
	ctx.lr = 0x822B39A0;
	sub_8230DE10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b39cc
	if (!ctx.cr6.eq) goto loc_822B39CC;
	// bl 0x823e10e0
	ctx.lr = 0x822B39AC;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25836
	ctx.r5.s64 = ctx.r10.s64 + -25836;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B39C4;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B39CC;
	sub_823E0E60(ctx, base);
loc_822B39CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bl 0x822b3848
	ctx.lr = 0x822B3A04;
	sub_822B3848(ctx, base);
	// b 0x822b3a0c
	goto loc_822B3A0C;
loc_822B3A08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B3A0C:
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

PPC_WEAK_FUNC(sub_822B3958) {
	__imp__sub_822B3958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B3A24) {
	__imp__sub_822B3A24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B3A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,2
	ctx.r29.s64 = ctx.r4.s64 + 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8230de10
	ctx.lr = 0x822B3A48;
	sub_8230DE10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3a74
	if (!ctx.cr6.eq) goto loc_822B3A74;
	// bl 0x823e10e0
	ctx.lr = 0x822B3A54;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25760
	ctx.r5.s64 = ctx.r10.s64 + -25760;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3A6C;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3A74;
	sub_823E0E60(ctx, base);
loc_822B3A74:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822b3a98
	if (!ctx.cr6.gt) goto loc_822B3A98;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_822B3A88:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822b3a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3A88;
loc_822B3A98:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stbx r10,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// bl 0x822b3958
	ctx.lr = 0x822B3AB0;
	sub_822B3958(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3adc
	if (!ctx.cr6.eq) goto loc_822B3ADC;
	// bl 0x823e10e0
	ctx.lr = 0x822B3ABC;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25792
	ctx.r5.s64 = ctx.r10.s64 + -25792;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3AD4;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3ADC;
	sub_823E0E60(ctx, base);
loc_822B3ADC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3A28) {
	__imp__sub_822B3A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B3AEC) {
	__imp__sub_822B3AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B3AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8230de10
	ctx.lr = 0x822B3B0C;
	sub_8230DE10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3b3c
	if (!ctx.cr6.eq) goto loc_822B3B3C;
	// bl 0x823e10e0
	ctx.lr = 0x822B3B1C;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25716
	ctx.r5.s64 = ctx.r10.s64 + -25716;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3B34;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3B3C;
	sub_823E0E60(ctx, base);
loc_822B3B3C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// bl 0x8230de10
	ctx.lr = 0x822B3B48;
	sub_8230DE10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3b78
	if (!ctx.cr6.eq) goto loc_822B3B78;
	// bl 0x823e10e0
	ctx.lr = 0x822B3B58;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25716
	ctx.r5.s64 = ctx.r10.s64 + -25716;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3B70;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3B78;
	sub_823E0E60(ctx, base);
loc_822B3B78:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// bl 0x822b3708
	ctx.lr = 0x822B3B88;
	sub_822B3708(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3AF0) {
	__imp__sub_822B3AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3BA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b3bc0
	if (ctx.cr6.eq) goto loc_822B3BC0;
loc_822B3BB0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3bb0
	if (!ctx.cr6.eq) goto loc_822B3BB0;
loc_822B3BC0:
	// b 0x822b3a28
	sub_822B3A28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3BA0) {
	__imp__sub_822B3BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B3BC4) {
	__imp__sub_822B3BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B3BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,15016
	ctx.r31.s64 = ctx.r11.s64 + 15016;
	// lis r30,-31859
	ctx.r30.s64 = -2087911424;
	// lwz r3,16448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3c00
	if (!ctx.cr6.eq) goto loc_822B3C00;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,31476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31476);
	// bl 0x822b3af0
	ctx.lr = 0x822B3BFC;
	sub_822B3AF0(ctx, base);
	// stw r3,16448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16448, ctx.r3.u32);
loc_822B3C00:
	// bl 0x822b3708
	ctx.lr = 0x822B3C04;
	sub_822B3708(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,15024(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15024, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,31476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 31476, ctx.r9.u32);
	// stw r11,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r11.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,16416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16416, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3BC8) {
	__imp__sub_822B3BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822B3C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r26,-31859
	ctx.r26.s64 = -2087911424;
	// addi r30,r11,31432
	ctx.r30.s64 = ctx.r11.s64 + 31432;
	// lwz r8,31432(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31432);
	// lwz r11,15024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822b3ca8
	if (!ctx.cr6.gt) goto loc_822B3CA8;
	// bl 0x823e10e0
	ctx.lr = 0x822B3C88;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25628
	ctx.r5.s64 = ctx.r10.s64 + -25628;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3CA0;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3CA8;
	sub_823E0E60(ctx, base);
loc_822B3CA8:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b3cd4
	if (!ctx.cr6.eq) goto loc_822B3CD4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822B3CD4:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic. r28,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r28.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x822b3cf8
	if (!ctx.cr0.gt) goto loc_822B3CF8;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_822B3CEC:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x822b3cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3CEC;
loc_822B3CF8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822b3d18
	if (!ctx.cr6.eq) goto loc_822B3D18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// b 0x822b3db8
	goto loc_822B3DB8;
loc_822B3D18:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt 0x822b3d8c
	if (ctx.cr0.gt) goto loc_822B3D8C;
loc_822B3D28:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r29,r3,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b3ddc
	if (ctx.cr6.eq) goto loc_822B3DDC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822b3d58
	if (ctx.cr6.gt) goto loc_822B3D58;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x822b3d5c
	goto loc_822B3D5C;
loc_822B3D58:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822B3D5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x823e1380
	ctx.lr = 0x822B3D68;
	sub_823E1380(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b3de4
	if (ctx.cr6.eq) goto loc_822B3DE4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addic. r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x822b3d28
	if (!ctx.cr0.gt) goto loc_822B3D28;
loc_822B3D8C:
	// cmpwi cr6,r4,8192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8192, ctx.xer);
	// ble cr6,0x822b3d98
	if (!ctx.cr6.gt) goto loc_822B3D98;
	// li r4,8192
	ctx.r4.s64 = 8192;
loc_822B3D98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8229d188
	ctx.lr = 0x822B3DA4;
	sub_8229D188(ctx, base);
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne cr6,0x822b3e14
	if (!ctx.cr6.eq) goto loc_822B3E14;
loc_822B3DB8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822b3e08
	if (!ctx.cr6.eq) goto loc_822B3E08;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,31476(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31476);
	// bl 0x822b3bc8
	ctx.lr = 0x822B3DD0;
	sub_822B3BC8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x822b3e1c
	goto loc_822B3E1C;
loc_822B3DDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822B3DE4:
	// bl 0x823e10e0
	ctx.lr = 0x822B3DE8;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25672
	ctx.r5.s64 = ctx.r10.s64 + -25672;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B3E00;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B3E08;
	sub_823E0E60(ctx, base);
loc_822B3E08:
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// b 0x822b3e1c
	goto loc_822B3E1C;
loc_822B3E14:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822B3E1C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stbx r27,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r27,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,15024(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15024, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B3C48) {
	__imp__sub_822B3C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B3E4C) {
	__imp__sub_822B3E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B3E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x822B3E58;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// lis r26,-31859
	ctx.r26.s64 = -2087911424;
	// lwz r10,14916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14916);
	// lis r19,-31859
	ctx.r19.s64 = -2087911424;
	// lis r21,-31859
	ctx.r21.s64 = -2087911424;
	// addi r31,r9,15016
	ctx.r31.s64 = ctx.r9.s64 + 15016;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b3f10
	if (ctx.cr6.eq) goto loc_822B3F10;
	// lwz r9,16456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16456);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,14916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14916, ctx.r22.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822b3ea0
	if (!ctx.cr6.eq) goto loc_822B3EA0;
	// stw r20,16456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16456, ctx.r20.u32);
loc_822B3EA0:
	// lwz r3,31476(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b3eb4
	if (!ctx.cr6.eq) goto loc_822B3EB4;
	// bl 0x823e10e0
	ctx.lr = 0x822B3EB0;
	sub_823E10E0(ctx, base);
	// stw r3,31476(r21)
	PPC_STORE_U32(ctx.r21.u32 + 31476, ctx.r3.u32);
loc_822B3EB4:
	// lwz r11,31480(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 31480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b3ed0
	if (!ctx.cr6.eq) goto loc_822B3ED0;
	// bl 0x823e10e0
	ctx.lr = 0x822B3EC4;
	sub_823E10E0(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r3,31476(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// stw r11,31480(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31480, ctx.r11.u32);
loc_822B3ED0:
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822b3eec
	if (!ctx.cr6.eq) goto loc_822B3EEC;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// bl 0x822b3af0
	ctx.lr = 0x822B3EE4;
	sub_822B3AF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,16448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16448, ctx.r3.u32);
loc_822B3EEC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,15024(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15024, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,31476(r21)
	PPC_STORE_U32(ctx.r21.u32 + 31476, ctx.r11.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,16416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16416, ctx.r9.u32);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// b 0x822b3f18
	goto loc_822B3F18;
loc_822B3F10:
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// lwz r10,16452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16452);
loc_822B3F18:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// li r17,3
	ctx.r17.s64 = 3;
	// li r18,5
	ctx.r18.s64 = 5;
	// lis r25,-31859
	ctx.r25.s64 = -2087911424;
	// addi r24,r11,-28056
	ctx.r24.s64 = ctx.r11.s64 + -28056;
	// addi r23,r9,31420
	ctx.r23.s64 = ctx.r9.s64 + 31420;
loc_822B3F34:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r30,16456(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16456);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_822B3F48:
	// lwz r6,16444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822B3F50:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r10,r24,-2432
	ctx.r10.s64 = ctx.r24.s64 + -2432;
	// addi r9,r24,-3000
	ctx.r9.s64 = ctx.r24.s64 + -3000;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b3f84
	if (ctx.cr6.eq) goto loc_822B3F84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,16444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16444, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_822B3F84:
	// addi r10,r24,-1168
	ctx.r10.s64 = ctx.r24.s64 + -1168;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r8,r24,1088
	ctx.r8.s64 = ctx.r24.s64 + 1088;
	// lhzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822b4004
	if (ctx.cr6.eq) goto loc_822B4004;
loc_822B3FB0:
	// addi r10,r24,-584
	ctx.r10.s64 = ctx.r24.s64 + -584;
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,283
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 283, ctx.xer);
	// blt cr6,0x822b3fd4
	if (ctx.cr6.lt) goto loc_822B3FD4;
	// addi r11,r24,-1408
	ctx.r11.s64 = ctx.r24.s64 + -1408;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
loc_822B3FD4:
	// addi r10,r24,-1168
	ctx.r10.s64 = ctx.r24.s64 + -1168;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// addi r4,r24,1088
	ctx.r4.s64 = ctx.r24.s64 + 1088;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822b3fb0
	if (!ctx.cr6.eq) goto loc_822B3FB0;
loc_822B4004:
	// lhzx r11,r10,r24
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// addi r10,r24,-1168
	ctx.r10.s64 = ctx.r24.s64 + -1168;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,485
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 485, ctx.xer);
	// bne cr6,0x822b3f50
	if (!ctx.cr6.eq) goto loc_822B3F50;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_822B4028:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_822B402C:
	// addi r10,r24,-3000
	ctx.r10.s64 = ctx.r24.s64 + -3000;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b4054
	if (!ctx.cr6.eq) goto loc_822B4054;
	// addi r11,r24,-3000
	ctx.r11.s64 = ctx.r24.s64 + -3000;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_822B4054:
	// subf r9,r27,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r27.s64;
	// stw r27,15024(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15024, ctx.r27.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r9,31428(r25)
	PPC_STORE_U32(ctx.r25.u32 + 31428, ctx.r9.u32);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r22,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r22.u8);
	// lwz r3,15024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_822B4074:
	// stw r10,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r10.u32);
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x822b5304
	if (ctx.cr6.gt) goto loc_822B5304;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16536
	ctx.r12.s64 = ctx.r12.s64 + 16536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822B42B8;
	case 1:
		goto loc_822B436C;
	case 2:
		goto loc_822B438C;
	case 3:
		goto loc_822B436C;
	case 4:
		goto loc_822B436C;
	case 5:
		goto loc_822B436C;
	case 6:
		goto loc_822B43B0;
	case 7:
		goto loc_822B4408;
	case 8:
		goto loc_822B4448;
	case 9:
		goto loc_822B4488;
	case 10:
		goto loc_822B44B0;
	case 11:
		goto loc_822B44D8;
	case 12:
		goto loc_822B4500;
	case 13:
		goto loc_822B4528;
	case 14:
		goto loc_822B4550;
	case 15:
		goto loc_822B4578;
	case 16:
		goto loc_822B45A0;
	case 17:
		goto loc_822B45C8;
	case 18:
		goto loc_822B45F0;
	case 19:
		goto loc_822B4618;
	case 20:
		goto loc_822B4640;
	case 21:
		goto loc_822B4668;
	case 22:
		goto loc_822B4690;
	case 23:
		goto loc_822B46B8;
	case 24:
		goto loc_822B46E0;
	case 25:
		goto loc_822B4708;
	case 26:
		goto loc_822B4730;
	case 27:
		goto loc_822B4758;
	case 28:
		goto loc_822B4780;
	case 29:
		goto loc_822B47A8;
	case 30:
		goto loc_822B47D0;
	case 31:
		goto loc_822B47F8;
	case 32:
		goto loc_822B4820;
	case 33:
		goto loc_822B4848;
	case 34:
		goto loc_822B4870;
	case 35:
		goto loc_822B4898;
	case 36:
		goto loc_822B48D0;
	case 37:
		goto loc_822B4908;
	case 38:
		goto loc_822B4930;
	case 39:
		goto loc_822B4958;
	case 40:
		goto loc_822B4980;
	case 41:
		goto loc_822B49A8;
	case 42:
		goto loc_822B49D0;
	case 43:
		goto loc_822B49F8;
	case 44:
		goto loc_822B4A20;
	case 45:
		goto loc_822B4A48;
	case 46:
		goto loc_822B4A70;
	case 47:
		goto loc_822B4A98;
	case 48:
		goto loc_822B4AC0;
	case 49:
		goto loc_822B4AE8;
	case 50:
		goto loc_822B4B10;
	case 51:
		goto loc_822B4B38;
	case 52:
		goto loc_822B4B60;
	case 53:
		goto loc_822B4B88;
	case 54:
		goto loc_822B4BB0;
	case 55:
		goto loc_822B4BD8;
	case 56:
		goto loc_822B4C00;
	case 57:
		goto loc_822B4C28;
	case 58:
		goto loc_822B4C50;
	case 59:
		goto loc_822B4C78;
	case 60:
		goto loc_822B4CA0;
	case 61:
		goto loc_822B4CC8;
	case 62:
		goto loc_822B4CF0;
	case 63:
		goto loc_822B4D18;
	case 64:
		goto loc_822B4D40;
	case 65:
		goto loc_822B4D68;
	case 66:
		goto loc_822B4D90;
	case 67:
		goto loc_822B4DB8;
	case 68:
		goto loc_822B4DE0;
	case 69:
		goto loc_822B4E08;
	case 70:
		goto loc_822B4E30;
	case 71:
		goto loc_822B4E58;
	case 72:
		goto loc_822B4E80;
	case 73:
		goto loc_822B4EA8;
	case 74:
		goto loc_822B4ED0;
	case 75:
		goto loc_822B4EF8;
	case 76:
		goto loc_822B4F20;
	case 77:
		goto loc_822B4F48;
	case 78:
		goto loc_822B4F70;
	case 79:
		goto loc_822B4F98;
	case 80:
		goto loc_822B4FC0;
	case 81:
		goto loc_822B4FE8;
	case 82:
		goto loc_822B5010;
	case 83:
		goto loc_822B5038;
	case 84:
		goto loc_822B5060;
	case 85:
		goto loc_822B5088;
	case 86:
		goto loc_822B50B0;
	case 87:
		goto loc_822B50D8;
	case 88:
		goto loc_822B5100;
	case 89:
		goto loc_822B5128;
	case 90:
		goto loc_822B5150;
	case 91:
		goto loc_822B5178;
	case 92:
		goto loc_822B51A0;
	case 93:
		goto loc_822B51C8;
	case 94:
		goto loc_822B51F0;
	case 95:
		goto loc_822B5218;
	case 96:
		goto loc_822B5240;
	case 97:
		goto loc_822B5280;
	case 98:
		goto loc_822B52C0;
	case 99:
		goto loc_822B43D4;
	case 100:
		goto loc_822B4238;
	case 101:
		goto loc_822B52F8;
	case 102:
		goto loc_822B52F8;
	case 103:
		goto loc_822B52F8;
	default:
		return;
	}
	// lwz r17,17080(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17080);
	// lwz r17,17260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	// lwz r17,17292(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17292);
	// lwz r17,17260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	// lwz r17,17260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	// lwz r17,17260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	// lwz r17,17328(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17328);
	// lwz r17,17416(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17416);
	// lwz r17,17480(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17480);
	// lwz r17,17544(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17544);
	// lwz r17,17584(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17584);
	// lwz r17,17624(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17624);
	// lwz r17,17664(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17664);
	// lwz r17,17704(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17704);
	// lwz r17,17744(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17744);
	// lwz r17,17784(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17784);
	// lwz r17,17824(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17824);
	// lwz r17,17864(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17864);
	// lwz r17,17904(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17904);
	// lwz r17,17944(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17944);
	// lwz r17,17984(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17984);
	// lwz r17,18024(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18024);
	// lwz r17,18064(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18064);
	// lwz r17,18104(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18104);
	// lwz r17,18144(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18144);
	// lwz r17,18184(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18184);
	// lwz r17,18224(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18224);
	// lwz r17,18264(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18264);
	// lwz r17,18304(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18304);
	// lwz r17,18344(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18344);
	// lwz r17,18384(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18384);
	// lwz r17,18424(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18424);
	// lwz r17,18464(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18464);
	// lwz r17,18504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18504);
	// lwz r17,18544(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18544);
	// lwz r17,18584(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18584);
	// lwz r17,18640(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18640);
	// lwz r17,18696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18696);
	// lwz r17,18736(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18736);
	// lwz r17,18776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18776);
	// lwz r17,18816(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18816);
	// lwz r17,18856(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18856);
	// lwz r17,18896(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18896);
	// lwz r17,18936(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18936);
	// lwz r17,18976(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18976);
	// lwz r17,19016(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19016);
	// lwz r17,19056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19056);
	// lwz r17,19096(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19096);
	// lwz r17,19136(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19136);
	// lwz r17,19176(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	// lwz r17,19216(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19216);
	// lwz r17,19256(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19256);
	// lwz r17,19296(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19296);
	// lwz r17,19336(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19336);
	// lwz r17,19376(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19376);
	// lwz r17,19416(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19416);
	// lwz r17,19456(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19456);
	// lwz r17,19496(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19496);
	// lwz r17,19536(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19536);
	// lwz r17,19576(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19576);
	// lwz r17,19616(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19616);
	// lwz r17,19656(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19656);
	// lwz r17,19696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19696);
	// lwz r17,19736(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19736);
	// lwz r17,19776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19776);
	// lwz r17,19816(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19816);
	// lwz r17,19856(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19856);
	// lwz r17,19896(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19896);
	// lwz r17,19936(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19936);
	// lwz r17,19976(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19976);
	// lwz r17,20016(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20016);
	// lwz r17,20056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	// lwz r17,20096(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20096);
	// lwz r17,20136(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20136);
	// lwz r17,20176(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20176);
	// lwz r17,20216(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20216);
	// lwz r17,20256(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20256);
	// lwz r17,20296(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20296);
	// lwz r17,20336(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20336);
	// lwz r17,20376(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20376);
	// lwz r17,20416(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	// lwz r17,20456(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20456);
	// lwz r17,20496(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20496);
	// lwz r17,20536(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20536);
	// lwz r17,20576(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20576);
	// lwz r17,20616(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20616);
	// lwz r17,20656(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20656);
	// lwz r17,20696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20696);
	// lwz r17,20736(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20736);
	// lwz r17,20776(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20776);
	// lwz r17,20816(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20816);
	// lwz r17,20856(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20856);
	// lwz r17,20896(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20896);
	// lwz r17,20936(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20936);
	// lwz r17,20976(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20976);
	// lwz r17,21016(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21016);
	// lwz r17,21056(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21056);
	// lwz r17,21120(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// lwz r17,21184(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21184);
	// lwz r17,17364(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17364);
	// lwz r17,16952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16952);
	// lwz r17,21240(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21240);
	// lwz r17,21240(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21240);
	// lwz r17,21240(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21240);
loc_822B4238:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf r11,r3,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r3.s64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b4268
	if (!ctx.cr6.eq) goto loc_822B4268;
	// lwz r11,31476(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r20,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r20.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r9,16416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16416, ctx.r9.u32);
loc_822B4268:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,16416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16416);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822b430c
	if (!ctx.cr6.gt) goto loc_822B430C;
	// bl 0x822b3c48
	ctx.lr = 0x822B4280;
	sub_822B3C48(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x822b4344
	if (ctx.cr6.lt) goto loc_822B4344;
	// bne cr6,0x822b42d4
	if (!ctx.cr6.eq) goto loc_822B42D4;
	// lwz r10,16456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16456);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r3,15024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// stw r22,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r22.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,101
	ctx.r11.s64 = ctx.r11.s64 + 101;
	// b 0x822b4074
	goto loc_822B4074;
loc_822B42B8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r6,16444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// b 0x822b402c
	goto loc_822B402C;
loc_822B42D4:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x822b4360
	if (!ctx.cr6.lt) goto loc_822B4360;
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// lwz r10,16416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16416);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r28.u32);
	// bl 0x822b34e0
	ctx.lr = 0x822B42F4;
	sub_822B34E0(ctx, base);
	// lwz r11,15024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// lwz r6,16444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x822b4028
	goto loc_822B4028;
loc_822B430C:
	// lwz r27,15024(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// add r28,r27,r30
	ctx.r28.u64 = ctx.r27.u64 + ctx.r30.u64;
	// stw r28,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r28.u32);
	// bl 0x822b34e0
	ctx.lr = 0x822B431C;
	sub_822B34E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822b35f0
	ctx.lr = 0x822B4324;
	sub_822B35F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b4338
	if (!ctx.cr6.eq) goto loc_822B4338;
	// lwz r6,16444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x822b4028
	goto loc_822B4028;
loc_822B4338:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822b3f48
	goto loc_822B3F48;
loc_822B4344:
	// lwz r27,15024(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15024);
	// add r28,r27,r30
	ctx.r28.u64 = ctx.r27.u64 + ctx.r30.u64;
	// stw r28,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r28.u32);
	// bl 0x822b34e0
	ctx.lr = 0x822B4354;
	sub_822B34E0(ctx, base);
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822b3f48
	goto loc_822B3F48;
loc_822B4360:
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// lwz r10,16452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16452);
	// b 0x822b3f34
	goto loc_822B3F34;
loc_822B436C:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lwz r8,31428(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// b 0x822b3f34
	goto loc_822B3F34;
loc_822B438C:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lwz r8,31428(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// stw r17,16456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16456, ctx.r17.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// b 0x822b3f34
	goto loc_822B3F34;
loc_822B43B0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lwz r8,31428(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// stw r18,16456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16456, ctx.r18.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// b 0x822b3f34
	goto loc_822B3F34;
loc_822B43D4:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,31428(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// lwz r6,31480(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 31480);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x823e16f0
	ctx.lr = 0x822B43FC;
	sub_823E16F0(ctx, base);
	// lwz r10,16452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16452);
	// lwz r29,16448(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// b 0x822b3f34
	goto loc_822B3F34;
loc_822B4408:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,31428(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r10,-2
	ctx.r4.s64 = ctx.r10.s64 + -2;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// bl 0x822b33a0
	ctx.lr = 0x822B4430;
	sub_822B33A0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4448:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r10,31428(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r10,-3
	ctx.r4.s64 = ctx.r10.s64 + -3;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// bl 0x822b33a0
	ctx.lr = 0x822B4470;
	sub_822B33A0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4488:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,261
	ctx.r3.s64 = 261;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B44B0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,262
	ctx.r3.s64 = 262;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B44D8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,263
	ctx.r3.s64 = 263;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4500:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,264
	ctx.r3.s64 = 264;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4528:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,265
	ctx.r3.s64 = 265;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4550:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,266
	ctx.r3.s64 = 266;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4578:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,267
	ctx.r3.s64 = 267;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B45A0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,268
	ctx.r3.s64 = 268;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B45C8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,269
	ctx.r3.s64 = 269;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B45F0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,270
	ctx.r3.s64 = 270;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4618:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,271
	ctx.r3.s64 = 271;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4640:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,272
	ctx.r3.s64 = 272;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4668:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,273
	ctx.r3.s64 = 273;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4690:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,274
	ctx.r3.s64 = 274;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B46B8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,275
	ctx.r3.s64 = 275;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B46E0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,276
	ctx.r3.s64 = 276;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4708:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,277
	ctx.r3.s64 = 277;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4730:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,278
	ctx.r3.s64 = 278;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4758:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,279
	ctx.r3.s64 = 279;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4780:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,280
	ctx.r3.s64 = 280;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B47A8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,281
	ctx.r3.s64 = 281;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B47D0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,282
	ctx.r3.s64 = 282;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B47F8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,283
	ctx.r3.s64 = 283;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4820:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,284
	ctx.r3.s64 = 284;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4848:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,285
	ctx.r3.s64 = 285;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4870:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,286
	ctx.r3.s64 = 286;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4898:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r10,20464
	ctx.r4.s64 = ctx.r10.s64 + 20464;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// bl 0x823deeb8
	ctx.lr = 0x822B48C4;
	sub_823DEEB8(ctx, base);
	// li r3,287
	ctx.r3.s64 = 287;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B48D0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r10,-18316
	ctx.r4.s64 = ctx.r10.s64 + -18316;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// bl 0x823deeb8
	ctx.lr = 0x822B48FC;
	sub_823DEEB8(ctx, base);
	// li r3,288
	ctx.r3.s64 = 288;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4908:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,290
	ctx.r3.s64 = 290;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4930:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,289
	ctx.r3.s64 = 289;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4958:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,294
	ctx.r3.s64 = 294;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4980:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,291
	ctx.r3.s64 = 291;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B49A8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,293
	ctx.r3.s64 = 293;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B49D0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,292
	ctx.r3.s64 = 292;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B49F8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,295
	ctx.r3.s64 = 295;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4A20:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,296
	ctx.r3.s64 = 296;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4A48:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,297
	ctx.r3.s64 = 297;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4A70:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,298
	ctx.r3.s64 = 298;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4A98:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,299
	ctx.r3.s64 = 299;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4AC0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,300
	ctx.r3.s64 = 300;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4AE8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,301
	ctx.r3.s64 = 301;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4B10:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,302
	ctx.r3.s64 = 302;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4B38:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,303
	ctx.r3.s64 = 303;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4B60:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,304
	ctx.r3.s64 = 304;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4B88:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,305
	ctx.r3.s64 = 305;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4BB0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,306
	ctx.r3.s64 = 306;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4BD8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,307
	ctx.r3.s64 = 307;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4C00:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4C28:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,309
	ctx.r3.s64 = 309;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4C50:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,310
	ctx.r3.s64 = 310;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4C78:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,311
	ctx.r3.s64 = 311;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4CA0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,312
	ctx.r3.s64 = 312;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4CC8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,313
	ctx.r3.s64 = 313;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4CF0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,314
	ctx.r3.s64 = 314;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4D18:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,315
	ctx.r3.s64 = 315;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4D40:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,316
	ctx.r3.s64 = 316;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4D68:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,317
	ctx.r3.s64 = 317;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4D90:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,318
	ctx.r3.s64 = 318;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4DB8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,319
	ctx.r3.s64 = 319;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4DE0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,320
	ctx.r3.s64 = 320;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4E08:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,321
	ctx.r3.s64 = 321;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4E30:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,322
	ctx.r3.s64 = 322;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4E58:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,323
	ctx.r3.s64 = 323;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4E80:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,324
	ctx.r3.s64 = 324;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4EA8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,325
	ctx.r3.s64 = 325;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4ED0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,326
	ctx.r3.s64 = 326;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4EF8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,327
	ctx.r3.s64 = 327;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4F20:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,328
	ctx.r3.s64 = 328;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4F48:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,330
	ctx.r3.s64 = 330;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4F70:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,331
	ctx.r3.s64 = 331;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4F98:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,332
	ctx.r3.s64 = 332;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4FC0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,333
	ctx.r3.s64 = 333;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B4FE8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,334
	ctx.r3.s64 = 334;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5010:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,335
	ctx.r3.s64 = 335;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5038:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,336
	ctx.r3.s64 = 336;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5060:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,337
	ctx.r3.s64 = 337;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5088:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,338
	ctx.r3.s64 = 338;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B50B0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,339
	ctx.r3.s64 = 339;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B50D8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,340
	ctx.r3.s64 = 340;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5100:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,341
	ctx.r3.s64 = 341;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5128:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,342
	ctx.r3.s64 = 342;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5150:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,343
	ctx.r3.s64 = 343;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5178:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B51A0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,345
	ctx.r3.s64 = 345;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B51C8:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,346
	ctx.r3.s64 = 346;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B51F0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,347
	ctx.r3.s64 = 347;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5218:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r3,348
	ctx.r3.s64 = 348;
	// lwz r9,31428(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5240:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r6,15
	ctx.r6.s64 = 15;
	// lwz r10,31428(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// bl 0x822a19a8
	ctx.lr = 0x822B526C;
	sub_822A19A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,258
	ctx.r3.s64 = 258;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5280:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r6,15
	ctx.r6.s64 = 15;
	// lwz r10,31428(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r8.u32);
	// bl 0x822a19a8
	ctx.lr = 0x822B52AC;
	sub_822A19A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,329
	ctx.r3.s64 = 329;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B52C0:
	// lwz r11,16428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r10,31428(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31428);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,-25520
	ctx.r4.s64 = ctx.r9.s64 + -25520;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// stw r10,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r10.u32);
	// bl 0x8229e338
	ctx.lr = 0x822B52EC;
	sub_8229E338(ctx, base);
	// li r3,257
	ctx.r3.s64 = 257;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B52F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822B5304:
	// bl 0x823e10e0
	ctx.lr = 0x822B5308;
	sub_823E10E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// addi r5,r10,-25572
	ctx.r5.s64 = ctx.r10.s64 + -25572;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823e0ef8
	ctx.lr = 0x822B5320;
	sub_823E0EF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823e0e60
	ctx.lr = 0x822B5328;
	sub_823E0E60(ctx, base);
}

PPC_WEAK_FUNC(sub_822B3E50) {
	__imp__sub_822B3E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B5328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822B5330;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-2272
	ctx.r31.s64 = ctx.r1.s64 + -2272;
	// stwu r1,-2272(r1)
	ea = -2272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-31859
	ctx.r19.s64 = -2087911424;
	// li r10,-2
	ctx.r10.s64 = -2;
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r10,31448(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31448, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r25,r9,-2
	ctx.r25.s64 = ctx.r9.s64 + -2;
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r18,31452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31452, ctx.r18.u32);
	// addi r16,r10,-25880
	ctx.r16.s64 = ctx.r10.s64 + -25880;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// stw r16,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r16.u32);
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r9,-25868
	ctx.r10.s64 = ctx.r9.s64 + -25868;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// addi r23,r31,112
	ctx.r23.s64 = ctx.r31.s64 + 112;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r22,r31,512
	ctx.r22.s64 = ctx.r31.s64 + 512;
	// li r20,200
	ctx.r20.s64 = 200;
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// lis r17,-31859
	ctx.r17.s64 = -2087911424;
	// addi r26,r11,15017
	ctx.r26.s64 = ctx.r11.s64 + 15017;
	// addi r21,r8,12184
	ctx.r21.s64 = ctx.r8.s64 + 12184;
	// addi r24,r7,26080
	ctx.r24.s64 = ctx.r7.s64 + 26080;
loc_822B53A8:
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// sthu r27,2(r25)
	ea = 2 + ctx.r25.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r25.u32 = ea;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822b5494
	if (ctx.cr6.lt) goto loc_822B5494;
	// subf r11,r23,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r23.s64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r20,10000
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 10000, ctx.xer);
	// bge cr6,0x822b6c30
	if (!ctx.cr6.lt) goto loc_822B6C30;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// ble cr6,0x822b53ec
	if (!ctx.cr6.gt) goto loc_822B53EC;
	// li r20,10000
	ctx.r20.s64 = 10000;
loc_822B53EC:
	// rlwinm r6,r20,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r11,r6
	ctx.r11.s64 = -ctx.r6.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dedd4
	ctx.lr = 0x822B53FC;
	sub_823DEDD4(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ble cr6,0x822b5430
	if (!ctx.cr6.gt) goto loc_822B5430;
	// subf r10,r23,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r23.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B5420:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822b5420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B5420;
loc_822B5430:
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823dedd4
	ctx.lr = 0x822B5440;
	sub_823DEDD4(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r22,r1,96
	ctx.r22.s64 = ctx.r1.s64 + 96;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// ble cr6,0x822b5474
	if (!ctx.cr6.gt) goto loc_822B5474;
	// subf r8,r22,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r22.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B5464:
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822b5464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B5464;
loc_822B5474:
	// add r10,r9,r23
	ctx.r10.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r9,r6,r23
	ctx.r9.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r25,r10,-2
	ctx.r25.s64 = ctx.r10.s64 + -2;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b6c90
	if (!ctx.cr6.lt) goto loc_822B6C90;
loc_822B5494:
	// addi r11,r24,1544
	ctx.r11.s64 = ctx.r24.s64 + 1544;
	// lwz r3,31448(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 31448);
	// rlwinm r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r29,-32768
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -32768, ctx.xer);
	// beq cr6,0x822b57e8
	if (ctx.cr6.eq) goto loc_822B57E8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822b54c0
	if (!ctx.cr6.eq) goto loc_822B54C0;
	// bl 0x822b3e50
	ctx.lr = 0x822B54BC;
	sub_822B3E50(ctx, base);
	// stw r3,31448(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31448, ctx.r3.u32);
loc_822B54C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822b54d8
	if (ctx.cr6.gt) goto loc_822B54D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,31448(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31448, ctx.r3.u32);
	// b 0x822b54f0
	goto loc_822B54F0;
loc_822B54D8:
	// cmplwi cr6,r3,349
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 349, ctx.xer);
	// bgt cr6,0x822b54ec
	if (ctx.cr6.gt) goto loc_822B54EC;
	// lbzx r11,r3,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r24.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x822b54f0
	goto loc_822B54F0;
loc_822B54EC:
	// li r11,124
	ctx.r11.s64 = 124;
loc_822B54F0:
	// add. r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x822b57e8
	if (ctx.cr0.lt) goto loc_822B57E8;
	// cmpwi cr6,r10,1553
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1553, ctx.xer);
	// bgt cr6,0x822b57e8
	if (ctx.cr6.gt) goto loc_822B57E8;
	// addi r9,r24,5288
	ctx.r9.s64 = ctx.r24.s64 + 5288;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822b57e8
	if (!ctx.cr6.eq) goto loc_822B57E8;
	// addi r11,r24,2176
	ctx.r11.s64 = ctx.r24.s64 + 2176;
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822b57b0
	if (!ctx.cr6.lt) goto loc_822B57B0;
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// beq cr6,0x822b57fc
	if (ctx.cr6.eq) goto loc_822B57FC;
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
loc_822B5538:
	// addi r10,r24,632
	ctx.r10.s64 = ctx.r24.s64 + 632;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822b5560
	if (!ctx.cr6.gt) goto loc_822B5560;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r8.u64);
loc_822B5560:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,138
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 138, ctx.xer);
	// bgt cr6,0x822b6ba4
	if (ctx.cr6.gt) goto loc_822B6BA4;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21892
	ctx.r12.s64 = ctx.r12.s64 + 21892;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822B5908;
	case 1:
		goto loc_822B591C;
	case 2:
		goto loc_822B5930;
	case 3:
		goto loc_822B5930;
	case 4:
		goto loc_822B5944;
	case 5:
		goto loc_822B5960;
	case 6:
		goto loc_822B59A8;
	case 7:
		goto loc_822B59F0;
	case 8:
		goto loc_822B5A28;
	case 9:
		goto loc_822B5A60;
	case 10:
		goto loc_822B5A98;
	case 11:
		goto loc_822B5AD0;
	case 12:
		goto loc_822B5B08;
	case 13:
		goto loc_822B5B40;
	case 14:
		goto loc_822B5B78;
	case 15:
		goto loc_822B5BB0;
	case 16:
		goto loc_822B5BE8;
	case 17:
		goto loc_822B5C20;
	case 18:
		goto loc_822B5C58;
	case 19:
		goto loc_822B5C90;
	case 20:
		goto loc_822B5CC8;
	case 21:
		goto loc_822B5D00;
	case 22:
		goto loc_822B5D38;
	case 23:
		goto loc_822B5D70;
	case 24:
		goto loc_822B5D8C;
	case 25:
		goto loc_822B5DA8;
	case 26:
		goto loc_822B5DB8;
	case 27:
		goto loc_822B5DC4;
	case 28:
		goto loc_822B5DC4;
	case 29:
		goto loc_822B5DDC;
	case 30:
		goto loc_822B5E1C;
	case 31:
		goto loc_822B5E4C;
	case 32:
		goto loc_822B5E94;
	case 33:
		goto loc_822B5EC4;
	case 34:
		goto loc_822B5EE0;
	case 35:
		goto loc_822B5EFC;
	case 36:
		goto loc_822B5F18;
	case 37:
		goto loc_822B5F4C;
	case 38:
		goto loc_822B5F80;
	case 39:
		goto loc_822B5FA4;
	case 40:
		goto loc_822B5FCC;
	case 41:
		goto loc_822B6008;
	case 42:
		goto loc_822B6024;
	case 43:
		goto loc_822B6040;
	case 44:
		goto loc_822B605C;
	case 45:
		goto loc_822B6078;
	case 46:
		goto loc_822B6094;
	case 47:
		goto loc_822B60B0;
	case 48:
		goto loc_822B60CC;
	case 49:
		goto loc_822B60DC;
	case 50:
		goto loc_822B60F8;
	case 51:
		goto loc_822B6110;
	case 52:
		goto loc_822B6128;
	case 53:
		goto loc_822B6140;
	case 54:
		goto loc_822B6158;
	case 55:
		goto loc_822B6170;
	case 56:
		goto loc_822B6188;
	case 57:
		goto loc_822B5EC4;
	case 58:
		goto loc_822B61AC;
	case 59:
		goto loc_822B61C4;
	case 60:
		goto loc_822B61F4;
	case 61:
		goto loc_822B620C;
	case 62:
		goto loc_822B6224;
	case 63:
		goto loc_822B623C;
	case 64:
		goto loc_822B625C;
	case 65:
		goto loc_822B6298;
	case 66:
		goto loc_822B62D0;
	case 67:
		goto loc_822B6300;
	case 68:
		goto loc_822B6330;
	case 69:
		goto loc_822B6354;
	case 70:
		goto loc_822B6384;
	case 71:
		goto loc_822B63A0;
	case 72:
		goto loc_822B63B8;
	case 73:
		goto loc_822B63E4;
	case 74:
		goto loc_822B6400;
	case 75:
		goto loc_822B641C;
	case 76:
		goto loc_822B644C;
	case 77:
		goto loc_822B647C;
	case 78:
		goto loc_822B64AC;
	case 79:
		goto loc_822B64DC;
	case 80:
		goto loc_822B650C;
	case 81:
		goto loc_822B653C;
	case 82:
		goto loc_822B656C;
	case 83:
		goto loc_822B659C;
	case 84:
		goto loc_822B65CC;
	case 85:
		goto loc_822B65FC;
	case 86:
		goto loc_822B662C;
	case 87:
		goto loc_822B665C;
	case 88:
		goto loc_822B6674;
	case 89:
		goto loc_822B66A4;
	case 90:
		goto loc_822B66D4;
	case 91:
		goto loc_822B66EC;
	case 92:
		goto loc_822B6704;
	case 93:
		goto loc_822B671C;
	case 94:
		goto loc_822B6738;
	case 95:
		goto loc_822B6754;
	case 96:
		goto loc_822B6BA4;
	case 97:
		goto loc_822B5DB8;
	case 98:
		goto loc_822B6BA4;
	case 99:
		goto loc_822B6BA4;
	case 100:
		goto loc_822B6764;
	case 101:
		goto loc_822B6790;
	case 102:
		goto loc_822B67B4;
	case 103:
		goto loc_822B67F0;
	case 104:
		goto loc_822B6824;
	case 105:
		goto loc_822B6864;
	case 106:
		goto loc_822B68CC;
	case 107:
		goto loc_822B691C;
	case 108:
		goto loc_822B693C;
	case 109:
		goto loc_822B5DB8;
	case 110:
		goto loc_822B695C;
	case 111:
		goto loc_822B697C;
	case 112:
		goto loc_822B6BA4;
	case 113:
		goto loc_822B6998;
	case 114:
		goto loc_822B6B94;
	case 115:
		goto loc_822B69A8;
	case 116:
		goto loc_822B69C8;
	case 117:
		goto loc_822B6BA4;
	case 118:
		goto loc_822B5DB8;
	case 119:
		goto loc_822B69F4;
	case 120:
		goto loc_822B6A2C;
	case 121:
		goto loc_822B6BA4;
	case 122:
		goto loc_822B6B94;
	case 123:
		goto loc_822B69F4;
	case 124:
		goto loc_822B6A40;
	case 125:
		goto loc_822B6A08;
	case 126:
		goto loc_822B6A40;
	case 127:
		goto loc_822B69A8;
	case 128:
		goto loc_822B69C8;
	case 129:
		goto loc_822B6A70;
	case 130:
		goto loc_822B6ABC;
	case 131:
		goto loc_822B6AE8;
	case 132:
		goto loc_822B6B00;
	case 133:
		goto loc_822B6B18;
	case 134:
		goto loc_822B6998;
	case 135:
		goto loc_822B6B94;
	case 136:
		goto loc_822B6B5C;
	case 137:
		goto loc_822B6B84;
	case 138:
		goto loc_822B6B94;
	default:
		return;
	}
	// lwz r17,22792(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22792);
	// lwz r17,22812(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22812);
	// lwz r17,22832(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22832);
	// lwz r17,22832(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22832);
	// lwz r17,22852(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22852);
	// lwz r17,22880(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22880);
	// lwz r17,22952(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22952);
	// lwz r17,23024(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23024);
	// lwz r17,23080(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23080);
	// lwz r17,23136(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23136);
	// lwz r17,23192(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23192);
	// lwz r17,23248(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23248);
	// lwz r17,23304(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23304);
	// lwz r17,23360(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23360);
	// lwz r17,23416(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23416);
	// lwz r17,23472(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23472);
	// lwz r17,23528(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23528);
	// lwz r17,23584(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23584);
	// lwz r17,23640(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23640);
	// lwz r17,23696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23696);
	// lwz r17,23752(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23752);
	// lwz r17,23808(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	// lwz r17,23864(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23864);
	// lwz r17,23920(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23920);
	// lwz r17,23948(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23948);
	// lwz r17,23976(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23976);
	// lwz r17,23992(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23992);
	// lwz r17,24004(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24004);
	// lwz r17,24004(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24004);
	// lwz r17,24028(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwz r17,24092(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24092);
	// lwz r17,24140(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24140);
	// lwz r17,24212(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24212);
	// lwz r17,24260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24260);
	// lwz r17,24288(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24288);
	// lwz r17,24316(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24316);
	// lwz r17,24344(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24344);
	// lwz r17,24396(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24396);
	// lwz r17,24448(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24448);
	// lwz r17,24484(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24484);
	// lwz r17,24524(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24524);
	// lwz r17,24584(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24584);
	// lwz r17,24612(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// lwz r17,24640(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24640);
	// lwz r17,24668(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24668);
	// lwz r17,24696(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24696);
	// lwz r17,24724(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	// lwz r17,24752(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24752);
	// lwz r17,24780(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24780);
	// lwz r17,24796(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24796);
	// lwz r17,24824(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	// lwz r17,24848(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24848);
	// lwz r17,24872(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24872);
	// lwz r17,24896(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24896);
	// lwz r17,24920(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24920);
	// lwz r17,24944(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24944);
	// lwz r17,24968(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24968);
	// lwz r17,24260(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24260);
	// lwz r17,25004(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25004);
	// lwz r17,25028(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25028);
	// lwz r17,25076(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25076);
	// lwz r17,25100(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25100);
	// lwz r17,25124(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25124);
	// lwz r17,25148(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25148);
	// lwz r17,25180(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25180);
	// lwz r17,25240(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25240);
	// lwz r17,25296(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25296);
	// lwz r17,25344(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r17,25392(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25392);
	// lwz r17,25428(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25428);
	// lwz r17,25476(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25476);
	// lwz r17,25504(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25504);
	// lwz r17,25528(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25528);
	// lwz r17,25572(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25572);
	// lwz r17,25600(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25600);
	// lwz r17,25628(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25628);
	// lwz r17,25676(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25676);
	// lwz r17,25724(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25724);
	// lwz r17,25772(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25772);
	// lwz r17,25820(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25820);
	// lwz r17,25868(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// lwz r17,25916(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25916);
	// lwz r17,25964(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25964);
	// lwz r17,26012(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	// lwz r17,26060(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26060);
	// lwz r17,26108(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26108);
	// lwz r17,26156(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26156);
	// lwz r17,26204(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26204);
	// lwz r17,26228(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26228);
	// lwz r17,26276(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26276);
	// lwz r17,26324(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26324);
	// lwz r17,26348(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	// lwz r17,26372(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26372);
	// lwz r17,26396(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26396);
	// lwz r17,26424(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26424);
	// lwz r17,26452(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26452);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,23992(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23992);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,26468(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26468);
	// lwz r17,26512(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26512);
	// lwz r17,26548(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26548);
	// lwz r17,26608(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// lwz r17,26660(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26660);
	// lwz r17,26724(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26724);
	// lwz r17,26828(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26828);
	// lwz r17,26908(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26908);
	// lwz r17,26940(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26940);
	// lwz r17,23992(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23992);
	// lwz r17,26972(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26972);
	// lwz r17,27004(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,27032(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27032);
	// lwz r17,27540(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
	// lwz r17,27048(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27048);
	// lwz r17,27080(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27080);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,23992(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23992);
	// lwz r17,27124(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27124);
	// lwz r17,27180(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27180);
	// lwz r17,27556(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27556);
	// lwz r17,27540(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
	// lwz r17,27124(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27124);
	// lwz r17,27200(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r17,27144(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// lwz r17,27200(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r17,27048(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27048);
	// lwz r17,27080(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27080);
	// lwz r17,27248(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27248);
	// lwz r17,27324(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27324);
	// lwz r17,27368(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27368);
	// lwz r17,27392(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27392);
	// lwz r17,27416(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27416);
	// lwz r17,27032(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27032);
	// lwz r17,27540(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
	// lwz r17,27484(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27484);
	// lwz r17,27524(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	// lwz r17,27540(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
loc_822B57B0:
	// beq cr6,0x822b57fc
	if (ctx.cr6.eq) goto loc_822B57FC;
	// cmpwi cr6,r10,287
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 287, ctx.xer);
	// beq cr6,0x822b6c84
	if (ctx.cr6.eq) goto loc_822B6C84;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b57cc
	if (ctx.cr6.eq) goto loc_822B57CC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,31448(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31448, ctx.r11.u32);
loc_822B57CC:
	// ld r11,31420(r17)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r17.u32 + 31420);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stdu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r30.u32 = ea;
	// beq cr6,0x822b57e0
	if (ctx.cr6.eq) goto loc_822B57E0;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
loc_822B57E0:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x822b53a8
	goto loc_822B53A8;
loc_822B57E8:
	// addi r11,r24,912
	ctx.r11.s64 = ctx.r24.s64 + 912;
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b5538
	if (!ctx.cr6.eq) goto loc_822B5538;
loc_822B57FC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x822b5854
	if (!ctx.cr6.eq) goto loc_822B5854;
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,31452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31452);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31452, ctx.r11.u32);
	// bne cr6,0x822b582c
	if (!ctx.cr6.eq) goto loc_822B582C;
	// lwz r3,11(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8229e338
	ctx.lr = 0x822B5828;
	sub_8229E338(ctx, base);
	// b 0x822b586c
	goto loc_822B586C;
loc_822B582C:
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x822b586c
	if (ctx.cr6.eq) goto loc_822B586C;
	// lwz r11,11(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x8229e338
	ctx.lr = 0x822B5850;
	sub_8229E338(ctx, base);
	// b 0x822b586c
	goto loc_822B586C;
loc_822B5854:
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// bne cr6,0x822b586c
	if (!ctx.cr6.eq) goto loc_822B586C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b6c90
	if (ctx.cr6.eq) goto loc_822B6C90;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,31448(r19)
	PPC_STORE_U32(ctx.r19.u32 + 31448, ctx.r11.u32);
loc_822B586C:
	// li r18,3
	ctx.r18.s64 = 3;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_822B5874:
	// addi r10,r24,1544
	ctx.r10.s64 = ctx.r24.s64 + 1544;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// beq cr6,0x822b58d4
	if (ctx.cr6.eq) goto loc_822B58D4;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822b58d4
	if (ctx.cr0.lt) goto loc_822B58D4;
	// cmpwi cr6,r11,1553
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1553, ctx.xer);
	// bgt cr6,0x822b58d4
	if (ctx.cr6.gt) goto loc_822B58D4;
	// addi r10,r24,5288
	ctx.r10.s64 = ctx.r24.s64 + 5288;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822b58d4
	if (!ctx.cr6.eq) goto loc_822B58D4;
	// addi r10,r24,2176
	ctx.r10.s64 = ctx.r24.s64 + 2176;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822b58d0
	if (!ctx.cr6.lt) goto loc_822B58D0;
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// beq cr6,0x822b58d4
	if (ctx.cr6.eq) goto loc_822B58D4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x822b5538
	goto loc_822B5538;
loc_822B58D0:
	// bne cr6,0x822b58f0
	if (!ctx.cr6.eq) goto loc_822B58F0;
loc_822B58D4:
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x822b6c90
	if (ctx.cr6.eq) goto loc_822B6C90;
	// lhzu r11,-2(r25)
	ea = -2 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x822b5874
	goto loc_822B5874;
loc_822B58F0:
	// cmpwi cr6,r11,287
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 287, ctx.xer);
	// beq cr6,0x822b6c84
	if (ctx.cr6.eq) goto loc_822B6C84;
	// ld r10,31420(r17)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r17.u32 + 31420);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stdu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r30.u32 = ea;
	// b 0x822b53a8
	goto loc_822B53A8;
loc_822B5908:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x8229e868
	ctx.lr = 0x822B5914;
	sub_8229E868(ctx, base);
	// stw r3,16423(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16423, ctx.r3.u32);
	// b 0x822b6ba4
	goto loc_822B6BA4;
loc_822B591C:
	// li r3,70
	ctx.r3.s64 = 70;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e7d8
	ctx.lr = 0x822B5928;
	sub_8229E7D8(ctx, base);
	// stw r3,16423(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16423, ctx.r3.u32);
	// b 0x822b6ba4
	goto loc_822B6BA4;
loc_822B5930:
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e7d8
	ctx.lr = 0x822B593C;
	sub_8229E7D8(ctx, base);
	// stw r3,16423(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16423, ctx.r3.u32);
	// b 0x822b6ba4
	goto loc_822B6BA4;
loc_822B5944:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B594C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8229e828
	ctx.lr = 0x822B595C;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5960:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5968;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5974;
	sub_8229E710(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5980;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8229e9d8
	ctx.lr = 0x822B599C;
	sub_8229E9D8(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B59A8:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B59B0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B59BC;
	sub_8229E710(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B59C8;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x8229e9d8
	ctx.lr = 0x822B59E4;
	sub_8229E9D8(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B59F0:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B59F8;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x8229e708
	ctx.lr = 0x822B5A04;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5A1C;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5A28:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5A30;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8229e708
	ctx.lr = 0x822B5A3C;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5A54;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5A60:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5A68;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8229e708
	ctx.lr = 0x822B5A74;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5A8C;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5A98:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5AA0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8229e708
	ctx.lr = 0x822B5AAC;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5AC4;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5AD0:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5AD8;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8229e708
	ctx.lr = 0x822B5AE4;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5AFC;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5B08:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5B10;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x8229e708
	ctx.lr = 0x822B5B1C;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5B34;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5B40:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5B48;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8229e708
	ctx.lr = 0x822B5B54;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5B6C;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5B78:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5B80;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8229e708
	ctx.lr = 0x822B5B8C;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5BA4;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5BB0:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5BB8;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8229e708
	ctx.lr = 0x822B5BC4;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5BDC;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5BE8:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5BF0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8229e708
	ctx.lr = 0x822B5BFC;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5C14;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5C20:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5C28;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8229e708
	ctx.lr = 0x822B5C34;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5C4C;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5C58:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5C60;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8229e708
	ctx.lr = 0x822B5C6C;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5C84;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5C90:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5C98;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8229e708
	ctx.lr = 0x822B5CA4;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5CBC;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5CC8:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5CD0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8229e708
	ctx.lr = 0x822B5CDC;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5CF4;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5D00:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5D08;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8229e708
	ctx.lr = 0x822B5D14;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5D2C;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5D38:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5D40;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8229e708
	ctx.lr = 0x822B5D4C;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,54
	ctx.r3.s64 = 54;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B5D64;
	sub_8229E940(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5D70:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5D78;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8229e828
	ctx.lr = 0x822B5D88;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5D8C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5D94;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8229e828
	ctx.lr = 0x822B5DA4;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5DA8:
	// li r3,70
	ctx.r3.s64 = 70;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e7d8
	ctx.lr = 0x822B5DB4;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B5DC0;
	sub_8229E798(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5DC4:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B5DD4;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5DDC:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B5DEC;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5DF8;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e8b8
	ctx.lr = 0x822B5E0C;
	sub_8229E8B8(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5E1C:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B5E2C;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5E38;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e828
	ctx.lr = 0x822B5E48;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5E4C:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B5E5C;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5E68;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e8b8
	ctx.lr = 0x822B5E7C;
	sub_8229E8B8(ctx, base);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5E94:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B5EA4;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5EB0;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e828
	ctx.lr = 0x822B5EC0;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5EC4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5ECC;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8229e828
	ctx.lr = 0x822B5EDC;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5EE0:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5EE8;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8229e828
	ctx.lr = 0x822B5EF8;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5EFC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5F04;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8229e828
	ctx.lr = 0x822B5F14;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5F18:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5F20;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5F2C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8229e8b8
	ctx.lr = 0x822B5F40;
	sub_8229E8B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5F4C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B5F54;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B5F60;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8229e8b8
	ctx.lr = 0x822B5F74;
	sub_8229E8B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5F80:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5F88;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8229e828
	ctx.lr = 0x822B5F98;
	sub_8229E828(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5FA4:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5FAC;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// bl 0x8229e8b8
	ctx.lr = 0x822B5FC0;
	sub_8229E8B8(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B5FCC:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B5FD4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B5FE0;
	sub_8229E710(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,26
	ctx.r3.s64 = 26;
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e9d8
	ctx.lr = 0x822B5FFC;
	sub_8229E9D8(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6008:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6010;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x8229e828
	ctx.lr = 0x822B6020;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6024:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B602C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8229e828
	ctx.lr = 0x822B603C;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6040:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6048;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8229e828
	ctx.lr = 0x822B6058;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B605C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6064;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8229e828
	ctx.lr = 0x822B6074;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6078:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6080;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8229e828
	ctx.lr = 0x822B6090;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6094:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B609C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8229e828
	ctx.lr = 0x822B60AC;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B60B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B60B8;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8229e828
	ctx.lr = 0x822B60C8;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B60CC:
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e7d8
	ctx.lr = 0x822B60D8;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B60DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B60E4;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8229e828
	ctx.lr = 0x822B60F4;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B60F8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6100;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x8229e7d8
	ctx.lr = 0x822B610C;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6110:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6118;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6124;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6128:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6130;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x8229e7d8
	ctx.lr = 0x822B613C;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6140:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6148;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6154;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6158:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6160;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8229e7d8
	ctx.lr = 0x822B616C;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6170:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6178;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6184;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6188:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6190;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x8229e828
	ctx.lr = 0x822B61A0;
	sub_8229E828(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B61AC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B61B4;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x8229e7d8
	ctx.lr = 0x822B61C0;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B61C4:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B61D4;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B61E0;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e828
	ctx.lr = 0x822B61F0;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B61F4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B61FC;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,77
	ctx.r3.s64 = 77;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6208;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B620C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6214;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6220;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6224:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B622C;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6238;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B623C:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6244;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e8b8
	ctx.lr = 0x822B6258;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B625C:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B626C;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6278;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e8b8
	ctx.lr = 0x822B628C;
	sub_8229E8B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6298:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B62A0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B62AC;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,14
	ctx.r3.s64 = 14;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// bl 0x8229e940
	ctx.lr = 0x822B62C4;
	sub_8229E940(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B62D0:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B62E0;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B62EC;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e828
	ctx.lr = 0x822B62FC;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6300:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B6310;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B631C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,85
	ctx.r3.s64 = 85;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e828
	ctx.lr = 0x822B632C;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6330:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6338;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x8229e828
	ctx.lr = 0x822B6348;
	sub_8229E828(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6354:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B635C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6368;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6380;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6384:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B638C;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8229e828
	ctx.lr = 0x822B639C;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B63A0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B63A8;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8229e7d8
	ctx.lr = 0x822B63B4;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B63B8:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B63C0;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B63CC;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8229e8b8
	ctx.lr = 0x822B63E0;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B63E4:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B63EC;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x8229e828
	ctx.lr = 0x822B63FC;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6400:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6408;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x8229e828
	ctx.lr = 0x822B6418;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B641C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6424;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x8229e708
	ctx.lr = 0x822B6430;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6448;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B644C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6454;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8229e708
	ctx.lr = 0x822B6460;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6478;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B647C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6484;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8229e708
	ctx.lr = 0x822B6490;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B64A8;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B64AC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B64B4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8229e708
	ctx.lr = 0x822B64C0;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B64D8;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B64DC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B64E4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8229e708
	ctx.lr = 0x822B64F0;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6508;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B650C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6514;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8229e708
	ctx.lr = 0x822B6520;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6538;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B653C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6544;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8229e708
	ctx.lr = 0x822B6550;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6568;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B656C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6574;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8229e708
	ctx.lr = 0x822B6580;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B6598;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B659C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B65A4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8229e708
	ctx.lr = 0x822B65B0;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B65C8;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B65CC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B65D4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8229e708
	ctx.lr = 0x822B65E0;
	sub_8229E708(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B65F8;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B65FC:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6604;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6610;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e940
	ctx.lr = 0x822B6628;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B662C:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6634;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6640;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,61
	ctx.r3.s64 = 61;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e940
	ctx.lr = 0x822B6658;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B665C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6664;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6670;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6674:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B667C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6688;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,63
	ctx.r3.s64 = 63;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e940
	ctx.lr = 0x822B66A0;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B66A4:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B66AC;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B66B8;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e940
	ctx.lr = 0x822B66D0;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B66D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B66DC;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8229e7d8
	ctx.lr = 0x822B66E8;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B66EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B66F4;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6700;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6704:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B670C;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6718;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B671C:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6724;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x8229e828
	ctx.lr = 0x822B6734;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6738:
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6740;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x8229e828
	ctx.lr = 0x822B6750;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6754:
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e7d8
	ctx.lr = 0x822B6760;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6764:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B676C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6778;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x8229e8b8
	ctx.lr = 0x822B678C;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6790:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6798;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,16419(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// li r3,42
	ctx.r3.s64 = 42;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e940
	ctx.lr = 0x822B67B0;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B67B4:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B67BC;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B67C8;
	sub_8229E710(ctx, base);
	// lwz r10,16419(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x8229ea90
	ctx.lr = 0x822B67EC;
	sub_8229EA90(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B67F0:
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B67F8;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6804;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r8,16419(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229e9d8
	ctx.lr = 0x822B6820;
	sub_8229E9D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6824:
	// lwz r3,-52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -52);
	// bl 0x8229e710
	ctx.lr = 0x822B682C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6838;
	sub_8229E710(ctx, base);
	// lwz r10,16419(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,-16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,45
	ctx.r3.s64 = 45;
	// lwz r5,-32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8229eaf8
	ctx.lr = 0x822B6860;
	sub_8229EAF8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6864:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B686C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6878;
	sub_8229E710(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6884;
	sub_8229E710(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,-44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// bl 0x8229e710
	ctx.lr = 0x822B6890;
	sub_8229E710(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r3,-60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// bl 0x8229e710
	ctx.lr = 0x822B689C;
	sub_8229E710(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// lwz r3,-48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x822b2e98
	ctx.lr = 0x822B68C4;
	sub_822B2E98(ctx, base);
	// lwz r16,108(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B68CC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B68D4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B68E0;
	sub_8229E710(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B68EC;
	sub_8229E710(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r3,-44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// bl 0x8229e710
	ctx.lr = 0x822B68F8;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwz r3,-32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x822b3200
	ctx.lr = 0x822B6918;
	sub_822B3200(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B691C:
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6924;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,65
	ctx.r3.s64 = 65;
	// lwz r4,-32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x8229e8b8
	ctx.lr = 0x822B6938;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B693C:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6944;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,16419(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// li r3,50
	ctx.r3.s64 = 50;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x8229e8b8
	ctx.lr = 0x822B6958;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B695C:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6964;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,16419(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// li r3,66
	ctx.r3.s64 = 66;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x8229e8b8
	ctx.lr = 0x822B6978;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B697C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6984;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,16419(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x8229e828
	ctx.lr = 0x822B6994;
	sub_8229E828(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6998:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x8229ec20
	ctx.lr = 0x822B69A4;
	sub_8229EC20(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B69A8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B69B0;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e868
	ctx.lr = 0x822B69BC;
	sub_8229E868(ctx, base);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229ebc0
	ctx.lr = 0x822B69C4;
	sub_8229EBC0(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B69C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B69D0;
	sub_8229E798(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B69DC;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e868
	ctx.lr = 0x822B69E8;
	sub_8229E868(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x822B69F0;
	sub_8229EBC0(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B69F4:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B6A04;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822B6A08:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6A10;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e868
	ctx.lr = 0x822B6A1C;
	sub_8229E868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229ec20
	ctx.lr = 0x822B6A28;
	sub_8229EC20(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6A2C:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2718
	ctx.lr = 0x822B6A3C;
	sub_822A2718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_822B6A40:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6A48;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229e868
	ctx.lr = 0x822B6A54;
	sub_8229E868(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B6A60;
	sub_8229E798(ctx, base);
	// bl 0x8229eb68
	ctx.lr = 0x822B6A64;
	sub_8229EB68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8229ec20
	ctx.lr = 0x822B6A6C;
	sub_8229EC20(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6A70:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,-48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// bl 0x822a2718
	ctx.lr = 0x822B6A80;
	sub_822A2718(ctx, base);
	// stw r3,-48(r30)
	PPC_STORE_U32(ctx.r30.u32 + -48, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6A8C;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// bl 0x8229e710
	ctx.lr = 0x822B6A98;
	sub_8229E710(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,16419(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16419);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// li r3,73
	ctx.r3.s64 = 73;
	// lwz r5,-32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// bl 0x8229ea30
	ctx.lr = 0x822B6AB8;
	sub_8229EA30(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6ABC:
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8229e710
	ctx.lr = 0x822B6AC4;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// bl 0x8229e710
	ctx.lr = 0x822B6AD0;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x8229e8b8
	ctx.lr = 0x822B6AE4;
	sub_8229E8B8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6AE8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6AF0;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6AFC;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6B00:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229e710
	ctx.lr = 0x822B6B08;
	sub_8229E710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x8229e7d8
	ctx.lr = 0x822B6B14;
	sub_8229E7D8(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6B18:
	// li r5,15
	ctx.r5.s64 = 15;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lwz r3,-24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// bl 0x822a2718
	ctx.lr = 0x822B6B28;
	sub_822A2718(ctx, base);
	// stw r3,-24(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24, ctx.r3.u32);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6B34;
	sub_8229E710(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x8229e710
	ctx.lr = 0x822B6B40;
	sub_8229E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// li r3,93
	ctx.r3.s64 = 93;
	// bl 0x8229e940
	ctx.lr = 0x822B6B58;
	sub_8229E940(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6B5C:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8229e710
	ctx.lr = 0x822B6B64;
	sub_8229E710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,91
	ctx.r3.s64 = 91;
	// bl 0x8229e828
	ctx.lr = 0x822B6B74;
	sub_8229E828(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6B84:
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8229ec20
	ctx.lr = 0x822B6B90;
	sub_8229EC20(ctx, base);
	// b 0x822b6ba0
	goto loc_822B6BA0;
loc_822B6B94:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e798
	ctx.lr = 0x822B6B9C;
	sub_8229E798(ctx, base);
	// bl 0x8229eb68
	ctx.lr = 0x822B6BA0;
	sub_8229EB68(ctx, base);
loc_822B6BA0:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_822B6BA4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subf r25,r9,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r9.s64;
	// addi r8,r24,352
	ctx.r8.s64 = ctx.r24.s64 + 352;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// addi r7,r24,2120
	ctx.r7.s64 = ctx.r24.s64 + 2120;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lhz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhzx r5,r28,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822b6c20
	if (ctx.cr0.lt) goto loc_822B6C20;
	// cmpwi cr6,r11,1553
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1553, ctx.xer);
	// bgt cr6,0x822b6c20
	if (ctx.cr6.gt) goto loc_822B6C20;
	// addi r8,r24,5288
	ctx.r8.s64 = ctx.r24.s64 + 5288;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822b6c20
	if (!ctx.cr6.eq) goto loc_822B6C20;
	// addi r10,r24,2176
	ctx.r10.s64 = ctx.r24.s64 + 2176;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// b 0x822b53a8
	goto loc_822B53A8;
loc_822B6C20:
	// addi r11,r24,1488
	ctx.r11.s64 = ctx.r24.s64 + 1488;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// b 0x822b53a8
	goto loc_822B53A8;
loc_822B6C30:
	// lwz r11,31448(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 31448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b6c54
	if (!ctx.cr6.eq) goto loc_822B6C54;
	// lwz r3,11(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8229e338
	ctx.lr = 0x822B6C48;
	sub_8229E338(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r31,2272
	ctx.r1.s64 = ctx.r31.s64 + 2272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822B6C54:
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x822b6c78
	if (ctx.cr6.eq) goto loc_822B6C78;
	// lwz r11,11(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x8229e338
	ctx.lr = 0x822B6C78;
	sub_8229E338(ctx, base);
loc_822B6C78:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r31,2272
	ctx.r1.s64 = ctx.r31.s64 + 2272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822B6C84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,2272
	ctx.r1.s64 = ctx.r31.s64 + 2272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822B6C90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,2272
	ctx.r1.s64 = ctx.r31.s64 + 2272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B5328) {
	__imp__sub_822B5328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B6C9C) {
	__imp__sub_822B6C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B6CA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31859
	ctx.r29.s64 = -2087911424;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r29,31440
	ctx.r5.s64 = ctx.r29.s64 + 31440;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r5,-16408
	ctx.r9.s64 = ctx.r5.s64 + -16408;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,-16412(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16412, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r4,-16423(r5)
	PPC_STORE_U8(ctx.r5.u32 + -16423, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,14916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14916, ctx.r10.u32);
	// bl 0x822b3708
	ctx.lr = 0x822B6D00;
	sub_822B3708(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// bl 0x822b5328
	ctx.lr = 0x822B6D24;
	sub_822B5328(ctx, base);
	// lwz r11,31440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31440);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B6CA0) {
	__imp__sub_822B6CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B6D34) {
	__imp__sub_822B6D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822b6d58
	if (ctx.cr6.lt) goto loc_822B6D58;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822b6d5c
	if (!ctx.cr6.gt) goto loc_822B6D5C;
loc_822B6D58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B6D5C:
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// stw r11,31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31504, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B6D38) {
	__imp__sub_822B6D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B6D68) {
	__imp__sub_822B6D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6D78) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r11,-25104
	ctx.r8.s64 = ctx.r11.s64 + -25104;
	// addi r3,r10,-25120
	ctx.r3.s64 = ctx.r10.s64 + -25120;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822B6DAC;
	sub_822E1618(ctx, base);
	// lis r31,-31859
	ctx.r31.s64 = -2087911424;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,-25152
	ctx.r6.s64 = ctx.r9.s64 + -25152;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r3,31492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31492, ctx.r3.u32);
	// addi r3,r8,-25172
	ctx.r3.s64 = ctx.r8.s64 + -25172;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822B6DD0;
	sub_822E15D0(ctx, base);
	// lis r7,-31859
	ctx.r7.s64 = -2087911424;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,-25208
	ctx.r6.s64 = ctx.r6.s64 + -25208;
	// stw r3,31496(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31496, ctx.r3.u32);
	// addi r3,r5,-25188
	ctx.r3.s64 = ctx.r5.s64 + -25188;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822e15d0
	ctx.lr = 0x822B6DF4;
	sub_822E15D0(ctx, base);
	// lis r4,-31859
	ctx.r4.s64 = -2087911424;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-25240
	ctx.r6.s64 = ctx.r11.s64 + -25240;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,31500(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31500, ctx.r3.u32);
	// addi r3,r10,-25256
	ctx.r3.s64 = ctx.r10.s64 + -25256;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x822B6E18;
	sub_822E15D0(ctx, base);
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,-25292
	ctx.r6.s64 = ctx.r8.s64 + -25292;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,31488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31488, ctx.r3.u32);
	// addi r3,r7,-25308
	ctx.r3.s64 = ctx.r7.s64 + -25308;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822B6E3C;
	sub_822E15D0(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r3,r5,-25332
	ctx.r3.s64 = ctx.r5.s64 + -25332;
	// addi r6,r6,-25376
	ctx.r6.s64 = ctx.r6.s64 + -25376;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822B6E58;
	sub_822E15D0(ctx, base);
	// lis r4,-31859
	ctx.r4.s64 = -2087911424;
	// lwz r11,31492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// stw r3,31484(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31484, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822b6e7c
	if (ctx.cr6.lt) goto loc_822B6E7C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822b6e80
	if (!ctx.cr6.gt) goto loc_822B6E80;
loc_822B6E7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B6E80:
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// stw r11,31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31504, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822B6D78) {
	__imp__sub_822B6D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B6E9C) {
	__imp__sub_822B6E9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,14920
	ctx.r6.s64 = ctx.r11.s64 + 14920;
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822b6f10
	if (!ctx.cr6.eq) goto loc_822B6F10;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r11,34953
	ctx.r8.u64 = ctx.r11.u64 | 34953;
loc_822B6EC8:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822b6f14
	if (!ctx.cr6.eq) goto loc_822B6F14;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// blt cr6,0x822b6ec8
	if (ctx.cr6.lt) goto loc_822B6EC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B6F10:
	// blr 
	return;
loc_822B6F14:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B6EA0) {
	__imp__sub_822B6EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B6F1C) {
	__imp__sub_822B6F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6F20) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82177148
	ctx.lr = 0x822B6F38;
	sub_82177148(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6f54
	if (ctx.cr6.eq) goto loc_822B6F54;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B6F54:
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

PPC_WEAK_FUNC(sub_822B6F20) {
	__imp__sub_822B6F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6F68) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82177148
	ctx.lr = 0x822B6F80;
	sub_82177148(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b6f9c
	if (ctx.cr6.eq) goto loc_822B6F9C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B6F9C:
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

PPC_WEAK_FUNC(sub_822B6F68) {
	__imp__sub_822B6F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b6f68
	sub_822B6F68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B6FB0) {
	__imp__sub_822B6FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B6FE8) {
	__imp__sub_822B6FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B6FEC) {
	__imp__sub_822B6FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B6FF0) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7044
	if (ctx.cr6.eq) goto loc_822B7044;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7044
	if (ctx.cr6.eq) goto loc_822B7044;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7044
	if (ctx.cr6.eq) goto loc_822B7044;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7044
	if (ctx.cr6.eq) goto loc_822B7044;
	// bl 0x822b6f68
	ctx.lr = 0x822B7040;
	sub_822B6F68(ctx, base);
	// b 0x822b7048
	goto loc_822B7048;
loc_822B7044:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822B7048:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b7110
	if (!ctx.cr6.eq) goto loc_822B7110;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b70f4
	if (ctx.cr6.eq) goto loc_822B70F4;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b7090
	if (ctx.cr6.eq) goto loc_822B7090;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,-25016
	ctx.r4.s64 = ctx.r11.s64 + -25016;
	// bl 0x822830e8
	ctx.lr = 0x822B708C;
	sub_822830E8(ctx, base);
	// b 0x822b70a0
	goto loc_822B70A0;
loc_822B7090:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-25064
	ctx.r4.s64 = ctx.r11.s64 + -25064;
	// bl 0x82280c30
	ctx.lr = 0x822B70A0;
	sub_82280C30(ctx, base);
loc_822B70A0:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r31,r11,31512
	ctx.r31.s64 = ctx.r11.s64 + 31512;
	// addi r11,r10,-25084
	ctx.r11.s64 = ctx.r10.s64 + -25084;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B70C0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822b70c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B70C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x822e8280
	ctx.lr = 0x822B70DC;
	sub_822E8280(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25092
	ctx.r5.s64 = ctx.r11.s64 + -25092;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x822e8280
	ctx.lr = 0x822B70F0;
	sub_822E8280(ctx, base);
	// b 0x822b710c
	goto loc_822B710C;
loc_822B70F4:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,31512
	ctx.r31.s64 = ctx.r11.s64 + 31512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x822B710C;
	sub_822E7E98(ctx, base);
loc_822B710C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B7110:
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

PPC_WEAK_FUNC(sub_822B6FF0) {
	__imp__sub_822B6FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B7130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,31500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7184
	if (ctx.cr6.eq) goto loc_822B7184;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7184
	if (ctx.cr6.eq) goto loc_822B7184;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7184
	if (ctx.cr6.eq) goto loc_822B7184;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7184
	if (ctx.cr6.eq) goto loc_822B7184;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b6f68
	ctx.lr = 0x822B7180;
	sub_822B6F68(ctx, base);
	// b 0x822b7188
	goto loc_822B7188;
loc_822B7184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822B7188:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b723c
	if (!ctx.cr6.eq) goto loc_822B723C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7218
	if (ctx.cr6.eq) goto loc_822B7218;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7218
	if (ctx.cr6.eq) goto loc_822B7218;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b71f4
	if (ctx.cr6.eq) goto loc_822B71F4;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b71f4
	if (ctx.cr6.eq) goto loc_822B71F4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x822b71f4
	if (ctx.cr6.eq) goto loc_822B71F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-24932
	ctx.r4.s64 = ctx.r11.s64 + -24932;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822830e8
	ctx.lr = 0x822B71E8;
	sub_822830E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-13092
	ctx.r3.s64 = ctx.r11.s64 + -13092;
	// b 0x822b7220
	goto loc_822B7220;
loc_822B71F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x822B720C;
	sub_82280C30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-13092
	ctx.r3.s64 = ctx.r11.s64 + -13092;
	// b 0x822b7220
	goto loc_822B7220;
loc_822B7218:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
loc_822B7220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822B7228;
	sub_822E84F0(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x822b723c
	if (!ctx.cr6.eq) goto loc_822B723C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822B723C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_822B7244:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b7244
	if (!ctx.cr6.eq) goto loc_822B7244;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7128) {
	__imp__sub_822B7128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7264) {
	__imp__sub_822B7264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822B7270;
	__savegprlr_14(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// stw r5,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r5.u32);
	// lis r6,26214
	ctx.r6.s64 = 1717960704;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r3,r6,26215
	ctx.r3.u64 = ctx.r6.u64 | 26215;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-22760(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22760);
	// lis r5,-31859
	ctx.r5.s64 = -2087911424;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r5,32536
	ctx.r8.s64 = ctx.r5.s64 + 32536;
	// mulhw r10,r11,r3
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32)) >> 32;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// stw r11,-22760(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22760, ctx.r11.u32);
	// add r25,r10,r8
	ctx.r25.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823de090
	ctx.lr = 0x822B72DC;
	sub_823DE090(ctx, base);
	// lbz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r14,1
	ctx.r14.s64 = 1;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b7670
	if (ctx.cr6.eq) goto loc_822B7670;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r10,r10,-24804
	ctx.r10.s64 = ctx.r10.s64 + -24804;
	// addi r7,r11,-24840
	ctx.r7.s64 = ctx.r11.s64 + -24840;
	// addi r15,r9,-24888
	ctx.r15.s64 = ctx.r9.s64 + -24888;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r20,r8,-24892
	ctx.r20.s64 = ctx.r8.s64 + -24892;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_822B7330:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b7360
	if (ctx.cr6.eq) goto loc_822B7360;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x822b7360
	if (ctx.cr6.eq) goto loc_822B7360;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x822b7360
	if (ctx.cr6.eq) goto loc_822B7360;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x822b7360
	if (ctx.cr6.eq) goto loc_822B7360;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x822b7634
	goto loc_822B7634;
loc_822B7360:
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x822b75f0
	if (!ctx.cr6.gt) goto loc_822B75F0;
	// subf r26,r4,r23
	ctx.r26.s64 = ctx.r23.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// bl 0x822e7e98
	ctx.lr = 0x822B7378;
	sub_822E7E98(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x822b73c0
	if (ctx.cr6.eq) goto loc_822B73C0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b7128
	ctx.lr = 0x822B7394;
	sub_822B7128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b767c
	if (ctx.cr6.eq) goto loc_822B767C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B73A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b73a4
	if (!ctx.cr6.eq) goto loc_822B73A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822B73C0:
	// add r21,r26,r24
	ctx.r21.u64 = ctx.r26.u64 + ctx.r24.u64;
	// cmpwi cr6,r21,1024
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1024, ctx.xer);
	// blt cr6,0x822b7434
	if (ctx.cr6.lt) goto loc_822B7434;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7420
	if (ctx.cr6.eq) goto loc_822B7420;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7420
	if (ctx.cr6.eq) goto loc_822B7420;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7420
	if (ctx.cr6.eq) goto loc_822B7420;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7420
	if (ctx.cr6.eq) goto loc_822B7420;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x822b7420
	if (ctx.cr6.eq) goto loc_822B7420;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822B7420;
	sub_822830E8(ctx, base);
loc_822B7420:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822B7434;
	sub_82280900(ctx, base);
loc_822B7434:
	// addic. r29,r26,-2
	ctx.xer.ca = ctx.r26.u32 > 1;
	ctx.r29.s64 = ctx.r26.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x822b749c
	if (!ctx.cr0.gt) goto loc_822B749C;
loc_822B7440:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e01e0
	ctx.lr = 0x822B7458;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b7490
	if (!ctx.cr6.eq) goto loc_822B7490;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x822B746C;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b7490
	if (ctx.cr6.eq) goto loc_822B7490;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822b748c
	if (!ctx.cr6.eq) goto loc_822B748C;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r16,1
	ctx.r16.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x822b7490
	goto loc_822B7490;
loc_822B748C:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_822B7490:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822b7440
	if (ctx.cr6.lt) goto loc_822B7440;
loc_822B749C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x822b75c8
	if (!ctx.cr6.gt) goto loc_822B75C8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822b75c8
	if (!ctx.cr6.gt) goto loc_822B75C8;
	// addic. r28,r24,-2
	ctx.xer.ca = ctx.r24.u32 > 1;
	ctx.r28.s64 = ctx.r24.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x822b755c
	if (!ctx.cr0.gt) goto loc_822B755C;
loc_822B74BC:
	// add r29,r31,r25
	ctx.r29.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e01e0
	ctx.lr = 0x822B74D0;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b751c
	if (!ctx.cr6.eq) goto loc_822B751C;
	// add r30,r31,r25
	ctx.r30.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x822B74E8;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b751c
	if (ctx.cr6.eq) goto loc_822B751C;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addic. r30,r10,-48
	ctx.xer.ca = ctx.r10.u32 > 47;
	ctx.r30.s64 = ctx.r10.s64 + -48;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822b7514
	if (!ctx.cr0.eq) goto loc_822B7514;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822B7514;
	sub_82280900(ctx, base);
loc_822B7514:
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r14.s32, ctx.xer);
	// beq cr6,0x822b752c
	if (ctx.cr6.eq) goto loc_822B752C;
loc_822B751C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822b74bc
	if (ctx.cr6.lt) goto loc_822B74BC;
	// b 0x822b755c
	goto loc_822B755C;
loc_822B752C:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_822B753C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b753c
	if (!ctx.cr6.eq) goto loc_822B753C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_822B755C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b75bc
	if (ctx.cr6.eq) goto loc_822B75BC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_822B7578:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b7578
	if (!ctx.cr6.eq) goto loc_822B7578;
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_822B75A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b75a0
	if (!ctx.cr6.eq) goto loc_822B75A0;
	// addi r24,r21,-3
	ctx.r24.s64 = ctx.r21.s64 + -3;
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
loc_822B75BC:
	// lwz r27,2340(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2340);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// b 0x822b75f0
	goto loc_822B75F0;
loc_822B75C8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r10.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_822B75D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822b75d8
	if (!ctx.cr6.eq) goto loc_822B75D8;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
loc_822B75F0:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x822b760c
	if (!ctx.cr6.eq) goto loc_822B760C;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x822b7618
	goto loc_822B7618;
loc_822B760C:
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x822b761c
	if (!ctx.cr6.eq) goto loc_822B761C;
	// li r18,0
	ctx.r18.s64 = 0;
loc_822B7618:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_822B761C:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x822b7630
	if (!ctx.cr6.eq) goto loc_822B7630;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_822B7630:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_822B7634:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b7330
	if (!ctx.cr6.eq) goto loc_822B7330;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x822b7670
	if (ctx.cr6.eq) goto loc_822B7670;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x822b7670
	if (!ctx.cr6.gt) goto loc_822B7670;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// li r10,37
	ctx.r10.s64 = 37;
loc_822B7658:
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 22, ctx.xer);
	// bne cr6,0x822b7668
	if (!ctx.cr6.eq) goto loc_822B7668;
	// stbx r10,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
loc_822B7668:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822b7658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B7658;
loc_822B7670:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_822B767C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7268) {
	__imp__sub_822B7268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7688) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,176
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 176, ctx.xer);
	// blt cr6,0x822b76ac
	if (ctx.cr6.lt) goto loc_822B76AC;
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bgt cr6,0x822b76ac
	if (ctx.cr6.gt) goto loc_822B76AC;
	// cmplwi cr6,r4,160
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 160, ctx.xer);
	// ble cr6,0x822b76ac
	if (!ctx.cr6.gt) goto loc_822B76AC;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b76b0
	if (ctx.cr6.lt) goto loc_822B76B0;
loc_822B76AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B76B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7688) {
	__imp__sub_822B7688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B76B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,176
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 176, ctx.xer);
	// blt cr6,0x822b76e4
	if (ctx.cr6.lt) goto loc_822B76E4;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bgt cr6,0x822b76e4
	if (ctx.cr6.gt) goto loc_822B76E4;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// ble cr6,0x822b76e4
	if (!ctx.cr6.gt) goto loc_822B76E4;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b76e8
	if (ctx.cr6.lt) goto loc_822B76E8;
loc_822B76E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B76E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B76B8) {
	__imp__sub_822B76B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B76F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,176
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 176, ctx.xer);
	// blt cr6,0x822b771c
	if (ctx.cr6.lt) goto loc_822B771C;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bgt cr6,0x822b771c
	if (ctx.cr6.gt) goto loc_822B771C;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// ble cr6,0x822b771c
	if (!ctx.cr6.gt) goto loc_822B771C;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7720
	if (ctx.cr6.lt) goto loc_822B7720;
loc_822B771C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7750
	if (ctx.cr6.eq) goto loc_822B7750;
	// addis r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -65536;
	// addi r10,r10,20320
	ctx.r10.s64 = ctx.r10.s64 + 20320;
	// rlwinm r11,r10,25,7,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFE;
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822B7750:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B76F0) {
	__imp__sub_822B76F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7758) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 161, ctx.xer);
	// blt cr6,0x822b776c
	if (ctx.cr6.lt) goto loc_822B776C;
	// cmplwi cr6,r11,198
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 198, ctx.xer);
	// ble cr6,0x822b777c
	if (!ctx.cr6.gt) goto loc_822B777C;
loc_822B776C:
	// cmplwi cr6,r11,201
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 201, ctx.xer);
	// blt cr6,0x822b77a8
	if (ctx.cr6.lt) goto loc_822B77A8;
	// cmplwi cr6,r11,249
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 249, ctx.xer);
	// bgt cr6,0x822b77a8
	if (ctx.cr6.gt) goto loc_822B77A8;
loc_822B777C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x822b7790
	if (ctx.cr6.lt) goto loc_822B7790;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// ble cr6,0x822b77a0
	if (!ctx.cr6.gt) goto loc_822B77A0;
loc_822B7790:
	// cmplwi cr6,r11,161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 161, ctx.xer);
	// blt cr6,0x822b77a8
	if (ctx.cr6.lt) goto loc_822B77A8;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b77a8
	if (ctx.cr6.gt) goto loc_822B77A8;
loc_822B77A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B77A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7758) {
	__imp__sub_822B7758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B77B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,41280
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 41280, ctx.xer);
	// blt cr6,0x822b77c4
	if (ctx.cr6.lt) goto loc_822B77C4;
	// cmplwi cr6,r3,41300
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 41300, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_822B77C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B77B0) {
	__imp__sub_822B77B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B77CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B77CC) {
	__imp__sub_822B77CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B77D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 161, ctx.xer);
	// blt cr6,0x822b77e4
	if (ctx.cr6.lt) goto loc_822B77E4;
	// cmplwi cr6,r11,198
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 198, ctx.xer);
	// ble cr6,0x822b77f4
	if (!ctx.cr6.gt) goto loc_822B77F4;
loc_822B77E4:
	// cmplwi cr6,r11,201
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 201, ctx.xer);
	// blt cr6,0x822b7820
	if (ctx.cr6.lt) goto loc_822B7820;
	// cmplwi cr6,r11,249
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 249, ctx.xer);
	// bgt cr6,0x822b7820
	if (ctx.cr6.gt) goto loc_822B7820;
loc_822B77F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x822b7808
	if (ctx.cr6.lt) goto loc_822B7808;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// ble cr6,0x822b7818
	if (!ctx.cr6.gt) goto loc_822B7818;
loc_822B7808:
	// cmplwi cr6,r11,161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 161, ctx.xer);
	// blt cr6,0x822b7820
	if (ctx.cr6.lt) goto loc_822B7820;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b7820
	if (ctx.cr6.gt) goto loc_822B7820;
loc_822B7818:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822b7824
	goto loc_822B7824;
loc_822B7820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7824:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7864
	if (ctx.cr6.eq) goto loc_822B7864;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addi r11,r11,24256
	ctx.r11.s64 = ctx.r11.s64 + 24256;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x822b7848
	if (ctx.cr6.lt) goto loc_822B7848;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_822B7848:
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r11,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822B7864:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B77D0) {
	__imp__sub_822B77D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B786C) {
	__imp__sub_822B786C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7870) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,129
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 129, ctx.xer);
	// blt cr6,0x822b7880
	if (ctx.cr6.lt) goto loc_822B7880;
	// cmplwi cr6,r3,159
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 159, ctx.xer);
	// ble cr6,0x822b7890
	if (!ctx.cr6.gt) goto loc_822B7890;
loc_822B7880:
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// blt cr6,0x822b78b8
	if (ctx.cr6.lt) goto loc_822B78B8;
	// cmplwi cr6,r3,239
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 239, ctx.xer);
	// bgt cr6,0x822b78b8
	if (ctx.cr6.gt) goto loc_822B78B8;
loc_822B7890:
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x822b78a0
	if (ctx.cr6.lt) goto loc_822B78A0;
	// cmplwi cr6,r4,126
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 126, ctx.xer);
	// ble cr6,0x822b78b0
	if (!ctx.cr6.gt) goto loc_822B78B0;
loc_822B78A0:
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// blt cr6,0x822b78b8
	if (ctx.cr6.lt) goto loc_822B78B8;
	// cmplwi cr6,r4,252
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 252, ctx.xer);
	// bgt cr6,0x822b78b8
	if (ctx.cr6.gt) goto loc_822B78B8;
loc_822B78B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B78B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7870) {
	__imp__sub_822B7870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B78C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b78d8
	if (ctx.cr6.lt) goto loc_822B78D8;
	// cmplwi cr6,r11,159
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 159, ctx.xer);
	// ble cr6,0x822b78e8
	if (!ctx.cr6.gt) goto loc_822B78E8;
loc_822B78D8:
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// blt cr6,0x822b7910
	if (ctx.cr6.lt) goto loc_822B7910;
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bgt cr6,0x822b7910
	if (ctx.cr6.gt) goto loc_822B7910;
loc_822B78E8:
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x822b78f8
	if (ctx.cr6.lt) goto loc_822B78F8;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// ble cr6,0x822b7908
	if (!ctx.cr6.gt) goto loc_822B7908;
loc_822B78F8:
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x822b7910
	if (ctx.cr6.lt) goto loc_822B7910;
	// cmplwi cr6,r10,252
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 252, ctx.xer);
	// bgt cr6,0x822b7910
	if (ctx.cr6.gt) goto loc_822B7910;
loc_822B7908:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B7910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B78C0) {
	__imp__sub_822B78C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7918) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,33088
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33088, ctx.xer);
	// blt cr6,0x822b792c
	if (ctx.cr6.lt) goto loc_822B792C;
	// cmplwi cr6,r3,33106
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33106, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_822B792C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7918) {
	__imp__sub_822B7918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7934) {
	__imp__sub_822B7934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7938) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b7950
	if (ctx.cr6.lt) goto loc_822B7950;
	// cmplwi cr6,r11,159
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 159, ctx.xer);
	// ble cr6,0x822b7960
	if (!ctx.cr6.gt) goto loc_822B7960;
loc_822B7950:
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// blt cr6,0x822b7988
	if (ctx.cr6.lt) goto loc_822B7988;
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bgt cr6,0x822b7988
	if (ctx.cr6.gt) goto loc_822B7988;
loc_822B7960:
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x822b7970
	if (ctx.cr6.lt) goto loc_822B7970;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// ble cr6,0x822b7980
	if (!ctx.cr6.gt) goto loc_822B7980;
loc_822B7970:
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x822b7988
	if (ctx.cr6.lt) goto loc_822B7988;
	// cmplwi cr6,r10,252
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 252, ctx.xer);
	// bgt cr6,0x822b7988
	if (ctx.cr6.gt) goto loc_822B7988;
loc_822B7980:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822b798c
	goto loc_822B798C;
loc_822B7988:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B798C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b79d4
	if (ctx.cr6.eq) goto loc_822B79D4;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addi r11,r11,32448
	ctx.r11.s64 = ctx.r11.s64 + 32448;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x822b79b0
	if (ctx.cr6.lt) goto loc_822B79B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B79B0:
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r10,24320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24320, ctx.xer);
	// blt cr6,0x822b79c0
	if (ctx.cr6.lt) goto loc_822B79C0;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
loc_822B79C0:
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mulli r11,r9,188
	ctx.r11.s64 = ctx.r9.s64 * 188;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822B79D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7938) {
	__imp__sub_822B7938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B79DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B79DC) {
	__imp__sub_822B79DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B79E0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b7a0c
	if (ctx.cr6.lt) goto loc_822B7A0C;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b7a0c
	if (ctx.cr6.gt) goto loc_822B7A0C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x822b7a0c
	if (!ctx.cr6.gt) goto loc_822B7A0C;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7a10
	if (ctx.cr6.lt) goto loc_822B7A10;
loc_822B7A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7A10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B79E0) {
	__imp__sub_822B79E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7A18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b7a48
	if (ctx.cr6.lt) goto loc_822B7A48;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b7a48
	if (ctx.cr6.gt) goto loc_822B7A48;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x822b7a48
	if (!ctx.cr6.gt) goto loc_822B7A48;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7a4c
	if (ctx.cr6.lt) goto loc_822B7A4C;
loc_822B7A48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7A4C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7A18) {
	__imp__sub_822B7A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7A54) {
	__imp__sub_822B7A54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7A58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,33088
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33088, ctx.xer);
	// ble cr6,0x822b7a6c
	if (!ctx.cr6.gt) goto loc_822B7A6C;
	// cmplwi cr6,r3,33102
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33102, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_822B7A6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7A58) {
	__imp__sub_822B7A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7A74) {
	__imp__sub_822B7A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7A78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b7aa8
	if (ctx.cr6.lt) goto loc_822B7AA8;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b7aa8
	if (ctx.cr6.gt) goto loc_822B7AA8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x822b7aa8
	if (!ctx.cr6.gt) goto loc_822B7AA8;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7aac
	if (ctx.cr6.lt) goto loc_822B7AAC;
loc_822B7AA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7ad4
	if (ctx.cr6.eq) goto loc_822B7AD4;
	// addis r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -65536;
	// addi r11,r11,32448
	ctx.r11.s64 = ctx.r11.s64 + 32448;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mulli r11,r9,95
	ctx.r11.s64 = ctx.r9.s64 * 95;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_822B7AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7A78) {
	__imp__sub_822B7A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7ADC) {
	__imp__sub_822B7ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r3,31504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31504);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7AE0) {
	__imp__sub_822B7AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7AEC) {
	__imp__sub_822B7AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x822b7b10
	if (ctx.cr6.lt) goto loc_822B7B10;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822B7B10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7AF0) {
	__imp__sub_822B7AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7B18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822b7b3c
	if (ctx.cr6.lt) goto loc_822B7B3C;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bge cr6,0x822b7b3c
	if (!ctx.cr6.lt) goto loc_822B7B3C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,14920
	ctx.r9.s64 = ctx.r11.s64 + 14920;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_822B7B3C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r3,14920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7B18) {
	__imp__sub_822B7B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822B7B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,14920
	ctx.r29.s64 = ctx.r11.s64 + 14920;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822B7B6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822B7B78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b7ba8
	if (ctx.cr6.eq) goto loc_822B7BA8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 + 120;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b7b6c
	if (ctx.cr6.lt) goto loc_822B7B6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822B7BA8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7B48) {
	__imp__sub_822B7B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7BB8) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,31504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b7db8
	if (ctx.cr6.eq) goto loc_822B7DB8;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822b7db8
	if (ctx.cr6.gt) goto loc_822B7DB8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b7c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B7C6C;
	// bdzf 4*cr6+eq,0x822b7ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B7CCC;
	// bne cr6,0x822b7d28
	if (!ctx.cr6.eq) goto loc_822B7D28;
	// cmplwi cr6,r10,176
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 176, ctx.xer);
	// blt cr6,0x822b7c2c
	if (ctx.cr6.lt) goto loc_822B7C2C;
	// cmplwi cr6,r10,200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 200, ctx.xer);
	// bgt cr6,0x822b7c2c
	if (ctx.cr6.gt) goto loc_822B7C2C;
	// cmplwi cr6,r4,160
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 160, ctx.xer);
	// ble cr6,0x822b7c2c
	if (!ctx.cr6.gt) goto loc_822B7C2C;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7c30
	if (ctx.cr6.lt) goto loc_822B7C30;
loc_822B7C2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7C30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7db8
	if (ctx.cr6.eq) goto loc_822B7DB8;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b7e08
	if (ctx.cr6.eq) goto loc_822B7E08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7C6C:
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822b7758
	ctx.lr = 0x822B7C7C;
	sub_822B7758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7db8
	if (ctx.cr6.eq) goto loc_822B7DB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822b7cb8
	if (ctx.cr6.eq) goto loc_822B7CB8;
	// cmplwi cr6,r9,41280
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 41280, ctx.xer);
	// blt cr6,0x822b7cac
	if (ctx.cr6.lt) goto loc_822B7CAC;
	// cmplwi cr6,r9,41300
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 41300, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7cb0
	if (ctx.cr6.lt) goto loc_822B7CB0;
loc_822B7CAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7CB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_822B7CB8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7CCC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822b7870
	ctx.lr = 0x822B7CD4;
	sub_822B7870(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7db8
	if (ctx.cr6.eq) goto loc_822B7DB8;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b7e08
	if (ctx.cr6.eq) goto loc_822B7E08;
	// cmplwi cr6,r3,33088
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33088, ctx.xer);
	// blt cr6,0x822b7d0c
	if (ctx.cr6.lt) goto loc_822B7D0C;
	// cmplwi cr6,r3,33106
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33106, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7d10
	if (ctx.cr6.lt) goto loc_822B7D10;
loc_822B7D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7D28:
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,129
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 129, ctx.xer);
	// blt cr6,0x822b7d60
	if (ctx.cr6.lt) goto loc_822B7D60;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bgt cr6,0x822b7d60
	if (ctx.cr6.gt) goto loc_822B7D60;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x822b7d60
	if (!ctx.cr6.gt) goto loc_822B7D60;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7d64
	if (ctx.cr6.lt) goto loc_822B7D64;
loc_822B7D60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7db8
	if (ctx.cr6.eq) goto loc_822B7DB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822b7e08
	if (ctx.cr6.eq) goto loc_822B7E08;
	// cmplwi cr6,r3,33088
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33088, ctx.xer);
	// ble cr6,0x822b7d94
	if (!ctx.cr6.gt) goto loc_822B7D94;
	// cmplwi cr6,r3,33102
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822b7d98
	if (ctx.cr6.lt) goto loc_822B7D98;
loc_822B7D94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B7D98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7DB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822b7e04
	if (ctx.cr6.eq) goto loc_822B7E04;
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// beq cr6,0x822b7dfc
	if (ctx.cr6.eq) goto loc_822B7DFC;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// beq cr6,0x822b7dfc
	if (ctx.cr6.eq) goto loc_822B7DFC;
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x822b7dfc
	if (ctx.cr6.eq) goto loc_822B7DFC;
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x822b7dfc
	if (ctx.cr6.eq) goto loc_822B7DFC;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// beq cr6,0x822b7dfc
	if (ctx.cr6.eq) goto loc_822B7DFC;
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822b7e00
	if (!ctx.cr6.eq) goto loc_822B7E00;
loc_822B7DFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B7E00:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_822B7E04:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822B7E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7BB8) {
	__imp__sub_822B7BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7E18) {
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
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbz r4,1(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// bl 0x822b7bb8
	ctx.lr = 0x822B7E40;
	sub_822B7BB8(ctx, base);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7E18) {
	__imp__sub_822B7E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7E60) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b7e88
	if (!ctx.cr6.eq) goto loc_822B7E88;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B7E88:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7f0c
	if (ctx.cr6.eq) goto loc_822B7F0C;
loc_822B7E98:
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,1(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// bl 0x822b7bb8
	ctx.lr = 0x822B7EAC;
	sub_822B7BB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,94
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 94, ctx.xer);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x822b7eec
	if (!ctx.cr6.eq) goto loc_822B7EEC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822b7efc
	if (ctx.cr6.eq) goto loc_822B7EFC;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x822b7efc
	if (ctx.cr6.eq) goto loc_822B7EFC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822b7efc
	if (ctx.cr6.lt) goto loc_822B7EFC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822b7efc
	if (ctx.cr6.gt) goto loc_822B7EFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x822b7f00
	goto loc_822B7F00;
loc_822B7EEC:
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x822b7f00
	if (ctx.cr6.eq) goto loc_822B7F00;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x822b7f00
	if (ctx.cr6.eq) goto loc_822B7F00;
loc_822B7EFC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_822B7F00:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b7e98
	if (!ctx.cr6.eq) goto loc_822B7E98;
loc_822B7F0C:
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

PPC_WEAK_FUNC(sub_822B7E60) {
	__imp__sub_822B7E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7F20) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-24756
	ctx.r6.s64 = ctx.r11.s64 + -24756;
	// addi r3,r10,-24768
	ctx.r3.s64 = ctx.r10.s64 + -24768;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822B7F48;
	sub_822E15D0(ctx, base);
	// lis r9,-31858
	ctx.r9.s64 = -2087845888;
	// stw r3,-22756(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7F20) {
	__imp__sub_822B7F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-22756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22756);
	// b 0x822e1f18
	sub_822E1F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7F60) {
	__imp__sub_822B7F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7F70) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x822b7fa8
	if (!ctx.cr6.lt) goto loc_822B7FA8;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// b 0x822b7fb0
	goto loc_822B7FB0;
loc_822B7FA8:
	// fmr f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_822B7FB0:
	// fcmpu cr6,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x822b7fc4
	if (!ctx.cr6.lt) goto loc_822B7FC4;
	// fneg f4,f4
	ctx.f4.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// b 0x822b7fcc
	goto loc_822B7FCC;
loc_822B7FC4:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B7FCC:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// fmr f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f0.f64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82120408
	ctx.lr = 0x822B7FE0;
	sub_82120408(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B7F70) {
	__imp__sub_822B7F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82144c50
	sub_82144C50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7FF0) {
	__imp__sub_822B7FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7FF4) {
	__imp__sub_822B7FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82144c50
	sub_82144C50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B7FF8) {
	__imp__sub_822B7FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B7FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B7FFC) {
	__imp__sub_822B7FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B8008;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x822B8010;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82144c50
	ctx.lr = 0x822B8038;
	sub_82144C50(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lfs f8,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmuls f3,f0,f29
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82120408
	ctx.lr = 0x822B8080;
	sub_82120408(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x822B808C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B8000) {
	__imp__sub_822B8000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8090) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,14296
	ctx.r10.s64 = ctx.r11.s64 + 14296;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b80d0
	if (ctx.cr6.eq) goto loc_822B80D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f8,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// bl 0x821202c8
	ctx.lr = 0x822B80D0;
	sub_821202C8(ctx, base);
loc_822B80D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8090) {
	__imp__sub_822B8090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B80E0) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r7,r11,14296
	ctx.r7.s64 = ctx.r11.s64 + 14296;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8120
	if (ctx.cr6.eq) goto loc_822B8120;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x822B8120;
	sub_82120408(ctx, base);
loc_822B8120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B80E0) {
	__imp__sub_822B80E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8130) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// lwz r11,-22732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-22732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22732, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8130) {
	__imp__sub_822B8130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8144) {
	__imp__sub_822B8144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// addi r11,r8,-22736
	ctx.r11.s64 = ctx.r8.s64 + -22736;
	// addi r9,r11,4360
	ctx.r9.s64 = ctx.r11.s64 + 4360;
	// lwz r11,-22736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22736);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r11,-22736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22736, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8148) {
	__imp__sub_822B8148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B817C) {
	__imp__sub_822B817C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8180) {
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
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x822b81b4
	if (!ctx.cr6.eq) goto loc_822B81B4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
loc_822B81B4:
	// lis r7,-31858
	ctx.r7.s64 = -2087845888;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r7,-22744
	ctx.r11.s64 = ctx.r7.s64 + -22744;
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// lwz r11,-22744(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22744);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,-22744(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22744, ctx.r11.u32);
	// bne cr6,0x822b8208
	if (!ctx.cr6.eq) goto loc_822B8208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822B8204;
	sub_822E8368(ctx, base);
	// b 0x822b8230
	goto loc_822B8230;
loc_822B8208:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x822b8230
	if (!ctx.cr6.eq) goto loc_822B8230;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,-18316
	ctx.r5.s64 = ctx.r11.s64 + -18316;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x822B8230;
	sub_822E8368(ctx, base);
loc_822B8230:
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

PPC_WEAK_FUNC(sub_822B8180) {
	__imp__sub_822B8180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8248) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b8260
	if (!ctx.cr6.eq) goto loc_822B8260;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_822B8260:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8248) {
	__imp__sub_822B8248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8268) {
	__imp__sub_822B8268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8278) {
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
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r8,-22744
	ctx.r11.s64 = ctx.r8.s64 + -22744;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// lwz r11,-22744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22744);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r7,-29844
	ctx.r5.s64 = ctx.r7.s64 + -29844;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 4;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// li r4,256
	ctx.r4.s64 = 256;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,-22744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22744, ctx.r11.u32);
	// bl 0x822e8368
	ctx.lr = 0x822B82D8;
	sub_822E8368(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822B8278) {
	__imp__sub_822B8278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B82F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B82F4) {
	__imp__sub_822B82F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B82F8) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b8324
	if (!ctx.cr6.eq) goto loc_822B8324;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B8324:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b8354
	if (!ctx.cr6.eq) goto loc_822B8354;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B8354:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x822B835C;
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

PPC_WEAK_FUNC(sub_822B82F8) {
	__imp__sub_822B82F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8370) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b83a8
	if (!ctx.cr6.eq) goto loc_822B83A8;
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
loc_822B83A8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b83b8
	if (ctx.cr6.eq) goto loc_822B83B8;
	// bl 0x823deaf8
	ctx.lr = 0x822B83B8;
	sub_823DEAF8(ctx, base);
loc_822B83B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B8370) {
	__imp__sub_822B8370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B83C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x822b8414
	if (ctx.cr6.gt) goto loc_822B8414;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b83f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B83F0;
	// bdzf 4*cr6+eq,0x822b83fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B83FC;
	// bne cr6,0x822b8408
	if (!ctx.cr6.eq) goto loc_822B8408;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24684
	ctx.r3.s64 = ctx.r11.s64 + -24684;
	// blr 
	return;
loc_822B83F0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24692
	ctx.r3.s64 = ctx.r11.s64 + -24692;
	// blr 
	return;
loc_822B83FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24700
	ctx.r3.s64 = ctx.r11.s64 + -24700;
	// blr 
	return;
loc_822B8408:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24712
	ctx.r3.s64 = ctx.r11.s64 + -24712;
	// blr 
	return;
loc_822B8414:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B83C8) {
	__imp__sub_822B83C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8420) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b8460
	if (!ctx.cr6.eq) goto loc_822B8460;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B8458;
	sub_822E0220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822b8464
	goto loc_822B8464;
loc_822B8460:
	// dcbt r0,r31
loc_822B8464:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

PPC_WEAK_FUNC(sub_822B8420) {
	__imp__sub_822B8420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B847C) {
	__imp__sub_822B847C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8480) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b84c8
	if (!ctx.cr6.eq) goto loc_822B84C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B84C0;
	sub_822E0220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822b84cc
	goto loc_822B84CC;
loc_822B84C8:
	// dcbt r0,r31
loc_822B84CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b8504
	if (ctx.cr6.eq) goto loc_822B8504;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b84f8
	if (!ctx.cr6.eq) goto loc_822B84F8;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8550
	goto loc_822B8550;
loc_822B84F8:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x822b850c
	if (!ctx.cr6.eq) goto loc_822B850C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_822B8504:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8550
	goto loc_822B8550;
loc_822B850C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b853c
	if (!ctx.cr6.eq) goto loc_822B853C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x822B8528;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r10,4
	ctx.r10.s64 = 4;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.f11.u32);
	// b 0x822b8550
	goto loc_822B8550;
loc_822B853C:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822B8548;
	sub_822DE8D8(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822B854C;
	sub_823DEAF8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_822B8550:
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

PPC_WEAK_FUNC(sub_822B8480) {
	__imp__sub_822B8480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8568) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b85b0
	if (!ctx.cr6.eq) goto loc_822B85B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B85A8;
	sub_822E0220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822b85b4
	goto loc_822B85B4;
loc_822B85B0:
	// dcbt r0,r31
loc_822B85B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b85d4
	if (!ctx.cr6.eq) goto loc_822B85D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822b8648
	goto loc_822B8648;
loc_822B85D4:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b85fc
	if (!ctx.cr6.eq) goto loc_822B85FC;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x822b864c
	goto loc_822B864C;
loc_822B85FC:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x822b8624
	if (!ctx.cr6.eq) goto loc_822B8624;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x822b864c
	goto loc_822B864C;
loc_822B8624:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b8634
	if (!ctx.cr6.eq) goto loc_822B8634;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822b8648
	goto loc_822B8648;
loc_822B8634:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822B8640;
	sub_822DE8D8(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822B8644;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_822B8648:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_822B864C:
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

PPC_WEAK_FUNC(sub_822B8568) {
	__imp__sub_822B8568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8664) {
	__imp__sub_822B8664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8668) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b86b0
	if (!ctx.cr6.eq) goto loc_822B86B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B86A8;
	sub_822E0220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822b86b4
	goto loc_822B86B4;
loc_822B86B0:
	// dcbt r0,r31
loc_822B86B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b873c
	if (ctx.cr6.eq) goto loc_822B873C;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b86e0
	if (!ctx.cr6.eq) goto loc_822B86E0;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8740
	goto loc_822B8740;
loc_822B86E0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x822b86f4
	if (!ctx.cr6.eq) goto loc_822B86F4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8740
	goto loc_822B8740;
loc_822B86F4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822b8724
	if (!ctx.cr6.eq) goto loc_822B8724;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b871c
	if (ctx.cr6.lt) goto loc_822B871C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B871C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8740
	goto loc_822B8740;
loc_822B8724:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822B8730;
	sub_822DE8D8(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822B8734;
	sub_823DEAF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822B873C:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_822B8740:
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

PPC_WEAK_FUNC(sub_822B8668) {
	__imp__sub_822B8668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8758) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b87a0
	if (!ctx.cr6.eq) goto loc_822B87A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B8798;
	sub_822E0220(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822b87a4
	goto loc_822B87A4;
loc_822B87A0:
	// dcbt r0,r31
loc_822B87A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b87c8
	if (!ctx.cr6.eq) goto loc_822B87C8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x822b8808
	goto loc_822B8808;
loc_822B87C8:
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822b87e4
	if (!ctx.cr6.eq) goto loc_822B87E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822b8278
	ctx.lr = 0x822B87E0;
	sub_822B8278(ctx, base);
	// b 0x822b8808
	goto loc_822B8808;
loc_822B87E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// ld r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822B87F4;
	sub_822DE8D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8804
	if (!ctx.cr6.eq) goto loc_822B8804;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822B8804:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_822B8808:
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

PPC_WEAK_FUNC(sub_822B8758) {
	__imp__sub_822B8758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8820) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b88c0
	if (ctx.cr6.eq) goto loc_822B88C0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// addi r31,r10,-28736
	ctx.r31.s64 = ctx.r10.s64 + -28736;
	// bgt cr6,0x822b889c
	if (ctx.cr6.gt) goto loc_822B889C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b8878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8878;
	// bdzf 4*cr6+eq,0x822b8884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8884;
	// bne cr6,0x822b8890
	if (!ctx.cr6.eq) goto loc_822B8890;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b88a0
	goto loc_822B88A0;
loc_822B8878:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b88a0
	goto loc_822B88A0;
loc_822B8884:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b88a0
	goto loc_822B88A0;
loc_822B8890:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b88a0
	goto loc_822B88A0;
loc_822B889C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822B88A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24656
	ctx.r4.s64 = ctx.r11.s64 + -24656;
	// bl 0x82280b08
	ctx.lr = 0x822B88B0;
	sub_82280B08(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x822b8950
	goto loc_822B8950;
loc_822B88C0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x822B88D0;
	sub_822E0220(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b88ec
	if (!ctx.cr6.eq) goto loc_822B88EC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-28736
	ctx.r10.s64 = ctx.r11.s64 + -28736;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x822b8924
	goto loc_822B8924;
loc_822B88EC:
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822b8908
	if (!ctx.cr6.eq) goto loc_822B8908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822b8278
	ctx.lr = 0x822B8904;
	sub_822B8278(ctx, base);
	// b 0x822b8924
	goto loc_822B8924;
loc_822B8908:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0578
	ctx.lr = 0x822B8910;
	sub_822E0578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8920
	if (!ctx.cr6.eq) goto loc_822B8920;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822B8920:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_822B8924:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b8950
	if (ctx.cr6.eq) goto loc_822B8950;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-24680
	ctx.r4.s64 = ctx.r11.s64 + -24680;
	// bl 0x82280900
	ctx.lr = 0x822B8950;
	sub_82280900(ctx, base);
loc_822B8950:
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

PPC_WEAK_FUNC(sub_822B8820) {
	__imp__sub_822B8820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8968) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b8a04
	if (ctx.cr6.eq) goto loc_822B8A04;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822b89dc
	if (ctx.cr6.gt) goto loc_822B89DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b89b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B89B8;
	// bdzf 4*cr6+eq,0x822b89c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B89C4;
	// bne cr6,0x822b89d0
	if (!ctx.cr6.eq) goto loc_822B89D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b89e4
	goto loc_822B89E4;
loc_822B89B8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b89e4
	goto loc_822B89E4;
loc_822B89C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b89e4
	goto loc_822B89E4;
loc_822B89D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b89e4
	goto loc_822B89E4;
loc_822B89DC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_822B89E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24656
	ctx.r4.s64 = ctx.r11.s64 + -24656;
	// bl 0x82280b08
	ctx.lr = 0x822B89F4;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8a48
	goto loc_822B8A48;
loc_822B8A04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0578
	ctx.lr = 0x822B8A14;
	sub_822E0578(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822B8A18;
	sub_823DEAF8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8a48
	if (ctx.cr6.eq) goto loc_822B8A48;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// bl 0x82280900
	ctx.lr = 0x822B8A48;
	sub_82280900(ctx, base);
loc_822B8A48:
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

PPC_WEAK_FUNC(sub_822B8968) {
	__imp__sub_822B8968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8A60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b8afc
	if (ctx.cr6.eq) goto loc_822B8AFC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822b8ad4
	if (ctx.cr6.gt) goto loc_822B8AD4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b8ab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8AB0;
	// bdzf 4*cr6+eq,0x822b8abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8ABC;
	// bne cr6,0x822b8ac8
	if (!ctx.cr6.eq) goto loc_822B8AC8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b8adc
	goto loc_822B8ADC;
loc_822B8AB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b8adc
	goto loc_822B8ADC;
loc_822B8ABC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b8adc
	goto loc_822B8ADC;
loc_822B8AC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b8adc
	goto loc_822B8ADC;
loc_822B8AD4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_822B8ADC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24656
	ctx.r4.s64 = ctx.r11.s64 + -24656;
	// bl 0x82280b08
	ctx.lr = 0x822B8AEC;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x822b8b40
	goto loc_822B8B40;
loc_822B8AFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0578
	ctx.lr = 0x822B8B0C;
	sub_822E0578(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x822B8B10;
	sub_823DEAF8(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8b40
	if (ctx.cr6.eq) goto loc_822B8B40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24572
	ctx.r4.s64 = ctx.r11.s64 + -24572;
	// bl 0x82280900
	ctx.lr = 0x822B8B40;
	sub_82280900(ctx, base);
loc_822B8B40:
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

PPC_WEAK_FUNC(sub_822B8A60) {
	__imp__sub_822B8A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8B58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b8bfc
	if (ctx.cr6.eq) goto loc_822B8BFC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822b8bcc
	if (ctx.cr6.gt) goto loc_822B8BCC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b8ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8BA8;
	// bdzf 4*cr6+eq,0x822b8bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8BB4;
	// bne cr6,0x822b8bc0
	if (!ctx.cr6.eq) goto loc_822B8BC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b8bd4
	goto loc_822B8BD4;
loc_822B8BA8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b8bd4
	goto loc_822B8BD4;
loc_822B8BB4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b8bd4
	goto loc_822B8BD4;
loc_822B8BC0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b8bd4
	goto loc_822B8BD4;
loc_822B8BCC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_822B8BD4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24656
	ctx.r4.s64 = ctx.r11.s64 + -24656;
	// bl 0x82280b08
	ctx.lr = 0x822B8BE4;
	sub_82280B08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x822b8c48
	goto loc_822B8C48;
loc_822B8BFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0578
	ctx.lr = 0x822B8C0C;
	sub_822E0578(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x822B8C10;
	sub_823DEC00(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8c48
	if (ctx.cr6.eq) goto loc_822B8C48;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24552
	ctx.r4.s64 = ctx.r11.s64 + -24552;
	// bl 0x82280900
	ctx.lr = 0x822B8C48;
	sub_82280900(ctx, base);
loc_822B8C48:
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

PPC_WEAK_FUNC(sub_822B8B58) {
	__imp__sub_822B8B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B8C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
	// bne cr6,0x822b8ca8
	if (!ctx.cr6.eq) goto loc_822B8CA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822b8ca8
	if (!ctx.cr6.eq) goto loc_822B8CA8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b8cbc
	if (ctx.cr6.eq) goto loc_822B8CBC;
loc_822B8CA8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24528
	ctx.r4.s64 = ctx.r11.s64 + -24528;
	// bl 0x82280b08
	ctx.lr = 0x822B8CB8;
	sub_82280B08(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_822B8CBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B8CC8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b8cc8
	if (!ctx.cr6.eq) goto loc_822B8CC8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822b8d10
	if (!ctx.cr6.lt) goto loc_822B8D10;
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14276
	ctx.r7.s64 = ctx.r8.s64 + -14276;
	// stb r11,-14276(r8)
	PPC_STORE_U8(ctx.r8.u32 + -14276, ctx.r11.u8);
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B8D10:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B8C60) {
	__imp__sub_822B8C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8D1C) {
	__imp__sub_822B8D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8D20) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b8db8
	if (ctx.cr6.eq) goto loc_822B8DB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822b8d88
	if (ctx.cr6.gt) goto loc_822B8D88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b8d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8D64;
	// bdzf 4*cr6+eq,0x822b8d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B8D70;
	// bne cr6,0x822b8d7c
	if (!ctx.cr6.eq) goto loc_822B8D7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b8d90
	goto loc_822B8D90;
loc_822B8D64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b8d90
	goto loc_822B8D90;
loc_822B8D70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b8d90
	goto loc_822B8D90;
loc_822B8D7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b8d90
	goto loc_822B8D90;
loc_822B8D88:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_822B8D90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24488
	ctx.r4.s64 = ctx.r11.s64 + -24488;
	// bl 0x82280b08
	ctx.lr = 0x822B8DA0;
	sub_82280B08(ctx, base);
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
loc_822B8DB8:
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822c10b0
	ctx.lr = 0x822B8DC0;
	sub_822C10B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822c0aa0
	ctx.lr = 0x822B8DC8;
	sub_822C0AA0(ctx, base);
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

PPC_WEAK_FUNC(sub_822B8D20) {
	__imp__sub_822B8D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8DDC) {
	__imp__sub_822B8DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822B8DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822b8d20
	ctx.lr = 0x822B8E00;
	sub_822B8D20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8e24
	if (!ctx.cr6.eq) goto loc_822B8E24;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822B8E24:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c0cf8
	ctx.lr = 0x822B8E38;
	sub_822C0CF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8e4c
	if (!ctx.cr6.eq) goto loc_822B8E4C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
loc_822B8E4C:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b8e78
	if (ctx.cr6.eq) goto loc_822B8E78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24424
	ctx.r4.s64 = ctx.r11.s64 + -24424;
	// bl 0x82280900
	ctx.lr = 0x822B8E78;
	sub_82280900(ctx, base);
loc_822B8E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B8DE0) {
	__imp__sub_822B8DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8E80) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822b8d20
	ctx.lr = 0x822B8EA0;
	sub_822B8D20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822b8eb8
	if (!ctx.cr6.eq) goto loc_822B8EB8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822b8eec
	goto loc_822B8EEC;
loc_822B8EB8:
	// bl 0x822c0b90
	ctx.lr = 0x822B8EBC;
	sub_822C0B90(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8eec
	if (ctx.cr6.eq) goto loc_822B8EEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24396
	ctx.r4.s64 = ctx.r11.s64 + -24396;
	// bl 0x82280900
	ctx.lr = 0x822B8EEC;
	sub_82280900(ctx, base);
loc_822B8EEC:
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

PPC_WEAK_FUNC(sub_822B8E80) {
	__imp__sub_822B8E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8F04) {
	__imp__sub_822B8F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8F08) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822b8d20
	ctx.lr = 0x822B8F28;
	sub_822B8D20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822b8f40
	if (!ctx.cr6.eq) goto loc_822B8F40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822b8f74
	goto loc_822B8F74;
loc_822B8F40:
	// bl 0x822c0c18
	ctx.lr = 0x822B8F44;
	sub_822C0C18(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b8f74
	if (ctx.cr6.eq) goto loc_822B8F74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24368
	ctx.r4.s64 = ctx.r11.s64 + -24368;
	// bl 0x82280900
	ctx.lr = 0x822B8F74;
	sub_82280900(ctx, base);
loc_822B8F74:
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

PPC_WEAK_FUNC(sub_822B8F08) {
	__imp__sub_822B8F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B8F8C) {
	__imp__sub_822B8F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B8F90) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822b8d20
	ctx.lr = 0x822B8FB0;
	sub_822B8D20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b8fd0
	if (!ctx.cr6.eq) goto loc_822B8FD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x822b9010
	goto loc_822B9010;
loc_822B8FD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822c0c80
	ctx.lr = 0x822B8FDC;
	sub_822C0C80(ctx, base);
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
	// beq cr6,0x822b9010
	if (ctx.cr6.eq) goto loc_822B9010;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24344
	ctx.r4.s64 = ctx.r11.s64 + -24344;
	// bl 0x82280900
	ctx.lr = 0x822B9010;
	sub_82280900(ctx, base);
loc_822B9010:
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

PPC_WEAK_FUNC(sub_822B8F90) {
	__imp__sub_822B8F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9028) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b82f8
	ctx.lr = 0x822B9044;
	sub_822B82F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823de720
	ctx.lr = 0x822B9054;
	sub_823DE720(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9094
	if (ctx.cr6.eq) goto loc_822B9094;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24316
	ctx.r4.s64 = ctx.r11.s64 + -24316;
	// bl 0x82280900
	ctx.lr = 0x822B9094;
	sub_82280900(ctx, base);
loc_822B9094:
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

PPC_WEAK_FUNC(sub_822B9028) {
	__imp__sub_822B9028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B90AC) {
	__imp__sub_822B90AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B90B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b82f8
	ctx.lr = 0x822B90CC;
	sub_822B82F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823de800
	ctx.lr = 0x822B90DC;
	sub_823DE800(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b911c
	if (ctx.cr6.eq) goto loc_822B911C;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24300
	ctx.r4.s64 = ctx.r11.s64 + -24300;
	// bl 0x82280900
	ctx.lr = 0x822B911C;
	sub_82280900(ctx, base);
loc_822B911C:
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

PPC_WEAK_FUNC(sub_822B90B0) {
	__imp__sub_822B90B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822B9134) {
	__imp__sub_822B9134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9138) {
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
	// bl 0x82310110
	ctx.lr = 0x822B9158;
	sub_82310110(ctx, base);
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

PPC_WEAK_FUNC(sub_822B9138) {
	__imp__sub_822B9138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
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
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24284
	ctx.r4.s64 = ctx.r11.s64 + -24284;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9170) {
	__imp__sub_822B9170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B91AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822B91AC) {
	__imp__sub_822B91AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B91B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B91B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b9250
	if (ctx.cr6.eq) goto loc_822B9250;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// bgt cr6,0x822b9228
	if (ctx.cr6.gt) goto loc_822B9228;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b9204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B9204;
	// bdzf 4*cr6+eq,0x822b9210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B9210;
	// bne cr6,0x822b921c
	if (!ctx.cr6.eq) goto loc_822B921C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b922c
	goto loc_822B922C;
loc_822B9204:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b922c
	goto loc_822B922C;
loc_822B9210:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b922c
	goto loc_822B922C;
loc_822B921C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b922c
	goto loc_822B922C;
loc_822B9228:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_822B922C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24016
	ctx.r4.s64 = ctx.r11.s64 + -24016;
	// bl 0x82280b08
	ctx.lr = 0x822B923C;
	sub_82280B08(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9250:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x822e8058
	ctx.lr = 0x822B9260;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b92c0
	if (!ctx.cr6.eq) goto loc_822B92C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820f8fd0
	ctx.lr = 0x822B9278;
	sub_820F8FD0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b928c
	if (!ctx.cr6.eq) goto loc_822B928C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
loc_822B928C:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24052
	ctx.r4.s64 = ctx.r11.s64 + -24052;
	// bl 0x82280900
	ctx.lr = 0x822B92B8;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B92C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24068
	ctx.r4.s64 = ctx.r11.s64 + -24068;
	// bl 0x822e8058
	ctx.lr = 0x822B92D0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9330
	if (!ctx.cr6.eq) goto loc_822B9330;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820f9008
	ctx.lr = 0x822B92E8;
	sub_820F9008(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b92fc
	if (!ctx.cr6.eq) goto loc_822B92FC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
loc_822B92FC:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24052
	ctx.r4.s64 = ctx.r11.s64 + -24052;
	// bl 0x82280900
	ctx.lr = 0x822B9328;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9330:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-10244
	ctx.r4.s64 = ctx.r11.s64 + -10244;
	// bl 0x822e8058
	ctx.lr = 0x822B9340;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9390
	if (!ctx.cr6.eq) goto loc_822B9390;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820f9040
	ctx.lr = 0x822B9358;
	sub_820F9040(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B9388;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9390:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24100
	ctx.r4.s64 = ctx.r11.s64 + -24100;
	// bl 0x822e8058
	ctx.lr = 0x822B93A0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b93f4
	if (!ctx.cr6.eq) goto loc_822B93F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9090
	ctx.lr = 0x822B93BC;
	sub_820F9090(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B93EC;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B93F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24116
	ctx.r4.s64 = ctx.r11.s64 + -24116;
	// bl 0x822e8058
	ctx.lr = 0x822B9404;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9458
	if (!ctx.cr6.eq) goto loc_822B9458;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9090
	ctx.lr = 0x822B9420;
	sub_820F9090(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B9450;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9458:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
	// bl 0x822e8058
	ctx.lr = 0x822B9468;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b94b8
	if (!ctx.cr6.eq) goto loc_822B94B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820db390
	ctx.lr = 0x822B9480;
	sub_820DB390(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B94B0;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B94B8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24140
	ctx.r4.s64 = ctx.r11.s64 + -24140;
	// bl 0x822e8058
	ctx.lr = 0x822B94C8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9518
	if (!ctx.cr6.eq) goto loc_822B9518;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8211f260
	ctx.lr = 0x822B94E0;
	sub_8211F260(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B9510;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9518:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24152
	ctx.r4.s64 = ctx.r11.s64 + -24152;
	// bl 0x822e8058
	ctx.lr = 0x822B9528;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9578
	if (!ctx.cr6.eq) goto loc_822B9578;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8211f2e0
	ctx.lr = 0x822B9540;
	sub_8211F2E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B9570;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9578:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-14804
	ctx.r4.s64 = ctx.r11.s64 + -14804;
	// bl 0x822e8058
	ctx.lr = 0x822B9588;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b95d8
	if (!ctx.cr6.eq) goto loc_822B95D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82114560
	ctx.lr = 0x822B95A0;
	sub_82114560(ctx, base);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B95D0;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B95D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// bl 0x822e8058
	ctx.lr = 0x822B95E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822b96b8
	if (ctx.cr6.eq) goto loc_822B96B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24168
	ctx.r4.s64 = ctx.r11.s64 + -24168;
	// bl 0x822e8058
	ctx.lr = 0x822B9600;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9648
	if (!ctx.cr6.eq) goto loc_822B9648;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822B9640;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9648:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24176
	ctx.r4.s64 = ctx.r11.s64 + -24176;
	// bl 0x822e8058
	ctx.lr = 0x822B9658;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b96a0
	if (!ctx.cr6.eq) goto loc_822B96A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822B9698;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B96A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24184
	ctx.r4.s64 = ctx.r11.s64 + -24184;
	// bl 0x822e8058
	ctx.lr = 0x822B96B0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b96f8
	if (!ctx.cr6.eq) goto loc_822B96F8;
loc_822B96B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822B96F0;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B96F8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,-24192
	ctx.r4.s64 = ctx.r11.s64 + -24192;
	// bl 0x822e8058
	ctx.lr = 0x822B9708;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9758
	if (!ctx.cr6.eq) goto loc_822B9758;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820f8840
	ctx.lr = 0x822B9720;
	sub_820F8840(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9778
	if (ctx.cr6.eq) goto loc_822B9778;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x82280900
	ctx.lr = 0x822B9750;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9758:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-24228
	ctx.r4.s64 = ctx.r11.s64 + -24228;
	// bl 0x82280900
	ctx.lr = 0x822B976C;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822B9778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B91B0) {
	__imp__sub_822B91B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822B9788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822b9820
	if (ctx.cr6.eq) goto loc_822B9820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// bgt cr6,0x822b97f8
	if (ctx.cr6.gt) goto loc_822B97F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822b97d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B97D4;
	// bdzf 4*cr6+eq,0x822b97e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822B97E0;
	// bne cr6,0x822b97ec
	if (!ctx.cr6.eq) goto loc_822B97EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24684
	ctx.r5.s64 = ctx.r11.s64 + -24684;
	// b 0x822b97fc
	goto loc_822B97FC;
loc_822B97D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24692
	ctx.r5.s64 = ctx.r11.s64 + -24692;
	// b 0x822b97fc
	goto loc_822B97FC;
loc_822B97E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24700
	ctx.r5.s64 = ctx.r11.s64 + -24700;
	// b 0x822b97fc
	goto loc_822B97FC;
loc_822B97EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-24712
	ctx.r5.s64 = ctx.r11.s64 + -24712;
	// b 0x822b97fc
	goto loc_822B97FC;
loc_822B97F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_822B97FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23792
	ctx.r4.s64 = ctx.r11.s64 + -23792;
	// bl 0x82280b08
	ctx.lr = 0x822B980C;
	sub_82280B08(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9820:
	// bl 0x82121098
	ctx.lr = 0x822B9824;
	sub_82121098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9858
	if (!ctx.cr6.eq) goto loc_822B9858;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23864
	ctx.r4.s64 = ctx.r11.s64 + -23864;
	// bl 0x82280b08
	ctx.lr = 0x822B983C;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-28736
	ctx.r8.s64 = ctx.r10.s64 + -28736;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9858:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// bl 0x822e8058
	ctx.lr = 0x822B9868;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b98b4
	if (!ctx.cr6.eq) goto loc_822B98B4;
	// lis r10,-31858
	ctx.r10.s64 = -2087845888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,3944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822b9948
	if (ctx.cr6.eq) goto loc_822B9948;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-23892
	ctx.r4.s64 = ctx.r11.s64 + -23892;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822B98AC;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B98B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,17332
	ctx.r4.s64 = ctx.r11.s64 + 17332;
	// bl 0x822e8058
	ctx.lr = 0x822B98C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822b9928
	if (!ctx.cr6.eq) goto loc_822B9928;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820f8f78
	ctx.lr = 0x822B98DC;
	sub_820F8F78(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b98f0
	if (!ctx.cr6.eq) goto loc_822B98F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r7,r11,-28736
	ctx.r7.s64 = ctx.r11.s64 + -28736;
loc_822B98F0:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r11,3944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822b9948
	if (ctx.cr6.eq) goto loc_822B9948;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-23916
	ctx.r4.s64 = ctx.r11.s64 + -23916;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280900
	ctx.lr = 0x822B9920;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822B9928:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23948
	ctx.r4.s64 = ctx.r11.s64 + -23948;
	// bl 0x82280900
	ctx.lr = 0x822B993C;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822B9948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9780) {
	__imp__sub_822B9780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9950) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822b9780
	sub_822B9780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9950) {
	__imp__sub_822B9950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9960) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822b9780
	sub_822B9780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9960) {
	__imp__sub_822B9960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9970) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822b9780
	sub_822B9780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9970) {
	__imp__sub_822B9970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9980) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822b9780
	sub_822B9780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822B9980) {
	__imp__sub_822B9980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B9990) {
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

PPC_WEAK_FUNC(sub_822B9990) {
	__imp__sub_822B9990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B99A8) {
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

PPC_WEAK_FUNC(sub_822B99A8) {
	__imp__sub_822B99A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B99C0) {
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

PPC_WEAK_FUNC(sub_822B99C0) {
	__imp__sub_822B99C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B99D8) {
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

PPC_WEAK_FUNC(sub_822B99D8) {
	__imp__sub_822B99D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822B99F0) {
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
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-23724
	ctx.r4.s64 = ctx.r11.s64 + -23724;
	// bl 0x82280b08
	ctx.lr = 0x822B9A14;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822B99F0) {
	__imp__sub_822B99F0(ctx, base);
}

