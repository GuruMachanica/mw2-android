#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82149BE0) {
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
	// ble cr6,0x82149c28
	if (!ctx.cr6.gt) goto loc_82149C28;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25640(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25640);
loc_82149C08:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149C14;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149C18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25640, ctx.r3.u32);
	// bne 0x82149c08
	if (!ctx.cr0.eq) goto loc_82149C08;
loc_82149C28:
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

PPC_WEAK_FUNC(sub_82149BE0) {
	__imp__sub_82149BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149C40) {
	__imp__sub_82149C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149C50) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149C50) {
	__imp__sub_82149C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149C58) {
	__imp__sub_82149C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149C68) {
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
	// ble cr6,0x82149cb0
	if (!ctx.cr6.gt) goto loc_82149CB0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27804(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27804);
loc_82149C90:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149C9C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149CA0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27804, ctx.r3.u32);
	// bne 0x82149c90
	if (!ctx.cr0.eq) goto loc_82149C90;
loc_82149CB0:
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

PPC_WEAK_FUNC(sub_82149C68) {
	__imp__sub_82149C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25136);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149CC8) {
	__imp__sub_82149CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149CD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149CD8) {
	__imp__sub_82149CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25136);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149CE0) {
	__imp__sub_82149CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149CF0) {
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
	// ble cr6,0x82149d38
	if (!ctx.cr6.gt) goto loc_82149D38;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25136);
loc_82149D18:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149D24;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149D28;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25136, ctx.r3.u32);
	// bne 0x82149d18
	if (!ctx.cr0.eq) goto loc_82149D18;
loc_82149D38:
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

PPC_WEAK_FUNC(sub_82149CF0) {
	__imp__sub_82149CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28424);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149D50) {
	__imp__sub_82149D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149D60) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149D60) {
	__imp__sub_82149D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,28424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28424);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149D68) {
	__imp__sub_82149D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149D78) {
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
	// ble cr6,0x82149dc0
	if (!ctx.cr6.gt) goto loc_82149DC0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28424(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28424);
loc_82149DA0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149DAC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149DB0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28424, ctx.r3.u32);
	// bne 0x82149da0
	if (!ctx.cr0.eq) goto loc_82149DA0;
loc_82149DC0:
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

PPC_WEAK_FUNC(sub_82149D78) {
	__imp__sub_82149D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26292);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149DD8) {
	__imp__sub_82149DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149DE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149DE8) {
	__imp__sub_82149DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26292);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149DF0) {
	__imp__sub_82149DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149E00) {
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
	// ble cr6,0x82149e48
	if (!ctx.cr6.gt) goto loc_82149E48;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26292(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26292);
loc_82149E28:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149E34;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149E38;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26292, ctx.r3.u32);
	// bne 0x82149e28
	if (!ctx.cr0.eq) goto loc_82149E28;
loc_82149E48:
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

PPC_WEAK_FUNC(sub_82149E00) {
	__imp__sub_82149E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,27792(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27792);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149E60) {
	__imp__sub_82149E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149E70) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149E70) {
	__imp__sub_82149E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 * 56;
	// lwz r4,27792(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27792);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149E78) {
	__imp__sub_82149E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149E88) {
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
	// ble cr6,0x82149ed0
	if (!ctx.cr6.gt) goto loc_82149ED0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27792(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27792);
loc_82149EB0:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82149EBC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82149EC0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27792, ctx.r3.u32);
	// bne 0x82149eb0
	if (!ctx.cr0.eq) goto loc_82149EB0;
loc_82149ED0:
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

