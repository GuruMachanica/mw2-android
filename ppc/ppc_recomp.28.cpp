#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82160E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27316(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27316);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160E08) {
	__imp__sub_82160E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160E18) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160E18) {
	__imp__sub_82160E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27316(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27316);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160E20) {
	__imp__sub_82160E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160E30) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82160e78
	if (!ctx.cr6.gt) goto loc_82160E78;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27316);
loc_82160E58:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160E64;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160E68;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27316, ctx.r3.u32);
	// bne 0x82160e58
	if (!ctx.cr0.eq) goto loc_82160E58;
loc_82160E78:
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

PPC_WEAK_FUNC(sub_82160E30) {
	__imp__sub_82160E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160E90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160E90) {
	__imp__sub_82160E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160E98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160E98) {
	__imp__sub_82160E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160EA0) {
	__imp__sub_82160EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EA8) {
	__imp__sub_82160EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EB0) {
	__imp__sub_82160EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EB8) {
	__imp__sub_82160EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EC0) {
	__imp__sub_82160EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EC8) {
	__imp__sub_82160EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160ED0) {
	__imp__sub_82160ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160ED8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160ED8) {
	__imp__sub_82160ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EE0) {
	__imp__sub_82160EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EE8) {
	__imp__sub_82160EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EF0) {
	__imp__sub_82160EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160EF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160EF8) {
	__imp__sub_82160EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F00) {
	__imp__sub_82160F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F08) {
	__imp__sub_82160F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F10) {
	__imp__sub_82160F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F18) {
	__imp__sub_82160F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F20) {
	__imp__sub_82160F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F28) {
	__imp__sub_82160F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F30) {
	__imp__sub_82160F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F38) {
	__imp__sub_82160F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F40) {
	__imp__sub_82160F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F48) {
	__imp__sub_82160F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F50) {
	__imp__sub_82160F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F58) {
	__imp__sub_82160F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F60) {
	__imp__sub_82160F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F68) {
	__imp__sub_82160F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F70) {
	__imp__sub_82160F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F78) {
	__imp__sub_82160F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F80) {
	__imp__sub_82160F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F88) {
	__imp__sub_82160F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F90) {
	__imp__sub_82160F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160F98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160F98) {
	__imp__sub_82160F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FA0) {
	__imp__sub_82160FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FA8) {
	__imp__sub_82160FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FB0) {
	__imp__sub_82160FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FB8) {
	__imp__sub_82160FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FC0) {
	__imp__sub_82160FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FC8) {
	__imp__sub_82160FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160FD0) {
	__imp__sub_82160FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26928);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160FD8) {
	__imp__sub_82160FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160FE8) {
	__imp__sub_82160FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26928(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26928);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160FF0) {
	__imp__sub_82160FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161000) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161048
	if (!ctx.cr6.gt) goto loc_82161048;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26928(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26928);
loc_82161028:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82161034;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82161038;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26928, ctx.r3.u32);
	// bne 0x82161028
	if (!ctx.cr0.eq) goto loc_82161028;
loc_82161048:
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

PPC_WEAK_FUNC(sub_82161000) {
	__imp__sub_82161000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28180);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161060) {
	__imp__sub_82161060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161070) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161070) {
	__imp__sub_82161070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28180);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161078) {
	__imp__sub_82161078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161088) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821610d0
	if (!ctx.cr6.gt) goto loc_821610D0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28180);
loc_821610B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821610BC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821610C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28180, ctx.r3.u32);
	// bne 0x821610b0
	if (!ctx.cr0.eq) goto loc_821610B0;
loc_821610D0:
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

PPC_WEAK_FUNC(sub_82161088) {
	__imp__sub_82161088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821610E8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,180
	ctx.r5.s64 = 180;
	// lwz r4,27816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27816);
	// bl 0x821778d8
	ctx.lr = 0x8216110C;
	sub_821778D8(ctx, base);
	// lwz r11,27816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27816);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82161124;
	sub_82147188(ctx, base);
	// lwz r11,27816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27816);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x8216113C;
	sub_82154B30(ctx, base);
	// lwz r11,27816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27816);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82161150;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_821610E8) {
	__imp__sub_821610E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161168) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161168) {
	__imp__sub_82161168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82161178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mulli r5,r4,180
	ctx.r5.s64 = ctx.r4.s64 * 180;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27816(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// bl 0x821778d8
	ctx.lr = 0x82161190;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,27816(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// ble cr6,0x82161290
	if (!ctx.cr6.gt) goto loc_82161290;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_821611AC:
	// stw r29,27816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27816, ctx.r29.u32);
	// li r5,180
	ctx.r5.s64 = 180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821611C0;
	sub_821778D8(ctx, base);
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821611D8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161218
	if (ctx.cr6.eq) goto loc_82161218;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161214
	if (!ctx.cr6.eq) goto loc_82161214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821611F8;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82161210;
	sub_821779A0(ctx, base);
	// b 0x82161218
	goto loc_82161218;
loc_82161214:
	// bl 0x82177978
	ctx.lr = 0x82161218;
	sub_82177978(ctx, base);
loc_82161218:
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x8216122C;
	sub_82154B30(ctx, base);
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82161244;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161284
	if (ctx.cr6.eq) goto loc_82161284;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161280
	if (!ctx.cr6.eq) goto loc_82161280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161264;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8216127C;
	sub_821779A0(ctx, base);
	// b 0x82161284
	goto loc_82161284;
loc_82161280:
	// bl 0x82177978
	ctx.lr = 0x82161284;
	sub_82177978(ctx, base);
loc_82161284:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,180
	ctx.r29.s64 = ctx.r29.s64 + 180;
	// bne 0x821611ac
	if (!ctx.cr0.eq) goto loc_821611AC;
loc_82161290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161170) {
	__imp__sub_82161170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821612A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821613a8
	if (!ctx.cr6.gt) goto loc_821613A8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,27816(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
loc_821612C4:
	// li r5,180
	ctx.r5.s64 = 180;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821612D0;
	sub_821778D8(ctx, base);
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821612E8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161328
	if (ctx.cr6.eq) goto loc_82161328;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161324
	if (!ctx.cr6.eq) goto loc_82161324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161308;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82161320;
	sub_821779A0(ctx, base);
	// b 0x82161328
	goto loc_82161328;
loc_82161324:
	// bl 0x82177978
	ctx.lr = 0x82161328;
	sub_82177978(ctx, base);
loc_82161328:
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x8216133C;
	sub_82154B30(ctx, base);
	// lwz r11,27816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27816);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82161354;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161394
	if (ctx.cr6.eq) goto loc_82161394;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161390
	if (!ctx.cr6.eq) goto loc_82161390;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161374;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8216138C;
	sub_821779A0(ctx, base);
	// b 0x82161394
	goto loc_82161394;
loc_82161390:
	// bl 0x82177978
	ctx.lr = 0x82161394;
	sub_82177978(ctx, base);
loc_82161394:
	// bl 0x82177858
	ctx.lr = 0x82161398;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27816, ctx.r3.u32);
	// bne 0x821612c4
	if (!ctx.cr0.eq) goto loc_821612C4;
loc_821613A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161298) {
	__imp__sub_82161298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821613B0) {
	__imp__sub_821613B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821613B8) {
	__imp__sub_821613B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821613C0) {
	__imp__sub_821613C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821613C8) {
	__imp__sub_821613C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821613D0) {
	__imp__sub_821613D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821613D8) {
	__imp__sub_821613D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821613E0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28588);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26348, ctx.r11.u32);
	// bl 0x821551a8
	ctx.lr = 0x82161404;
	sub_821551A8(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_821613E0) {
	__imp__sub_821613E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216141C) {
	__imp__sub_8216141C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82161428;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,28588(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28588);
	// ble cr6,0x821614a0
	if (!ctx.cr6.gt) goto loc_821614A0;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8216144C:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,28588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28588, ctx.r31.u32);
	// stw r11,26348(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26348, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161490
	if (ctx.cr6.eq) goto loc_82161490;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27660, ctx.r3.u32);
	// bl 0x82174fd0
	ctx.lr = 0x82161474;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161490
	if (!ctx.cr6.eq) goto loc_82161490;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27660(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27660);
	// bl 0x82174fd0
	ctx.lr = 0x82161488;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821614ac
	if (ctx.cr6.eq) goto loc_821614AC;
