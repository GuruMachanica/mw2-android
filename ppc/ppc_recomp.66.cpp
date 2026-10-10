#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8229EDB0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x8229EDD0;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EDB0) {
	__imp__sub_8229EDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EDE0) {
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
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x8229EE00;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EDE0) {
	__imp__sub_8229EDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EE10) {
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
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x8229EE44;
	sub_822E40F0(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x8229EE5C;
	sub_822E40F0(ctx, base);
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8229EE74;
	sub_822E40F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8229EE10) {
	__imp__sub_8229EE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EE8C) {
	__imp__sub_8229EE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229EEB0;
	sub_822E4480(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e4480
	ctx.lr = 0x8229EEC8;
	sub_822E4480(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229EEE0;
	sub_822E4480(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a33a8
	ctx.lr = 0x8229EEF0;
	sub_822A33A8(ctx, base);
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

PPC_WEAK_FUNC(sub_8229EE90) {
	__imp__sub_8229EE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EF04) {
	__imp__sub_8229EF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF08) {
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
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8229EF3C;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EF08) {
	__imp__sub_8229EF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EF4C) {
	__imp__sub_8229EF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF50) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e4480
	ctx.lr = 0x8229EF68;
	sub_822E4480(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EF50) {
	__imp__sub_8229EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EF8C) {
	__imp__sub_8229EF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,25368
	ctx.r7.s64 = ctx.r11.s64 + 25368;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,25368(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25368);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8229efe8
	if (!ctx.cr6.lt) goto loc_8229EFE8;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8229EFBC:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8229f020
	if (ctx.cr6.eq) goto loc_8229F020;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8229f024
	if (ctx.cr6.eq) goto loc_8229F024;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8229efbc
	if (ctx.cr6.lt) goto loc_8229EFBC;
loc_8229EFE8:
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8229EFF0:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8229f020
	if (ctx.cr6.eq) goto loc_8229F020;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8229f024
	if (ctx.cr6.eq) goto loc_8229F024;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8229eff0
	if (!ctx.cr6.gt) goto loc_8229EFF0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229F020:
	// blr 
	return;
loc_8229F024:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EF90) {
	__imp__sub_8229EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F02C) {
	__imp__sub_8229F02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229F038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ef90
	ctx.lr = 0x8229F060;
	sub_8229EF90(ctx, base);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r6,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 & ctx.r8.u64;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822e40f0
	ctx.lr = 0x8229F08C;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229f0a8
	if (!ctx.cr6.eq) goto loc_8229F0A8;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8229F0A8;
	sub_822E40F0(ctx, base);
loc_8229F0A8:
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// addi r11,r10,25368
	ctx.r11.s64 = ctx.r10.s64 + 25368;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r11,25368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25368);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// stw r11,25368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25368, ctx.r11.u32);
	// sthx r31,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r31.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F030) {
	__imp__sub_8229F030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F0D4) {
	__imp__sub_8229F0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229F0E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,25368
	ctx.r30.s64 = ctx.r11.s64 + 25368;
	// beq cr6,0x8229f120
	if (ctx.cr6.eq) goto loc_8229F120;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r6,1,27,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1E;
	// lhzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8229f138
	goto loc_8229F138;
loc_8229F120:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e4480
	ctx.lr = 0x8229F12C;
	sub_822E4480(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
loc_8229F138:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229f17c
	if (ctx.cr6.eq) goto loc_8229F17C;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r27,r11,8288
	ctx.r27.s64 = ctx.r11.s64 + 8288;
	// lhzx r31,r28,r27
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229f16c
	if (!ctx.cr6.eq) goto loc_8229F16C;
	// bl 0x822a3098
	ctx.lr = 0x8229F164;
	sub_822A3098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sthx r3,r28,r27
	PPC_STORE_U16(ctx.r28.u32 + ctx.r27.u32, ctx.r3.u16);
loc_8229F16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32c0
	ctx.lr = 0x8229F174;
	sub_822A32C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229f180
	goto loc_8229F180;
loc_8229F17C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8229F180:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sthx r29,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F0D8) {
	__imp__sub_8229F0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F1A4) {
	__imp__sub_8229F1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229F1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bl 0x822e40f0
	ctx.lr = 0x8229F1D4;
	sub_822E40F0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8229F1FC;
	sub_822E40F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8229f030
	ctx.lr = 0x8229F20C;
	sub_8229F030(ctx, base);
	// lbz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x822e40f0
	ctx.lr = 0x8229F224;
	sub_822E40F0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r31,r31,11
	ctx.r31.s64 = ctx.r31.s64 + 11;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229f264
	if (ctx.cr6.eq) goto loc_8229F264;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_8229F23C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzu r4,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bl 0x8229fcd0
	ctx.lr = 0x8229F258;
	sub_8229FCD0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229f23c
	if (!ctx.cr6.eq) goto loc_8229F23C;
loc_8229F264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F1A8) {
	__imp__sub_8229F1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F26C) {
	__imp__sub_8229F26C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229F278;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F28C;
	sub_822E4480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r11,r29,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r27,r11,11
	ctx.r27.s64 = ctx.r11.s64 + 11;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e0e8
	ctx.lr = 0x8229F2AC;
	sub_8229E0E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// sth r27,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r27.u16);
	// bl 0x822e4480
	ctx.lr = 0x8229F2C8;
	sub_822E4480(ctx, base);
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x822e4480
	ctx.lr = 0x8229F2F0;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229F2FC;
	sub_8229F0D8(ctx, base);
	// sth r3,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r3.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F310;
	sub_822E4480(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r29,r30,11
	ctx.r29.s64 = ctx.r30.s64 + 11;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r3,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r3.u8);
	// beq cr6,0x8229f35c
	if (ctx.cr6.eq) goto loc_8229F35C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_8229F32C:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8229f368
	ctx.lr = 0x8229F340;
	sub_8229F368(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwu r8,1(r29)
	ea = 1 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne cr6,0x8229f32c
	if (!ctx.cr6.eq) goto loc_8229F32C;
loc_8229F35C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F270) {
	__imp__sub_8229F270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F368) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F394;
	sub_822E4480(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229f3bc
	if (ctx.cr6.eq) goto loc_8229F3BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8229f0d8
	ctx.lr = 0x8229F3B8;
	sub_8229F0D8(ctx, base);
	// b 0x8229f4a4
	goto loc_8229F4A4;
loc_8229F3BC:
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8229f4a8
	if (ctx.cr6.gt) goto loc_8229F4A8;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3096
	ctx.r12.s64 = ctx.r12.s64 + -3096;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8229F418;
	case 1:
		goto loc_8229F418;
	case 2:
		goto loc_8229F42C;
	case 3:
		goto loc_8229F438;
	case 4:
		goto loc_8229F454;
	case 5:
		goto loc_8229F470;
	case 6:
		goto loc_8229F4A8;
	case 7:
		goto loc_8229F470;
	case 8:
		goto loc_8229F454;
	case 9:
		goto loc_8229F454;
	case 10:
		goto loc_8229F49C;
	case 11:
		goto loc_8229F454;
	default:
		return;
	}
	// lwz r17,-3048(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3048);
	// lwz r17,-3048(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3048);
	// lwz r17,-3028(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3028);
	// lwz r17,-3016(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3016);
	// lwz r17,-2988(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2988);
	// lwz r17,-2960(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2960);
	// lwz r17,-2904(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2904);
	// lwz r17,-2960(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2960);
	// lwz r17,-2988(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2988);
	// lwz r17,-2988(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2988);
	// lwz r17,-2916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2916);
	// lwz r17,-2988(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2988);
loc_8229F418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229ed40
	ctx.lr = 0x8229F420;
	sub_8229ED40(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8229f4a8
	goto loc_8229F4A8;
loc_8229F42C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229ee90
	ctx.lr = 0x8229F434;
	sub_8229EE90(ctx, base);
	// b 0x8229f4a4
	goto loc_8229F4A4;
loc_8229F438:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F448;
	sub_822E4480(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x8229f4a8
	goto loc_8229F4A8;
loc_8229F454:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F464;
	sub_822E4480(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8229f4a8
	goto loc_8229F4A8;
loc_8229F470:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F480;
	sub_822E4480(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x8229f4a8
	goto loc_8229F4A8;
loc_8229F49C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x8229F4A4;
	sub_8229F270(ctx, base);
loc_8229F4A4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8229F4A8:
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

PPC_WEAK_FUNC(sub_8229F368) {
	__imp__sub_8229F368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F4C0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8229f368
	ctx.lr = 0x8229F4E4;
	sub_8229F368(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8229f540
	if (!ctx.cr6.eq) goto loc_8229F540;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4480
	ctx.lr = 0x8229F500;
	sub_822E4480(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822e4480
	ctx.lr = 0x8229F514;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r31,81(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822e4480
	ctx.lr = 0x8229F528;
	sub_822E4480(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F540:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x822e4480
	ctx.lr = 0x8229F548;
	sub_822E4480(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8229f5fc
	if (ctx.cr6.gt) goto loc_8229F5FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8229f580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F580;
	// bdzf 4*cr6+eq,0x8229f5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F5A0;
	// bdzf 4*cr6+eq,0x8229f5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F5C0;
	// bdzf 4*cr6+eq,0x8229f5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F5DC;
	// bne cr6,0x8229f5ec
	if (!ctx.cr6.eq) goto loc_8229F5EC;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F580:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F590;
	sub_822E4480(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addis r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 8388608;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F5A0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F5B0;
	sub_822E4480(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addis r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 8388608;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F5C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F5D0;
	sub_822E4480(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addis r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 8388608;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F5DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ed40
	ctx.lr = 0x8229F5E4;
	sub_8229ED40(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F5F4;
	sub_8229F0D8(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// b 0x8229f600
	goto loc_8229F600;
loc_8229F5FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229F600:
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

PPC_WEAK_FUNC(sub_8229F4C0) {
	__imp__sub_8229F4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F618) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r5,r7,8288
	ctx.r5.s64 = ctx.r7.s64 + 8288;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r6,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229F618) {
	__imp__sub_8229F618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F66C) {
	__imp__sub_8229F66C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229F678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f68c
	if (!ctx.cr6.eq) goto loc_8229F68C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229F68C:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r29,r11,8288
	ctx.r29.s64 = ctx.r11.s64 + 8288;
	// lhzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229f6b8
	if (!ctx.cr6.eq) goto loc_8229F6B8;
	// bl 0x822a3098
	ctx.lr = 0x8229F6B0;
	sub_822A3098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sthx r3,r30,r29
	PPC_STORE_U16(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u16);
loc_8229F6B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32c0
	ctx.lr = 0x8229F6C0;
	sub_822A32C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F670) {
	__imp__sub_8229F670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F6CC) {
	__imp__sub_8229F6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F6D0) {
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
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229f704
	if (!ctx.cr6.eq) goto loc_8229F704;
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
loc_8229F704:
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-6904
	ctx.r8.s64 = ctx.r10.s64 + -6904;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r7,r11,8288
	ctx.r7.s64 = ctx.r11.s64 + 8288;
	// lhzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32c0
	ctx.lr = 0x8229F724;
	sub_822A32C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8229F6D0) {
	__imp__sub_8229F6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F73C) {
	__imp__sub_8229F73C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8229F748;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r23,r10,-7040
	ctx.r23.s64 = ctx.r10.s64 + -7040;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F778;
	sub_822E4480(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8229f878
	if (ctx.cr6.gt) goto loc_8229F878;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8229f7bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F7BC;
	// bdzf 4*cr6+eq,0x8229f7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F7EC;
	// bdzf 4*cr6+eq,0x8229f824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229F824;
	// bne cr6,0x8229f864
	if (!ctx.cr6.eq) goto loc_8229F864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,16
	ctx.r29.s64 = 16;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F7B4;
	sub_8229F0D8(ctx, base);
	// sth r3,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r3.u16);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F7BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,17
	ctx.r29.s64 = 17;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F7C8;
	sub_8229F0D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// bl 0x8229ed40
	ctx.lr = 0x8229F7D8;
	sub_8229ED40(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r3,8,8,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F7EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,18
	ctx.r29.s64 = 18;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F7F8;
	sub_8229F0D8(ctx, base);
	// sth r3,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r3.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F80C;
	sub_822E4480(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,19
	ctx.r29.s64 = 19;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F830;
	sub_8229F0D8(ctx, base);
	// sth r3,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r3.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F844;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229F850;
	sub_8229F0D8(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,21
	ctx.r29.s64 = 21;
	// bl 0x8229f0d8
	ctx.lr = 0x8229F870;
	sub_8229F0D8(ctx, base);
	// sth r3,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r3.u16);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F878:
	// rlwinm r29,r4,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// bne cr6,0x8229f8c8
	if (!ctx.cr6.eq) goto loc_8229F8C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F894;
	sub_822E4480(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// bl 0x822e4480
	ctx.lr = 0x8229F8AC;
	sub_822E4480(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// b 0x8229f8d8
	goto loc_8229F8D8;
loc_8229F8C8:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bne cr6,0x8229f8d8
	if (!ctx.cr6.eq) goto loc_8229F8D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_8229F8D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r29,-23
	ctx.r10.s64 = ctx.r29.s64 + -23;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// or r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 | ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x822e4480
	ctx.lr = 0x8229F904;
	sub_822E4480(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r25,31
	ctx.r5.u64 = ctx.r25.u32 & 0x1;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// ori r4,r6,51201
	ctx.r4.u64 = ctx.r6.u64 | 51201;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r26,r26,-28670
	ctx.r26.s64 = ctx.r26.s64 + -28670;
	// ble cr6,0x8229f99c
	if (!ctx.cr6.gt) goto loc_8229F99C;
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8229F930:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229f4c0
	ctx.lr = 0x8229F940;
	sub_8229F4C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6760
	ctx.lr = 0x8229F950;
	sub_822A6760(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// beq cr6,0x8229f97c
	if (ctx.cr6.eq) goto loc_8229F97C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3740
	ctx.lr = 0x8229F96C;
	sub_822A3740(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822a34b8
	ctx.lr = 0x8229F97C;
	sub_822A34B8(ctx, base);
loc_8229F97C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// bne 0x8229f930
	if (!ctx.cr0.eq) goto loc_8229F930;
loc_8229F99C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229F740) {
	__imp__sub_8229F740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229F9A4) {
	__imp__sub_8229F9A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229F9A8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229F9CC;
	sub_822E4480(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229fa38
	if (ctx.cr6.eq) goto loc_8229FA38;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a2f58
	ctx.lr = 0x8229F9E4;
	sub_822A2F58(ctx, base);
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r10,-6904
	ctx.r30.s64 = ctx.r10.s64 + -6904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x8229f368
	ctx.lr = 0x8229FA00;
	sub_8229F368(ctx, base);
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r9,-7040
	ctx.r8.s64 = ctx.r9.s64 + -7040;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r8,9
	ctx.r11.s64 = ctx.r8.s64 + 589824;
	// addis r9,r8,9
	ctx.r9.s64 = ctx.r8.s64 + 589824;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8229FA38:
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

PPC_WEAK_FUNC(sub_8229F9A8) {
	__imp__sub_8229F9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FA50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229FA50) {
	__imp__sub_8229FA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FA54) {
	__imp__sub_8229FA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229FA60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8229d878
	ctx.lr = 0x8229FA70;
	sub_8229D878(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// beq cr6,0x8229fa98
	if (ctx.cr6.eq) goto loc_8229FA98;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FA90;
	sub_822E4480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8229FA98:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FAA8;
	sub_822E4480(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,66(r30)
	PPC_STORE_U16(ctx.r30.u32 + 66, ctx.r11.u16);
	// bl 0x822e4480
	ctx.lr = 0x8229FAC0;
	sub_822E4480(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,68(r30)
	PPC_STORE_U16(ctx.r30.u32 + 68, ctx.r11.u16);
	// bl 0x822dd778
	ctx.lr = 0x8229FAE0;
	sub_822DD778(ctx, base);
	// lis r29,-31900
	ctx.r29.s64 = -2090598400;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r11,r29,25368
	ctx.r11.s64 = ctx.r29.s64 + 25368;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x8229FAF8;
	sub_823DE090(ctx, base);
	// lhz r11,66(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,25368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25368, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229fb48
	if (ctx.cr6.lt) goto loc_8229FB48;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r29,r11,8290
	ctx.r29.s64 = ctx.r11.s64 + 8290;
loc_8229FB18:
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229fb2c
	if (!ctx.cr6.eq) goto loc_8229FB2C;
	// bl 0x822a3098
	ctx.lr = 0x8229FB28;
	sub_822A3098(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
loc_8229FB2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229f740
	ctx.lr = 0x8229FB34;
	sub_8229F740(ctx, base);
	// lhz r11,66(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8229fb18
	if (!ctx.cr6.gt) goto loc_8229FB18;
loc_8229FB48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229f9a8
	ctx.lr = 0x8229FB50;
	sub_8229F9A8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8229fc78
	if (ctx.cr6.eq) goto loc_8229FC78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FB68;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FB74;
	sub_8229F0D8(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FB88;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FB94;
	sub_8229F0D8(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FBA8;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FBB4;
	sub_8229F0D8(ctx, base);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r11,r8,14744
	ctx.r11.s64 = ctx.r8.s64 + 14744;
	// addi r28,r11,-10
	ctx.r28.s64 = ctx.r11.s64 + -10;
loc_8229FBC8:
	// lhz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// bl 0x822a90e8
	ctx.lr = 0x8229FBD0;
	sub_822A90E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FBE0;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FBEC;
	sub_8229F0D8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sthu r3,12(r28)
	ea = 12 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// bne 0x8229fbc8
	if (!ctx.cr0.eq) goto loc_8229FBC8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FC08;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FC14;
	sub_8229F0D8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FC28;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FC34;
	sub_8229F0D8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FC48;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FC54;
	sub_8229F0D8(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x8229FC68;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8229f0d8
	ctx.lr = 0x8229FC74;
	sub_8229F0D8(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_8229FC78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FA58) {
	__imp__sub_8229FA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229FC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r29,r11,-6904
	ctx.r29.s64 = ctx.r11.s64 + -6904;
	// lhz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 66);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229fcc4
	if (ctx.cr6.lt) goto loc_8229FCC4;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r30,r11,8288
	ctx.r30.s64 = ctx.r11.s64 + 8288;
loc_8229FCAC:
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// bl 0x822a90e8
	ctx.lr = 0x8229FCB4;
	sub_822A90E8(ctx, base);
	// lhz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 66);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8229fcac
	if (!ctx.cr6.gt) goto loc_8229FCAC;
loc_8229FCC4:
	// bl 0x8229d878
	ctx.lr = 0x8229FCC8;
	sub_8229D878(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FC80) {
	__imp__sub_8229FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229FCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x8229fd08
	if (!ctx.cr6.eq) goto loc_8229FD08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229f030
	ctx.lr = 0x8229FD00;
	sub_8229F030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FD08:
	// rlwinm r11,r30,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8229FD1C;
	sub_822E40F0(ctx, base);
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8229fe14
	if (ctx.cr6.gt) goto loc_8229FE14;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-704
	ctx.r12.s64 = ctx.r12.s64 + -704;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8229FD70;
	case 1:
		goto loc_8229FD70;
	case 2:
		goto loc_8229FD8C;
	case 3:
		goto loc_8229FDA0;
	case 4:
		goto loc_8229FDC0;
	case 5:
		goto loc_8229FDDC;
	case 6:
		goto loc_8229FE14;
	case 7:
		goto loc_8229FDDC;
	case 8:
		goto loc_8229FDC0;
	case 9:
		goto loc_8229FDC0;
	case 10:
		goto loc_8229FE08;
	case 11:
		goto loc_8229FDC0;
	default:
		return;
	}
	// lwz r17,-656(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -656);
	// lwz r17,-656(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -656);
	// lwz r17,-628(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -628);
	// lwz r17,-608(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -608);
	// lwz r17,-576(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -576);
	// lwz r17,-548(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -548);
	// lwz r17,-492(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -492);
	// lwz r17,-548(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -548);
	// lwz r17,-576(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -576);
	// lwz r17,-576(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -576);
	// lwz r17,-504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -504);
	// lwz r17,-576(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -576);
loc_8229FD70:
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x822a13a0
	ctx.lr = 0x8229FD78;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8229FD84;
	sub_822E42F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FD8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229ee10
	ctx.lr = 0x8229FD98;
	sub_8229EE10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FDA0:
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8229FDB8;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FDC0:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8229FDD4;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FDDC:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8229FE00;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229FE08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229f1a8
	ctx.lr = 0x8229FE14;
	sub_8229F1A8(ctx, base);
loc_8229FE14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FCD0) {
	__imp__sub_8229FCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FE1C) {
	__imp__sub_8229FE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FE20) {
	__imp__sub_8229FE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FE34) {
	__imp__sub_8229FE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230ea68
	sub_8230EA68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FE38) {
	__imp__sub_8229FE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FE4C) {
	__imp__sub_8229FE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE50) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229fe84
	if (ctx.cr6.eq) goto loc_8229FE84;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8230ea68
	ctx.lr = 0x8229FE7C;
	sub_8230EA68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8229FE84:
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

PPC_WEAK_FUNC(sub_8229FE50) {
	__imp__sub_8229FE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8229FEA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8229FEB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229fecc
	if (!ctx.cr6.eq) goto loc_8229FECC;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8229ff0c
	if (!ctx.cr6.lt) goto loc_8229FF0C;
loc_8229FECC:
	// subf r31,r11,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8229fedc
	if (!ctx.cr6.lt) goto loc_8229FEDC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8229FEDC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8229FEF0;
	sub_823DE1F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8229ff50
	if (ctx.cr6.lt) goto loc_8229FF50;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
loc_8229FF0C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229ff28
	if (ctx.cr6.eq) goto loc_8229FF28;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8230ea68
	ctx.lr = 0x8229FF24;
	sub_8230EA68(ctx, base);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
loc_8229FF28:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8229ff40
	if (!ctx.cr6.lt) goto loc_8229FF40;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8229feb8
	if (!ctx.cr6.eq) goto loc_8229FEB8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8229FF40:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8230ea68
	ctx.lr = 0x8229FF50;
	sub_8230EA68(ctx, base);
loc_8229FF50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FE98) {
	__imp__sub_8229FE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8229FF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8229FF78:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r30,r10,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8229ff8c
	if (!ctx.cr6.lt) goto loc_8229FF8C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8229FF8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8227fc38
	ctx.lr = 0x8229FFA0;
	sub_8227FC38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8229ffd8
	if (ctx.cr6.lt) goto loc_8229FFD8;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229ffd0
	if (ctx.cr6.eq) goto loc_8229FFD0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8230ea68
	ctx.lr = 0x8229FFCC;
	sub_8230EA68(ctx, base);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_8229FFD0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8229ff78
	if (!ctx.cr6.eq) goto loc_8229FF78;
loc_8229FFD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FF58) {
	__imp__sub_8229FF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229FFE0) {
	__imp__sub_8229FFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FFE4) {
	__imp__sub_8229FFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229FFE8) {
	__imp__sub_8229FFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229FFFC) {
	__imp__sub_8229FFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0000) {
	__imp__sub_822A0000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0014) {
	__imp__sub_822A0014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A0020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a0074
	if (ctx.cr6.eq) goto loc_822A0074;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a0074
	if (!ctx.cr6.eq) goto loc_822A0074;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,8288
	ctx.r6.s64 = ctx.r6.s64 + 8288;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r7,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r7.u16);
loc_822A0074:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r31,r3,11
	ctx.r31.s64 = ctx.r3.s64 + 11;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a00b0
	if (ctx.cr6.eq) goto loc_822A00B0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
loc_822A008C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzu r4,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bl 0x822a00b8
	ctx.lr = 0x822A00A4;
	sub_822A00B8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822a008c
	if (!ctx.cr6.eq) goto loc_822A008C;
loc_822A00B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0018) {
	__imp__sub_822A0018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A00B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822a00d0
	if (ctx.cr6.eq) goto loc_822A00D0;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822a0018
	sub_822A0018(ctx, base);
	return;
loc_822A00D0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r5,r7,8288
	ctx.r5.s64 = ctx.r7.s64 + 8288;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r6,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A00B8) {
	__imp__sub_822A00B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0124) {
	__imp__sub_822A0124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822a0148
	if (ctx.cr6.eq) goto loc_822A0148;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822a0018
	sub_822A0018(ctx, base);
	return;
loc_822A0148:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r5,r7,8288
	ctx.r5.s64 = ctx.r7.s64 + 8288;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r6,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A0128) {
	__imp__sub_822A0128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A019C) {
	__imp__sub_822A019C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A01A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A01A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8229fcd0
	ctx.lr = 0x822A01C8;
	sub_8229FCD0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0220
	if (!ctx.cr6.eq) goto loc_822A0220;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A01E8;
	sub_822E40F0(ctx, base);
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0200;
	sub_822E40F0(ctx, base);
	// rlwinm r9,r30,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0218;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A0220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3740
	ctx.lr = 0x822A0228;
	sub_822A3740(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822a0370
	if (ctx.cr6.eq) goto loc_822A0370;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a0338
	if (ctx.cr6.eq) goto loc_822A0338;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a0380
	if (!ctx.cr6.eq) goto loc_822A0380;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822a0274
	if (!ctx.cr6.eq) goto loc_822A0274;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A026C;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A0274:
	// cmpwi cr6,r30,-128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -128, ctx.xer);
	// blt cr6,0x822a02b8
	if (ctx.cr6.lt) goto loc_822A02B8;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// bge cr6,0x822a02b8
	if (!ctx.cr6.lt) goto loc_822A02B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A029C;
	sub_822E40F0(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A02B0;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A02B8:
	// cmpwi cr6,r30,-32768
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -32768, ctx.xer);
	// blt cr6,0x822a0304
	if (ctx.cr6.lt) goto loc_822A0304;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a0304
	if (!ctx.cr6.lt) goto loc_822A0304;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A02E8;
	sub_822E40F0(ctx, base);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A02FC;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A0304:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A031C;
	sub_822E40F0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0330;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A0338:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0350;
	sub_822E40F0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x822a13a0
	ctx.lr = 0x822A035C;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e42f8
	ctx.lr = 0x822A0368;
	sub_822E42F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A0370:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8229f030
	ctx.lr = 0x822A0380;
	sub_8229F030(ctx, base);
loc_822A0380:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A01A0) {
	__imp__sub_822A01A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822A0390;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r10,-7040
	ctx.r28.s64 = ctx.r10.s64 + -7040;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,51201
	ctx.r7.u64 = ctx.r9.u64 | 51201;
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// clrlwi r25,r5,27
	ctx.r25.u64 = ctx.r5.u32 & 0x1F;
	// addis r27,r6,1
	ctx.r27.s64 = ctx.r6.s64 + 65536;
	// addi r4,r25,-23
	ctx.r4.s64 = ctx.r25.s64 + -23;
	// addi r27,r27,-28670
	ctx.r27.s64 = ctx.r27.s64 + -28670;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822a3ac0
	ctx.lr = 0x822A03D8;
	sub_822A3AC0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// beq cr6,0x822a04f4
	if (ctx.cr6.eq) goto loc_822A04F4;
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
loc_822A03F0:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x822a0474
	if (ctx.cr6.eq) goto loc_822A0474;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// bl 0x822a3740
	ctx.lr = 0x822A041C;
	sub_822A3740(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822a0474
	if (!ctx.cr6.eq) goto loc_822A0474;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a0474
	if (ctx.cr6.eq) goto loc_822A0474;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0474
	if (!ctx.cr6.eq) goto loc_822A0474;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r7,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r7.u16);
loc_822A0474:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822a0498
	if (ctx.cr6.eq) goto loc_822A0498;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a04dc
	if (!ctx.cr6.eq) goto loc_822A04DC;
	// bl 0x822a0018
	ctx.lr = 0x822A0494;
	sub_822A0018(ctx, base);
	// b 0x822a04dc
	goto loc_822A04DC;
loc_822A0498:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a04dc
	if (ctx.cr6.eq) goto loc_822A04DC;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a04dc
	if (!ctx.cr6.eq) goto loc_822A04DC;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r3,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u16);
loc_822A04DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3b58
	ctx.lr = 0x822A04E8;
	sub_822A3B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a03f0
	if (!ctx.cr6.eq) goto loc_822A03F0;
loc_822A04F4:
	// addi r11,r25,-16
	ctx.r11.s64 = ctx.r25.s64 + -16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x822a05b4
	if (ctx.cr6.gt) goto loc_822A05B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a056c
	if (ctx.cr6.eq) goto loc_822A056C;
	// bdz 0x822a056c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A056C;
	// bdz 0x822a056c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A056C;
	// bdz 0x822a0520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A0520;
	// bdz 0x822a05b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A05B4;
	// b 0x822a056c
	goto loc_822A056C;
loc_822A0520:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r9,r11,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a056c
	if (ctx.cr6.eq) goto loc_822A056C;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a056c
	if (!ctx.cr6.eq) goto loc_822A056C;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r9,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822A056C:
	// lhz r9,6(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a05b4
	if (ctx.cr6.eq) goto loc_822A05B4;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a05b4
	if (!ctx.cr6.eq) goto loc_822A05B4;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r9,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u16);
loc_822A05B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0388) {
	__imp__sub_822A0388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A05BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A05BC) {
	__imp__sub_822A05BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A05C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A05C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x822a0620
	if (ctx.cr6.eq) goto loc_822A0620;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a0620
	if (!ctx.cr6.eq) goto loc_822A0620;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,8288
	ctx.r10.s64 = ctx.r10.s64 + 8288;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r3,r6,r10
	PPC_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
loc_822A0620:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a0654
	if (!ctx.cr6.lt) goto loc_822A0654;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,8288
	ctx.r10.s64 = ctx.r10.s64 + 8288;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822A063C:
	// lhzu r3,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822a0388
	ctx.lr = 0x822A0648;
	sub_822A0388(ctx, base);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a063c
	if (ctx.cr6.lt) goto loc_822A063C;
loc_822A0654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A05C0) {
	__imp__sub_822A05C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A065C) {
	__imp__sub_822A065C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A0668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r11,-7040
	ctx.r28.s64 = ctx.r11.s64 + -7040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r30,r11,27
	ctx.r30.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x822a07a8
	if (ctx.cr6.gt) goto loc_822A07A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822a06d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822A06D0;
	// bdzf 4*cr6+eq,0x822a06fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822A06FC;
	// bdzf 4*cr6+eq,0x822a0724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822A0724;
	// bdzf 4*cr6+eq,0x822a07a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822A07A8;
	// bdzf 4*cr6+eq,0x822a0794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822A0794;
	// bne cr6,0x822a074c
	if (!ctx.cr6.eq) goto loc_822A074C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8229f030
	ctx.lr = 0x822A06CC;
	sub_8229F030(ctx, base);
	// b 0x822a07c0
	goto loc_822A07C0;
loc_822A06D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8229f030
	ctx.lr = 0x822A06E0;
	sub_8229F030(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r3,r11,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// bl 0x822a13a0
	ctx.lr = 0x822A06EC;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e42f8
	ctx.lr = 0x822A06F8;
	sub_822E42F8(ctx, base);
	// b 0x822a07c0
	goto loc_822A07C0;
loc_822A06FC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8229f030
	ctx.lr = 0x822A070C;
	sub_8229F030(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x822a07b8
	goto loc_822A07B8;
loc_822A0724:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8229f030
	ctx.lr = 0x822A0734;
	sub_8229F030(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// bl 0x8229f030
	ctx.lr = 0x822A0748;
	sub_8229F030(ctx, base);
	// b 0x822a07c0
	goto loc_822A07C0;
loc_822A074C:
	// li r11,176
	ctx.r11.s64 = 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0764;
	sub_822E40F0(ctx, base);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x822e40f0
	ctx.lr = 0x822A077C;
	sub_822E40F0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x822a07b8
	goto loc_822A07B8;
loc_822A0794:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8229f030
	ctx.lr = 0x822A07A4;
	sub_8229F030(ctx, base);
	// b 0x822a07c0
	goto loc_822A07C0;
loc_822A07A8:
	// rlwinm r11,r30,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
loc_822A07B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A07C0;
	sub_822E40F0(ctx, base);
loc_822A07C0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// ori r8,r11,51201
	ctx.r8.u64 = ctx.r11.u64 | 51201;
	// addi r10,r30,-23
	ctx.r10.s64 = ctx.r30.s64 + -23;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addis r30,r6,1
	ctx.r30.s64 = ctx.r6.s64 + 65536;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r26,r7,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r30,r30,-28670
	ctx.r30.s64 = ctx.r30.s64 + -28670;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822a3a70
	ctx.lr = 0x822A07F0;
	sub_822A3A70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a0810
	if (ctx.cr6.eq) goto loc_822A0810;
loc_822A07F8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x822a3a88
	ctx.lr = 0x822A0808;
	sub_822A3A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a07f8
	if (!ctx.cr6.eq) goto loc_822A07F8;
loc_822A0810:
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0824;
	sub_822E40F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3ac0
	ctx.lr = 0x822A082C;
	sub_822A3AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a0890
	if (ctx.cr6.eq) goto loc_822A0890;
loc_822A0838:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822a01a0
	ctx.lr = 0x822A0878;
	sub_822A01A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3b58
	ctx.lr = 0x822A0884;
	sub_822A3B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0838
	if (!ctx.cr6.eq) goto loc_822A0838;
loc_822A0890:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0660) {
	__imp__sub_822A0660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0898) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a08c8
	if (!ctx.cr6.eq) goto loc_822A08C8;
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
loc_822A08C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a05c0
	ctx.lr = 0x822A08D0;
	sub_822A05C0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822A0898) {
	__imp__sub_822A0898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A08F8) {
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
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a092c
	if (!ctx.cr6.eq) goto loc_822A092C;
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
loc_822A092C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a05c0
	ctx.lr = 0x822A0934;
	sub_822A05C0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822A08F8) {
	__imp__sub_822A08F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A095C) {
	__imp__sub_822A095C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0960) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// sth r11,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r11.u16);
	// beq cr6,0x822a09a8
	if (ctx.cr6.eq) goto loc_822A09A8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a05c0
	ctx.lr = 0x822A0990;
	sub_822A05C0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a05c0
	ctx.lr = 0x822A0998;
	sub_822A05C0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a05c0
	ctx.lr = 0x822A09A0;
	sub_822A05C0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x822a05c0
	ctx.lr = 0x822A09A8;
	sub_822A05C0(ctx, base);
loc_822A09A8:
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

PPC_WEAK_FUNC(sub_822A0960) {
	__imp__sub_822A0960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A09BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A09BC) {
	__imp__sub_822A09BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A09C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a0a04
	if (!ctx.cr6.eq) goto loc_822A0A04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0A00;
	sub_822E40F0(ctx, base);
	// b 0x822a0a44
	goto loc_822A0A44;
loc_822A0A04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0A10;
	sub_822E40F0(ctx, base);
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r9,r10,-7040
	ctx.r9.s64 = ctx.r10.s64 + -7040;
	// addis r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 589824;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// clrlwi r3,r3,27
	ctx.r3.u64 = ctx.r3.u32 & 0x1F;
	// bl 0x8229fcd0
	ctx.lr = 0x822A0A44;
	sub_8229FCD0(ctx, base);
loc_822A0A44:
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

PPC_WEAK_FUNC(sub_822A09C0) {
	__imp__sub_822A09C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0A5C) {
	__imp__sub_822A0A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822A0A68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,25368
	ctx.r29.s64 = ctx.r11.s64 + 25368;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x822A0A8C;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r10,-6904
	ctx.r31.s64 = ctx.r10.s64 + -6904;
	// beq cr6,0x822a0abc
	if (ctx.cr6.eq) goto loc_822A0ABC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x822A0ABC;
	sub_822E40F0(ctx, base);
loc_822A0ABC:
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x822e40f0
	ctx.lr = 0x822A0AD4;
	sub_822E40F0(ctx, base);
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x822e40f0
	ctx.lr = 0x822A0AEC;
	sub_822E40F0(ctx, base);
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822a0b20
	if (ctx.cr6.lt) goto loc_822A0B20;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r27,r11,8288
	ctx.r27.s64 = ctx.r11.s64 + 8288;
loc_822A0B04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhzu r3,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// bl 0x822a0660
	ctx.lr = 0x822A0B10;
	sub_822A0660(ctx, base);
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822a0b04
	if (!ctx.cr6.gt) goto loc_822A0B04;
loc_822A0B20:
	// lhz r10,66(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822a0b60
	if (ctx.cr6.gt) goto loc_822A0B60;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8286
	ctx.r11.s64 = ctx.r11.s64 + 8286;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822A0B44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhzu r3,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// bl 0x822a0660
	ctx.lr = 0x822A0B50;
	sub_822A0660(ctx, base);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822a0b44
	if (!ctx.cr6.gt) goto loc_822A0B44;
loc_822A0B60:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x822a0b88
	if (!ctx.cr6.eq) goto loc_822A0B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0B84;
	sub_822E40F0(ctx, base);
	// b 0x822a0bc8
	goto loc_822A0BC8;
loc_822A0B88:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0B94;
	sub_822E40F0(ctx, base);
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r10,-7040
	ctx.r9.s64 = ctx.r10.s64 + -7040;
	// addis r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 589824;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r7,r10,36
	ctx.r7.s64 = ctx.r10.s64 + 36;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// clrlwi r3,r3,27
	ctx.r3.u64 = ctx.r3.u32 & 0x1F;
	// bl 0x8229fcd0
	ctx.lr = 0x822A0BC8;
	sub_8229FCD0(ctx, base);
loc_822A0BC8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822a0e64
	if (ctx.cr6.eq) goto loc_822A0E64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229f030
	ctx.lr = 0x822A0BE0;
	sub_8229F030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8229f030
	ctx.lr = 0x822A0BF0;
	sub_8229F030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8229f030
	ctx.lr = 0x822A0C00;
	sub_8229F030(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r11,r11,14744
	ctx.r11.s64 = ctx.r11.s64 + 14744;
	// li r25,256
	ctx.r25.s64 = 256;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
loc_822A0C14:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822A0C2C;
	sub_8229EF90(ctx, base);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r7,r25,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r25.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0C50;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822a0c6c
	if (!ctx.cr6.eq) goto loc_822A0C6C;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0C6C;
	sub_822E40F0(ctx, base);
loc_822A0C6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sthx r27,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u16);
	// bne 0x822a0c14
	if (!ctx.cr0.eq) goto loc_822A0C14;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822A0CAC;
	sub_8229EF90(ctx, base);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r7,r25,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r25.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0CD0;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a0cec
	if (!ctx.cr6.eq) goto loc_822A0CEC;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0CEC;
	sub_822E40F0(ctx, base);
loc_822A0CEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// sthx r28,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r28.u16);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lhzx r28,r5,r4
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822A0D20;
	sub_8229EF90(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r10,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0D44;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a0d60
	if (!ctx.cr6.eq) goto loc_822A0D60;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0D60;
	sub_822E40F0(ctx, base);
loc_822A0D60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// sthx r28,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r28.u16);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lhzx r28,r5,r4
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822A0D94;
	sub_8229EF90(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r10,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0DB8;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a0dd4
	if (!ctx.cr6.eq) goto loc_822A0DD4;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0DD4;
	sub_822E40F0(ctx, base);
loc_822A0DD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sthx r28,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r28.u16);
	// lhzx r31,r5,r4
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ef90
	ctx.lr = 0x822A0E08;
	sub_8229EF90(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r10,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x822e40f0
	ctx.lr = 0x822A0E2C;
	sub_822E40F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822a0e48
	if (!ctx.cr6.eq) goto loc_822A0E48;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822A0E48;
	sub_822E40F0(ctx, base);
loc_822A0E48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sthx r31,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u16);
loc_822A0E64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0A60) {
	__imp__sub_822A0A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0E6C) {
	__imp__sub_822A0E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0E70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822a05c0
	sub_822A05C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0E70) {
	__imp__sub_822A0E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A0E80) {
	__imp__sub_822A0E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0E84) {
	__imp__sub_822A0E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822a05c0
	sub_822A05C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0E88) {
	__imp__sub_822A0E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A0EA0) {
	__imp__sub_822A0EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A0EA4) {
	__imp__sub_822A0EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A0EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822A0EB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822dd778
	ctx.lr = 0x822A0ED4;
	sub_822DD778(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// bl 0x822dd778
	ctx.lr = 0x822A0EEC;
	sub_822DD778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
	// addi r25,r9,-7040
	ctx.r25.s64 = ctx.r9.s64 + -7040;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0f38
	if (ctx.cr6.eq) goto loc_822A0F38;
	// addis r10,r25,9
	ctx.r10.s64 = ctx.r25.s64 + 589824;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822a0f38
	if (!ctx.cr6.eq) goto loc_822A0F38;
	// bl 0x822a05c0
	ctx.lr = 0x822A0F38;
	sub_822A05C0(ctx, base);
loc_822A0F38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822a1358
	if (ctx.cr6.eq) goto loc_822A1358;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x822a05c0
	ctx.lr = 0x822A0F48;
	sub_822A05C0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822a05c0
	ctx.lr = 0x822A0F50;
	sub_822A05C0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822a05c0
	ctx.lr = 0x822A0F58;
	sub_822A05C0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r11,r11,14744
	ctx.r11.s64 = ctx.r11.s64 + 14744;
	// addi r29,r11,-10
	ctx.r29.s64 = ctx.r11.s64 + -10;
loc_822A0F68:
	// lhzu r3,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// bl 0x822a05c0
	ctx.lr = 0x822A0F70;
	sub_822A05C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822a0f68
	if (!ctx.cr0.eq) goto loc_822A0F68;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r19,66(r31)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// ori r20,r10,51201
	ctx.r20.u64 = ctx.r10.u64 | 51201;
	// ori r21,r9,36866
	ctx.r21.u64 = ctx.r9.u64 | 36866;
	// mullw r7,r8,r20
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// add r26,r7,r21
	ctx.r26.u64 = ctx.r7.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A0FA0;
	sub_822A3A70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1080
	if (ctx.cr6.eq) goto loc_822A1080;
loc_822A0FAC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822A0FB8;
	sub_822A3CF8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r28,r10,r21
	ctx.r28.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A0FCC;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1068
	if (ctx.cr6.eq) goto loc_822A1068;
loc_822A0FD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822A0FE4;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a1050
	if (ctx.cr6.eq) goto loc_822A1050;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822A0FF8;
	sub_822A38E0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822a0018
	ctx.lr = 0x822A1000;
	sub_822A0018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822A100C;
	sub_822A2AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1050
	if (ctx.cr6.eq) goto loc_822A1050;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1050
	if (!ctx.cr6.eq) goto loc_822A1050;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r3,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u16);
loc_822A1050:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A105C;
	sub_822A3A88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0fd8
	if (!ctx.cr6.eq) goto loc_822A0FD8;
loc_822A1068:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A1074;
	sub_822A3A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a0fac
	if (!ctx.cr6.eq) goto loc_822A0FAC;
loc_822A1080:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r26,r10,r21
	ctx.r26.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A1094;
	sub_822A3A70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a11b8
	if (ctx.cr6.eq) goto loc_822A11B8;
loc_822A10A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3cf8
	ctx.lr = 0x822A10AC;
	sub_822A3CF8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r28,r10,r21
	ctx.r28.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A10C0;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a11a0
	if (ctx.cr6.eq) goto loc_822A11A0;
loc_822A10CC:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r4,r8,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a1124
	if (ctx.cr6.eq) goto loc_822A1124;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1124
	if (!ctx.cr6.eq) goto loc_822A1124;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r4,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r4.u16);
loc_822A1124:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822A112C;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822A1138;
	sub_822A38E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1188
	if (ctx.cr6.eq) goto loc_822A1188;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lhzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1188
	if (!ctx.cr6.eq) goto loc_822A1188;
	// lhz r10,66(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r5,r9,8288
	ctx.r5.s64 = ctx.r9.s64 + 8288;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r6,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u16);
loc_822A1188:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A1194;
	sub_822A3A88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a10cc
	if (!ctx.cr6.eq) goto loc_822A10CC;
loc_822A11A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A11AC;
	sub_822A3A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a10a0
	if (!ctx.cr6.eq) goto loc_822A10A0;
loc_822A11B8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r22,r10,r21
	ctx.r22.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A11CC;
	sub_822A3A70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1324
	if (ctx.cr6.eq) goto loc_822A1324;
loc_822A11D8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a3cf8
	ctx.lr = 0x822A11E4;
	sub_822A3CF8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r23,r10,r21
	ctx.r23.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A11F8;
	sub_822A3A70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a130c
	if (ctx.cr6.eq) goto loc_822A130C;
loc_822A1204:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822A1210;
	sub_822A3CF8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r28,r10,r21
	ctx.r28.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822A1224;
	sub_822A3A70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a12f4
	if (ctx.cr6.eq) goto loc_822A12F4;
loc_822A1230:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822A123C;
	sub_822A2AE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a1284
	if (ctx.cr6.eq) goto loc_822A1284;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1284
	if (!ctx.cr6.eq) goto loc_822A1284;
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,8288
	ctx.r6.s64 = ctx.r10.s64 + 8288;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// sthx r3,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u16);
loc_822A1284:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822A1290;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x822a12a4
	if (!ctx.cr6.eq) goto loc_822A12A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x822a12d0
	goto loc_822A12D0;
loc_822A12A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822A12AC;
	sub_822A32A8(ctx, base);
	// bl 0x822a2da8
	ctx.lr = 0x822A12B0;
	sub_822A2DA8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822A12C0;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a12dc
	if (ctx.cr6.eq) goto loc_822A12DC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_822A12D0:
	// bl 0x822a38e0
	ctx.lr = 0x822A12D4;
	sub_822A38E0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822a0018
	ctx.lr = 0x822A12DC;
	sub_822A0018(ctx, base);
loc_822A12DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A12E8;
	sub_822A3A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1230
	if (!ctx.cr6.eq) goto loc_822A1230;
loc_822A12F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A1300;
	sub_822A3A88(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1204
	if (!ctx.cr6.eq) goto loc_822A1204;
loc_822A130C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822A1318;
	sub_822A3A88(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a11d8
	if (!ctx.cr6.eq) goto loc_822A11D8;
loc_822A1324:
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822a1358
	if (!ctx.cr6.lt) goto loc_822A1358;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,8288
	ctx.r10.s64 = ctx.r10.s64 + 8288;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822A1340:
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// bl 0x822a0388
	ctx.lr = 0x822A134C;
	sub_822A0388(ctx, base);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a1340
	if (ctx.cr6.lt) goto loc_822A1340;
loc_822A1358:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A0EA8) {
	__imp__sub_822A0EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfc r8,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1360) {
	__imp__sub_822A1360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1380) {
	__imp__sub_822A1380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1394) {
	__imp__sub_822A1394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1398) {
	__imp__sub_822A1398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A13A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a13c0
	if (ctx.cr6.eq) goto loc_822A13C0;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
loc_822A13C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A13A0) {
	__imp__sub_822A13A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A13C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a13e8
	if (ctx.cr6.eq) goto loc_822A13E8;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
loc_822A13E8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A13C8) {
	__imp__sub_822A13C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A13F4) {
	__imp__sub_822A13F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A13F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822A141C:
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a141c
	if (!ctx.cr6.eq) goto loc_822A141C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A13F8) {
	__imp__sub_822A13F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822A1460:
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1460
	if (!ctx.cr6.eq) goto loc_822A1460;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1430) {
	__imp__sub_822A1430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1474) {
	__imp__sub_822A1474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1478) {
	__imp__sub_822A1478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1490) {
	__imp__sub_822A1490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A14AC) {
	__imp__sub_822A14AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A14B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x822a1510
	if (!ctx.cr6.lt) goto loc_822A1510;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a14e4
	if (ctx.cr6.eq) goto loc_822A14E4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_822A14CC:
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x822a14cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A14CC;
loc_822A14E4:
	// lis r10,9364
	ctx.r10.s64 = 613679104;
	// ori r9,r10,58855
	ctx.r9.u64 = ctx.r10.u64 | 58855;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r7,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// mulli r5,r6,28671
	ctx.r5.s64 = ctx.r6.s64 * 28671;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_822A1510:
	// lis r11,9364
	ctx.r11.s64 = 613679104;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r8,r11,58855
	ctx.r8.u64 = ctx.r11.u64 | 58855;
	// mulhwu r11,r9,r8
	ctx.r11.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// mulli r4,r5,28671
	ctx.r4.s64 = ctx.r5.s64 * 28671;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A14B0) {
	__imp__sub_822A14B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1540) {
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
	// bl 0x8229d8d8
	ctx.lr = 0x822A1554;
	sub_8229D8D8(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec4e8
	ctx.lr = 0x822A155C;
	sub_822EC4E8(ctx, base);
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,25472
	ctx.r9.s64 = ctx.r10.s64 + 25472;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// subfic r3,r7,24
	ctx.xer.ca = ctx.r7.u32 <= 24;
	ctx.r3.s64 = 24 - ctx.r7.s64;
loc_822A1588:
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// or r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 | ctx.r7.u64;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r6,28672
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 28672, ctx.xer);
	// blt cr6,0x822a1588
	if (ctx.cr6.lt) goto loc_822A1588;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// li r3,17
	ctx.r3.s64 = 17;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x822ec500
	ctx.lr = 0x822A1608;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_822A1540) {
	__imp__sub_822A1540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A161C) {
	__imp__sub_822A161C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r9,r11,25472
	ctx.r9.s64 = ctx.r11.s64 + 25472;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 32768;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stbx r11,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1620) {
	__imp__sub_822A1620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1654) {
	__imp__sub_822A1654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A1660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822a14b0
	ctx.lr = 0x822A1670;
	sub_822A14B0(ctx, base);
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,25472
	ctx.r27.s64 = ctx.r11.s64 + 25472;
	// li r3,17
	ctx.r3.s64 = 17;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x822A168C;
	sub_822EC4E8(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rlwinm r10,r7,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a179c
	if (!ctx.cr6.eq) goto loc_822A179C;
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,25344(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25344);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822a1718
	if (!ctx.cr6.eq) goto loc_822A1718;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a16fc
	if (ctx.cr6.eq) goto loc_822A16FC;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822A16DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822a16fc
	if (!ctx.cr0.eq) goto loc_822A16FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822a16dc
	if (!ctx.cr6.eq) goto loc_822A16DC;
loc_822A16FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a1718
	if (!ctx.cr6.eq) goto loc_822A1718;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A170C;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A1718:
	// rlwinm r11,r7,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822a179c
	if (ctx.cr6.eq) goto loc_822A179C;
loc_822A172C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822a1784
	if (!ctx.cr6.eq) goto loc_822A1784;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a177c
	if (ctx.cr6.eq) goto loc_822A177C;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822A175C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822a177c
	if (!ctx.cr0.eq) goto loc_822A177C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822a175c
	if (!ctx.cr6.eq) goto loc_822A175C;
loc_822A177C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a17b0
	if (ctx.cr6.eq) goto loc_822A17B0;
loc_822A1784:
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r11,r6,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a172c
	if (!ctx.cr6.eq) goto loc_822A172C;
loc_822A179C:
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A17A4;
	sub_822EC500(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A17B0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// li r3,17
	ctx.r3.s64 = 17;
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r7,r8,0,14,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30000;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r5,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r5.u32);
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,14,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r5,0,14,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30000;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x822ec500
	ctx.lr = 0x822A1804;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1658) {
	__imp__sub_822A1658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1810) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1814:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1814
	if (!ctx.cr6.eq) goto loc_822A1814;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x822a1658
	sub_822A1658(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1810) {
	__imp__sub_822A1810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A1840;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8320(r1)
	ea = -8320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1850:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1850
	if (!ctx.cr6.eq) goto loc_822A1850;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,8192
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8192, ctx.xer);
	// ble cr6,0x822a1884
	if (!ctx.cr6.gt) goto loc_822A1884;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A1884:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822a18bc
	if (!ctx.cr6.gt) goto loc_822A18BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_822A1898:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822A18AC;
	sub_823DFA20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822a1898
	if (ctx.cr6.lt) goto loc_822A1898;
loc_822A18BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1658
	ctx.lr = 0x822A18C8;
	sub_822A1658(ctx, base);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1838) {
	__imp__sub_822A1838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A18D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a1908
	if (ctx.cr6.eq) goto loc_822A1908;
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
loc_822A18DC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwcx. r8,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a18dc
	if (!ctx.cr0.eq) goto loc_822A18DC;
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822A1908:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1908
	if (!ctx.cr0.eq) goto loc_822A1908;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A18D0) {
	__imp__sub_822A18D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x822a1970
	if (ctx.cr6.eq) goto loc_822A1970;
	// rlwinm r9,r4,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
loc_822A1944:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1944
	if (!ctx.cr0.eq) goto loc_822A1944;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822A1970:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1970
	if (!ctx.cr0.eq) goto loc_822A1970;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1928) {
	__imp__sub_822A1928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1990) {
	__imp__sub_822A1990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A19A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822A19B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x822a14b0
	ctx.lr = 0x822A19CC;
	sub_822A14B0(ctx, base);
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r11,25472
	ctx.r31.s64 = ctx.r11.s64 + 25472;
	// li r3,17
	ctx.r3.s64 = 17;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r22,r26,24
	ctx.r22.u64 = ctx.r26.u32 & 0xFF;
	// bl 0x822ec4e8
	ctx.lr = 0x822A19EC;
	sub_822EC4E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r21,-31900
	ctx.r21.s64 = -2090598400;
	// rlwinm r11,r9,0,14,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a1be8
	if (!ctx.cr6.eq) goto loc_822A1BE8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,25344(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25344);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822a1a80
	if (!ctx.cr6.eq) goto loc_822A1A80;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a1a58
	if (ctx.cr6.eq) goto loc_822A1A58;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_822A1A38:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822a1a58
	if (!ctx.cr0.eq) goto loc_822A1A58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822a1a38
	if (!ctx.cr6.eq) goto loc_822A1A38;
loc_822A1A58:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a1a80
	if (!ctx.cr6.eq) goto loc_822A1A80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x822a18d0
	ctx.lr = 0x822A1A68;
	sub_822A18D0(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822ec500
	ctx.lr = 0x822A1A74;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_822A1A80:
	// rlwinm r11,r9,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822a1b04
	if (ctx.cr6.eq) goto loc_822A1B04;
loc_822A1A94:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822a1aec
	if (!ctx.cr6.eq) goto loc_822A1AEC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822a1ae4
	if (ctx.cr6.eq) goto loc_822A1AE4;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_822A1AC4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822a1ae4
	if (!ctx.cr0.eq) goto loc_822A1AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822a1ac4
	if (!ctx.cr6.eq) goto loc_822A1AC4;
loc_822A1AE4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822a1b80
	if (ctx.cr6.eq) goto loc_822A1B80;
loc_822A1AEC:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r11,r6,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a1a94
	if (!ctx.cr6.eq) goto loc_822A1A94;
loc_822A1B04:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822a1b28
	if (!ctx.cr6.eq) goto loc_822A1B28;
	// bl 0x822a4e90
	ctx.lr = 0x822A1B14;
	sub_822A4E90(ctx, base);
	// bl 0x822a28f8
	ctx.lr = 0x822A1B18;
	sub_822A28F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x822830e8
	ctx.lr = 0x822A1B28;
	sub_822830E8(ctx, base);
loc_822A1B28:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8229dac0
	ctx.lr = 0x822A1B34;
	sub_8229DAC0(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r7,r10,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// lhz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// oris r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 65536;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r4,r28,0,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// clrlwi r3,r4,14
	ctx.r3.u64 = ctx.r4.u32 & 0x3FFFF;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822a1cd8
	goto loc_822A1CD8;
loc_822A1B80:
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r7,r8,0,14,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30000;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,14,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30000;
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,0,14,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x822a18d0
	ctx.lr = 0x822A1BD4;
	sub_822A18D0(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A1BDC;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_822A1BE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a1c2c
	if (!ctx.cr6.eq) goto loc_822A1C2C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8229dac0
	ctx.lr = 0x822A1BFC;
	sub_8229DAC0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r7,r9,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r6,0,14,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30000;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x822a1cd0
	goto loc_822A1CD0;
loc_822A1C2C:
	// rlwinm r28,r9,3,13,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822a1c5c
	if (ctx.cr6.eq) goto loc_822A1C5C;
loc_822A1C44:
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r28,r11,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822a1c44
	if (!ctx.cr6.eq) goto loc_822A1C44;
loc_822A1C5C:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a1c80
	if (!ctx.cr6.eq) goto loc_822A1C80;
	// bl 0x822a4e90
	ctx.lr = 0x822A1C6C;
	sub_822A4E90(ctx, base);
	// bl 0x822a28f8
	ctx.lr = 0x822A1C70;
	sub_822A28F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,23232
	ctx.r4.s64 = ctx.r11.s64 + 23232;
	// bl 0x822830e8
	ctx.lr = 0x822A1C80;
	sub_822830E8(ctx, base);
loc_822A1C80:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8229dac0
	ctx.lr = 0x822A1C8C;
	sub_8229DAC0(ctx, base);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// oris r7,r29,1
	ctx.r7.u64 = ctx.r29.u64 | 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r6,r10,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwx r8,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r4,r5,0,14,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30000;
	// or r3,r4,r27
	ctx.r3.u64 = ctx.r4.u64 | ctx.r27.u64;
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822A1CD0:
	// oris r11,r25,2
	ctx.r11.u64 = ctx.r25.u64 | 131072;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_822A1CD8:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 25344);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de1f0
	ctx.lr = 0x822A1CF8;
	sub_823DE1F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r20,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r20.u8);
	// li r3,17
	ctx.r3.s64 = 17;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
	// bl 0x822ec500
	ctx.lr = 0x822A1D10;
	sub_822EC500(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A19A8) {
	__imp__sub_822A19A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1D1C) {
	__imp__sub_822A1D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D20) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1D28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1d28
	if (!ctx.cr6.eq) goto loc_822A1D28;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a19a8
	sub_822A19A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1D20) {
	__imp__sub_822A1D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1D4C) {
	__imp__sub_822A1D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1D54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1d54
	if (!ctx.cr6.eq) goto loc_822A1D54;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a19a8
	sub_822A19A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1D50) {
	__imp__sub_822A1D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1D7C) {
	__imp__sub_822A1D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A1D88;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8336(r1)
	ea = -8336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,8192
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8192, ctx.xer);
	// ble cr6,0x822a1dc8
	if (!ctx.cr6.gt) goto loc_822A1DC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,23352
	ctx.r4.s64 = ctx.r11.s64 + 23352;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A1DBC;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A1DC8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a1e00
	if (ctx.cr6.eq) goto loc_822A1E00;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r28,r11,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_822A1DDC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822A1DF0;
	sub_823DFA20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822a1ddc
	if (ctx.cr6.lt) goto loc_822A1DDC;
loc_822A1E00:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a19a8
	ctx.lr = 0x822A1E14;
	sub_822A19A8(ctx, base);
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1D80) {
	__imp__sub_822A1D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1E1C) {
	__imp__sub_822A1E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E20) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1E28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1e28
	if (!ctx.cr6.eq) goto loc_822A1E28;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a1d80
	sub_822A1D80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1E20) {
	__imp__sub_822A1E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1E4C) {
	__imp__sub_822A1E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A1E54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a1e54
	if (!ctx.cr6.eq) goto loc_822A1E54;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a1d80
	sub_822A1D80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1E50) {
	__imp__sub_822A1E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1E7C) {
	__imp__sub_822A1E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a1ec0
	if (ctx.cr6.eq) goto loc_822A1EC0;
loc_822A1EA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1ea0
	if (!ctx.cr0.eq) goto loc_822A1EA0;
	// blr 
	return;
loc_822A1EC0:
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
loc_822A1EC4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1ec4
	if (!ctx.cr0.eq) goto loc_822A1EC4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1E80) {
	__imp__sub_822A1E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A1EE4) {
	__imp__sub_822A1EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822A1EF8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a1ef8
	if (!ctx.cr0.eq) goto loc_822A1EF8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A1EE8) {
	__imp__sub_822A1EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A1F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A1F20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822a14b0
	ctx.lr = 0x822A1F3C;
	sub_822A14B0(ctx, base);
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r10,25472
	ctx.r31.s64 = ctx.r10.s64 + 25472;
	// li r3,17
	ctx.r3.s64 = 17;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x822A1F58;
	sub_822EC4E8(ctx, base);
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a2024
	if (!ctx.cr6.eq) goto loc_822A2024;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229dfb0
	ctx.lr = 0x822A1F70;
	sub_8229DFB0(ctx, base);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x822a1fc0
	if (!ctx.cr6.eq) goto loc_822A1FC0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822a1fb4
	if (ctx.cr6.eq) goto loc_822A1FB4;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// oris r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 131072;
	// ori r6,r8,32772
	ctx.r6.u64 = ctx.r8.u64 | 32772;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// b 0x822a2004
	goto loc_822A2004;
loc_822A1FB4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x822a2004
	goto loc_822A2004;
loc_822A1FC0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822a1fec
	if (ctx.cr6.eq) goto loc_822A1FEC;
loc_822A1FD0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a1fd0
	if (!ctx.cr6.eq) goto loc_822A1FD0;
loc_822A1FEC:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r6,r7,0,14,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30000;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r5,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u32);
loc_822A2004:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r10,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822A2024:
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A202C;
	sub_822EC500(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A1F18) {
	__imp__sub_822A1F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2034) {
	__imp__sub_822A2034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822A204C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a204c
	if (!ctx.cr0.eq) goto loc_822A204C;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822a1f18
	sub_822A1F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2038) {
	__imp__sub_822A2038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2080) {
	__imp__sub_822A2080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2084) {
	__imp__sub_822A2084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2088) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A208C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a208c
	if (!ctx.cr6.eq) goto loc_822A208C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a19a8
	sub_822A19A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2088) {
	__imp__sub_822A2088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A20B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17796
	ctx.r4.s64 = ctx.r11.s64 + 17796;
	// bl 0x823df2b0
	ctx.lr = 0x822A20DC;
	sub_823DF2B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822A20E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a20e4
	if (!ctx.cr6.eq) goto loc_822A20E4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x822A2114;
	sub_822A19A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A20B8) {
	__imp__sub_822A20B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2124) {
	__imp__sub_822A2124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,13712
	ctx.r4.s64 = ctx.r11.s64 + 13712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x822A2148;
	sub_823DF2B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822A2150:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a2150
	if (!ctx.cr6.eq) goto loc_822A2150;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x822A2180;
	sub_822A19A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2128) {
	__imp__sub_822A2128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f3,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,23388
	ctx.r4.s64 = ctx.r10.s64 + 23388;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x823df2b0
	ctx.lr = 0x822A21D4;
	sub_823DF2B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822A21DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a21dc
	if (!ctx.cr6.eq) goto loc_822A21DC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x822A220C;
	sub_822A19A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2190) {
	__imp__sub_822A2190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A221C) {
	__imp__sub_822A221C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2220) {
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
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x822A2244;
	sub_822EC4E8(ctx, base);
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// li r11,9557
	ctx.r11.s64 = 9557;
	// addi r10,r10,25472
	ctx.r10.s64 = ctx.r10.s64 + 25472;
	// lis r8,-31900
	ctx.r8.s64 = -2090598400;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A225C:
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r9,r11,0,14,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a229c
	if (ctx.cr6.eq) goto loc_822A229C;
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r11,25344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25344);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a229c
	if (ctx.cr6.eq) goto loc_822A229C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andc r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// or r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 | ctx.r30.u64;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_822A229C:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r9,r11,0,14,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a22dc
	if (ctx.cr6.eq) goto loc_822A22DC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,25344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25344);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a22dc
	if (ctx.cr6.eq) goto loc_822A22DC;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andc r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// or r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 | ctx.r30.u64;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_822A22DC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,14,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a231c
	if (ctx.cr6.eq) goto loc_822A231C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,25344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25344);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a231c
	if (ctx.cr6.eq) goto loc_822A231C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andc r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// or r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 | ctx.r30.u64;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_822A231C:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x822a225c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A225C;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A232C;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_822A2220) {
	__imp__sub_822A2220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2344) {
	__imp__sub_822A2344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A2350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r27,r11,23404
	ctx.r27.s64 = ctx.r11.s64 + 23404;
loc_822A2368:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmplwi cr6,r31,92
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 92, ctx.xer);
	// beq cr6,0x822a2368
	if (ctx.cr6.eq) goto loc_822A2368;
	// cmplwi cr6,r31,47
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 47, ctx.xer);
	// beq cr6,0x822a2368
	if (ctx.cr6.eq) goto loc_822A2368;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x822a23e4
	if (ctx.cr6.lt) goto loc_822A23E4;
loc_822A238C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa20
	ctx.lr = 0x822A2394;
	sub_823DFA20(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x822a23b8
	if (!ctx.cr0.eq) goto loc_822A23B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A23B8;
	sub_822830E8(ctx, base);
loc_822A23B8:
	// cmplwi cr6,r31,47
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 47, ctx.xer);
	// beq cr6,0x822a23e4
	if (ctx.cr6.eq) goto loc_822A23E4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmplwi cr6,r31,92
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 92, ctx.xer);
	// bne cr6,0x822a23dc
	if (!ctx.cr6.eq) goto loc_822A23DC;
	// li r31,47
	ctx.r31.s64 = 47;
	// b 0x822a238c
	goto loc_822A238C;
loc_822A23DC:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x822a238c
	if (!ctx.cr6.lt) goto loc_822A238C;
loc_822A23E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822a2368
	if (!ctx.cr6.eq) goto loc_822A2368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2348) {
	__imp__sub_822A2348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A23FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A23FC) {
	__imp__sub_822A23FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a2348
	ctx.lr = 0x822A241C;
	sub_822A2348(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822A2424:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a2424
	if (!ctx.cr6.eq) goto loc_822A2424;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x822A2454;
	sub_822A19A8(ctx, base);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2400) {
	__imp__sub_822A2400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2464) {
	__imp__sub_822A2464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a24a8
	if (ctx.cr6.eq) goto loc_822A24A8;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_822A2498:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a2498
	if (!ctx.cr6.eq) goto loc_822A2498;
loc_822A24A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a24a8
	if (!ctx.cr0.eq) goto loc_822A24A8;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a1f18
	sub_822A1F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2468) {
	__imp__sub_822A2468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A24D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A24D8) {
	__imp__sub_822A24D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A24DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A24DC) {
	__imp__sub_822A24DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A24E0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a2530
	if (ctx.cr6.eq) goto loc_822A2530;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822A2514:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a2514
	if (!ctx.cr0.eq) goto loc_822A2514;
loc_822A2530:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a2540
	if (ctx.cr6.eq) goto loc_822A2540;
	// bl 0x822a2468
	ctx.lr = 0x822A2540;
	sub_822A2468(ctx, base);
loc_822A2540:
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_822A24E0) {
	__imp__sub_822A24E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A255C) {
	__imp__sub_822A255C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2560) {
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
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a258c
	if (ctx.cr6.eq) goto loc_822A258C;
	// bl 0x822a2468
	ctx.lr = 0x822A258C;
	sub_822A2468(ctx, base);
loc_822A258C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822A2590:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a2590
	if (!ctx.cr6.eq) goto loc_822A2590;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x822A25C0;
	sub_822A19A8(ctx, base);
	// sth r3,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r3.u16);
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

PPC_WEAK_FUNC(sub_822A2560) {
	__imp__sub_822A2560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A25DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A25DC) {
	__imp__sub_822A25DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A25E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A25E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec4e8
	ctx.lr = 0x822A25F8;
	sub_822EC4E8(ctx, base);
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// li r27,28671
	ctx.r27.s64 = 28671;
	// addi r29,r11,25472
	ctx.r29.s64 = ctx.r11.s64 + 25472;
	// lis r30,-31900
	ctx.r30.s64 = -2090598400;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
loc_822A260C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a26f4
	if (ctx.cr6.eq) goto loc_822A26F4;
loc_822A2620:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,25344(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// and r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a26f4
	if (ctx.cr6.eq) goto loc_822A26F4;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r10,0
	ctx.r10.s64 = 0;
	// andc r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// ori r5,r7,32772
	ctx.r5.u64 = ctx.r7.u64 | 32772;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// stwx r10,r29,r5
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a269c
	if (ctx.cr6.eq) goto loc_822A269C;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_822A268C:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a268c
	if (!ctx.cr6.eq) goto loc_822A268C;
loc_822A269C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822a269c
	if (!ctx.cr0.eq) goto loc_822A269C;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822a26cc
	if (!ctx.cr6.eq) goto loc_822A26CC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a1f18
	ctx.lr = 0x822A26CC;
	sub_822A1F18(ctx, base);
loc_822A26CC:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,32772
	ctx.r10.u64 = ctx.r11.u64 | 32772;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a26f4
	if (ctx.cr6.eq) goto loc_822A26F4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a2620
	if (!ctx.cr6.eq) goto loc_822A2620;
loc_822A26F4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x822a260c
	if (!ctx.cr0.eq) goto loc_822A260C;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x822ec500
	ctx.lr = 0x822A2708;
	sub_822EC500(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A25E0) {
	__imp__sub_822A25E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2710) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a25e0
	sub_822A25E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2710) {
	__imp__sub_822A2710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822A2720;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8336(r1)
	ea = -8336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a2778
	if (ctx.cr6.eq) goto loc_822A2778;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_822A2768:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a2768
	if (!ctx.cr6.eq) goto loc_822A2768;
loc_822A2778:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,8192
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8192, ctx.xer);
	// ble cr6,0x822a2790
	if (!ctx.cr6.gt) goto loc_822A2790;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822A2790:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x822a27a0
	if (!ctx.cr6.eq) goto loc_822A27A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A27A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a27d8
	if (ctx.cr6.eq) goto loc_822A27D8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822A27B4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822A27C8;
	sub_823DFA20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822a27b4
	if (ctx.cr6.lt) goto loc_822A27B4;
loc_822A27D8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a19a8
	ctx.lr = 0x822A27EC;
	sub_822A19A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2468
	ctx.lr = 0x822A27F8;
	sub_822A2468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2718) {
	__imp__sub_822A2718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2804) {
	__imp__sub_822A2804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// stw r3,-7160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7160, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2808) {
	__imp__sub_822A2808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2814) {
	__imp__sub_822A2814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-7160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7160);
	// b 0x822dbb60
	sub_822DBB60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2818) {
	__imp__sub_822A2818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A282C) {
	__imp__sub_822A282C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7160);
	// b 0x822dbc48
	sub_822DBC48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2830) {
	__imp__sub_822A2830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7160);
	// b 0x822dbcb0
	sub_822DBCB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2840) {
	__imp__sub_822A2840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7160);
	// b 0x822dbcf0
	sub_822DBCF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2850) {
	__imp__sub_822A2850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7160);
	// b 0x822dbb60
	sub_822DBB60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2860) {
	__imp__sub_822A2860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2874) {
	__imp__sub_822A2874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,-1
	ctx.r9.s64 = -1;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// subfc r11,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2878) {
	__imp__sub_822A2878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2894) {
	__imp__sub_822A2894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2898) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,128(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822a28dc
	if (!ctx.cr6.gt) goto loc_822A28DC;
	// lwz r5,128(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_822A28B4:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822a28dc
	if (!ctx.cr6.lt) goto loc_822A28DC;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a28e8
	if (!ctx.cr6.eq) goto loc_822A28E8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a28b4
	if (ctx.cr6.lt) goto loc_822A28B4;
loc_822A28DC:
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// blr 
	return;
loc_822A28E8:
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2898) {
	__imp__sub_822A2898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A28F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A28F0) {
	__imp__sub_822A28F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A28F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A28F4) {
	__imp__sub_822A28F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A28F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A28F8) {
	__imp__sub_822A28F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A28FC) {
	__imp__sub_822A28FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2900) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822A2908;
	__savegprlr_25(ctx, base);
	// add r27,r3,r5
	ctx.r27.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r28,r27,r6
	ctx.r28.u64 = ctx.r27.u64 + ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r7,r11,-7040
	ctx.r7.s64 = ctx.r11.s64 + -7040;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822a2974
	if (!ctx.cr6.lt) goto loc_822A2974;
	// subf r9,r3,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r3.s64;
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// rlwinm r31,r6,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_822A2940:
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r8,-10(r11)
	PPC_STORE_U16(ctx.r11.u32 + -10, ctx.r8.u16);
	// add r30,r9,r6
	ctx.r30.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r26,-12(r11)
	PPC_STORE_U16(ctx.r11.u32 + -12, ctx.r26.u16);
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// sth r30,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r30.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822a2940
	if (ctx.cr6.lt) goto loc_822A2940;
loc_822A2974:
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r4,r3,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r3.s64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r8,r28,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// sth r3,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sthx r3,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r3.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// sthx r3,r5,r10
	PPC_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u16);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2900) {
	__imp__sub_822A2900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A29BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A29BC) {
	__imp__sub_822A29BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A29C0) {
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
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r4,r4,36865
	ctx.r4.u64 = ctx.r4.u64 | 36865;
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2900
	ctx.lr = 0x822A29FC;
	sub_822A2900(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,36865
	ctx.r4.u64 = ctx.r4.u64 | 36865;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2900
	ctx.lr = 0x822A2A14;
	sub_822A2900(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,22530
	ctx.r4.u64 = ctx.r4.u64 | 22530;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a2900
	ctx.lr = 0x822A2A30;
	sub_822A2900(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8195
	ctx.r4.u64 = ctx.r4.u64 | 8195;
	// ori r3,r3,22531
	ctx.r3.u64 = ctx.r3.u64 | 22531;
	// bl 0x822a2900
	ctx.lr = 0x822A2A4C;
	sub_822A2900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A29C0) {
	__imp__sub_822A29C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2A5C) {
	__imp__sub_822A2A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r11,r11,14744
	ctx.r11.s64 = ctx.r11.s64 + 14744;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822A2A78:
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// sthu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822a2a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2A78;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2A60) {
	__imp__sub_822A2A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2A88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2A88) {
	__imp__sub_822A2A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2A90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2A90) {
	__imp__sub_822A2A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2A98) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2A98) {
	__imp__sub_822A2A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AA0) {
	__imp__sub_822A2AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AA8) {
	__imp__sub_822A2AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,51200
	ctx.r3.u64 = ctx.r3.u64 | 51200;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AB0) {
	__imp__sub_822A2AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2ABC) {
	__imp__sub_822A2ABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,51200
	ctx.r3.u64 = ctx.r3.u64 | 51200;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AC0) {
	__imp__sub_822A2AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2ACC) {
	__imp__sub_822A2ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,18432
	ctx.r3.s64 = 18432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AD0) {
	__imp__sub_822A2AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,18432
	ctx.r3.s64 = 18432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AD8) {
	__imp__sub_822A2AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r7,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addis r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -65536;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2AE0) {
	__imp__sub_822A2AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2B04) {
	__imp__sub_822A2B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2B08) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-7040
	ctx.r8.s64 = ctx.r10.s64 + -7040;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2B08) {
	__imp__sub_822A2B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2B20) {
	PPC_FUNC_PROLOGUE();
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,0,25,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// bne cr6,0x822a2bbc
	if (!ctx.cr6.eq) goto loc_822A2BBC;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822a2b6c
	if (!ctx.cr6.eq) goto loc_822A2B6C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_822A2B6C:
	// lhz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822a2bbc
	if (ctx.cr6.eq) goto loc_822A2BBC;
loc_822A2B84:
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822a2b84
	if (!ctx.cr6.eq) goto loc_822A2B84;
loc_822A2BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2B20) {
	__imp__sub_822A2B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2BC4) {
	__imp__sub_822A2BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r7,r10,51201
	ctx.r7.u64 = ctx.r10.u64 | 51201;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// b 0x822a2b20
	sub_822A2B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2BC8) {
	__imp__sub_822A2BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2C10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822a2c48
	if (ctx.cr6.eq) goto loc_822A2C48;
	// cmplwi cr6,r3,36866
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36866, ctx.xer);
	// beq cr6,0x822a2c3c
	if (ctx.cr6.eq) goto loc_822A2C3C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22531
	ctx.r10.u64 = ctx.r11.u64 | 22531;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// b 0x822ad420
	sub_822AD420(ctx, base);
	return;
loc_822A2C3C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x822ad420
	sub_822AD420(ctx, base);
	return;
loc_822A2C48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23700
	ctx.r3.s64 = ctx.r11.s64 + 23700;
	// b 0x822ad420
	sub_822AD420(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2C10) {
	__imp__sub_822A2C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2C54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2C54) {
	__imp__sub_822A2C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r4,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2C58) {
	__imp__sub_822A2C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2C84) {
	__imp__sub_822A2C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2C88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r9,4,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2C88) {
	__imp__sub_822A2C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2CB0) {
	__imp__sub_822A2CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2CCC) {
	__imp__sub_822A2CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r5,r7,1,27,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFFFFFFFF1F) | (ctx.r5.u64 & 0xE0);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2CD0) {
	__imp__sub_822A2CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2D0C) {
	__imp__sub_822A2D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r9,4,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2D10) {
	__imp__sub_822A2D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2D38) {
	__imp__sub_822A2D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2D54) {
	__imp__sub_822A2D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2D58) {
	__imp__sub_822A2D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2D74) {
	__imp__sub_822A2D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r8,19
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 19, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2D78) {
	__imp__sub_822A2D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2DA4) {
	__imp__sub_822A2DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,-7040
	ctx.r9.s64 = ctx.r11.s64 + -7040;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r7,19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r11,28,4,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFF0;
loc_822A2DCC:
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,28,4,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFF0;
	// cmplwi cr6,r7,19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 19, ctx.xer);
	// beq cr6,0x822a2dcc
	if (ctx.cr6.eq) goto loc_822A2DCC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2DA8) {
	__imp__sub_822A2DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2DEC) {
	__imp__sub_822A2DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A2DF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// addi r8,r10,-6904
	ctx.r8.s64 = ctx.r10.s64 + -6904;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lwz r11,60(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r30,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r30.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a2e68
	if (!ctx.cr6.eq) goto loc_822A2E68;
	// xori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 ^ 1;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a2e68
	if (!ctx.cr6.eq) goto loc_822A2E68;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23700
	ctx.r3.s64 = ctx.r11.s64 + 23700;
	// bl 0x822ad420
	ctx.lr = 0x822A2E68;
	sub_822AD420(ctx, base);
loc_822A2E68:
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r9,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// beq cr6,0x822a2ec8
	if (ctx.cr6.eq) goto loc_822A2EC8;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r6,0,25,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a2ec8
	if (!ctx.cr6.eq) goto loc_822A2EC8;
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// rotlwi r4,r6,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// sthx r9,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u16);
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// sth r6,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r6.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
loc_822A2EC8:
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r7,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r7.u16);
	// addi r6,r31,18
	ctx.r6.s64 = ctx.r31.s64 + 18;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r30,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r30.u16);
	// sth r9,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r9.u16);
	// sth r28,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r28.u16);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2DF0) {
	__imp__sub_822A2DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A2EF4) {
	__imp__sub_822A2EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2EF8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r11,18
	ctx.r6.s64 = ctx.r11.s64 + 18;
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// lhz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// rlwinm r11,r4,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x10;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rotlwi r3,r4,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// lhzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r31,r4,4
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// sthx r8,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r8.u16);
	// sthx r7,r31,r5
	PPC_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u16);
	// sthx r7,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A2EF8) {
	__imp__sub_822A2EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A2F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A2F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r26,r3,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lhzx r28,r26,r27
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r27.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822a2fcc
	if (!ctx.cr6.eq) goto loc_822A2FCC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822a2fc0
	if (ctx.cr6.eq) goto loc_822A2FC0;
	// cmplwi cr6,r3,36866
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36866, ctx.xer);
	// beq cr6,0x822a2fb4
	if (ctx.cr6.eq) goto loc_822A2FB4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22531
	ctx.r10.u64 = ctx.r11.u64 | 22531;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a2fcc
	if (!ctx.cr6.eq) goto loc_822A2FCC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// b 0x822a2fc8
	goto loc_822A2FC8;
loc_822A2FB4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x822a2fc8
	goto loc_822A2FC8;
loc_822A2FC0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23700
	ctx.r3.s64 = ctx.r11.s64 + 23700;
loc_822A2FC8:
	// bl 0x822ad420
	ctx.lr = 0x822A2FCC;
	sub_822AD420(ctx, base);
loc_822A2FCC:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// beq cr6,0x822a302c
	if (ctx.cr6.eq) goto loc_822A302C;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r6,0,25,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a302c
	if (!ctx.cr6.eq) goto loc_822A302C;
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r8,r3,r30
	PPC_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// sth r5,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r5.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
loc_822A302C:
	// addis r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -65536;
	// sthx r9,r26,r27
	PPC_STORE_U16(ctx.r26.u32 + ctx.r27.u32, ctx.r9.u16);
	// lis r5,-31862
	ctx.r5.s64 = -2088108032;
	// addi r7,r7,28670
	ctx.r7.s64 = ctx.r7.s64 + 28670;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// addi r8,r5,-6904
	ctx.r8.s64 = ctx.r5.s64 + -6904;
	// subfe r3,r4,r7
	temp.u8 = (~ctx.r4.u32 + ctx.r7.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// sthx r7,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r7.u16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r28,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r28.u16);
	// sth r7,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r7.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A2F58) {
	__imp__sub_822A2F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3094) {
	__imp__sub_822A3094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3098) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A30A8;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r9,116
	ctx.r9.s64 = 116;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3098) {
	__imp__sub_822A3098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A30E0) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A3100;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r9,118
	ctx.r9.s64 = 118;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r9,r31,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
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

PPC_WEAK_FUNC(sub_822A30E0) {
	__imp__sub_822A30E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3148) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A3158;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,119
	ctx.r10.s64 = 119;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3148) {
	__imp__sub_822A3148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3194) {
	__imp__sub_822A3194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3198) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A31A8;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,119
	ctx.r10.s64 = 119;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3198) {
	__imp__sub_822A3198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A31E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A31E4) {
	__imp__sub_822A31E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A31E8) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A3200;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r9,112
	ctx.r9.s64 = 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_822A31E8) {
	__imp__sub_822A31E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3240) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A3260;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r9,115
	ctx.r9.s64 = 115;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r9,r30,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
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

PPC_WEAK_FUNC(sub_822A3240) {
	__imp__sub_822A3240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A32A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A32A8) {
	__imp__sub_822A32A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A32C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A32C0) {
	__imp__sub_822A32C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A32E0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a3314
	if (ctx.cr6.eq) goto loc_822A3314;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// blr 
	return;
loc_822A3314:
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r7,4,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x10;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r4,r10,18
	ctx.r4.s64 = ctx.r10.s64 + 18;
	// rotlwi r5,r7,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// addi r3,r10,18
	ctx.r3.s64 = ctx.r10.s64 + 18;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// lhzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r31,r6,4
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sthx r10,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r10.u16);
	// sthx r7,r31,r3
	PPC_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u16);
	// sthx r7,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A32E0) {
	__imp__sub_822A32E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3358) {
	__imp__sub_822A3358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3370) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A3388;
	sub_8229E0E8(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3370) {
	__imp__sub_822A3370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A33A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A33A4) {
	__imp__sub_822A33A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A33A8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A33C8;
	sub_8229E0E8(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r11.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_822A33A8) {
	__imp__sub_822A33A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3400) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-4(r3)
	PPC_STORE_U16(ctx.r3.u32 + -4, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3400) {
	__imp__sub_822A3400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A341C) {
	__imp__sub_822A341C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3420) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a344c
	if (ctx.cr6.eq) goto loc_822A344C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_822A344C:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8229e118
	sub_8229E118(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3420) {
	__imp__sub_822A3420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3454) {
	__imp__sub_822A3454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3458) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a348c
	if (!ctx.cr6.eq) goto loc_822A348C;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// blr 
	return;
loc_822A348C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a349c
	if (ctx.cr6.gt) goto loc_822A349C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822a1ee8
	sub_822A1EE8(ctx, base);
	return;
loc_822A349C:
	// lbz r11,-1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-4(r4)
	PPC_STORE_U16(ctx.r4.u32 + -4, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3458) {
	__imp__sub_822A3458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A34B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a34d4
	if (!ctx.cr6.eq) goto loc_822A34D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822a90e8
	sub_822A90E8(ctx, base);
	return;
loc_822A34D4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a34e4
	if (ctx.cr6.gt) goto loc_822A34E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822a2468
	sub_822A2468(ctx, base);
	return;
loc_822A34E4:
	// lbz r11,-1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + -4);
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3510
	if (ctx.cr6.eq) goto loc_822A3510;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_822A3510:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8229e118
	sub_8229E118(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A34B8) {
	__imp__sub_822A34B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,254
	ctx.r11.s64 = 16646144;
	// addis r10,r3,126
	ctx.r10.s64 = ctx.r3.s64 + 8257536;
	// ori r9,r11,28671
	ctx.r9.u64 = ctx.r11.u64 | 28671;
	// addi r10,r10,28672
	ctx.r10.s64 = ctx.r10.s64 + 28672;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfze r3,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3518) {
	__imp__sub_822A3518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3538) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,-128
	ctx.r10.s64 = ctx.r3.s64 + -8388608;
	// clrlwi r3,r10,8
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3538) {
	__imp__sub_822A3538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3544) {
	__imp__sub_822A3544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3548) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// rlwinm r10,r7,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r5,51201
	ctx.r8.u64 = ctx.r5.u64 | 51201;
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// b 0x822a2b20
	sub_822A2B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3548) {
	__imp__sub_822A3548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3598) {
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
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r5,51201
	ctx.r8.u64 = ctx.r5.u64 | 51201;
	// rlwinm r10,r7,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// mullw r31,r9,r8
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A35F8;
	sub_822A2B20(ctx, base);
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r6,-7040
	ctx.r4.s64 = ctx.r6.s64 + -7040;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 589824;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822A3598) {
	__imp__sub_822A3598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3628) {
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
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mullw r7,r5,r6
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r31,r9,r8
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A3680;
	sub_822A2B20(ctx, base);
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r6,-7040
	ctx.r4.s64 = ctx.r6.s64 + -7040;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 589824;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822A3628) {
	__imp__sub_822A3628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A36B0) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mullw r7,r5,r6
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r31,r9,r8
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A370C;
	sub_822A2B20(ctx, base);
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r6,-7040
	ctx.r4.s64 = ctx.r6.s64 + -7040;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 589824;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822A36B0) {
	__imp__sub_822A36B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A373C) {
	__imp__sub_822A373C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822a3764
	if (!ctx.cr6.lt) goto loc_822A3764;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A3764:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,36864
	ctx.r9.u64 = ctx.r10.u64 | 36864;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822a378c
	if (!ctx.cr6.lt) goto loc_822A378C;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A378C:
	// addis r10,r3,-128
	ctx.r10.s64 = ctx.r3.s64 + -8388608;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3740) {
	__imp__sub_822A3740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A37A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A37A4) {
	__imp__sub_822A37A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A37A8) {
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
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7040
	ctx.r11.s64 = ctx.r9.s64 + -7040;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a3840
	if (!ctx.cr6.lt) goto loc_822A3840;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a37fc
	if (!ctx.cr6.eq) goto loc_822A37FC;
	// bl 0x822a90e8
	ctx.lr = 0x822A37F8;
	sub_822A90E8(ctx, base);
	// b 0x822a3840
	goto loc_822A3840;
loc_822A37FC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a380c
	if (ctx.cr6.gt) goto loc_822A380C;
	// bl 0x822a2468
	ctx.lr = 0x822A3808;
	sub_822A2468(ctx, base);
	// b 0x822a3840
	goto loc_822A3840;
loc_822A380C:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a3840
	if (!ctx.cr6.eq) goto loc_822A3840;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3838
	if (ctx.cr6.eq) goto loc_822A3838;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a3840
	goto loc_822A3840;
loc_822A3838:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A3840;
	sub_8229E118(ctx, base);
loc_822A3840:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_822A37A8) {
	__imp__sub_822A37A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3878) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r10,r10,51201
	ctx.r10.u64 = ctx.r10.u64 | 51201;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// b 0x822a37a8
	sub_822A37A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3878) {
	__imp__sub_822A3878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3894) {
	__imp__sub_822A3894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3898) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r7,r10,51201
	ctx.r7.u64 = ctx.r10.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r6,r8,-7040
	ctx.r6.s64 = ctx.r8.s64 + -7040;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r10,r6,9
	ctx.r10.s64 = ctx.r6.s64 + 589824;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3898) {
	__imp__sub_822A3898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A38E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,-7040
	ctx.r7.s64 = ctx.r9.s64 + -7040;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r10,r7,9
	ctx.r10.s64 = ctx.r7.s64 + 589824;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A38E0) {
	__imp__sub_822A38E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3910) {
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
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7040
	ctx.r11.s64 = ctx.r9.s64 + -7040;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a39a0
	if (!ctx.cr6.lt) goto loc_822A39A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a395c
	if (!ctx.cr6.eq) goto loc_822A395C;
	// bl 0x822a90e8
	ctx.lr = 0x822A3958;
	sub_822A90E8(ctx, base);
	// b 0x822a39a0
	goto loc_822A39A0;
loc_822A395C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a396c
	if (ctx.cr6.gt) goto loc_822A396C;
	// bl 0x822a2468
	ctx.lr = 0x822A3968;
	sub_822A2468(ctx, base);
	// b 0x822a39a0
	goto loc_822A39A0;
loc_822A396C:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a39a0
	if (!ctx.cr6.eq) goto loc_822A39A0;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3998
	if (ctx.cr6.eq) goto loc_822A3998;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a39a0
	goto loc_822A39A0;
loc_822A3998:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A39A0;
	sub_8229E118(ctx, base);
loc_822A39A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822A3910) {
	__imp__sub_822A3910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A39C0) {
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
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r7,r8,51201
	ctx.r7.u64 = ctx.r8.u64 | 51201;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addis r9,r10,9
	ctx.r9.s64 = ctx.r10.s64 + 589824;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a3a24
	if (!ctx.cr6.eq) goto loc_822A3A24;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x822a3a48
	if (ctx.cr6.lt) goto loc_822A3A48;
loc_822A3A24:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,23856
	ctx.r3.s64 = ctx.r7.s64 + 23856;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A3A40;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A3A44;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A3A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A39C0) {
	__imp__sub_822A39C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3A58) {
	__imp__sub_822A3A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,30
	ctx.r9.s64 = ctx.r11.s64 + 30;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3A70) {
	__imp__sub_822A3A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a3ab8
	if (ctx.cr6.eq) goto loc_822A3AB8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
loc_822A3AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3A88) {
	__imp__sub_822A3A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r7,r10,18
	ctx.r7.s64 = ctx.r10.s64 + 18;
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rotlwi r5,r6,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// lhzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a3af4
	if (!ctx.cr6.eq) goto loc_822A3AF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822A3AF4:
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// ori r6,r8,51201
	ctx.r6.u64 = ctx.r8.u64 | 51201;
	// addis r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 589824;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r8,40
	ctx.r4.s64 = ctx.r8.s64 + 40;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,60923
	ctx.r6.u64 = ctx.r8.u64 | 60923;
	// lwzx r5,r9,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// ori r9,r7,51199
	ctx.r9.u64 = ctx.r7.u64 | 51199;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r10,r4,101
	ctx.r10.s64 = ctx.r4.s64 * 101;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhwu r8,r11,r6
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a2b20
	sub_822A2B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3AC0) {
	__imp__sub_822A3AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3B54) {
	__imp__sub_822A3B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3B58) {
	__imp__sub_822A3B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3B74) {
	__imp__sub_822A3B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3B78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,-7040
	ctx.r7.s64 = ctx.r9.s64 + -7040;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// rlwinm r3,r3,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3B78) {
	__imp__sub_822A3B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3BAC) {
	__imp__sub_822A3BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3BB0) {
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
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r30,r10,-7040
	ctx.r30.s64 = ctx.r10.s64 + -7040;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a3c18
	if (!ctx.cr6.eq) goto loc_822A3C18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822a2df0
	ctx.lr = 0x822A3BF4;
	sub_822A2DF0(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,116
	ctx.r8.s64 = 116;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_822A3C18:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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

PPC_WEAK_FUNC(sub_822A3BB0) {
	__imp__sub_822A3BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3C34) {
	__imp__sub_822A3C34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3C38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r10,r10,51201
	ctx.r10.u64 = ctx.r10.u64 | 51201;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// b 0x822a3bb0
	sub_822A3BB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3C38) {
	__imp__sub_822A3C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3C54) {
	__imp__sub_822A3C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3C58) {
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
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r9,51201
	ctx.r8.u64 = ctx.r9.u64 | 51201;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addis r10,r30,9
	ctx.r10.s64 = ctx.r30.s64 + 589824;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822a3cdc
	if (!ctx.cr6.eq) goto loc_822A3CDC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822a2df0
	ctx.lr = 0x822A3CB4;
	sub_822A2DF0(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_822A3CDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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

PPC_WEAK_FUNC(sub_822A3C58) {
	__imp__sub_822A3C58(ctx, base);
}