PPC_WEAK_FUNC(sub_82149E88) {
	__imp__sub_82149E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149EE8) {
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
	// lwz r4,27764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// bl 0x821778d8
	ctx.lr = 0x82149F08;
	sub_821778D8(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149f4c
	if (ctx.cr6.eq) goto loc_82149F4C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82149F20;
	sub_82177868(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27028, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82149F4C;
	sub_821778D8(ctx, base);
loc_82149F4C:
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

PPC_WEAK_FUNC(sub_82149EE8) {
	__imp__sub_82149EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149F60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149F60) {
	__imp__sub_82149F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82149F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82149F70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// bl 0x821778d8
	ctx.lr = 0x82149F88;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27764(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// ble cr6,0x82149ff8
	if (!ctx.cr6.gt) goto loc_82149FF8;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82149F98:
	// stw r29,27764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27764, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82149FAC;
	sub_821778D8(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149fec
	if (ctx.cr6.eq) goto loc_82149FEC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82149FC4;
	sub_82177868(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27028, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82149FEC;
	sub_821778D8(ctx, base);
loc_82149FEC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82149f98
	if (!ctx.cr0.eq) goto loc_82149F98;
loc_82149FF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82149F68) {
	__imp__sub_82149F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214A008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214a084
	if (!ctx.cr6.gt) goto loc_8214A084;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
loc_8214A024:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A030;
	sub_821778D8(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a070
	if (ctx.cr6.eq) goto loc_8214A070;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A048;
	sub_82177868(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27028(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27028, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A070;
	sub_821778D8(ctx, base);
loc_8214A070:
	// bl 0x82177858
	ctx.lr = 0x8214A074;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27764, ctx.r3.u32);
	// bne 0x8214a024
	if (!ctx.cr0.eq) goto loc_8214A024;
loc_8214A084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A000) {
	__imp__sub_8214A000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A08C) {
	__imp__sub_8214A08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A090) {
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
	// li r5,156
	ctx.r5.s64 = 156;
	// lwz r4,24996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24996);
	// bl 0x821778d8
	ctx.lr = 0x8214A0B0;
	sub_821778D8(ctx, base);
	// lwz r11,24996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24996);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28436, ctx.r11.u32);
	// bl 0x82149a50
	ctx.lr = 0x8214A0C4;
	sub_82149A50(ctx, base);
	// lwz r11,24996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24996);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27764(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27764, ctx.r11.u32);
	// bl 0x82149ee8
	ctx.lr = 0x8214A0DC;
	sub_82149EE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8214A090) {
	__imp__sub_8214A090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A0F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A0F0) {
	__imp__sub_8214A0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214A100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mulli r5,r4,156
	ctx.r5.s64 = ctx.r4.s64 * 156;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,24996(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// bl 0x821778d8
	ctx.lr = 0x8214A118;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,24996(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// ble cr6,0x8214a1bc
	if (!ctx.cr6.gt) goto loc_8214A1BC;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214A134:
	// stw r29,24996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24996, ctx.r29.u32);
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214A148;
	sub_821778D8(ctx, base);
	// lwz r11,24996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28436(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28436, ctx.r11.u32);
	// bl 0x82149a50
	ctx.lr = 0x8214A158;
	sub_82149A50(ctx, base);
	// lwz r11,24996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27764, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214A170;
	sub_821778D8(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a1b0
	if (ctx.cr6.eq) goto loc_8214A1B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A188;
	sub_82177868(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27028(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27028, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A1B0;
	sub_821778D8(ctx, base);
loc_8214A1B0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,156
	ctx.r29.s64 = ctx.r29.s64 + 156;
	// bne 0x8214a134
	if (!ctx.cr0.eq) goto loc_8214A134;
loc_8214A1BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A0F8) {
	__imp__sub_8214A0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A1C4) {
	__imp__sub_8214A1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214A1D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214a27c
	if (!ctx.cr6.gt) goto loc_8214A27C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,24996(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
loc_8214A1F4:
	// li r5,156
	ctx.r5.s64 = 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A200;
	sub_821778D8(ctx, base);
	// lwz r11,24996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28436, ctx.r11.u32);
	// bl 0x82149a50
	ctx.lr = 0x8214A210;
	sub_82149A50(ctx, base);
	// lwz r11,24996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24996);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27764, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214A228;
	sub_821778D8(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a268
	if (ctx.cr6.eq) goto loc_8214A268;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A240;
	sub_82177868(ctx, base);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27764);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27028, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A268;
	sub_821778D8(ctx, base);
loc_8214A268:
	// bl 0x82177858
	ctx.lr = 0x8214A26C;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24996, ctx.r3.u32);
	// bne 0x8214a1f4
	if (!ctx.cr0.eq) goto loc_8214A1F4;
loc_8214A27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A1C8) {
	__imp__sub_8214A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A284) {
	__imp__sub_8214A284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25152);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A288) {
	__imp__sub_8214A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A298) {
	PPC_FUNC_PROLOGUE();
	// li r3,2047
	ctx.r3.s64 = 2047;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A298) {
	__imp__sub_8214A298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25152);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A2A0) {
	__imp__sub_8214A2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A2B0) {
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
	// ble cr6,0x8214a2f8
	if (!ctx.cr6.gt) goto loc_8214A2F8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25152);
loc_8214A2D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A2E4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214A2E8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25152, ctx.r3.u32);
	// bne 0x8214a2d8
	if (!ctx.cr0.eq) goto loc_8214A2D8;
loc_8214A2F8:
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

PPC_WEAK_FUNC(sub_8214A2B0) {
	__imp__sub_8214A2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A310) {
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
	// lwz r4,28620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// bl 0x821778d8
	ctx.lr = 0x8214A330;
	sub_821778D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82177758
	ctx.lr = 0x8214A338;
	sub_82177758(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a374
	if (ctx.cr6.eq) goto loc_8214A374;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82177868
	ctx.lr = 0x8214A350;
	sub_82177868(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25152, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8214A374;
	sub_821778D8(ctx, base);
loc_8214A374:
	// bl 0x821777e0
	ctx.lr = 0x8214A378;
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

PPC_WEAK_FUNC(sub_8214A310) {
	__imp__sub_8214A310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A38C) {
	__imp__sub_8214A38C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A390) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A390) {
	__imp__sub_8214A390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214A3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// bl 0x821778d8
	ctx.lr = 0x8214A3B8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28620(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// ble cr6,0x8214a42c
	if (!ctx.cr6.gt) goto loc_8214A42C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214A3C8:
	// stw r29,28620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28620, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214A3DC;
	sub_821778D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82177758
	ctx.lr = 0x8214A3E4;
	sub_82177758(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a41c
	if (ctx.cr6.eq) goto loc_8214A41C;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82177868
	ctx.lr = 0x8214A3FC;
	sub_82177868(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25152, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8214A41C;
	sub_821778D8(ctx, base);
loc_8214A41C:
	// bl 0x821777e0
	ctx.lr = 0x8214A420;
	sub_821777E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8214a3c8
	if (!ctx.cr0.eq) goto loc_8214A3C8;
loc_8214A42C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A398) {
	__imp__sub_8214A398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A434) {
	__imp__sub_8214A434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214A440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214a4c0
	if (!ctx.cr6.gt) goto loc_8214A4C0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
loc_8214A45C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A468;
	sub_821778D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82177758
	ctx.lr = 0x8214A470;
	sub_82177758(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a4a8
	if (ctx.cr6.eq) goto loc_8214A4A8;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82177868
	ctx.lr = 0x8214A488;
	sub_82177868(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25152, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8214A4A8;
	sub_821778D8(ctx, base);
loc_8214A4A8:
	// bl 0x821777e0
	ctx.lr = 0x8214A4AC;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214A4B0;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28620, ctx.r3.u32);
	// bne 0x8214a45c
	if (!ctx.cr0.eq) goto loc_8214A45C;
loc_8214A4C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A438) {
	__imp__sub_8214A438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A4C8) {
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
	// lwz r4,25396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// bl 0x821778d8
	ctx.lr = 0x8214A4E8;
	sub_821778D8(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a528
	if (ctx.cr6.eq) goto loc_8214A528;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A500;
	sub_82177868(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27028, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A528;
	sub_821778D8(ctx, base);
loc_8214A528:
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

PPC_WEAK_FUNC(sub_8214A4C8) {
	__imp__sub_8214A4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A53C) {
	__imp__sub_8214A53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A540) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A540) {
	__imp__sub_8214A540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214A550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// bl 0x821778d8
	ctx.lr = 0x8214A568;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25396(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// ble cr6,0x8214a5d4
	if (!ctx.cr6.gt) goto loc_8214A5D4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214A578:
	// stw r29,25396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25396, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214A58C;
	sub_821778D8(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a5c8
	if (ctx.cr6.eq) goto loc_8214A5C8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A5A4;
	sub_82177868(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27028(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27028, ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A5C8;
	sub_821778D8(ctx, base);
loc_8214A5C8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8214a578
	if (!ctx.cr0.eq) goto loc_8214A578;
loc_8214A5D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A548) {
	__imp__sub_8214A548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A5DC) {
	__imp__sub_8214A5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214A5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214a660
	if (!ctx.cr6.gt) goto loc_8214A660;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
loc_8214A604:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A610;
	sub_821778D8(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a64c
	if (ctx.cr6.eq) goto loc_8214A64C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A628;
	sub_82177868(ctx, base);
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25396);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27028(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27028, ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A64C;
	sub_821778D8(ctx, base);
loc_8214A64C:
	// bl 0x82177858
	ctx.lr = 0x8214A650;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25396, ctx.r3.u32);
	// bne 0x8214a604
	if (!ctx.cr0.eq) goto loc_8214A604;
loc_8214A660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A5E0) {
	__imp__sub_8214A5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,27100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27100);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A668) {
	__imp__sub_8214A668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A678) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A678) {
	__imp__sub_8214A678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,27100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27100);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A680) {
	__imp__sub_8214A680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A690) {
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
	// ble cr6,0x8214a6d8
	if (!ctx.cr6.gt) goto loc_8214A6D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27100);
loc_8214A6B8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A6C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214A6C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27100, ctx.r3.u32);
	// bne 0x8214a6b8
	if (!ctx.cr0.eq) goto loc_8214A6B8;
loc_8214A6D8:
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

PPC_WEAK_FUNC(sub_8214A690) {
	__imp__sub_8214A690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r4,27992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A6F0) {
	__imp__sub_8214A6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A700) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A700) {
	__imp__sub_8214A700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A708) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,27992(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A708) {
	__imp__sub_8214A708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A720) {
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
	// ble cr6,0x8214a768
	if (!ctx.cr6.gt) goto loc_8214A768;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27992(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27992);
loc_8214A748:
	// li r5,18
	ctx.r5.s64 = 18;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A754;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214A758;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27992, ctx.r3.u32);
	// bne 0x8214a748
	if (!ctx.cr0.eq) goto loc_8214A748;
loc_8214A768:
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

PPC_WEAK_FUNC(sub_8214A720) {
	__imp__sub_8214A720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,28308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28308);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A780) {
	__imp__sub_8214A780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A790) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A790) {
	__imp__sub_8214A790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,28308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28308);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A798) {
	__imp__sub_8214A798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A7A8) {
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
	// ble cr6,0x8214a7f0
	if (!ctx.cr6.gt) goto loc_8214A7F0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28308);
loc_8214A7D0:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A7DC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214A7E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28308, ctx.r3.u32);
	// bne 0x8214a7d0
	if (!ctx.cr0.eq) goto loc_8214A7D0;
loc_8214A7F0:
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

PPC_WEAK_FUNC(sub_8214A7A8) {
	__imp__sub_8214A7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A808) {
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
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r4,25160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25160);
	// bl 0x821778d8
	ctx.lr = 0x8214A828;
	sub_821778D8(ctx, base);
	// lwz r11,25160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25160);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28620, ctx.r11.u32);
	// bl 0x8214a310
	ctx.lr = 0x8214A83C;
	sub_8214A310(ctx, base);
	// lwz r11,25160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25160);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25396, ctx.r11.u32);
	// bl 0x8214a4c8
	ctx.lr = 0x8214A854;
	sub_8214A4C8(ctx, base);
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

PPC_WEAK_FUNC(sub_8214A808) {
	__imp__sub_8214A808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A868) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A868) {
	__imp__sub_8214A868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8214A878;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 * 68;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// bl 0x821778d8
	ctx.lr = 0x8214A890;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r28,25160(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// ble cr6,0x8214a97c
	if (!ctx.cr6.gt) goto loc_8214A97C;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214A8B0:
	// stw r28,25160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25160, ctx.r28.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214A8C4;
	sub_821778D8(ctx, base);
	// lwz r4,25160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28620, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214A8D8;
	sub_821778D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82177758
	ctx.lr = 0x8214A8E0;
	sub_82177758(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a918
	if (ctx.cr6.eq) goto loc_8214A918;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82177868
	ctx.lr = 0x8214A8F8;
	sub_82177868(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25152, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8214A918;
	sub_821778D8(ctx, base);
loc_8214A918:
	// bl 0x821777e0
	ctx.lr = 0x8214A91C;
	sub_821777E0(ctx, base);
	// lwz r11,25160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25396, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214A934;
	sub_821778D8(ctx, base);
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a970
	if (ctx.cr6.eq) goto loc_8214A970;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214A94C;
	sub_82177868(ctx, base);
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27028(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27028, ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214A970;
	sub_821778D8(ctx, base);
loc_8214A970:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// bne 0x8214a8b0
	if (!ctx.cr0.eq) goto loc_8214A8B0;
loc_8214A97C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A870) {
	__imp__sub_8214A870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214A984) {
	__imp__sub_8214A984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214A990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214aa84
	if (!ctx.cr6.gt) goto loc_8214AA84;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,25160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214A9B8:
	// li r5,68
	ctx.r5.s64 = 68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214A9C4;
	sub_821778D8(ctx, base);
	// lwz r4,25160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28620, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214A9D8;
	sub_821778D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82177758
	ctx.lr = 0x8214A9E0;
	sub_82177758(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214aa18
	if (ctx.cr6.eq) goto loc_8214AA18;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82177868
	ctx.lr = 0x8214A9F8;
	sub_82177868(ctx, base);
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28620);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25152, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8214AA18;
	sub_821778D8(ctx, base);
loc_8214AA18:
	// bl 0x821777e0
	ctx.lr = 0x8214AA1C;
	sub_821777E0(ctx, base);
	// lwz r11,25160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25160);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25396, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214AA34;
	sub_821778D8(ctx, base);
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214aa70
	if (ctx.cr6.eq) goto loc_8214AA70;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214AA4C;
	sub_82177868(ctx, base);
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25396);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27028(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27028, ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214AA70;
	sub_821778D8(ctx, base);
loc_8214AA70:
	// bl 0x82177858
	ctx.lr = 0x8214AA74;
	sub_82177858(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25160, ctx.r3.u32);
	// bne 0x8214a9b8
	if (!ctx.cr0.eq) goto loc_8214A9B8;
loc_8214AA84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214A988) {
	__imp__sub_8214A988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AA8C) {
	__imp__sub_8214AA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AA90) {
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
	// lwz r4,25260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// bl 0x821778d8
	ctx.lr = 0x8214AAB0;
	sub_821778D8(ctx, base);
	// lwz r3,25260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ab0c
	if (ctx.cr6.eq) goto loc_8214AB0C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214ab08
	if (!ctx.cr6.eq) goto loc_8214AB08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214AAD0;
	sub_82177868(ctx, base);
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27860, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214AAF4;
	sub_821778D8(ctx, base);
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
loc_8214AB08:
	// bl 0x82177978
	ctx.lr = 0x8214AB0C;
	sub_82177978(ctx, base);
loc_8214AB0C:
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

PPC_WEAK_FUNC(sub_8214AA90) {
	__imp__sub_8214AA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AB20) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AB20) {
	__imp__sub_8214AB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214AB30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// bl 0x821778d8
	ctx.lr = 0x8214AB48;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25260(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// ble cr6,0x8214abc0
	if (!ctx.cr6.gt) goto loc_8214ABC0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214AB58:
	// stw r29,25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25260, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214AB6C;
	sub_821778D8(ctx, base);
	// lwz r3,25260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214abb4
	if (ctx.cr6.eq) goto loc_8214ABB4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214abb0
	if (!ctx.cr6.eq) goto loc_8214ABB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214AB8C;
	sub_82177868(ctx, base);
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27860, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214ABAC;
	sub_821778D8(ctx, base);
	// b 0x8214abb4
	goto loc_8214ABB4;
loc_8214ABB0:
	// bl 0x82177978
	ctx.lr = 0x8214ABB4;
	sub_82177978(ctx, base);
loc_8214ABB4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8214ab58
	if (!ctx.cr0.eq) goto loc_8214AB58;
loc_8214ABC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AB28) {
	__imp__sub_8214AB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214ABD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214ac54
	if (!ctx.cr6.gt) goto loc_8214AC54;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
loc_8214ABEC:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214ABF8;
	sub_821778D8(ctx, base);
	// lwz r3,25260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ac40
	if (ctx.cr6.eq) goto loc_8214AC40;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214ac3c
	if (!ctx.cr6.eq) goto loc_8214AC3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214AC18;
	sub_82177868(ctx, base);
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27860, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214AC38;
	sub_821778D8(ctx, base);
	// b 0x8214ac40
	goto loc_8214AC40;
loc_8214AC3C:
	// bl 0x82177978
	ctx.lr = 0x8214AC40;
	sub_82177978(ctx, base);
loc_8214AC40:
	// bl 0x82177858
	ctx.lr = 0x8214AC44;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25260, ctx.r3.u32);
	// bne 0x8214abec
	if (!ctx.cr0.eq) goto loc_8214ABEC;
loc_8214AC54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ABC8) {
	__imp__sub_8214ABC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AC5C) {
	__imp__sub_8214AC5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26172);
	// stw r11,25260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25260, ctx.r11.u32);
	// b 0x8214aa90
	sub_8214AA90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AC60) {
	__imp__sub_8214AC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AC74) {
	__imp__sub_8214AC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AC78) {
	__imp__sub_8214AC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214AC88;
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
	// lwz r4,26172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26172);
	// bl 0x821778d8
	ctx.lr = 0x8214ACA0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26172(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26172);
	// ble cr6,0x8214ad24
	if (!ctx.cr6.gt) goto loc_8214AD24;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214ACB8:
	// stw r30,26172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26172, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25260, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214ACD0;
	sub_821778D8(ctx, base);
	// lwz r3,25260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ad18
	if (ctx.cr6.eq) goto loc_8214AD18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214ad14
	if (!ctx.cr6.eq) goto loc_8214AD14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214ACF0;
	sub_82177868(ctx, base);
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27860, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214AD10;
	sub_821778D8(ctx, base);
	// b 0x8214ad18
	goto loc_8214AD18;
loc_8214AD14:
	// bl 0x82177978
	ctx.lr = 0x8214AD18;
	sub_82177978(ctx, base);
loc_8214AD18:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8214acb8
	if (!ctx.cr0.eq) goto loc_8214ACB8;
loc_8214AD24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AC80) {
	__imp__sub_8214AC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AD2C) {
	__imp__sub_8214AD2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214AD38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214adc4
	if (!ctx.cr6.gt) goto loc_8214ADC4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26172);
loc_8214AD58:
	// stw r4,25260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25260, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214AD68;
	sub_821778D8(ctx, base);
	// lwz r3,25260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214adb0
	if (ctx.cr6.eq) goto loc_8214ADB0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214adac
	if (!ctx.cr6.eq) goto loc_8214ADAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214AD88;
	sub_82177868(ctx, base);
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25260);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27860, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214ADA8;
	sub_821778D8(ctx, base);
	// b 0x8214adb0
	goto loc_8214ADB0;
loc_8214ADAC:
	// bl 0x82177978
	ctx.lr = 0x8214ADB0;
	sub_82177978(ctx, base);
loc_8214ADB0:
	// bl 0x82177858
	ctx.lr = 0x8214ADB4;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26172, ctx.r3.u32);
	// bne 0x8214ad58
	if (!ctx.cr0.eq) goto loc_8214AD58;
loc_8214ADC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AD30) {
	__imp__sub_8214AD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214ADCC) {
	__imp__sub_8214ADCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ADD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,25380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25380);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ADD0) {
	__imp__sub_8214ADD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ADE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ADE0) {
	__imp__sub_8214ADE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ADE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,25380(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25380);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ADE8) {
	__imp__sub_8214ADE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AE00) {
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
	// ble cr6,0x8214ae48
	if (!ctx.cr6.gt) goto loc_8214AE48;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25380(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25380);
loc_8214AE28:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214AE34;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214AE38;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25380, ctx.r3.u32);
	// bne 0x8214ae28
	if (!ctx.cr0.eq) goto loc_8214AE28;
loc_8214AE48:
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

PPC_WEAK_FUNC(sub_8214AE00) {
	__imp__sub_8214AE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,25796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AE60) {
	__imp__sub_8214AE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AE70) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AE70) {
	__imp__sub_8214AE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,25796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AE78) {
	__imp__sub_8214AE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AE88) {
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
	// ble cr6,0x8214aed0
	if (!ctx.cr6.gt) goto loc_8214AED0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25796);
loc_8214AEB0:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214AEBC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214AEC0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25796, ctx.r3.u32);
	// bne 0x8214aeb0
	if (!ctx.cr0.eq) goto loc_8214AEB0;
loc_8214AED0:
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

PPC_WEAK_FUNC(sub_8214AE88) {
	__imp__sub_8214AE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AEE8) {
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
	// lwz r4,26952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// bl 0x821778d8
	ctx.lr = 0x8214AF08;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214AF10;
	sub_82177758(ctx, base);
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214af50
	if (ctx.cr6.eq) goto loc_8214AF50;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214AF28;
	sub_82177868(ctx, base);
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,1352
	ctx.r5.s64 = 1352;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25796, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214AF4C;
	sub_821778D8(ctx, base);
	// lwz r11,26952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26952);
loc_8214AF50:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214AF64;
	sub_82147188(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214AF68;
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

PPC_WEAK_FUNC(sub_8214AEE8) {
	__imp__sub_8214AEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AF7C) {
	__imp__sub_8214AF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AF80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AF80) {
	__imp__sub_8214AF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214AF90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26952);
	// bl 0x821778d8
	ctx.lr = 0x8214AFA8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26952(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26952);
	// ble cr6,0x8214afcc
	if (!ctx.cr6.gt) goto loc_8214AFCC;
loc_8214AFB4:
	// stw r30,26952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26952, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214aee8
	ctx.lr = 0x8214AFC0;
	sub_8214AEE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8214afb4
	if (!ctx.cr0.eq) goto loc_8214AFB4;
loc_8214AFCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214AF88) {
	__imp__sub_8214AF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214AFD4) {
	__imp__sub_8214AFD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214AFD8) {
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
	// ble cr6,0x8214b014
	if (!ctx.cr6.gt) goto loc_8214B014;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214AFFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214aee8
	ctx.lr = 0x8214B004;
	sub_8214AEE8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214B008;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26952, ctx.r3.u32);
	// bne 0x8214affc
	if (!ctx.cr0.eq) goto loc_8214AFFC;
loc_8214B014:
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

PPC_WEAK_FUNC(sub_8214AFD8) {
	__imp__sub_8214AFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B02C) {
	__imp__sub_8214B02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B030) {
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
	// lwz r4,27620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// bl 0x821778d8
	ctx.lr = 0x8214B054;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214B05C;
	sub_82177758(ctx, base);
	// lwz r3,27620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214b0e0
	if (ctx.cr6.eq) goto loc_8214B0E0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8214b084
	if (ctx.cr6.eq) goto loc_8214B084;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8214b084
	if (ctx.cr6.eq) goto loc_8214B084;
	// bl 0x82177950
	ctx.lr = 0x8214B080;
	sub_82177950(ctx, base);
	// b 0x8214b0e0
	goto loc_8214B0E0;
loc_8214B084:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214B08C;
	sub_82177868(ctx, base);
	// lwz r11,27620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26952, ctx.r11.u32);
	// bne cr6,0x8214b0b8
	if (!ctx.cr6.eq) goto loc_8214B0B8;
	// bl 0x82177898
	ctx.lr = 0x8214B0B0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8214b0bc
	goto loc_8214B0BC;
loc_8214B0B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8214B0BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214aee8
	ctx.lr = 0x8214B0C4;
	sub_8214AEE8(ctx, base);
	// lwz r3,27620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// bl 0x82175ec0
	ctx.lr = 0x8214B0CC;
	sub_82175EC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214b0e0
	if (ctx.cr6.eq) goto loc_8214B0E0;
	// lwz r11,27620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8214B0E0:
	// bl 0x821777e0
	ctx.lr = 0x8214B0E4;
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

PPC_WEAK_FUNC(sub_8214B030) {
	__imp__sub_8214B030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B0FC) {
	__imp__sub_8214B0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B100) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B100) {
	__imp__sub_8214B100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214B110;
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
	// lwz r4,27620(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27620);
	// bl 0x821778d8
	ctx.lr = 0x8214B128;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27620(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27620);
	// ble cr6,0x8214b14c
	if (!ctx.cr6.gt) goto loc_8214B14C;
loc_8214B134:
	// stw r30,27620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27620, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214b030
	ctx.lr = 0x8214B140;
	sub_8214B030(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214b134
	if (!ctx.cr0.eq) goto loc_8214B134;
loc_8214B14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B108) {
	__imp__sub_8214B108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B154) {
	__imp__sub_8214B154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B158) {
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
	// ble cr6,0x8214b194
	if (!ctx.cr6.gt) goto loc_8214B194;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214B17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214b030
	ctx.lr = 0x8214B184;
	sub_8214B030(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214B188;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27620, ctx.r3.u32);
	// bne 0x8214b17c
	if (!ctx.cr0.eq) goto loc_8214B17C;
loc_8214B194:
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

PPC_WEAK_FUNC(sub_8214B158) {
	__imp__sub_8214B158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B1AC) {
	__imp__sub_8214B1AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1B0) {
	__imp__sub_8214B1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1B8) {
	__imp__sub_8214B1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1C0) {
	__imp__sub_8214B1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1C8) {
	__imp__sub_8214B1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1D0) {
	__imp__sub_8214B1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1D8) {
	__imp__sub_8214B1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1E0) {
	__imp__sub_8214B1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1E8) {
	__imp__sub_8214B1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1F0) {
	__imp__sub_8214B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B1F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B1F8) {
	__imp__sub_8214B1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B200) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B200) {
	__imp__sub_8214B200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B208) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B208) {
	__imp__sub_8214B208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B210) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B210) {
	__imp__sub_8214B210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B218) {
	__imp__sub_8214B218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B220) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B220) {
	__imp__sub_8214B220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B228) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B228) {
	__imp__sub_8214B228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B230) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B230) {
	__imp__sub_8214B230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B238) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B238) {
	__imp__sub_8214B238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B240) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B240) {
	__imp__sub_8214B240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B248) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B248) {
	__imp__sub_8214B248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B250) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B250) {
	__imp__sub_8214B250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B258) {
	__imp__sub_8214B258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B260) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B260) {
	__imp__sub_8214B260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B268) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B268) {
	__imp__sub_8214B268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B270) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B270) {
	__imp__sub_8214B270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B278) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B278) {
	__imp__sub_8214B278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B280) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B280) {
	__imp__sub_8214B280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B288) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B288) {
	__imp__sub_8214B288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B290) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B290) {
	__imp__sub_8214B290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B298) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B298) {
	__imp__sub_8214B298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2A0) {
	__imp__sub_8214B2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2A8) {
	__imp__sub_8214B2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2B0) {
	__imp__sub_8214B2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2B8) {
	__imp__sub_8214B2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2C0) {
	__imp__sub_8214B2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2C8) {
	__imp__sub_8214B2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2D0) {
	__imp__sub_8214B2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2D8) {
	__imp__sub_8214B2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2E0) {
	__imp__sub_8214B2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2E8) {
	__imp__sub_8214B2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2F0) {
	__imp__sub_8214B2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B2F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B2F8) {
	__imp__sub_8214B2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B300) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B300) {
	__imp__sub_8214B300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B308) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B308) {
	__imp__sub_8214B308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B310) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B310) {
	__imp__sub_8214B310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B318) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B318) {
	__imp__sub_8214B318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B320) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B320) {
	__imp__sub_8214B320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B328) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B328) {
	__imp__sub_8214B328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B330) {
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
	// lwz r11,25532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214b388
	if (ctx.cr6.eq) goto loc_8214B388;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27584, ctx.r3.u32);
	// bl 0x82175f40
	ctx.lr = 0x8214B368;
	sub_82175F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214b388
	if (!ctx.cr6.eq) goto loc_8214B388;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27584);
	// bl 0x82175f40
	ctx.lr = 0x8214B37C;
	sub_82175F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214b38c
	if (ctx.cr6.eq) goto loc_8214B38C;