loc_82161490:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8216144c
	if (ctx.cr6.lt) goto loc_8216144C;
loc_821614A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821614AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161420) {
	__imp__sub_82161420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821614B8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27480);
	// bl 0x821778d8
	ctx.lr = 0x821614D8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821614E0;
	sub_82177758(ctx, base);
	// lwz r11,27480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27480);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821614F4;
	sub_82147188(ctx, base);
	// lwz r11,27480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27480);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82161544
	if (ctx.cr6.eq) goto loc_82161544;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216150C;
	sub_82177868(ctx, base);
	// lwz r11,27480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27480);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,27480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27480);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,25088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25088, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82161538
	if (!ctx.cr6.eq) goto loc_82161538;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82161538:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82161544;
	sub_821778D8(ctx, base);
loc_82161544:
	// bl 0x821777e0
	ctx.lr = 0x82161548;
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

PPC_WEAK_FUNC(sub_821614B8) {
	__imp__sub_821614B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216155C) {
	__imp__sub_8216155C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161560) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161560) {
	__imp__sub_82161560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82161570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27480(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27480);
	// bl 0x821778d8
	ctx.lr = 0x82161588;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27480(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27480);
	// ble cr6,0x821615ac
	if (!ctx.cr6.gt) goto loc_821615AC;
loc_82161594:
	// stw r30,27480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27480, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821614b8
	ctx.lr = 0x821615A0;
	sub_821614B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82161594
	if (!ctx.cr0.eq) goto loc_82161594;
loc_821615AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161568) {
	__imp__sub_82161568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821615B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821615B4) {
	__imp__sub_821615B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821615B8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821615f4
	if (!ctx.cr6.gt) goto loc_821615F4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821615DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821614b8
	ctx.lr = 0x821615E4;
	sub_821614B8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821615E8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27480, ctx.r3.u32);
	// bne 0x821615dc
	if (!ctx.cr0.eq) goto loc_821615DC;
loc_821615F4:
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

PPC_WEAK_FUNC(sub_821615B8) {
	__imp__sub_821615B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216160C) {
	__imp__sub_8216160C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161610) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25020(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// bl 0x821778d8
	ctx.lr = 0x82161634;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216163C;
	sub_82177758(ctx, base);
	// lwz r3,25020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821616c0
	if (ctx.cr6.eq) goto loc_821616C0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82161664
	if (ctx.cr6.eq) goto loc_82161664;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82161664
	if (ctx.cr6.eq) goto loc_82161664;
	// bl 0x82177950
	ctx.lr = 0x82161660;
	sub_82177950(ctx, base);
	// b 0x821616c0
	goto loc_821616C0;
loc_82161664:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216166C;
	sub_82177868(ctx, base);
	// lwz r11,25020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27480, ctx.r11.u32);
	// bne cr6,0x82161698
	if (!ctx.cr6.eq) goto loc_82161698;
	// bl 0x82177898
	ctx.lr = 0x82161690;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216169c
	goto loc_8216169C;
loc_82161698:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216169C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821614b8
	ctx.lr = 0x821616A4;
	sub_821614B8(ctx, base);
	// lwz r3,25020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// bl 0x82176070
	ctx.lr = 0x821616AC;
	sub_82176070(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821616c0
	if (ctx.cr6.eq) goto loc_821616C0;
	// lwz r11,25020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25020);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821616C0:
	// bl 0x821777e0
	ctx.lr = 0x821616C4;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82161610) {
	__imp__sub_82161610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821616DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821616DC) {
	__imp__sub_821616DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821616E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821616E0) {
	__imp__sub_821616E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821616E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821616F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25020(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25020);
	// bl 0x821778d8
	ctx.lr = 0x82161708;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25020(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25020);
	// ble cr6,0x8216172c
	if (!ctx.cr6.gt) goto loc_8216172C;
loc_82161714:
	// stw r30,25020(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25020, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82161610
	ctx.lr = 0x82161720;
	sub_82161610(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82161714
	if (!ctx.cr0.eq) goto loc_82161714;
loc_8216172C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821616E8) {
	__imp__sub_821616E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161734) {
	__imp__sub_82161734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161738) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161774
	if (!ctx.cr6.gt) goto loc_82161774;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216175C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82161610
	ctx.lr = 0x82161764;
	sub_82161610(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82161768;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25020, ctx.r3.u32);
	// bne 0x8216175c
	if (!ctx.cr0.eq) goto loc_8216175C;
loc_82161774:
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

PPC_WEAK_FUNC(sub_82161738) {
	__imp__sub_82161738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216178C) {
	__imp__sub_8216178C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161790) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161790) {
	__imp__sub_82161790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161798) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161798) {
	__imp__sub_82161798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821617A0) {
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
	// lwz r11,27248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27248);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821617f8
	if (ctx.cr6.eq) goto loc_821617F8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26800, ctx.r3.u32);
	// bl 0x821760f0
	ctx.lr = 0x821617D8;
	sub_821760F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821617f8
	if (!ctx.cr6.eq) goto loc_821617F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26800);
	// bl 0x821760f0
	ctx.lr = 0x821617EC;
	sub_821760F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821617fc
	if (ctx.cr6.eq) goto loc_821617FC;
loc_821617F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821617FC:
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

PPC_WEAK_FUNC(sub_821617A0) {
	__imp__sub_821617A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82161818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27248(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27248);
	// ble cr6,0x82161884
	if (!ctx.cr6.gt) goto loc_82161884;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82161838:
	// stw r31,27248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27248, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161874
	if (ctx.cr6.eq) goto loc_82161874;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26800, ctx.r3.u32);
	// bl 0x821760f0
	ctx.lr = 0x82161858;
	sub_821760F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161874
	if (!ctx.cr6.eq) goto loc_82161874;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26800);
	// bl 0x821760f0
	ctx.lr = 0x8216186C;
	sub_821760F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82161890
	if (ctx.cr6.eq) goto loc_82161890;