loc_8214B388:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214B38C:
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

PPC_WEAK_FUNC(sub_8214B330) {
	__imp__sub_8214B330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214B3A8;
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
	// lwz r31,25532(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25532);
	// ble cr6,0x8214b414
	if (!ctx.cr6.gt) goto loc_8214B414;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214B3C8:
	// stw r31,25532(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25532, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b404
	if (ctx.cr6.eq) goto loc_8214B404;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27584, ctx.r3.u32);
	// bl 0x82175f40
	ctx.lr = 0x8214B3E8;
	sub_82175F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214b404
	if (!ctx.cr6.eq) goto loc_8214B404;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27584(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27584);
	// bl 0x82175f40
	ctx.lr = 0x8214B3FC;
	sub_82175F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214b420
	if (ctx.cr6.eq) goto loc_8214B420;
loc_8214B404:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8214b3c8
	if (ctx.cr6.lt) goto loc_8214B3C8;
loc_8214B414:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8214B420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B3A0) {
	__imp__sub_8214B3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B42C) {
	__imp__sub_8214B42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26132);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B430) {
	__imp__sub_8214B430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B440) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B440) {
	__imp__sub_8214B440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26132);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B448) {
	__imp__sub_8214B448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B458) {
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
	// ble cr6,0x8214b4a0
	if (!ctx.cr6.gt) goto loc_8214B4A0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26132);
loc_8214B480:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214B48C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214B490;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26132, ctx.r3.u32);
	// bne 0x8214b480
	if (!ctx.cr0.eq) goto loc_8214B480;
loc_8214B4A0:
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

PPC_WEAK_FUNC(sub_8214B458) {
	__imp__sub_8214B458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B4B8) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// bl 0x821778d8
	ctx.lr = 0x8214B4DC;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B4F0;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B504;
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

PPC_WEAK_FUNC(sub_8214B4B8) {
	__imp__sub_8214B4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B51C) {
	__imp__sub_8214B51C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B520) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B520) {
	__imp__sub_8214B520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214B530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// bl 0x821778d8
	ctx.lr = 0x8214B548;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,28272(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// ble cr6,0x8214b62c
	if (!ctx.cr6.gt) goto loc_8214B62C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214B560:
	// stw r29,28272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28272, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214B574;
	sub_821778D8(ctx, base);
	// lwz r4,28272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B588;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b5c8
	if (ctx.cr6.eq) goto loc_8214B5C8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214b5c4
	if (!ctx.cr6.eq) goto loc_8214B5C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214B5A8;
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
	ctx.lr = 0x8214B5C0;
	sub_821779A0(ctx, base);
	// b 0x8214b5c8
	goto loc_8214B5C8;
loc_8214B5C4:
	// bl 0x82177978
	ctx.lr = 0x8214B5C8;
	sub_82177978(ctx, base);
loc_8214B5C8:
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B5E0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b620
	if (ctx.cr6.eq) goto loc_8214B620;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214b61c
	if (!ctx.cr6.eq) goto loc_8214B61C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214B600;
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
	ctx.lr = 0x8214B618;
	sub_821779A0(ctx, base);
	// b 0x8214b620
	goto loc_8214B620;
loc_8214B61C:
	// bl 0x82177978
	ctx.lr = 0x8214B620;
	sub_82177978(ctx, base);
loc_8214B620:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8214b560
	if (!ctx.cr0.eq) goto loc_8214B560;
loc_8214B62C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B528) {
	__imp__sub_8214B528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B634) {
	__imp__sub_8214B634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214B640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214b72c
	if (!ctx.cr6.gt) goto loc_8214B72C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,28272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
loc_8214B660:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214B66C;
	sub_821778D8(ctx, base);
	// lwz r4,28272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B680;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b6c0
	if (ctx.cr6.eq) goto loc_8214B6C0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214b6bc
	if (!ctx.cr6.eq) goto loc_8214B6BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214B6A0;
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
	ctx.lr = 0x8214B6B8;
	sub_821779A0(ctx, base);
	// b 0x8214b6c0
	goto loc_8214B6C0;
loc_8214B6BC:
	// bl 0x82177978
	ctx.lr = 0x8214B6C0;
	sub_82177978(ctx, base);
loc_8214B6C0:
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B6D8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b718
	if (ctx.cr6.eq) goto loc_8214B718;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214b714
	if (!ctx.cr6.eq) goto loc_8214B714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214B6F8;
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
	ctx.lr = 0x8214B710;
	sub_821779A0(ctx, base);
	// b 0x8214b718
	goto loc_8214B718;
loc_8214B714:
	// bl 0x82177978
	ctx.lr = 0x8214B718;
	sub_82177978(ctx, base);
loc_8214B718:
	// bl 0x82177858
	ctx.lr = 0x8214B71C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28272, ctx.r3.u32);
	// bne 0x8214b660
	if (!ctx.cr0.eq) goto loc_8214B660;
loc_8214B72C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B638) {
	__imp__sub_8214B638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B734) {
	__imp__sub_8214B734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25996);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B738) {
	__imp__sub_8214B738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B748) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B748) {
	__imp__sub_8214B748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25996);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B750) {
	__imp__sub_8214B750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B760) {
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
	// ble cr6,0x8214b7a8
	if (!ctx.cr6.gt) goto loc_8214B7A8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25996(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25996);
loc_8214B788:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214B794;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214B798;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25996, ctx.r3.u32);
	// bne 0x8214b788
	if (!ctx.cr0.eq) goto loc_8214B788;