loc_82161874:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82161838
	if (ctx.cr6.lt) goto loc_82161838;
loc_82161884:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82161890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161810) {
	__imp__sub_82161810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216189C) {
	__imp__sub_8216189C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821618A0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27212);
	// bl 0x821778d8
	ctx.lr = 0x821618C0;
	sub_821778D8(ctx, base);
	// lwz r11,27212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27212);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821618D4;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_821618A0) {
	__imp__sub_821618A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821618E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821618E8) {
	__imp__sub_821618E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821618F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821618F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27212(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27212);
	// bl 0x821778d8
	ctx.lr = 0x82161910;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27212(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27212);
	// ble cr6,0x8216199c
	if (!ctx.cr6.gt) goto loc_8216199C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82161928:
	// stw r30,27212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27212, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216193C;
	sub_821778D8(ctx, base);
	// lwz r4,27212(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27212);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82161950;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161990
	if (ctx.cr6.eq) goto loc_82161990;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216198c
	if (!ctx.cr6.eq) goto loc_8216198C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161970;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82161988;
	sub_821779A0(ctx, base);
	// b 0x82161990
	goto loc_82161990;
loc_8216198C:
	// bl 0x82177978
	ctx.lr = 0x82161990;
	sub_82177978(ctx, base);
loc_82161990:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82161928
	if (!ctx.cr0.eq) goto loc_82161928;
loc_8216199C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821618F0) {
	__imp__sub_821618F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821619A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821619A4) {
	__imp__sub_821619A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821619A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821619B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161a44
	if (!ctx.cr6.gt) goto loc_82161A44;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,27212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27212);
loc_821619D0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821619DC;
	sub_821778D8(ctx, base);
	// lwz r4,27212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27212);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821619F0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161a30
	if (ctx.cr6.eq) goto loc_82161A30;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161a2c
	if (!ctx.cr6.eq) goto loc_82161A2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161A10;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82161A28;
	sub_821779A0(ctx, base);
	// b 0x82161a30
	goto loc_82161A30;
loc_82161A2C:
	// bl 0x82177978
	ctx.lr = 0x82161A30;
	sub_82177978(ctx, base);
loc_82161A30:
	// bl 0x82177858
	ctx.lr = 0x82161A34;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27212, ctx.r3.u32);
	// bne 0x821619d0
	if (!ctx.cr0.eq) goto loc_821619D0;
loc_82161A44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821619A8) {
	__imp__sub_821619A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161A4C) {
	__imp__sub_82161A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161A50) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27448);
	// bl 0x821778d8
	ctx.lr = 0x82161A70;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82161A78;
	sub_82177758(ctx, base);
	// lwz r11,27448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27448);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82161A8C;
	sub_82147188(ctx, base);
	// lwz r11,27448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27448);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82161ad4
	if (ctx.cr6.eq) goto loc_82161AD4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82161AA4;
	sub_82177868(ctx, base);
	// lwz r11,27448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27448);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,27448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27448);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,27212(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27212, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x821618f0
	ctx.lr = 0x82161AD4;
	sub_821618F0(ctx, base);
loc_82161AD4:
	// bl 0x821777e0
	ctx.lr = 0x82161AD8;
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

PPC_WEAK_FUNC(sub_82161A50) {
	__imp__sub_82161A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161AEC) {
	__imp__sub_82161AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161AF0) {
	__imp__sub_82161AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82161B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27448);
	// bl 0x821778d8
	ctx.lr = 0x82161B18;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27448(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27448);
	// ble cr6,0x82161b3c
	if (!ctx.cr6.gt) goto loc_82161B3C;
loc_82161B24:
	// stw r30,27448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27448, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82161a50
	ctx.lr = 0x82161B30;
	sub_82161A50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82161b24
	if (!ctx.cr0.eq) goto loc_82161B24;
loc_82161B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161AF8) {
	__imp__sub_82161AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161B44) {
	__imp__sub_82161B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161B48) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161b84
	if (!ctx.cr6.gt) goto loc_82161B84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82161B6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82161a50
	ctx.lr = 0x82161B74;
	sub_82161A50(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82161B78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27448, ctx.r3.u32);
	// bne 0x82161b6c
	if (!ctx.cr0.eq) goto loc_82161B6C;
loc_82161B84:
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

PPC_WEAK_FUNC(sub_82161B48) {
	__imp__sub_82161B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161B9C) {
	__imp__sub_82161B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161BA0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// bl 0x821778d8
	ctx.lr = 0x82161BC4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82161BCC;
	sub_82177758(ctx, base);
	// lwz r3,26316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82161c50
	if (ctx.cr6.eq) goto loc_82161C50;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82161bf4
	if (ctx.cr6.eq) goto loc_82161BF4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82161bf4
	if (ctx.cr6.eq) goto loc_82161BF4;
	// bl 0x82177950
	ctx.lr = 0x82161BF0;
	sub_82177950(ctx, base);
	// b 0x82161c50
	goto loc_82161C50;
loc_82161BF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82161BFC;
	sub_82177868(ctx, base);
	// lwz r11,26316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// bne cr6,0x82161c28
	if (!ctx.cr6.eq) goto loc_82161C28;
	// bl 0x82177898
	ctx.lr = 0x82161C20;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82161c2c
	goto loc_82161C2C;
loc_82161C28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82161C2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82161a50
	ctx.lr = 0x82161C34;
	sub_82161A50(ctx, base);
	// lwz r3,26316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// bl 0x82176100
	ctx.lr = 0x82161C3C;
	sub_82176100(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82161c50
	if (ctx.cr6.eq) goto loc_82161C50;
	// lwz r11,26316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82161C50:
	// bl 0x821777e0
	ctx.lr = 0x82161C54;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82161BA0) {
	__imp__sub_82161BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161C6C) {
	__imp__sub_82161C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161C70) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161C70) {
	__imp__sub_82161C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82161C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26316(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26316);
	// bl 0x821778d8
	ctx.lr = 0x82161C98;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26316(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26316);
	// ble cr6,0x82161cbc
	if (!ctx.cr6.gt) goto loc_82161CBC;
loc_82161CA4:
	// stw r30,26316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26316, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82161ba0
	ctx.lr = 0x82161CB0;
	sub_82161BA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82161ca4
	if (!ctx.cr0.eq) goto loc_82161CA4;
loc_82161CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161C78) {
	__imp__sub_82161C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161CC4) {
	__imp__sub_82161CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161CC8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161d04
	if (!ctx.cr6.gt) goto loc_82161D04;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82161CEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82161ba0
	ctx.lr = 0x82161CF4;
	sub_82161BA0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82161CF8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26316, ctx.r3.u32);
	// bne 0x82161cec
	if (!ctx.cr0.eq) goto loc_82161CEC;