loc_8214B7A8:
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

PPC_WEAK_FUNC(sub_8214B760) {
	__imp__sub_8214B760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25404);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8214b7e8
	if (!ctx.cr6.eq) goto loc_8214B7E8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26184);
	// stw r11,28272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28272, ctx.r11.u32);
	// b 0x8214b4b8
	sub_8214B4B8(ctx, base);
	return;
loc_8214B7E8:
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
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26184);
	// stw r4,25996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25996, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B7C0) {
	__imp__sub_8214B7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214B80C) {
	__imp__sub_8214B80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B810) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B810) {
	__imp__sub_8214B810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214B820;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26184);
	// bl 0x821778d8
	ctx.lr = 0x8214B838;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26184(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26184);
	// ble cr6,0x8214b8ac
	if (!ctx.cr6.gt) goto loc_8214B8AC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8214B854:
	// lwz r11,25404(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25404);
	// stw r31,26184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26184, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8214b8a0
	if (!ctx.cr6.eq) goto loc_8214B8A0;
	// stw r31,28272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28272, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214B87C;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B88C;
	sub_82147188(ctx, base);
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B8A0;
	sub_82147188(ctx, base);
loc_8214B8A0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8214b854
	if (!ctx.cr0.eq) goto loc_8214B854;
loc_8214B8AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B818) {
	__imp__sub_8214B818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B8B4) {
	__imp__sub_8214B8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214B8C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214b94c
	if (!ctx.cr6.gt) goto loc_8214B94C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26184);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8214B8E8:
	// lwz r11,25404(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25404);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214b930
	if (!ctx.cr6.eq) goto loc_8214B930;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B908;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B918;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214B92C;
	sub_82147188(ctx, base);
	// b 0x8214b938
	goto loc_8214B938;
loc_8214B930:
	// stw r4,25996(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25996, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214B938;
	sub_821778D8(ctx, base);
loc_8214B938:
	// bl 0x82177858
	ctx.lr = 0x8214B93C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26184, ctx.r3.u32);
	// bne 0x8214b8e8
	if (!ctx.cr0.eq) goto loc_8214B8E8;
loc_8214B94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B8B8) {
	__imp__sub_8214B8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214B954) {
	__imp__sub_8214B954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B958) {
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
	// lwz r4,25404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25404);
	// bl 0x821778d8
	ctx.lr = 0x8214B978;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25404);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,26184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26184, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8214b9a4
	if (!ctx.cr6.eq) goto loc_8214B9A4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28272, ctx.r10.u32);
	// bl 0x8214b4b8
	ctx.lr = 0x8214B9A4;
	sub_8214B4B8(ctx, base);
loc_8214B9A4:
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

PPC_WEAK_FUNC(sub_8214B958) {
	__imp__sub_8214B958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B9B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B9B8) {
	__imp__sub_8214B9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214B9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214B9C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwz r4,25404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// bl 0x821778d8
	ctx.lr = 0x8214B9E8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25404(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// ble cr6,0x8214ba70
	if (!ctx.cr6.gt) goto loc_8214BA70;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8214BA04:
	// stw r30,25404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25404, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BA18;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214ba64
	if (!ctx.cr6.eq) goto loc_8214BA64;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BA40;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BA50;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BA64;
	sub_82147188(ctx, base);
loc_8214BA64:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8214ba04
	if (!ctx.cr0.eq) goto loc_8214BA04;
loc_8214BA70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214B9C0) {
	__imp__sub_8214B9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214BA80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214bb10
	if (!ctx.cr6.gt) goto loc_8214BB10;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r4,25404(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25404);
loc_8214BAA4:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214BAB0;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214bafc
	if (!ctx.cr6.eq) goto loc_8214BAFC;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BAD8;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BAE8;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BAFC;
	sub_82147188(ctx, base);
loc_8214BAFC:
	// bl 0x82177858
	ctx.lr = 0x8214BB00;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25404, ctx.r3.u32);
	// bne 0x8214baa4
	if (!ctx.cr0.eq) goto loc_8214BAA4;
loc_8214BB10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BA78) {
	__imp__sub_8214BA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BB18) {
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
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r4,27760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27760);
	// bl 0x821778d8
	ctx.lr = 0x8214BB38;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214BB40;
	sub_82177758(ctx, base);
	// lwz r11,27760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27760);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BB54;
	sub_82147188(ctx, base);
	// lwz r11,27760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27760);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,24996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24996, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214BB70;
	sub_821778D8(ctx, base);
	// lwz r11,24996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24996);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28436, ctx.r11.u32);
	// bl 0x82149a50
	ctx.lr = 0x8214BB84;
	sub_82149A50(ctx, base);
	// lwz r11,24996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24996);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27764, ctx.r11.u32);
	// bl 0x82149ee8
	ctx.lr = 0x8214BB9C;
	sub_82149EE8(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214BBA0;
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

PPC_WEAK_FUNC(sub_8214BB18) {
	__imp__sub_8214BB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BBB4) {
	__imp__sub_8214BBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BBB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BBB8) {
	__imp__sub_8214BBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214BBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,27760(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27760);
	// bl 0x821778d8
	ctx.lr = 0x8214BBE8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27760(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27760);
	// ble cr6,0x8214bc0c
	if (!ctx.cr6.gt) goto loc_8214BC0C;
loc_8214BBF4:
	// stw r30,27760(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27760, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214bb18
	ctx.lr = 0x8214BC00;
	sub_8214BB18(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bne 0x8214bbf4
	if (!ctx.cr0.eq) goto loc_8214BBF4;
loc_8214BC0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BBC0) {
	__imp__sub_8214BBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BC14) {
	__imp__sub_8214BC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BC18) {
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
	// ble cr6,0x8214bc54
	if (!ctx.cr6.gt) goto loc_8214BC54;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214BC3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214bb18
	ctx.lr = 0x8214BC44;
	sub_8214BB18(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214BC48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27760, ctx.r3.u32);
	// bne 0x8214bc3c
	if (!ctx.cr0.eq) goto loc_8214BC3C;
loc_8214BC54:
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

PPC_WEAK_FUNC(sub_8214BC18) {
	__imp__sub_8214BC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BC6C) {
	__imp__sub_8214BC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BC70) {
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
	// lwz r4,27428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// bl 0x821778d8
	ctx.lr = 0x8214BC94;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214BC9C;
	sub_82177758(ctx, base);
	// lwz r3,27428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214bd20
	if (ctx.cr6.eq) goto loc_8214BD20;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8214bcc4
	if (ctx.cr6.eq) goto loc_8214BCC4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8214bcc4
	if (ctx.cr6.eq) goto loc_8214BCC4;
	// bl 0x82177950
	ctx.lr = 0x8214BCC0;
	sub_82177950(ctx, base);
	// b 0x8214bd20
	goto loc_8214BD20;
loc_8214BCC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214BCCC;
	sub_82177868(ctx, base);
	// lwz r11,27428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27760, ctx.r11.u32);
	// bne cr6,0x8214bcf8
	if (!ctx.cr6.eq) goto loc_8214BCF8;
	// bl 0x82177898
	ctx.lr = 0x8214BCF0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8214bcfc
	goto loc_8214BCFC;
loc_8214BCF8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8214BCFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214bb18
	ctx.lr = 0x8214BD04;
	sub_8214BB18(ctx, base);
	// lwz r3,27428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// bl 0x82175690
	ctx.lr = 0x8214BD0C;
	sub_82175690(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214bd20
	if (ctx.cr6.eq) goto loc_8214BD20;
	// lwz r11,27428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8214BD20:
	// bl 0x821777e0
	ctx.lr = 0x8214BD24;
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

PPC_WEAK_FUNC(sub_8214BC70) {
	__imp__sub_8214BC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BD3C) {
	__imp__sub_8214BD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BD40) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BD40) {
	__imp__sub_8214BD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214BD50;
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
	// lwz r4,27428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27428);
	// bl 0x821778d8
	ctx.lr = 0x8214BD68;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27428(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27428);
	// ble cr6,0x8214bd8c
	if (!ctx.cr6.gt) goto loc_8214BD8C;
loc_8214BD74:
	// stw r30,27428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27428, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214bc70
	ctx.lr = 0x8214BD80;
	sub_8214BC70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214bd74
	if (!ctx.cr0.eq) goto loc_8214BD74;
loc_8214BD8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BD48) {
	__imp__sub_8214BD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BD94) {
	__imp__sub_8214BD94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BD98) {
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
	// ble cr6,0x8214bdd4
	if (!ctx.cr6.gt) goto loc_8214BDD4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214BDBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214bc70
	ctx.lr = 0x8214BDC4;
	sub_8214BC70(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214BDC8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27428, ctx.r3.u32);
	// bne 0x8214bdbc
	if (!ctx.cr0.eq) goto loc_8214BDBC;
loc_8214BDD4:
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

PPC_WEAK_FUNC(sub_8214BD98) {
	__imp__sub_8214BD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BDEC) {
	__imp__sub_8214BDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BDF0) {
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
	// lwz r4,28068(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28068);
	// bl 0x821778d8
	ctx.lr = 0x8214BE10;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28068);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214BE28;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25404);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,26184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26184, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8214be54
	if (!ctx.cr6.eq) goto loc_8214BE54;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28272, ctx.r10.u32);
	// bl 0x8214b4b8
	ctx.lr = 0x8214BE54;
	sub_8214B4B8(ctx, base);
loc_8214BE54:
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

PPC_WEAK_FUNC(sub_8214BDF0) {
	__imp__sub_8214BDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BE68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BE68) {
	__imp__sub_8214BE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8214BE78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28068(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28068);
	// bl 0x821778d8
	ctx.lr = 0x8214BE98;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,28068(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28068);
	// ble cr6,0x8214bf34
	if (!ctx.cr6.gt) goto loc_8214BF34;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8214BEB4:
	// stw r31,28068(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28068, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BEC8;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214BEDC;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214bf28
	if (!ctx.cr6.eq) goto loc_8214BF28;
	// stw r4,28272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BF04;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BF14;
	sub_82147188(ctx, base);
	// lwz r11,28272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BF28;
	sub_82147188(ctx, base);
loc_8214BF28:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8214beb4
	if (!ctx.cr0.eq) goto loc_8214BEB4;
loc_8214BF34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BE70) {
	__imp__sub_8214BE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214BF3C) {
	__imp__sub_8214BF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214BF48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214bff0
	if (!ctx.cr6.gt) goto loc_8214BFF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lwz r4,28068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28068);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214BF70:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214BF7C;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214BF90;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214bfdc
	if (!ctx.cr6.eq) goto loc_8214BFDC;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214BFB8;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BFC8;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214BFDC;
	sub_82147188(ctx, base);
loc_8214BFDC:
	// bl 0x82177858
	ctx.lr = 0x8214BFE0;
	sub_82177858(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28068, ctx.r3.u32);
	// bne 0x8214bf70
	if (!ctx.cr0.eq) goto loc_8214BF70;
loc_8214BFF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BF40) {
	__imp__sub_8214BF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214BFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26572);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r11,26600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26600);
	// bne cr6,0x8214c020
	if (!ctx.cr6.eq) goto loc_8214C020;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,27428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27428, ctx.r11.u32);
	// b 0x8214bc70
	sub_8214BC70(ctx, base);
	return;
loc_8214C020:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,28068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28068, ctx.r11.u32);
	// b 0x8214bdf0
	sub_8214BDF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214BFF8) {
	__imp__sub_8214BFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C02C) {
	__imp__sub_8214C02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C030) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C030) {
	__imp__sub_8214C030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8214C040;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26600(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26600);
	// bl 0x821778d8
	ctx.lr = 0x8214C060;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26600(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26600);
	// ble cr6,0x8214c128
	if (!ctx.cr6.gt) goto loc_8214C128;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r22,-32142
	ctx.r22.s64 = -2106458112;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
loc_8214C088:
	// lwz r11,26572(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26572);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,26600(r23)
	PPC_STORE_U32(ctx.r23.u32 + 26600, ctx.r31.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214c0ac
	if (!ctx.cr6.eq) goto loc_8214C0AC;
	// stw r31,27428(r22)
	PPC_STORE_U32(ctx.r22.u32 + 27428, ctx.r31.u32);
	// bl 0x8214bc70
	ctx.lr = 0x8214C0A8;
	sub_8214BC70(ctx, base);
	// b 0x8214c11c
	goto loc_8214C11C;
loc_8214C0AC:
	// stw r31,28068(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28068, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821778d8
	ctx.lr = 0x8214C0BC;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C0D0;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214c11c
	if (!ctx.cr6.eq) goto loc_8214C11C;
	// stw r4,28272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C0F8;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C108;
	sub_82147188(ctx, base);
	// lwz r11,28272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C11C;
	sub_82147188(ctx, base);
loc_8214C11C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8214c088
	if (!ctx.cr0.eq) goto loc_8214C088;
loc_8214C128:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C038) {
	__imp__sub_8214C038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8214C138;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214c20c
	if (!ctx.cr6.gt) goto loc_8214C20C;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lwz r4,26600(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26600);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
loc_8214C16C:
	// lwz r11,26572(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26572);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214c18c
	if (!ctx.cr6.eq) goto loc_8214C18C;
	// stw r4,27428(r23)
	PPC_STORE_U32(ctx.r23.u32 + 27428, ctx.r4.u32);
	// bl 0x8214bc70
	ctx.lr = 0x8214C188;
	sub_8214BC70(ctx, base);
	// b 0x8214c1f8
	goto loc_8214C1F8;
loc_8214C18C:
	// stw r4,28068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28068, ctx.r4.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x821778d8
	ctx.lr = 0x8214C198;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C1AC;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214c1f8
	if (!ctx.cr6.eq) goto loc_8214C1F8;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C1D4;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C1E4;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C1F8;
	sub_82147188(ctx, base);
loc_8214C1F8:
	// bl 0x82177858
	ctx.lr = 0x8214C1FC;
	sub_82177858(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26600(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26600, ctx.r3.u32);
	// bne 0x8214c16c
	if (!ctx.cr0.eq) goto loc_8214C16C;
loc_8214C20C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C130) {
	__imp__sub_8214C130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C214) {
	__imp__sub_8214C214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C218) {
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
	// lwz r4,26572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26572);
	// bl 0x821778d8
	ctx.lr = 0x8214C238;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C240;
	sub_82177758(ctx, base);
	// lwz r11,26572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26572);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,26600(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26600, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8214c270
	if (!ctx.cr6.eq) goto loc_8214C270;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r10,27428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27428, ctx.r10.u32);
	// bl 0x8214bc70
	ctx.lr = 0x8214C26C;
	sub_8214BC70(ctx, base);
	// b 0x8214c27c
	goto loc_8214C27C;
loc_8214C270:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r10,28068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28068, ctx.r10.u32);
	// bl 0x8214bdf0
	ctx.lr = 0x8214C27C;
	sub_8214BDF0(ctx, base);
loc_8214C27C:
	// bl 0x821777e0
	ctx.lr = 0x8214C280;
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

PPC_WEAK_FUNC(sub_8214C218) {
	__imp__sub_8214C218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C294) {
	__imp__sub_8214C294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C298) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C298) {
	__imp__sub_8214C298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8214C2A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26572(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26572);
	// bl 0x821778d8
	ctx.lr = 0x8214C2C0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r26,26572(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26572);
	// ble cr6,0x8214c3a8
	if (!ctx.cr6.gt) goto loc_8214C3A8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r22,-32142
	ctx.r22.s64 = -2106458112;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
loc_8214C2E8:
	// stw r26,26572(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26572, ctx.r26.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C2FC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C304;
	sub_82177758(ctx, base);
	// lwz r11,26572(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26572);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26600(r23)
	PPC_STORE_U32(ctx.r23.u32 + 26600, ctx.r4.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214c32c
	if (!ctx.cr6.eq) goto loc_8214C32C;
	// stw r4,27428(r22)
	PPC_STORE_U32(ctx.r22.u32 + 27428, ctx.r4.u32);
	// bl 0x8214bc70
	ctx.lr = 0x8214C328;
	sub_8214BC70(ctx, base);
	// b 0x8214c398
	goto loc_8214C398;
loc_8214C32C:
	// stw r4,28068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28068, ctx.r4.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x821778d8
	ctx.lr = 0x8214C338;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C34C;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214c398
	if (!ctx.cr6.eq) goto loc_8214C398;
	// stw r4,28272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C374;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C384;
	sub_82147188(ctx, base);
	// lwz r11,28272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C398;
	sub_82147188(ctx, base);
loc_8214C398:
	// bl 0x821777e0
	ctx.lr = 0x8214C39C;
	sub_821777E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x8214c2e8
	if (!ctx.cr0.eq) goto loc_8214C2E8;
loc_8214C3A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C2A0) {
	__imp__sub_8214C2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8214C3B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214c4ac
	if (!ctx.cr6.gt) goto loc_8214C4AC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lwz r4,26572(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26572);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
loc_8214C3EC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214C3F8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C400;
	sub_82177758(ctx, base);
	// lwz r11,26572(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26572);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26600(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26600, ctx.r4.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214c428
	if (!ctx.cr6.eq) goto loc_8214C428;
	// stw r4,27428(r23)
	PPC_STORE_U32(ctx.r23.u32 + 27428, ctx.r4.u32);
	// bl 0x8214bc70
	ctx.lr = 0x8214C424;
	sub_8214BC70(ctx, base);
	// b 0x8214c494
	goto loc_8214C494;
loc_8214C428:
	// stw r4,28068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28068, ctx.r4.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x821778d8
	ctx.lr = 0x8214C434;
	sub_821778D8(ctx, base);
	// lwz r4,28068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28068);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25404, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C448;
	sub_821778D8(ctx, base);
	// lwz r11,25404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25404);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26184, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214c494
	if (!ctx.cr6.eq) goto loc_8214C494;
	// stw r4,28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28272, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C470;
	sub_821778D8(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C480;
	sub_82147188(ctx, base);
	// lwz r11,28272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28272);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C494;
	sub_82147188(ctx, base);
loc_8214C494:
	// bl 0x821777e0
	ctx.lr = 0x8214C498;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214C49C;
	sub_82177858(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26572(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26572, ctx.r3.u32);
	// bne 0x8214c3ec
	if (!ctx.cr0.eq) goto loc_8214C3EC;
loc_8214C4AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C3B0) {
	__imp__sub_8214C3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C4B4) {
	__imp__sub_8214C4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C4B8) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r4,25656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25656);
	// bl 0x821778d8
	ctx.lr = 0x8214C4D8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C4E0;
	sub_82177758(ctx, base);
	// lwz r11,25656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25656);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C4F4;
	sub_82147188(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214C4F8;
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

PPC_WEAK_FUNC(sub_8214C4B8) {
	__imp__sub_8214C4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C50C) {
	__imp__sub_8214C50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C510) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C510) {
	__imp__sub_8214C510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214C520;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,136
	ctx.r5.s64 = ctx.r4.s64 * 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25656(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25656);
	// bl 0x821778d8
	ctx.lr = 0x8214C538;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25656(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25656);
	// ble cr6,0x8214c5d0
	if (!ctx.cr6.gt) goto loc_8214C5D0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214C550:
	// stw r30,25656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25656, ctx.r30.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C564;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C56C;
	sub_82177758(ctx, base);
	// lwz r4,25656(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25656);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C580;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c5c0
	if (ctx.cr6.eq) goto loc_8214C5C0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214c5bc
	if (!ctx.cr6.eq) goto loc_8214C5BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214C5A0;
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
	ctx.lr = 0x8214C5B8;
	sub_821779A0(ctx, base);
	// b 0x8214c5c0
	goto loc_8214C5C0;
loc_8214C5BC:
	// bl 0x82177978
	ctx.lr = 0x8214C5C0;
	sub_82177978(ctx, base);
loc_8214C5C0:
	// bl 0x821777e0
	ctx.lr = 0x8214C5C4;
	sub_821777E0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// bne 0x8214c550
	if (!ctx.cr0.eq) goto loc_8214C550;
loc_8214C5D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C518) {
	__imp__sub_8214C518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214C5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214c680
	if (!ctx.cr6.gt) goto loc_8214C680;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25656(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25656);
loc_8214C600:
	// li r5,136
	ctx.r5.s64 = 136;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214C60C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C614;
	sub_82177758(ctx, base);
	// lwz r4,25656(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25656);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214C628;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c668
	if (ctx.cr6.eq) goto loc_8214C668;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214c664
	if (!ctx.cr6.eq) goto loc_8214C664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214C648;
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
	ctx.lr = 0x8214C660;
	sub_821779A0(ctx, base);
	// b 0x8214c668
	goto loc_8214C668;
loc_8214C664:
	// bl 0x82177978
	ctx.lr = 0x8214C668;
	sub_82177978(ctx, base);
loc_8214C668:
	// bl 0x821777e0
	ctx.lr = 0x8214C66C;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214C670;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25656, ctx.r3.u32);
	// bne 0x8214c600
	if (!ctx.cr0.eq) goto loc_8214C600;
loc_8214C680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C5D8) {
	__imp__sub_8214C5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214C690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// bl 0x821778d8
	ctx.lr = 0x8214C6A4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214C6AC;
	sub_82177758(ctx, base);
	// lwz r3,27484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c760
	if (ctx.cr6.eq) goto loc_8214C760;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8214c6dc
	if (ctx.cr6.eq) goto loc_8214C6DC;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// beq cr6,0x8214c6dc
	if (ctx.cr6.eq) goto loc_8214C6DC;
	// bl 0x82177950
	ctx.lr = 0x8214C6D0;
	sub_82177950(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214C6D4;
	sub_821777E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8214C6DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214C6E4;
	sub_82177868(ctx, base);
	// lwz r11,27484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25656, ctx.r4.u32);
	// bne cr6,0x8214c714
	if (!ctx.cr6.eq) goto loc_8214C714;
	// bl 0x82177898
	ctx.lr = 0x8214C708;
	sub_82177898(ctx, base);
	// lwz r4,25656(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25656);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8214c718
	goto loc_8214C718;
loc_8214C714:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8214C718:
	// li r5,136
	ctx.r5.s64 = 136;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214C724;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214C72C;
	sub_82177758(ctx, base);
	// lwz r11,25656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25656);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214C740;
	sub_82147188(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214C744;
	sub_821777E0(ctx, base);
	// lwz r3,27484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// bl 0x82175600
	ctx.lr = 0x8214C74C;
	sub_82175600(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c760
	if (ctx.cr6.eq) goto loc_8214C760;
	// lwz r11,27484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27484);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8214C760:
	// bl 0x821777e0
	ctx.lr = 0x8214C764;
	sub_821777E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C688) {
	__imp__sub_8214C688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C76C) {
	__imp__sub_8214C76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C770) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C770) {
	__imp__sub_8214C770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214C780;
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
	// lwz r4,27484(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27484);
	// bl 0x821778d8
	ctx.lr = 0x8214C798;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27484(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27484);
	// ble cr6,0x8214c7bc
	if (!ctx.cr6.gt) goto loc_8214C7BC;
loc_8214C7A4:
	// stw r30,27484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27484, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214c688
	ctx.lr = 0x8214C7B0;
	sub_8214C688(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214c7a4
	if (!ctx.cr0.eq) goto loc_8214C7A4;
loc_8214C7BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C778) {
	__imp__sub_8214C778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C7C4) {
	__imp__sub_8214C7C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C7C8) {
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
	// ble cr6,0x8214c804
	if (!ctx.cr6.gt) goto loc_8214C804;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214C7EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214c688
	ctx.lr = 0x8214C7F4;
	sub_8214C688(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214C7F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27484, ctx.r3.u32);
	// bne 0x8214c7ec
	if (!ctx.cr0.eq) goto loc_8214C7EC;
loc_8214C804:
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

PPC_WEAK_FUNC(sub_8214C7C8) {
	__imp__sub_8214C7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214C81C) {
	__imp__sub_8214C81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25788);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C820) {
	__imp__sub_8214C820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C830) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C830) {
	__imp__sub_8214C830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25788);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C838) {
	__imp__sub_8214C838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C848) {
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
	// ble cr6,0x8214c890
	if (!ctx.cr6.gt) goto loc_8214C890;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25788(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25788);
loc_8214C870:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214C87C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214C880;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25788, ctx.r3.u32);
	// bne 0x8214c870
	if (!ctx.cr0.eq) goto loc_8214C870;
loc_8214C890:
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

PPC_WEAK_FUNC(sub_8214C848) {
	__imp__sub_8214C848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25308);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C8A8) {
	__imp__sub_8214C8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C8B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C8B8) {
	__imp__sub_8214C8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25308(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25308);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C8C0) {
	__imp__sub_8214C8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C8D0) {
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
	// ble cr6,0x8214c918
	if (!ctx.cr6.gt) goto loc_8214C918;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25308);
loc_8214C8F8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214C904;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214C908;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25308, ctx.r3.u32);
	// bne 0x8214c8f8
	if (!ctx.cr0.eq) goto loc_8214C8F8;