loc_82161D04:
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

PPC_WEAK_FUNC(sub_82161CC8) {
	__imp__sub_82161CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161D1C) {
	__imp__sub_82161D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161D20) {
	__imp__sub_82161D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161D28) {
	__imp__sub_82161D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161D30) {
	__imp__sub_82161D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82161D38) {
	__imp__sub_82161D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161D40) {
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
	// lwz r11,27160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82161d98
	if (ctx.cr6.eq) goto loc_82161D98;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25412, ctx.r3.u32);
	// bl 0x82176180
	ctx.lr = 0x82161D78;
	sub_82176180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161d98
	if (!ctx.cr6.eq) goto loc_82161D98;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25412);
	// bl 0x82176180
	ctx.lr = 0x82161D8C;
	sub_82176180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82161d9c
	if (ctx.cr6.eq) goto loc_82161D9C;
loc_82161D98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82161D9C:
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

PPC_WEAK_FUNC(sub_82161D40) {
	__imp__sub_82161D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82161DB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27160(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27160);
	// ble cr6,0x82161e24
	if (!ctx.cr6.gt) goto loc_82161E24;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82161DD8:
	// stw r31,27160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27160, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161e14
	if (ctx.cr6.eq) goto loc_82161E14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25412, ctx.r3.u32);
	// bl 0x82176180
	ctx.lr = 0x82161DF8;
	sub_82176180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161e14
	if (!ctx.cr6.eq) goto loc_82161E14;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25412);
	// bl 0x82176180
	ctx.lr = 0x82161E0C;
	sub_82176180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82161e30
	if (ctx.cr6.eq) goto loc_82161E30;
loc_82161E14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82161dd8
	if (ctx.cr6.lt) goto loc_82161DD8;
loc_82161E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82161E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161DB0) {
	__imp__sub_82161DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161E3C) {
	__imp__sub_82161E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28584);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161E40) {
	__imp__sub_82161E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161E50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161E50) {
	__imp__sub_82161E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28584);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161E58) {
	__imp__sub_82161E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161E68) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82161eb0
	if (!ctx.cr6.gt) goto loc_82161EB0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28584(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28584);
loc_82161E90:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82161E9C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82161EA0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28584, ctx.r3.u32);
	// bne 0x82161e90
	if (!ctx.cr0.eq) goto loc_82161E90;
loc_82161EB0:
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

PPC_WEAK_FUNC(sub_82161E68) {
	__imp__sub_82161E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161EC8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26384);
	// bl 0x821778d8
	ctx.lr = 0x82161EE8;
	sub_821778D8(ctx, base);
	// lwz r11,26384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26384);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82161EFC;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_82161EC8) {
	__imp__sub_82161EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161F10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161F10) {
	__imp__sub_82161F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82161F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26384);
	// bl 0x821778d8
	ctx.lr = 0x82161F38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26384(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26384);
	// ble cr6,0x82161fc4
	if (!ctx.cr6.gt) goto loc_82161FC4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82161F50:
	// stw r30,26384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26384, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82161F64;
	sub_821778D8(ctx, base);
	// lwz r4,26384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26384);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82161F78;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161fb8
	if (ctx.cr6.eq) goto loc_82161FB8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82161fb4
	if (!ctx.cr6.eq) goto loc_82161FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82161F98;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82161FB0;
	sub_821779A0(ctx, base);
	// b 0x82161fb8
	goto loc_82161FB8;
loc_82161FB4:
	// bl 0x82177978
	ctx.lr = 0x82161FB8;
	sub_82177978(ctx, base);
loc_82161FB8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82161f50
	if (!ctx.cr0.eq) goto loc_82161F50;
loc_82161FC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161F18) {
	__imp__sub_82161F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82161FCC) {
	__imp__sub_82161FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82161FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82161FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216206c
	if (!ctx.cr6.gt) goto loc_8216206C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26384);
loc_82161FF8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82162004;
	sub_821778D8(ctx, base);
	// lwz r4,26384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26384);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82162018;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162058
	if (ctx.cr6.eq) goto loc_82162058;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82162054
	if (!ctx.cr6.eq) goto loc_82162054;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82162038;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82162050;
	sub_821779A0(ctx, base);
	// b 0x82162058
	goto loc_82162058;
loc_82162054:
	// bl 0x82177978
	ctx.lr = 0x82162058;
	sub_82177978(ctx, base);
loc_82162058:
	// bl 0x82177858
	ctx.lr = 0x8216205C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26384, ctx.r3.u32);
	// bne 0x82161ff8
	if (!ctx.cr0.eq) goto loc_82161FF8;
loc_8216206C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82161FD0) {
	__imp__sub_82161FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162074) {
	__imp__sub_82162074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162078) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,25476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// bl 0x821778d8
	ctx.lr = 0x82162098;
	sub_821778D8(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821620d8
	if (ctx.cr6.eq) goto loc_821620D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821620B0;
	sub_82177868(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,26384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26384, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82161f18
	ctx.lr = 0x821620D8;
	sub_82161F18(ctx, base);
loc_821620D8:
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

PPC_WEAK_FUNC(sub_82162078) {
	__imp__sub_82162078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821620EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821620EC) {
	__imp__sub_821620EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821620F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821620F0) {
	__imp__sub_821620F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821620F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82162100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// bl 0x821778d8
	ctx.lr = 0x82162120;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25476(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// ble cr6,0x8216218c
	if (!ctx.cr6.gt) goto loc_8216218C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82162130:
	// stw r29,25476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25476, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82162144;
	sub_821778D8(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162180
	if (ctx.cr6.eq) goto loc_82162180;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216215C;
	sub_82177868(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,26384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26384, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82161f18
	ctx.lr = 0x82162180;
	sub_82161F18(ctx, base);
loc_82162180:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82162130
	if (!ctx.cr0.eq) goto loc_82162130;
loc_8216218C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821620F8) {
	__imp__sub_821620F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162194) {
	__imp__sub_82162194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821621A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162218
	if (!ctx.cr6.gt) goto loc_82162218;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
loc_821621BC:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821621C8;
	sub_821778D8(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162204
	if (ctx.cr6.eq) goto loc_82162204;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821621E0;
	sub_82177868(ctx, base);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25476);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,26384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26384, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82161f18
	ctx.lr = 0x82162204;
	sub_82161F18(ctx, base);
loc_82162204:
	// bl 0x82177858
	ctx.lr = 0x82162208;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25476, ctx.r3.u32);
	// bne 0x821621bc
	if (!ctx.cr0.eq) goto loc_821621BC;
loc_82162218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162198) {
	__imp__sub_82162198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28404);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162220) {
	__imp__sub_82162220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162230) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162230) {
	__imp__sub_82162230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28404);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162238) {
	__imp__sub_82162238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162248) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162290
	if (!ctx.cr6.gt) goto loc_82162290;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28404(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28404);
loc_82162270:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216227C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162280;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28404, ctx.r3.u32);
	// bne 0x82162270
	if (!ctx.cr0.eq) goto loc_82162270;
loc_82162290:
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

PPC_WEAK_FUNC(sub_82162248) {
	__imp__sub_82162248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821622A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821622e0
	if (!ctx.cr6.eq) goto loc_821622E0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// stw r4,25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25184, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_821622E0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216230c
	if (!ctx.cr6.eq) goto loc_8216230C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_8216230C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82162338
	if (!ctx.cr6.eq) goto loc_82162338;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_82162338:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82162364
	if (!ctx.cr6.eq) goto loc_82162364;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_82162364:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821622A8) {
	__imp__sub_821622A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162390) {
	__imp__sub_82162390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162394) {
	__imp__sub_82162394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162398) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162398) {
	__imp__sub_82162398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821623A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25220);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821623A0) {
	__imp__sub_821623A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821623B0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821623ec
	if (!ctx.cr6.gt) goto loc_821623EC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821623D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821622a8
	ctx.lr = 0x821623DC;
	sub_821622A8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821623E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25220, ctx.r3.u32);
	// bne 0x821623d4
	if (!ctx.cr0.eq) goto loc_821623D4;
loc_821623EC:
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

PPC_WEAK_FUNC(sub_821623B0) {
	__imp__sub_821623B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162404) {
	__imp__sub_82162404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162408) {
	__imp__sub_82162408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162418) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162418) {
	__imp__sub_82162418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25376);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162420) {
	__imp__sub_82162420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162430) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162478
	if (!ctx.cr6.gt) goto loc_82162478;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25376);
loc_82162458:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82162464;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162468;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25376, ctx.r3.u32);
	// bne 0x82162458
	if (!ctx.cr0.eq) goto loc_82162458;
loc_82162478:
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

PPC_WEAK_FUNC(sub_82162430) {
	__imp__sub_82162430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27300);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162490) {
	__imp__sub_82162490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821624A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821624A0) {
	__imp__sub_821624A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821624A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,27300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27300);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821624A8) {
	__imp__sub_821624A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821624B8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162500
	if (!ctx.cr6.gt) goto loc_82162500;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27300);
loc_821624E0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821624EC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821624F0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27300, ctx.r3.u32);
	// bne 0x821624e0
	if (!ctx.cr0.eq) goto loc_821624E0;
loc_82162500:
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

PPC_WEAK_FUNC(sub_821624B8) {
	__imp__sub_821624B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,28360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162518) {
	__imp__sub_82162518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162528) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162528) {
	__imp__sub_82162528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162530) {
	__imp__sub_82162530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162540) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162588
	if (!ctx.cr6.gt) goto loc_82162588;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28360);
loc_82162568:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82162574;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162578;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28360, ctx.r3.u32);
	// bne 0x82162568
	if (!ctx.cr0.eq) goto loc_82162568;
loc_82162588:
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

PPC_WEAK_FUNC(sub_82162540) {
	__imp__sub_82162540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821625A0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,25736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25736);
	// bl 0x821778d8
	ctx.lr = 0x821625C0;
	sub_821778D8(ctx, base);
	// lwz r11,25736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25736);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821625D4;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_821625A0) {
	__imp__sub_821625A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821625E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821625E8) {
	__imp__sub_821625E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821625F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821625F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25736(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25736);
	// bl 0x821778d8
	ctx.lr = 0x82162610;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25736(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25736);
	// ble cr6,0x8216269c
	if (!ctx.cr6.gt) goto loc_8216269C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82162628:
	// stw r30,25736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25736, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216263C;
	sub_821778D8(ctx, base);
	// lwz r4,25736(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25736);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82162650;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162690
	if (ctx.cr6.eq) goto loc_82162690;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216268c
	if (!ctx.cr6.eq) goto loc_8216268C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82162670;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82162688;
	sub_821779A0(ctx, base);
	// b 0x82162690
	goto loc_82162690;
loc_8216268C:
	// bl 0x82177978
	ctx.lr = 0x82162690;
	sub_82177978(ctx, base);
loc_82162690:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82162628
	if (!ctx.cr0.eq) goto loc_82162628;
loc_8216269C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821625F0) {
	__imp__sub_821625F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821626A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821626A4) {
	__imp__sub_821626A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821626A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821626B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162744
	if (!ctx.cr6.gt) goto loc_82162744;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25736(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25736);
loc_821626D0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821626DC;
	sub_821778D8(ctx, base);
	// lwz r4,25736(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25736);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821626F0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162730
	if (ctx.cr6.eq) goto loc_82162730;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216272c
	if (!ctx.cr6.eq) goto loc_8216272C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82162710;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82162728;
	sub_821779A0(ctx, base);
	// b 0x82162730
	goto loc_82162730;
loc_8216272C:
	// bl 0x82177978
	ctx.lr = 0x82162730;
	sub_82177978(ctx, base);
loc_82162730:
	// bl 0x82177858
	ctx.lr = 0x82162734;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25736, ctx.r3.u32);
	// bne 0x821626d0
	if (!ctx.cr0.eq) goto loc_821626D0;