loc_8214C918:
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

PPC_WEAK_FUNC(sub_8214C8D0) {
	__imp__sub_8214C8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C930) {
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
	// lwz r4,26088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// bl 0x821778d8
	ctx.lr = 0x8214C950;
	sub_821778D8(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c994
	if (ctx.cr6.eq) goto loc_8214C994;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214C968;
	sub_82177868(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25308(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25308, ctx.r4.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r8,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8214C994;
	sub_821778D8(ctx, base);
loc_8214C994:
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

PPC_WEAK_FUNC(sub_8214C930) {
	__imp__sub_8214C930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C9A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C9A8) {
	__imp__sub_8214C9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214C9B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// bl 0x821778d8
	ctx.lr = 0x8214C9D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26088(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// ble cr6,0x8214ca40
	if (!ctx.cr6.gt) goto loc_8214CA40;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214C9E0:
	// stw r29,26088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26088, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214C9F4;
	sub_821778D8(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ca34
	if (ctx.cr6.eq) goto loc_8214CA34;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214CA0C;
	sub_82177868(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25308(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25308, ctx.r4.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8214CA34;
	sub_821778D8(ctx, base);
loc_8214CA34:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8214c9e0
	if (!ctx.cr0.eq) goto loc_8214C9E0;
loc_8214CA40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214C9B0) {
	__imp__sub_8214C9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214CA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214cacc
	if (!ctx.cr6.gt) goto loc_8214CACC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
loc_8214CA6C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214CA78;
	sub_821778D8(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214cab8
	if (ctx.cr6.eq) goto loc_8214CAB8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214CA90;
	sub_82177868(ctx, base);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26088);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25308, ctx.r4.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8214CAB8;
	sub_821778D8(ctx, base);
loc_8214CAB8:
	// bl 0x82177858
	ctx.lr = 0x8214CABC;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26088, ctx.r3.u32);
	// bne 0x8214ca6c
	if (!ctx.cr0.eq) goto loc_8214CA6C;
loc_8214CACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CA48) {
	__imp__sub_8214CA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CAD4) {
	__imp__sub_8214CAD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CAD8) {
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
	// lwz r4,25004(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25004);
	// bl 0x821778d8
	ctx.lr = 0x8214CAF8;
	sub_821778D8(ctx, base);
	// lwz r11,25004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25004);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26088, ctx.r11.u32);
	// bl 0x8214c9b0
	ctx.lr = 0x8214CB10;
	sub_8214C9B0(ctx, base);
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

PPC_WEAK_FUNC(sub_8214CAD8) {
	__imp__sub_8214CAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CB24) {
	__imp__sub_8214CB24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CB28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CB28) {
	__imp__sub_8214CB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214CB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25004(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// bl 0x821778d8
	ctx.lr = 0x8214CB50;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25004(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// ble cr6,0x8214cb94
	if (!ctx.cr6.gt) goto loc_8214CB94;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8214CB60:
	// stw r31,25004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25004, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214CB74;
	sub_821778D8(ctx, base);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26088, ctx.r11.u32);
	// bl 0x8214c9b0
	ctx.lr = 0x8214CB88;
	sub_8214C9B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8214cb60
	if (!ctx.cr0.eq) goto loc_8214CB60;
loc_8214CB94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CB30) {
	__imp__sub_8214CB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CB9C) {
	__imp__sub_8214CB9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214CBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214cbf8
	if (!ctx.cr6.gt) goto loc_8214CBF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25004(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25004);
loc_8214CBC4:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214CBD0;
	sub_821778D8(ctx, base);
	// lwz r11,25004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25004);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26088, ctx.r11.u32);
	// bl 0x8214c9b0
	ctx.lr = 0x8214CBE4;
	sub_8214C9B0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214CBE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25004, ctx.r3.u32);
	// bne 0x8214cbc4
	if (!ctx.cr0.eq) goto loc_8214CBC4;
loc_8214CBF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CBA0) {
	__imp__sub_8214CBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214CC08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,27940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27940);
	// bl 0x821778d8
	ctx.lr = 0x8214CC1C;
	sub_821778D8(ctx, base);
	// lwz r11,27940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27940);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CC34;
	sub_82147188(ctx, base);
	// lwz r11,27940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27940);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25004, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214CC50;
	sub_821778D8(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r31,25004(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25004);
loc_8214CC5C:
	// stw r31,25004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25004, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214CC70;
	sub_821778D8(ctx, base);
	// lwz r11,25004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25004);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26088, ctx.r11.u32);
	// bl 0x8214c9b0
	ctx.lr = 0x8214CC84;
	sub_8214C9B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8214cc5c
	if (!ctx.cr0.eq) goto loc_8214CC5C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CC00) {
	__imp__sub_8214CC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CC98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CC98) {
	__imp__sub_8214CC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214CCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27940(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27940);
	// bl 0x821778d8
	ctx.lr = 0x8214CCC8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27940(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27940);
	// ble cr6,0x8214ccec
	if (!ctx.cr6.gt) goto loc_8214CCEC;
loc_8214CCD4:
	// stw r30,27940(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27940, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214cc00
	ctx.lr = 0x8214CCE0;
	sub_8214CC00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8214ccd4
	if (!ctx.cr0.eq) goto loc_8214CCD4;
loc_8214CCEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CCA0) {
	__imp__sub_8214CCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CCF4) {
	__imp__sub_8214CCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CCF8) {
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
	// ble cr6,0x8214cd34
	if (!ctx.cr6.gt) goto loc_8214CD34;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214CD1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214cc00
	ctx.lr = 0x8214CD24;
	sub_8214CC00(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214CD28;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27940(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27940, ctx.r3.u32);
	// bne 0x8214cd1c
	if (!ctx.cr0.eq) goto loc_8214CD1C;
loc_8214CD34:
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

PPC_WEAK_FUNC(sub_8214CCF8) {
	__imp__sub_8214CCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CD4C) {
	__imp__sub_8214CD4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CD50) {
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
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r4,27932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// bl 0x821778d8
	ctx.lr = 0x8214CD74;
	sub_821778D8(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CD88;
	sub_82147188(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CD9C;
	sub_82147188(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CDB0;
	sub_82147188(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CDC4;
	sub_82147188(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CDD8;
	sub_82147188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214CDE0;
	sub_82177758(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214ce74
	if (ctx.cr6.eq) goto loc_8214CE74;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8214ce0c
	if (ctx.cr6.eq) goto loc_8214CE0C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8214ce0c
	if (ctx.cr6.eq) goto loc_8214CE0C;
	// bl 0x82177950
	ctx.lr = 0x8214CE08;
	sub_82177950(ctx, base);
	// b 0x8214ce74
	goto loc_8214CE74;
loc_8214CE0C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214CE14;
	sub_82177868(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,26572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26572, ctx.r11.u32);
	// bne cr6,0x8214ce40
	if (!ctx.cr6.eq) goto loc_8214CE40;
	// bl 0x82177898
	ctx.lr = 0x8214CE38;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8214ce44
	goto loc_8214CE44;
loc_8214CE40:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8214CE44:
	// bl 0x82171e28
	ctx.lr = 0x8214CE48;
	sub_82171E28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214c2a0
	ctx.lr = 0x8214CE54;
	sub_8214C2A0(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82171db8
	ctx.lr = 0x8214CE60;
	sub_82171DB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214ce74
	if (ctx.cr6.eq) goto loc_8214CE74;
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8214CE74:
	// bl 0x821777e0
	ctx.lr = 0x8214CE78;
	sub_821777E0(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27484, ctx.r11.u32);
	// bl 0x8214c688
	ctx.lr = 0x8214CE90;
	sub_8214C688(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214cee0
	if (ctx.cr6.eq) goto loc_8214CEE0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214cedc
	if (!ctx.cr6.eq) goto loc_8214CEDC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214CEB4;
	sub_82177868(ctx, base);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,27932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27932);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r11,27940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27940, ctx.r11.u32);
	// bl 0x8214cc00
	ctx.lr = 0x8214CED8;
	sub_8214CC00(ctx, base);
	// b 0x8214cee0
	goto loc_8214CEE0;
loc_8214CEDC:
	// bl 0x82177978
	ctx.lr = 0x8214CEE0;
	sub_82177978(ctx, base);
loc_8214CEE0:
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

PPC_WEAK_FUNC(sub_8214CD50) {
	__imp__sub_8214CD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CEF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CEF8) {
	__imp__sub_8214CEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214CF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,100
	ctx.r5.s64 = ctx.r4.s64 * 100;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27932(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27932);
	// bl 0x821778d8
	ctx.lr = 0x8214CF20;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27932(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27932);
	// ble cr6,0x8214cf44
	if (!ctx.cr6.gt) goto loc_8214CF44;
loc_8214CF2C:
	// stw r30,27932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27932, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214cd50
	ctx.lr = 0x8214CF38;
	sub_8214CD50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne 0x8214cf2c
	if (!ctx.cr0.eq) goto loc_8214CF2C;
loc_8214CF44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214CF00) {
	__imp__sub_8214CF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CF4C) {
	__imp__sub_8214CF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CF50) {
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
	// ble cr6,0x8214cf8c
	if (!ctx.cr6.gt) goto loc_8214CF8C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214CF74:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214cd50
	ctx.lr = 0x8214CF7C;
	sub_8214CD50(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214CF80;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27932, ctx.r3.u32);
	// bne 0x8214cf74
	if (!ctx.cr0.eq) goto loc_8214CF74;
loc_8214CF8C:
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

PPC_WEAK_FUNC(sub_8214CF50) {
	__imp__sub_8214CF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214CFA4) {
	__imp__sub_8214CFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214CFA8) {
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
	// lwz r4,28628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// bl 0x821778d8
	ctx.lr = 0x8214CFC8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214CFD0;
	sub_82177758(ctx, base);
	// lwz r11,28628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214CFE4;
	sub_82147188(ctx, base);
	// lwz r11,28628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d038
	if (ctx.cr6.eq) goto loc_8214D038;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214d034
	if (!ctx.cr6.eq) goto loc_8214D034;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214D008;
	sub_82177868(ctx, base);
	// lwz r11,28628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27932(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27932, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8214cf00
	ctx.lr = 0x8214D030;
	sub_8214CF00(ctx, base);
	// b 0x8214d038
	goto loc_8214D038;
loc_8214D034:
	// bl 0x82177978
	ctx.lr = 0x8214D038;
	sub_82177978(ctx, base);
loc_8214D038:
	// bl 0x821777e0
	ctx.lr = 0x8214D03C;
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

PPC_WEAK_FUNC(sub_8214CFA8) {
	__imp__sub_8214CFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D050) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D050) {
	__imp__sub_8214D050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214D060;
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
	// lwz r4,28628(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28628);
	// bl 0x821778d8
	ctx.lr = 0x8214D080;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28628(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28628);
	// ble cr6,0x8214d0a4
	if (!ctx.cr6.gt) goto loc_8214D0A4;
loc_8214D08C:
	// stw r30,28628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28628, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214cfa8
	ctx.lr = 0x8214D098;
	sub_8214CFA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8214d08c
	if (!ctx.cr0.eq) goto loc_8214D08C;
loc_8214D0A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D058) {
	__imp__sub_8214D058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D0AC) {
	__imp__sub_8214D0AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D0B0) {
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
	// ble cr6,0x8214d0ec
	if (!ctx.cr6.gt) goto loc_8214D0EC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214D0D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214cfa8
	ctx.lr = 0x8214D0DC;
	sub_8214CFA8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214D0E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28628, ctx.r3.u32);
	// bne 0x8214d0d4
	if (!ctx.cr0.eq) goto loc_8214D0D4;
loc_8214D0EC:
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

PPC_WEAK_FUNC(sub_8214D0B0) {
	__imp__sub_8214D0B0(ctx, base);
}