loc_82162744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821626A8) {
	__imp__sub_821626A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216274C) {
	__imp__sub_8216274C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162750) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// bl 0x821778d8
	ctx.lr = 0x82162770;
	sub_821778D8(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821627b0
	if (ctx.cr6.eq) goto loc_821627B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82162788;
	sub_82177868(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25736(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25736, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821625f0
	ctx.lr = 0x821627B0;
	sub_821625F0(ctx, base);
loc_821627B0:
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

PPC_WEAK_FUNC(sub_82162750) {
	__imp__sub_82162750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821627C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821627C4) {
	__imp__sub_821627C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821627C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821627C8) {
	__imp__sub_821627C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821627D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821627D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// bl 0x821778d8
	ctx.lr = 0x821627F0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27048(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// ble cr6,0x8216285c
	if (!ctx.cr6.gt) goto loc_8216285C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82162800:
	// stw r29,27048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27048, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82162814;
	sub_821778D8(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162850
	if (ctx.cr6.eq) goto loc_82162850;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216282C;
	sub_82177868(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25736(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25736, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821625f0
	ctx.lr = 0x82162850;
	sub_821625F0(ctx, base);
loc_82162850:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82162800
	if (!ctx.cr0.eq) goto loc_82162800;
loc_8216285C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821627D0) {
	__imp__sub_821627D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162864) {
	__imp__sub_82162864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82162870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821628e8
	if (!ctx.cr6.gt) goto loc_821628E8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
loc_8216288C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82162898;
	sub_821778D8(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821628d4
	if (ctx.cr6.eq) goto loc_821628D4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821628B0;
	sub_82177868(ctx, base);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27048);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25736, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821625f0
	ctx.lr = 0x821628D4;
	sub_821625F0(ctx, base);
loc_821628D4:
	// bl 0x82177858
	ctx.lr = 0x821628D8;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27048, ctx.r3.u32);
	// bne 0x8216288c
	if (!ctx.cr0.eq) goto loc_8216288C;
loc_821628E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162868) {
	__imp__sub_82162868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821628F0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,27144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// bl 0x821778d8
	ctx.lr = 0x82162910;
	sub_821778D8(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162954
	if (ctx.cr6.eq) goto loc_82162954;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82162928;
	sub_82177868(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,25476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25476, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821620f8
	ctx.lr = 0x82162950;
	sub_821620F8(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
loc_82162954:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162994
	if (ctx.cr6.eq) goto loc_82162994;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82162968;
	sub_82177868(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,27048(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27048, ctx.r10.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821627d0
	ctx.lr = 0x82162990;
	sub_821627D0(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
loc_82162994:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821629d8
	if (ctx.cr6.eq) goto loc_821629D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821629A8;
	sub_82177868(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,27300(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27300, ctx.r4.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x821629D4;
	sub_821778D8(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
loc_821629D8:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162a18
	if (ctx.cr6.eq) goto loc_82162A18;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821629EC;
	sub_82177868(ctx, base);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,28360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28360, ctx.r4.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x82162A18;
	sub_821778D8(ctx, base);
loc_82162A18:
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

PPC_WEAK_FUNC(sub_821628F0) {
	__imp__sub_821628F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162A2C) {
	__imp__sub_82162A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162A30) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162A30) {
	__imp__sub_82162A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82162A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27144);
	// bl 0x821778d8
	ctx.lr = 0x82162A58;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27144(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27144);
	// ble cr6,0x82162a7c
	if (!ctx.cr6.gt) goto loc_82162A7C;
loc_82162A64:
	// stw r30,27144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27144, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821628f0
	ctx.lr = 0x82162A70;
	sub_821628F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// bne 0x82162a64
	if (!ctx.cr0.eq) goto loc_82162A64;
loc_82162A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162A38) {
	__imp__sub_82162A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162A84) {
	__imp__sub_82162A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162A88) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162ac4
	if (!ctx.cr6.gt) goto loc_82162AC4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82162AAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821628f0
	ctx.lr = 0x82162AB4;
	sub_821628F0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162AB8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27144, ctx.r3.u32);
	// bne 0x82162aac
	if (!ctx.cr0.eq) goto loc_82162AAC;
loc_82162AC4:
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

PPC_WEAK_FUNC(sub_82162A88) {
	__imp__sub_82162A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162ADC) {
	__imp__sub_82162ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162AE0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,27788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27788);
	// bl 0x821778d8
	ctx.lr = 0x82162B00;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82162B08;
	sub_82177758(ctx, base);
	// lwz r11,27788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27788);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82162B1C;
	sub_82147188(ctx, base);
	// lwz r11,27788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27788);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82162b5c
	if (ctx.cr6.eq) goto loc_82162B5C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82162B34;
	sub_82177868(ctx, base);
	// lwz r11,27788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27788);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,27788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27788);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,27144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27144, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82162a38
	ctx.lr = 0x82162B5C;
	sub_82162A38(ctx, base);
loc_82162B5C:
	// bl 0x821777e0
	ctx.lr = 0x82162B60;
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

PPC_WEAK_FUNC(sub_82162AE0) {
	__imp__sub_82162AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162B74) {
	__imp__sub_82162B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162B78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162B78) {
	__imp__sub_82162B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82162B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27788(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27788);
	// bl 0x821778d8
	ctx.lr = 0x82162BA8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27788(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27788);
	// ble cr6,0x82162bcc
	if (!ctx.cr6.gt) goto loc_82162BCC;
loc_82162BB4:
	// stw r30,27788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27788, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82162ae0
	ctx.lr = 0x82162BC0;
	sub_82162AE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82162bb4
	if (!ctx.cr0.eq) goto loc_82162BB4;
loc_82162BCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162B80) {
	__imp__sub_82162B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162BD4) {
	__imp__sub_82162BD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162BD8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162c14
	if (!ctx.cr6.gt) goto loc_82162C14;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82162BFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82162ae0
	ctx.lr = 0x82162C04;
	sub_82162AE0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162C08;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27788, ctx.r3.u32);
	// bne 0x82162bfc
	if (!ctx.cr0.eq) goto loc_82162BFC;
loc_82162C14:
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

PPC_WEAK_FUNC(sub_82162BD8) {
	__imp__sub_82162BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162C2C) {
	__imp__sub_82162C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162C30) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// bl 0x821778d8
	ctx.lr = 0x82162C54;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82162C5C;
	sub_82177758(ctx, base);
	// lwz r3,28220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162ce0
	if (ctx.cr6.eq) goto loc_82162CE0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82162c84
	if (ctx.cr6.eq) goto loc_82162C84;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82162c84
	if (ctx.cr6.eq) goto loc_82162C84;
	// bl 0x82177950
	ctx.lr = 0x82162C80;
	sub_82177950(ctx, base);
	// b 0x82162ce0
	goto loc_82162CE0;
loc_82162C84:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82162C8C;
	sub_82177868(ctx, base);
	// lwz r11,28220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27788, ctx.r11.u32);
	// bne cr6,0x82162cb8
	if (!ctx.cr6.eq) goto loc_82162CB8;
	// bl 0x82177898
	ctx.lr = 0x82162CB0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82162cbc
	goto loc_82162CBC;
loc_82162CB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82162CBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82162ae0
	ctx.lr = 0x82162CC4;
	sub_82162AE0(ctx, base);
	// lwz r3,28220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// bl 0x82176220
	ctx.lr = 0x82162CCC;
	sub_82176220(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162ce0
	if (ctx.cr6.eq) goto loc_82162CE0;
	// lwz r11,28220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28220);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82162CE0:
	// bl 0x821777e0
	ctx.lr = 0x82162CE4;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82162C30) {
	__imp__sub_82162C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162CFC) {
	__imp__sub_82162CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162D00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162D00) {
	__imp__sub_82162D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82162D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28220(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28220);
	// bl 0x821778d8
	ctx.lr = 0x82162D28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28220(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28220);
	// ble cr6,0x82162d4c
	if (!ctx.cr6.gt) goto loc_82162D4C;
loc_82162D34:
	// stw r30,28220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28220, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82162c30
	ctx.lr = 0x82162D40;
	sub_82162C30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82162d34
	if (!ctx.cr0.eq) goto loc_82162D34;
loc_82162D4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162D08) {
	__imp__sub_82162D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162D54) {
	__imp__sub_82162D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162D58) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162d94
	if (!ctx.cr6.gt) goto loc_82162D94;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82162D7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82162c30
	ctx.lr = 0x82162D84;
	sub_82162C30(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162D88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28220, ctx.r3.u32);
	// bne 0x82162d7c
	if (!ctx.cr0.eq) goto loc_82162D7C;
loc_82162D94:
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

PPC_WEAK_FUNC(sub_82162D58) {
	__imp__sub_82162D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162DAC) {
	__imp__sub_82162DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DB0) {
	__imp__sub_82162DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DB8) {
	__imp__sub_82162DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DC0) {
	__imp__sub_82162DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DC8) {
	__imp__sub_82162DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DD0) {
	__imp__sub_82162DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DD8) {
	__imp__sub_82162DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DE0) {
	__imp__sub_82162DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DE8) {
	__imp__sub_82162DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25888);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162DF0) {
	__imp__sub_82162DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162E04) {
	__imp__sub_82162E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E08) {
	__imp__sub_82162E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E10) {
	__imp__sub_82162E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E18) {
	__imp__sub_82162E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E20) {
	__imp__sub_82162E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E28) {
	__imp__sub_82162E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E30) {
	__imp__sub_82162E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E38) {
	__imp__sub_82162E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E40) {
	__imp__sub_82162E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E48) {
	__imp__sub_82162E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E50) {
	__imp__sub_82162E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E58) {
	__imp__sub_82162E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E60) {
	__imp__sub_82162E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E68) {
	__imp__sub_82162E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E70) {
	__imp__sub_82162E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82162E78) {
	__imp__sub_82162E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162E80) {
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
	// lwz r11,27336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27336);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162ed8
	if (ctx.cr6.eq) goto loc_82162ED8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28004, ctx.r3.u32);
	// bl 0x821762a0
	ctx.lr = 0x82162EB8;
	sub_821762A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82162ed8
	if (!ctx.cr6.eq) goto loc_82162ED8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28004);
	// bl 0x821762a0
	ctx.lr = 0x82162ECC;
	sub_821762A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82162edc
	if (ctx.cr6.eq) goto loc_82162EDC;
loc_82162ED8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82162EDC:
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

PPC_WEAK_FUNC(sub_82162E80) {
	__imp__sub_82162E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82162EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27336(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27336);
	// ble cr6,0x82162f64
	if (!ctx.cr6.gt) goto loc_82162F64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82162F18:
	// stw r31,27336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27336, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162f54
	if (ctx.cr6.eq) goto loc_82162F54;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28004, ctx.r3.u32);
	// bl 0x821762a0
	ctx.lr = 0x82162F38;
	sub_821762A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82162f54
	if (!ctx.cr6.eq) goto loc_82162F54;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28004(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28004);
	// bl 0x821762a0
	ctx.lr = 0x82162F4C;
	sub_821762A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82162f70
	if (ctx.cr6.eq) goto loc_82162F70;
loc_82162F54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82162f18
	if (ctx.cr6.lt) goto loc_82162F18;
loc_82162F64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82162F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162EF0) {
	__imp__sub_82162EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82162F7C) {
	__imp__sub_82162F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162F80) {
	__imp__sub_82162F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162F90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162F90) {
	__imp__sub_82162F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82162F98) {
	__imp__sub_82162F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82162FA8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82162ff0
	if (!ctx.cr6.gt) goto loc_82162FF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26852(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26852);
loc_82162FD0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82162FDC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82162FE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26852(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26852, ctx.r3.u32);
	// bne 0x82162fd0
	if (!ctx.cr0.eq) goto loc_82162FD0;
loc_82162FF0:
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

PPC_WEAK_FUNC(sub_82162FA8) {
	__imp__sub_82162FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25752);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163008) {
	__imp__sub_82163008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163018) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163018) {
	__imp__sub_82163018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25752);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163020) {
	__imp__sub_82163020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163030) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163078
	if (!ctx.cr6.gt) goto loc_82163078;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25752(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25752);
loc_82163058:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163064;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163068;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25752, ctx.r3.u32);
	// bne 0x82163058
	if (!ctx.cr0.eq) goto loc_82163058;
loc_82163078:
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

PPC_WEAK_FUNC(sub_82163030) {
	__imp__sub_82163030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163090) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,27080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27080);
	// bl 0x821778d8
	ctx.lr = 0x821630B4;
	sub_821778D8(ctx, base);
	// lwz r11,27080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27080);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821630C8;
	sub_82147188(ctx, base);
	// lwz r11,27080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27080);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821630DC;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_82163090) {
	__imp__sub_82163090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821630F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821630F4) {
	__imp__sub_821630F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821630F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821630F8) {
	__imp__sub_821630F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82163108;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27080(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// bl 0x821778d8
	ctx.lr = 0x82163120;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,27080(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// ble cr6,0x82163204
	if (!ctx.cr6.gt) goto loc_82163204;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82163138:
	// stw r29,27080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27080, ctx.r29.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216314C;
	sub_821778D8(ctx, base);
	// lwz r4,27080(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82163160;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821631a0
	if (ctx.cr6.eq) goto loc_821631A0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216319c
	if (!ctx.cr6.eq) goto loc_8216319C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82163180;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82163198;
	sub_821779A0(ctx, base);
	// b 0x821631a0
	goto loc_821631A0;
loc_8216319C:
	// bl 0x82177978
	ctx.lr = 0x821631A0;
	sub_82177978(ctx, base);
loc_821631A0:
	// lwz r11,27080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821631B8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821631f8
	if (ctx.cr6.eq) goto loc_821631F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821631f4
	if (!ctx.cr6.eq) goto loc_821631F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821631D8;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821631F0;
	sub_821779A0(ctx, base);
	// b 0x821631f8
	goto loc_821631F8;
loc_821631F4:
	// bl 0x82177978
	ctx.lr = 0x821631F8;
	sub_82177978(ctx, base);
loc_821631F8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82163138
	if (!ctx.cr0.eq) goto loc_82163138;
loc_82163204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163100) {
	__imp__sub_82163100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216320C) {
	__imp__sub_8216320C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82163218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163304
	if (!ctx.cr6.gt) goto loc_82163304;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,27080(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
loc_82163238:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163244;
	sub_821778D8(ctx, base);
	// lwz r4,27080(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82163258;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163298
	if (ctx.cr6.eq) goto loc_82163298;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82163294
	if (!ctx.cr6.eq) goto loc_82163294;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82163278;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82163290;
	sub_821779A0(ctx, base);
	// b 0x82163298
	goto loc_82163298;
loc_82163294:
	// bl 0x82177978
	ctx.lr = 0x82163298;
	sub_82177978(ctx, base);
loc_82163298:
	// lwz r11,27080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27080);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821632B0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821632f0
	if (ctx.cr6.eq) goto loc_821632F0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821632ec
	if (!ctx.cr6.eq) goto loc_821632EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821632D0;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821632E8;
	sub_821779A0(ctx, base);
	// b 0x821632f0
	goto loc_821632F0;
loc_821632EC:
	// bl 0x82177978
	ctx.lr = 0x821632F0;
	sub_82177978(ctx, base);
loc_821632F0:
	// bl 0x82177858
	ctx.lr = 0x821632F4;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27080, ctx.r3.u32);
	// bne 0x82163238
	if (!ctx.cr0.eq) goto loc_82163238;
loc_82163304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163210) {
	__imp__sub_82163210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216330C) {
	__imp__sub_8216330C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163310) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,28164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// bl 0x821778d8
	ctx.lr = 0x82163330;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82163338;
	sub_82177758(ctx, base);
	// lwz r11,28164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216334C;
	sub_82147188(ctx, base);
	// lwz r11,28164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216338c
	if (ctx.cr6.eq) goto loc_8216338C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82163364;
	sub_82177868(ctx, base);
	// lwz r11,28164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,27080(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27080, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163100
	ctx.lr = 0x8216338C;
	sub_82163100(ctx, base);
loc_8216338C:
	// bl 0x821777e0
	ctx.lr = 0x82163390;
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

PPC_WEAK_FUNC(sub_82163310) {
	__imp__sub_82163310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821633A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821633A4) {
	__imp__sub_821633A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821633A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821633A8) {
	__imp__sub_821633A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821633B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821633B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,28164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28164);
	// bl 0x821778d8
	ctx.lr = 0x821633D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28164(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28164);
	// ble cr6,0x821633fc
	if (!ctx.cr6.gt) goto loc_821633FC;
loc_821633E4:
	// stw r30,28164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28164, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163310
	ctx.lr = 0x821633F0;
	sub_82163310(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x821633e4
	if (!ctx.cr0.eq) goto loc_821633E4;
loc_821633FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821633B0) {
	__imp__sub_821633B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163404) {
	__imp__sub_82163404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163408) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163444
	if (!ctx.cr6.gt) goto loc_82163444;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216342C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163310
	ctx.lr = 0x82163434;
	sub_82163310(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163438;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28164, ctx.r3.u32);
	// bne 0x8216342c
	if (!ctx.cr0.eq) goto loc_8216342C;
loc_82163444:
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

PPC_WEAK_FUNC(sub_82163408) {
	__imp__sub_82163408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216345C) {
	__imp__sub_8216345C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163460) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27720(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// bl 0x821778d8
	ctx.lr = 0x82163484;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216348C;
	sub_82177758(ctx, base);
	// lwz r3,27720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82163510
	if (ctx.cr6.eq) goto loc_82163510;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821634b4
	if (ctx.cr6.eq) goto loc_821634B4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x821634b4
	if (ctx.cr6.eq) goto loc_821634B4;
	// bl 0x82177950
	ctx.lr = 0x821634B0;
	sub_82177950(ctx, base);
	// b 0x82163510
	goto loc_82163510;
loc_821634B4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821634BC;
	sub_82177868(ctx, base);
	// lwz r11,27720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28164, ctx.r11.u32);
	// bne cr6,0x821634e8
	if (!ctx.cr6.eq) goto loc_821634E8;
	// bl 0x82177898
	ctx.lr = 0x821634E0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821634ec
	goto loc_821634EC;
loc_821634E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821634EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163310
	ctx.lr = 0x821634F4;
	sub_82163310(ctx, base);
	// lwz r3,27720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// bl 0x82176190
	ctx.lr = 0x821634FC;
	sub_82176190(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82163510
	if (ctx.cr6.eq) goto loc_82163510;
	// lwz r11,27720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27720);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82163510:
	// bl 0x821777e0
	ctx.lr = 0x82163514;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82163460) {
	__imp__sub_82163460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216352C) {
	__imp__sub_8216352C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163530) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163530) {
	__imp__sub_82163530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82163540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27720(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27720);
	// bl 0x821778d8
	ctx.lr = 0x82163558;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27720(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27720);
	// ble cr6,0x8216357c
	if (!ctx.cr6.gt) goto loc_8216357C;
loc_82163564:
	// stw r30,27720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27720, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163460
	ctx.lr = 0x82163570;
	sub_82163460(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82163564
	if (!ctx.cr0.eq) goto loc_82163564;
loc_8216357C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163538) {
	__imp__sub_82163538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163584) {
	__imp__sub_82163584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163588) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821635c4
	if (!ctx.cr6.gt) goto loc_821635C4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821635AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163460
	ctx.lr = 0x821635B4;
	sub_82163460(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821635B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27720, ctx.r3.u32);
	// bne 0x821635ac
	if (!ctx.cr0.eq) goto loc_821635AC;
loc_821635C4:
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

PPC_WEAK_FUNC(sub_82163588) {
	__imp__sub_82163588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821635DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821635DC) {
	__imp__sub_821635DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821635E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821635E0) {
	__imp__sub_821635E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821635E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821635E8) {
	__imp__sub_821635E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821635F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821635F0) {
	__imp__sub_821635F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821635F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821635F8) {
	__imp__sub_821635F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163600) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163600) {
	__imp__sub_82163600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163608) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163608) {
	__imp__sub_82163608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163610) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163610) {
	__imp__sub_82163610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163618) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163618) {
	__imp__sub_82163618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163620) {
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
	// lwz r11,26264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82163678
	if (ctx.cr6.eq) goto loc_82163678;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28096, ctx.r3.u32);
	// bl 0x82176210
	ctx.lr = 0x82163658;
	sub_82176210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82163678
	if (!ctx.cr6.eq) goto loc_82163678;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28096);
	// bl 0x82176210
	ctx.lr = 0x8216366C;
	sub_82176210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216367c
	if (ctx.cr6.eq) goto loc_8216367C;
loc_82163678:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216367C:
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

PPC_WEAK_FUNC(sub_82163620) {
	__imp__sub_82163620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82163698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26264(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26264);
	// ble cr6,0x82163704
	if (!ctx.cr6.gt) goto loc_82163704;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_821636B8:
	// stw r31,26264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26264, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821636f4
	if (ctx.cr6.eq) goto loc_821636F4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28096, ctx.r3.u32);
	// bl 0x82176210
	ctx.lr = 0x821636D8;
	sub_82176210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821636f4
	if (!ctx.cr6.eq) goto loc_821636F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28096);
	// bl 0x82176210
	ctx.lr = 0x821636EC;
	sub_82176210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163710
	if (ctx.cr6.eq) goto loc_82163710;
loc_821636F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821636b8
	if (ctx.cr6.lt) goto loc_821636B8;
loc_82163704:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82163710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163690) {
	__imp__sub_82163690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216371C) {
	__imp__sub_8216371C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163720) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,27564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27564);
	// bl 0x821778d8
	ctx.lr = 0x82163740;
	sub_821778D8(ctx, base);
	// lwz r11,27564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27564);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x82163758;
	sub_82155DF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82163720) {
	__imp__sub_82163720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216376C) {
	__imp__sub_8216376C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163770) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163770) {
	__imp__sub_82163770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82163780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27564(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27564);
	// bl 0x821778d8
	ctx.lr = 0x82163798;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27564(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27564);
	// ble cr6,0x821637dc
	if (!ctx.cr6.gt) goto loc_821637DC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821637A8:
	// stw r31,27564(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27564, ctx.r31.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821637BC;
	sub_821778D8(ctx, base);
	// lwz r11,27564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27564);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x821637D0;
	sub_82155DF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x821637a8
	if (!ctx.cr0.eq) goto loc_821637A8;
loc_821637DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163778) {
	__imp__sub_82163778(ctx, base);
}

