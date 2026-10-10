#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82227CA0) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82227d28
	if (!ctx.cr6.eq) goto loc_82227D28;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lhz r8,154(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 154);
	// addi r10,r9,26552
	ctx.r10.s64 = ctx.r9.s64 + 26552;
	// mulli r9,r4,624
	ctx.r9.s64 = ctx.r4.s64 * 624;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82227d38
	if (ctx.cr6.eq) goto loc_82227D38;
	// lhz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227d38
	if (ctx.cr6.eq) goto loc_82227D38;
	// lhz r10,158(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 158);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82227d38
	if (ctx.cr6.eq) goto loc_82227D38;
	// lhz r10,114(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 114);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82227d38
	if (ctx.cr6.eq) goto loc_82227D38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// bl 0x822e84f0
	ctx.lr = 0x82227D20;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82227D24;
	sub_822AD548(ctx, base);
	// b 0x82227d38
	goto loc_82227D38;
loc_82227D28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82227D34;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82227D38:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82227d54
	if (!ctx.cr6.eq) goto loc_82227D54;
	// lhz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 156);
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227d60
	if (ctx.cr6.eq) goto loc_82227D60;
loc_82227D54:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// bl 0x822ad350
	ctx.lr = 0x82227D60;
	sub_822AD350(ctx, base);
loc_82227D60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82227D68;
	sub_82229BF0(ctx, base);
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82227d84
	if (!ctx.cr6.eq) goto loc_82227D84;
	// lhz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227d94
	if (!ctx.cr6.eq) goto loc_82227D94;
loc_82227D84:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-13908
	ctx.r4.s64 = ctx.r11.s64 + -13908;
	// bl 0x822ad4e0
	ctx.lr = 0x82227D94;
	sub_822AD4E0(ctx, base);
loc_82227D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340cf0
	ctx.lr = 0x82227D9C;
	sub_82340CF0(ctx, base);
	// lhz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r11.u8);
	// sth r10,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r10.u16);
	// lwz r30,204(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x8233cb28
	ctx.lr = 0x82227DB8;
	sub_8233CB28(ctx, base);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// bl 0x82340d30
	ctx.lr = 0x82227DCC;
	sub_82340D30(ctx, base);
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

PPC_WEAK_FUNC(sub_82227CA0) {
	__imp__sub_82227CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82227DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82227DE4) {
	__imp__sub_82227DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82227DE8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82227e70
	if (!ctx.cr6.eq) goto loc_82227E70;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lhz r8,154(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// addi r10,r9,26552
	ctx.r10.s64 = ctx.r9.s64 + 26552;
	// mulli r9,r4,624
	ctx.r9.s64 = ctx.r4.s64 * 624;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82227e80
	if (ctx.cr6.eq) goto loc_82227E80;
	// lhz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227e80
	if (ctx.cr6.eq) goto loc_82227E80;
	// lhz r9,158(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227e80
	if (ctx.cr6.eq) goto loc_82227E80;
	// lhz r10,114(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82227e80
	if (ctx.cr6.eq) goto loc_82227E80;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// bl 0x822e84f0
	ctx.lr = 0x82227E68;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82227E6C;
	sub_822AD548(ctx, base);
	// b 0x82227e80
	goto loc_82227E80;
loc_82227E70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82227E7C;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82227E80:
	// lhz r9,158(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// lhz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82227ea8
	if (!ctx.cr6.eq) goto loc_82227EA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-13816
	ctx.r4.s64 = ctx.r11.s64 + -13816;
	// bl 0x82280a68
	ctx.lr = 0x82227EA4;
	sub_82280A68(ctx, base);
	// b 0x82227edc
	goto loc_82227EDC;
loc_82227EA8:
	// lhz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227ecc
	if (ctx.cr6.eq) goto loc_82227ECC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// b 0x82227ed4
	goto loc_82227ED4;
loc_82227ECC:
	// li r11,8320
	ctx.r11.s64 = 8320;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
loc_82227ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340d30
	ctx.lr = 0x82227EDC;
	sub_82340D30(ctx, base);
loc_82227EDC:
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

PPC_WEAK_FUNC(sub_82227DE8) {
	__imp__sub_82227DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82227EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82227EF4) {
	__imp__sub_82227EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82227EF8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82227f80
	if (!ctx.cr6.eq) goto loc_82227F80;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lhz r8,154(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// addi r10,r9,26552
	ctx.r10.s64 = ctx.r9.s64 + 26552;
	// mulli r9,r4,624
	ctx.r9.s64 = ctx.r4.s64 * 624;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82227f90
	if (ctx.cr6.eq) goto loc_82227F90;
	// lhz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227f90
	if (ctx.cr6.eq) goto loc_82227F90;
	// lhz r9,158(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82227f90
	if (ctx.cr6.eq) goto loc_82227F90;
	// lhz r10,114(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82227f90
	if (ctx.cr6.eq) goto loc_82227F90;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// bl 0x822e84f0
	ctx.lr = 0x82227F78;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82227F7C;
	sub_822AD548(ctx, base);
	// b 0x82227f90
	goto loc_82227F90;
loc_82227F80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82227F8C;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82227F90:
	// lhz r9,158(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// lhz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82227fb8
	if (!ctx.cr6.eq) goto loc_82227FB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-13816
	ctx.r4.s64 = ctx.r11.s64 + -13816;
	// bl 0x82280a68
	ctx.lr = 0x82227FB4;
	sub_82280A68(ctx, base);
	// b 0x82227fe0
	goto loc_82227FE0;
loc_82227FB8:
	// lhz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r9.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82227fd8
	if (ctx.cr6.eq) goto loc_82227FD8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82227FD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340d30
	ctx.lr = 0x82227FE0;
	sub_82340D30(ctx, base);
loc_82227FE0:
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

PPC_WEAK_FUNC(sub_82227EF8) {
	__imp__sub_82227EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82227FF8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// bne cr6,0x82228054
	if (!ctx.cr6.eq) goto loc_82228054;
	// addi r11,r11,-15008
	ctx.r11.s64 = ctx.r11.s64 + -15008;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_82228024:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x82228030;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82228024
	if (!ctx.cr0.eq) goto loc_82228024;
loc_82228038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222803C:
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
loc_82228054:
	// addi r4,r11,-15008
	ctx.r4.s64 = ctx.r11.s64 + -15008;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82228068:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82228070:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x82228094
	if (ctx.cr6.eq) goto loc_82228094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82228070
	if (ctx.cr6.eq) goto loc_82228070;
loc_82228094:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822280b4
	if (ctx.cr6.eq) goto loc_822280B4;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,276
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 276, ctx.xer);
	// blt cr6,0x82228068
	if (ctx.cr6.lt) goto loc_82228068;
	// b 0x82228038
	goto loc_82228038;
loc_822280B4:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x8222803c
	goto loc_8222803C;
}

PPC_WEAK_FUNC(sub_82227FF8) {
	__imp__sub_82227FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822280D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822280D4) {
	__imp__sub_822280D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822280D8) {
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
	// li r31,48
	ctx.r31.s64 = 48;
	// li r30,32
	ctx.r30.s64 = 32;
loc_822280F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x8233e7d8
	ctx.lr = 0x82228100;
	sub_8233E7D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222810C;
	sub_8233E7D8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x822280f4
	if (!ctx.cr0.eq) goto loc_822280F4;
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

PPC_WEAK_FUNC(sub_822280D8) {
	__imp__sub_822280D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228130) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822281a8
	if (ctx.cr6.eq) goto loc_822281A8;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822281a8
	if (ctx.cr6.eq) goto loc_822281A8;
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228178
	if (!ctx.cr6.eq) goto loc_82228178;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-13356
	ctx.r3.s64 = ctx.r11.s64 + -13356;
	// bl 0x822e84f0
	ctx.lr = 0x82228174;
	sub_822E84F0(ctx, base);
	// b 0x822281b4
	goto loc_822281B4;
loc_82228178:
	// lhz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82228194
	if (!ctx.cr6.eq) goto loc_82228194;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// bl 0x822e84f0
	ctx.lr = 0x82228190;
	sub_822E84F0(ctx, base);
	// b 0x822281b4
	goto loc_822281B4;
loc_82228194:
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
loc_822281A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// bl 0x822e84f0
	ctx.lr = 0x822281B4;
	sub_822E84F0(ctx, base);
loc_822281B4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x822281C0;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82228130) {
	__imp__sub_82228130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822281D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822281D4) {
	__imp__sub_822281D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822281D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,58(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228200
	if (!ctx.cr6.eq) goto loc_82228200;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82228200:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222821c
	if (!ctx.cr6.eq) goto loc_8222821C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8222821C:
	// lhz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228238
	if (!ctx.cr6.eq) goto loc_82228238;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82228238:
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228254
	if (!ctx.cr6.eq) goto loc_82228254;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82228254:
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82228270
	if (!ctx.cr6.eq) goto loc_82228270;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82228270:
	// lhz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222828c
	if (!ctx.cr6.eq) goto loc_8222828C;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8222828C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822281D8) {
	__imp__sub_822281D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222829C) {
	__imp__sub_8222829C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822282A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822282A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b2288
	ctx.lr = 0x822282B8;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228340
	if (ctx.cr6.eq) goto loc_82228340;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-13272
	ctx.r29.s64 = ctx.r11.s64 + -13272;
loc_822282D4:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// ble cr6,0x822282ec
	if (!ctx.cr6.gt) goto loc_822282EC;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x82228308
	if (ctx.cr6.lt) goto loc_82228308;
loc_822282EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822e84f0
	ctx.lr = 0x822282FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x82228308;
	sub_822AD4E0(ctx, base);
loc_82228308:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822282d4
	if (!ctx.cr6.eq) goto loc_822282D4;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82228340
	if (ctx.cr6.lt) goto loc_82228340;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-13316
	ctx.r3.s64 = ctx.r11.s64 + -13316;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x822e84f0
	ctx.lr = 0x82228334;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x82228340;
	sub_822AD4E0(ctx, base);
loc_82228340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e138
	ctx.lr = 0x82228348;
	sub_8222E138(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x82228358;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27960
	ctx.r4.s64 = ctx.r10.s64 + -27960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8c20
	ctx.lr = 0x8222836C;
	sub_822E8C20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822282A0) {
	__imp__sub_822282A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228374) {
	__imp__sub_82228374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82228380;
	__savegprlr_24(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82228388;
	sub_822ACB68(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x822283a0
	if (!ctx.cr6.lt) goto loc_822283A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// bl 0x822ad350
	ctx.lr = 0x822283A0;
	sub_822AD350(ctx, base);
loc_822283A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822283A8;
	sub_822B1C50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822283bc
	if (ctx.cr6.lt) goto loc_822283BC;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822283d4
	if (ctx.cr6.lt) goto loc_822283D4;
loc_822283BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822283D0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822283D4;
	sub_822AD350(ctx, base);
loc_822283D4:
	// addi r26,r27,16
	ctx.r26.s64 = ctx.r27.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233dd38
	ctx.lr = 0x822283E8;
	sub_8233DD38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x822283F0;
	sub_822B20B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822281d8
	ctx.lr = 0x82228400;
	sub_822281D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82228424
	if (!ctx.cr6.eq) goto loc_82228424;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82228410;
	sub_822B2288(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// bl 0x822e84f0
	ctx.lr = 0x82228420;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228424;
	sub_822AD350(ctx, base);
loc_82228424:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x82228434;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27920
	ctx.r4.s64 = ctx.r10.s64 + -27920;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x82228448;
	sub_822E8C20(ctx, base);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// ble cr6,0x822286c4
	if (!ctx.cr6.gt) goto loc_822286C4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b28d0
	ctx.lr = 0x82228458;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// bne cr6,0x822284f0
	if (!ctx.cr6.eq) goto loc_822284F0;
	// bl 0x822b2470
	ctx.lr = 0x82228468;
	sub_822B2470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82228470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82228470
	if (!ctx.cr6.eq) goto loc_82228470;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x82228588
	if (!ctx.cr6.gt) goto loc_82228588;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82228588
	if (!ctx.cr6.gt) goto loc_82228588;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-12952
	ctx.r28.s64 = ctx.r11.s64 + -12952;
loc_822284A8:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa00
	ctx.lr = 0x822284B4;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822284e0
	if (!ctx.cr6.eq) goto loc_822284E0;
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x822284e0
	if (ctx.cr6.eq) goto loc_822284E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822284D4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x822284E0;
	sub_822AD4E0(ctx, base);
loc_822284E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822284a8
	if (ctx.cr6.lt) goto loc_822284A8;
	// b 0x82228588
	goto loc_82228588;
loc_822284F0:
	// bl 0x822b2288
	ctx.lr = 0x822284F4;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822284FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822284fc
	if (!ctx.cr6.eq) goto loc_822284FC;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r11,-12972
	ctx.r30.s64 = ctx.r11.s64 + -12972;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8221ec60
	ctx.lr = 0x82228534;
	sub_8221EC60(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82228588
	if (!ctx.cr6.eq) goto loc_82228588;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r8,r1,1136
	ctx.r8.s64 = ctx.r1.s64 + 1136;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8221ed68
	ctx.lr = 0x8222855C;
	sub_8221ED68(ctx, base);
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82228574;
	sub_823DE1F0(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r10,r1,1136
	ctx.r10.s64 = ctx.r1.s64 + 1136;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r1,1136
	ctx.r31.s64 = ctx.r1.s64 + 1136;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_82228588:
	// cmpwi cr6,r29,1024
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1024, ctx.xer);
	// blt cr6,0x822285a8
	if (ctx.cr6.lt) goto loc_822285A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x822e84f0
	ctx.lr = 0x822285A4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822285A8;
	sub_822AD350(ctx, base);
loc_822285A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8bb8
	ctx.lr = 0x822285B0;
	sub_822E8BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822285cc
	if (ctx.cr6.eq) goto loc_822285CC;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb30
	ctx.lr = 0x822285C4;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822285e0
	if (ctx.cr6.eq) goto loc_822285E0;
loc_822285CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// bl 0x822e84f0
	ctx.lr = 0x822285DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822285E0;
	sub_822AD350(ctx, base);
loc_822285E0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82228634
	if (!ctx.cr6.gt) goto loc_82228634;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-13164
	ctx.r28.s64 = ctx.r11.s64 + -13164;
loc_822285F4:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222860c
	if (ctx.cr6.lt) goto loc_8222860C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// ble cr6,0x82228614
	if (!ctx.cr6.gt) goto loc_82228614;
loc_8222860C:
	// cmplwi cr6,r5,127
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 127, ctx.xer);
	// blt cr6,0x82228628
	if (ctx.cr6.lt) goto loc_82228628;
loc_82228614:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x822e84f0
	ctx.lr = 0x82228624;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228628;
	sub_822AD350(ctx, base);
loc_82228628:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822285f4
	if (ctx.cr6.lt) goto loc_822285F4;
loc_82228634:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x82228648;
	sub_822E8C20(ctx, base);
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// ble cr6,0x822286cc
	if (!ctx.cr6.gt) goto loc_822286CC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x8222865C;
	sub_822B2498(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x82228698;
	sub_822E84F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-13184
	ctx.r4.s64 = ctx.r10.s64 + -13184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x822286AC;
	sub_822E8C20(ctx, base);
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// ble cr6,0x822286cc
	if (!ctx.cr6.gt) goto loc_822286CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822282a0
	ctx.lr = 0x822286C0;
	sub_822282A0(ctx, base);
	// b 0x822286cc
	goto loc_822286CC;
loc_822286C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,-13208
	ctx.r31.s64 = ctx.r11.s64 + -13208;
loc_822286CC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x822286D8;
	sub_8233E7D8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// bl 0x822e84f0
	ctx.lr = 0x822286E8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x822286F4;
	sub_8233CAE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82228130
	ctx.lr = 0x82228700;
	sub_82228130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// bl 0x8233e7d8
	ctx.lr = 0x8222870C;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82228378) {
	__imp__sub_82228378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228714) {
	__imp__sub_82228714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228718) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82228730;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228744
	if (ctx.cr6.lt) goto loc_82228744;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x8222875c
	if (ctx.cr6.lt) goto loc_8222875C;
loc_82228744:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228758;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222875C;
	sub_822AD350(ctx, base);
loc_8222875C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8233e7d8
	ctx.lr = 0x82228770;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82228718) {
	__imp__sub_82228718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228784) {
	__imp__sub_82228784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822287A0;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822287b4
	if (ctx.cr6.lt) goto loc_822287B4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822287d4
	if (ctx.cr6.lt) goto loc_822287D4;
loc_822287B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822287C8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822287D4;
	sub_822AD4E0(ctx, base);
loc_822287D4:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x822287E8;
	sub_8233DD38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x822287F0;
	sub_82229BF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// lhz r11,126(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822e84f0
	ctx.lr = 0x82228808;
	sub_822E84F0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-27976
	ctx.r4.s64 = ctx.r9.s64 + -27976;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222881C;
	sub_822E8C20(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82228820;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82228838
	if (!ctx.cr6.gt) goto loc_82228838;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82228834;
	sub_822B2498(ctx, base);
	// b 0x8222884c
	goto loc_8222884C;
loc_82228838:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8222884C:
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8222887C;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27988
	ctx.r4.s64 = ctx.r10.s64 + -27988;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x82228890;
	sub_822E8C20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222889C;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82228788) {
	__imp__sub_82228788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822288B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822288B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822288C8;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822288dc
	if (ctx.cr6.lt) goto loc_822288DC;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822288f4
	if (ctx.cr6.lt) goto loc_822288F4;
loc_822288DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822288F0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822288F4;
	sub_822AD350(ctx, base);
loc_822288F4:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x82228908;
	sub_8233DD38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x82228910;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822281d8
	ctx.lr = 0x82228920;
	sub_822281D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82228944
	if (!ctx.cr6.eq) goto loc_82228944;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82228930;
	sub_822B2288(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// bl 0x822e84f0
	ctx.lr = 0x82228940;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228944;
	sub_822AD350(ctx, base);
loc_82228944:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x82228954;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27920
	ctx.r4.s64 = ctx.r10.s64 + -27920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x82228968;
	sub_822E8C20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228974;
	sub_8233E7D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8222898c
	if (ctx.cr6.eq) goto loc_8222898C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13208
	ctx.r4.s64 = ctx.r11.s64 + -13208;
	// bl 0x82228130
	ctx.lr = 0x8222898C;
	sub_82228130(ctx, base);
loc_8222898C:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822288B0) {
	__imp__sub_822288B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228994) {
	__imp__sub_82228994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228998) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822288b0
	sub_822288B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82228998) {
	__imp__sub_82228998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822289A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822288b0
	sub_822288B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822289A0) {
	__imp__sub_822289A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822289A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822289B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-12972
	ctx.r5.s64 = ctx.r11.s64 + -12972;
	// bl 0x8221ee40
	ctx.lr = 0x822289CC;
	sub_8221EE40(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822289D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822289d0
	if (!ctx.cr6.eq) goto loc_822289D0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e8bb8
	ctx.lr = 0x822289F4;
	sub_822E8BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82228a10
	if (ctx.cr6.eq) goto loc_82228A10;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb30
	ctx.lr = 0x82228A08;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228a24
	if (ctx.cr6.eq) goto loc_82228A24;
loc_82228A10:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// bl 0x822e84f0
	ctx.lr = 0x82228A20;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228A24;
	sub_822AD350(ctx, base);
loc_82228A24:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82228a88
	if (!ctx.cr6.gt) goto loc_82228A88;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-13164
	ctx.r29.s64 = ctx.r11.s64 + -13164;
loc_82228A38:
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82228a60
	if (ctx.cr6.lt) goto loc_82228A60;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x82228a60
	if (ctx.cr6.gt) goto loc_82228A60;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x82228a60
	if (ctx.cr6.eq) goto loc_82228A60;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82228a68
	if (!ctx.cr6.eq) goto loc_82228A68;
loc_82228A60:
	// cmplwi cr6,r5,127
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 127, ctx.xer);
	// blt cr6,0x82228a7c
	if (ctx.cr6.lt) goto loc_82228A7C;
loc_82228A68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x822e84f0
	ctx.lr = 0x82228A78;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228A7C;
	sub_822AD350(ctx, base);
loc_82228A7C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82228a38
	if (ctx.cr6.lt) goto loc_82228A38;
loc_82228A88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822289A8) {
	__imp__sub_822289A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228A90) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82228AB0;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228ac4
	if (ctx.cr6.lt) goto loc_82228AC4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x82228adc
	if (ctx.cr6.lt) goto loc_82228ADC;
loc_82228AC4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228AD8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228ADC;
	sub_822AD350(ctx, base);
loc_82228ADC:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x82228AF0;
	sub_8233DD38(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82228AF4;
	sub_822ACB68(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// bl 0x822289a8
	ctx.lr = 0x82228B08;
	sub_822289A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x82228B1C;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228B28;
	sub_8233E7D8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27920
	ctx.r4.s64 = ctx.r10.s64 + -27920;
	// bl 0x822e8678
	ctx.lr = 0x82228B38;
	sub_822E8678(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82228b4c
	if (!ctx.cr6.eq) goto loc_82228B4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82228b58
	goto loc_82228B58;
loc_82228B4C:
	// bl 0x823deaf8
	ctx.lr = 0x82228B50;
	sub_823DEAF8(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x82228bcc
	if (ctx.cr6.gt) goto loc_82228BCC;
loc_82228B58:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82228b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82228B88;
	// bdzf 4*cr6+eq,0x82228b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82228B90;
	// bdzf 4*cr6+eq,0x82228b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82228B98;
	// bdzf 4*cr6+eq,0x82228ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82228BA0;
	// bne cr6,0x82228ba8
	if (!ctx.cr6.eq) goto loc_82228BA8;
	// lhz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// b 0x82228bac
	goto loc_82228BAC;
loc_82228B88:
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// b 0x82228bac
	goto loc_82228BAC;
loc_82228B90:
	// lhz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// b 0x82228bac
	goto loc_82228BAC;
loc_82228B98:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82228bac
	goto loc_82228BAC;
loc_82228BA0:
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// b 0x82228bac
	goto loc_82228BAC;
loc_82228BA8:
	// lhz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
loc_82228BAC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82228bcc
	if (ctx.cr6.eq) goto loc_82228BCC;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82228bcc
	if (ctx.cr6.eq) goto loc_82228BCC;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// bl 0x82228130
	ctx.lr = 0x82228BCC;
	sub_82228130(ctx, base);
loc_82228BCC:
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

PPC_WEAK_FUNC(sub_82228A90) {
	__imp__sub_82228A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228BE4) {
	__imp__sub_82228BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228BE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82228a90
	sub_82228A90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82228BE8) {
	__imp__sub_82228BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228BF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82228a90
	sub_82228A90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82228BF0) {
	__imp__sub_82228BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228BF8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82228C10;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228c24
	if (ctx.cr6.lt) goto loc_82228C24;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x82228c44
	if (ctx.cr6.lt) goto loc_82228C44;
loc_82228C24:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228C38;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82228C44;
	sub_822AD4E0(ctx, base);
loc_82228C44:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x82228C58;
	sub_8233DD38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822282a0
	ctx.lr = 0x82228C64;
	sub_822282A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228C70;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82228BF8) {
	__imp__sub_82228BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228C84) {
	__imp__sub_82228C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82228CA0;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228cb4
	if (ctx.cr6.lt) goto loc_82228CB4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x82228ccc
	if (ctx.cr6.lt) goto loc_82228CCC;
loc_82228CB4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228CC8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228CCC;
	sub_822AD350(ctx, base);
loc_82228CCC:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8233dd38
	ctx.lr = 0x82228CE0;
	sub_8233DD38(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82228CEC;
	sub_822B2498(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x82228D28;
	sub_822E84F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-13184
	ctx.r4.s64 = ctx.r10.s64 + -13184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x82228D3C;
	sub_822E8C20(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,13712
	ctx.r3.s64 = ctx.r9.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x82228D4C;
	sub_822E84F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-27976
	ctx.r4.s64 = ctx.r8.s64 + -27976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x82228D60;
	sub_822E8C20(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-12544
	ctx.r3.s64 = ctx.r7.s64 + -12544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e84f0
	ctx.lr = 0x82228D78;
	sub_822E84F0(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r6,-27988
	ctx.r4.s64 = ctx.r6.s64 + -27988;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8c20
	ctx.lr = 0x82228D8C;
	sub_822E8C20(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228D98;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82228C88) {
	__imp__sub_82228C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82228DAC) {
	__imp__sub_82228DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228DB0) {
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
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82228DCC;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228de0
	if (ctx.cr6.lt) goto loc_82228DE0;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x82228df8
	if (ctx.cr6.lt) goto loc_82228DF8;
loc_82228DE0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228DF4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228DF8;
	sub_822AD350(ctx, base);
loc_82228DF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x82228E00;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228e14
	if (ctx.cr6.lt) goto loc_82228E14;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x82228e2c
	if (ctx.cr6.lt) goto loc_82228E2C;
loc_82228E14:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228E28;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228E2C;
	sub_822AD350(ctx, base);
loc_82228E2C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8233dd38
	ctx.lr = 0x82228E40;
	sub_8233DD38(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82228E4C;
	sub_822B2498(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27944
	ctx.r4.s64 = ctx.r11.s64 + -27944;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823df2b0
	ctx.lr = 0x82228E60;
	sub_823DF2B0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r10,-13176
	ctx.r3.s64 = ctx.r10.s64 + -13176;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x82228E9C;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e8c20
	ctx.lr = 0x82228EAC;
	sub_822E8C20(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228EB8;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
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

PPC_WEAK_FUNC(sub_82228DB0) {
	__imp__sub_82228DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82228ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82228ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82228EE4;
	sub_822ACB68(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82228EF8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82228ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228EF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82228f60
	if (!ctx.cr6.gt) goto loc_82228F60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r11,-12736
	ctx.r27.s64 = ctx.r11.s64 + -12736;
loc_82228F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1c50
	ctx.lr = 0x82228F20;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82228f34
	if (ctx.cr6.lt) goto loc_82228F34;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x82228f48
	if (ctx.cr6.lt) goto loc_82228F48;
loc_82228F34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228F44;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82228F48;
	sub_822AD350(ctx, base);
loc_82228F48:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// blt cr6,0x82228f18
	if (ctx.cr6.lt) goto loc_82228F18;
loc_82228F60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r29,r11,13712
	ctx.r29.s64 = ctx.r11.s64 + 13712;
	// addi r30,r10,-27920
	ctx.r30.s64 = ctx.r10.s64 + -27920;
loc_82228F7C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x82228F8C;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e8678
	ctx.lr = 0x82228F98;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82228fac
	if (!ctx.cr6.eq) goto loc_82228FAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82228fb0
	goto loc_82228FB0;
loc_82228FAC:
	// bl 0x823deaf8
	ctx.lr = 0x82228FB0;
	sub_823DEAF8(ctx, base);
loc_82228FB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82228fcc
	if (ctx.cr6.eq) goto loc_82228FCC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82228ffc
	if (ctx.cr6.eq) goto loc_82228FFC;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82228fd8
	goto loc_82228FD8;
loc_82228FCC:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82228ffc
	if (!ctx.cr6.eq) goto loc_82228FFC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82228FD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82228FE0;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e8c20
	ctx.lr = 0x82228FF0;
	sub_822E8C20(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82228FFC;
	sub_8233E7D8(ctx, base);
loc_82228FFC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82228f7c
	if (!ctx.cr0.eq) goto loc_82228F7C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8222902c
	if (ctx.cr6.eq) goto loc_8222902C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// addi r4,r10,-13208
	ctx.r4.s64 = ctx.r10.s64 + -13208;
	// lhz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// bl 0x82228130
	ctx.lr = 0x8222902C;
	sub_82228130(ctx, base);
loc_8222902C:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82228ED0) {
	__imp__sub_82228ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229034) {
	__imp__sub_82229034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229038) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82228ed0
	sub_82228ED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229038) {
	__imp__sub_82229038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229040) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82228ed0
	sub_82228ED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229040) {
	__imp__sub_82229040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82229050;
	__savegprlr_27(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82229058;
	sub_822ACB68(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222906C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8222906c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222906C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822290d4
	if (!ctx.cr6.gt) goto loc_822290D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r11,-12736
	ctx.r27.s64 = ctx.r11.s64 + -12736;
loc_8222908C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1c50
	ctx.lr = 0x82229094;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822290a8
	if (ctx.cr6.lt) goto loc_822290A8;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822290bc
	if (ctx.cr6.lt) goto loc_822290BC;
loc_822290A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822290B8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822290BC;
	sub_822AD350(ctx, base);
loc_822290BC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// blt cr6,0x8222908c
	if (ctx.cr6.lt) goto loc_8222908C;
loc_822290D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r29,32
	ctx.r29.s64 = 32;
	// addi r27,r11,13712
	ctx.r27.s64 = ctx.r11.s64 + 13712;
	// addi r30,r10,-27920
	ctx.r30.s64 = ctx.r10.s64 + -27920;
loc_822290F0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x82229100;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e8678
	ctx.lr = 0x8222910C;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229120
	if (!ctx.cr6.eq) goto loc_82229120;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82229124
	goto loc_82229124;
loc_82229120:
	// bl 0x823deaf8
	ctx.lr = 0x82229124;
	sub_823DEAF8(ctx, base);
loc_82229124:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82229160
	if (ctx.cr6.eq) goto loc_82229160;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82229160
	if (ctx.cr6.eq) goto loc_82229160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e84f0
	ctx.lr = 0x82229144;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e8c20
	ctx.lr = 0x82229154;
	sub_822E8C20(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82229160;
	sub_8233E7D8(ctx, base);
loc_82229160:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x822290f0
	if (!ctx.cr0.eq) goto loc_822290F0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// addi r4,r10,-13208
	ctx.r4.s64 = ctx.r10.s64 + -13208;
	// lhz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// bl 0x82228130
	ctx.lr = 0x82229188;
	sub_82228130(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229048) {
	__imp__sub_82229048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229190) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822291AC;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822291c0
	if (ctx.cr6.lt) goto loc_822291C0;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822291d8
	if (ctx.cr6.lt) goto loc_822291D8;
loc_822291C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822291D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822291D8;
	sub_822AD350(ctx, base);
loc_822291D8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x822291EC;
	sub_8233DD38(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-27952
	ctx.r30.s64 = ctx.r11.s64 + -27952;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e8678
	ctx.lr = 0x82229200;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229214
	if (!ctx.cr6.eq) goto loc_82229214;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82229218
	goto loc_82229218;
loc_82229214:
	// bl 0x823deaf8
	ctx.lr = 0x82229218;
	sub_823DEAF8(ctx, base);
loc_82229218:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r10,13712
	ctx.r3.s64 = ctx.r10.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8222922C;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222923C;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82229248;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_82229190) {
	__imp__sub_82229190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229260) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82229278;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8222928c
	if (ctx.cr6.lt) goto loc_8222928C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x822292a4
	if (ctx.cr6.lt) goto loc_822292A4;
loc_8222928C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822292A0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822292A4;
	sub_822AD350(ctx, base);
loc_822292A4:
	// bl 0x822acb68
	ctx.lr = 0x822292A8;
	sub_822ACB68(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x822289a8
	ctx.lr = 0x822292BC;
	sub_822289A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8233e7d8
	ctx.lr = 0x822292C8;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82229260) {
	__imp__sub_82229260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822292DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822292DC) {
	__imp__sub_822292DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822292E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// bne cr6,0x8222933c
	if (!ctx.cr6.eq) goto loc_8222933C;
	// addi r11,r11,13280
	ctx.r11.s64 = ctx.r11.s64 + 13280;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_8222930C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x82229318;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8222930c
	if (!ctx.cr0.eq) goto loc_8222930C;
loc_82229320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229324:
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
loc_8222933C:
	// addi r5,r11,13280
	ctx.r5.s64 = ctx.r11.s64 + 13280;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82229350:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82229358:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// beq cr6,0x8222937c
	if (ctx.cr6.eq) goto loc_8222937C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82229358
	if (ctx.cr6.eq) goto loc_82229358;
loc_8222937C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222939c
	if (ctx.cr6.eq) goto loc_8222939C;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,180
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 180, ctx.xer);
	// blt cr6,0x82229350
	if (ctx.cr6.lt) goto loc_82229350;
	// b 0x82229320
	goto loc_82229320;
loc_8222939C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82229324
	goto loc_82229324;
}

PPC_WEAK_FUNC(sub_822292E0) {
	__imp__sub_822292E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822293C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x821f9fd8
	sub_821F9FD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822293C8) {
	__imp__sub_822293C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822293E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822293E4) {
	__imp__sub_822293E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822293E8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222941C;
	sub_821F9FD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x82229428;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_822293E8) {
	__imp__sub_822293E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222944C) {
	__imp__sub_8222944C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229450) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x82229484;
	sub_821F9FD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823deaf8
	ctx.lr = 0x82229490;
	sub_823DEAF8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_82229450) {
	__imp__sub_82229450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822294B0) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x822294E4;
	sub_821F9FD8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r4,r9,-27936
	ctx.r4.s64 = ctx.r9.s64 + -27936;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x82229518;
	sub_823DEEB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_822294B0) {
	__imp__sub_822294B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229534) {
	__imp__sub_82229534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229538) {
	__imp__sub_82229538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229544) {
	__imp__sub_82229544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229548) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8222957c
	if (ctx.cr6.eq) goto loc_8222957C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8222957c
	if (ctx.cr6.eq) goto loc_8222957C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// bl 0x822ad350
	ctx.lr = 0x8222957C;
	sub_822AD350(ctx, base);
loc_8222957C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82229584;
	sub_822B1C50(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82229548) {
	__imp__sub_82229548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222959C) {
	__imp__sub_8222959C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822295A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x822295bc
	if (ctx.cr6.eq) goto loc_822295BC;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x822295bc
	if (ctx.cr6.eq) goto loc_822295BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822acbf8
	sub_822ACBF8(ctx, base);
	return;
loc_822295BC:
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// b 0x822acbf8
	sub_822ACBF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822295A0) {
	__imp__sub_822295A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822295C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822295C4) {
	__imp__sub_822295C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822295C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822a47f0
	ctx.lr = 0x822295E8;
	sub_822A47F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229688
	if (ctx.cr6.eq) goto loc_82229688;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82229684
	if (ctx.cr6.gt) goto loc_82229684;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82229684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82229684;
	// bdzf 4*cr6+eq,0x8222964c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222964C;
	// bdzf 4*cr6+eq,0x82229628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82229628;
	// bne cr6,0x8222963c
	if (!ctx.cr6.eq) goto loc_8222963C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aced0
	ctx.lr = 0x82229624;
	sub_822ACED0(ctx, base);
	// b 0x82229684
	goto loc_82229684;
loc_82229628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x82229630;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82229638;
	sub_822ACC78(ctx, base);
	// b 0x82229684
	goto loc_82229684;
loc_8222963C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82229644;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82229648;
	sub_822ACBF8(ctx, base);
	// b 0x82229684
	goto loc_82229684;
loc_8222964C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x8222967C;
	sub_823DEEB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ad078
	ctx.lr = 0x82229684;
	sub_822AD078(ctx, base);
loc_82229684:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82229688:
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

PPC_WEAK_FUNC(sub_822295C8) {
	__imp__sub_822295C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822296A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822296A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// lwz r3,7832(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7832);
	// bl 0x822b19e8
	ctx.lr = 0x822296C0;
	sub_822B19E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2788
	ctx.lr = 0x822296C8;
	sub_822B2788(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222971c
	if (!ctx.cr6.gt) goto loc_8222971C;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
loc_822296E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822295c8
	ctx.lr = 0x822296F4;
	sub_822295C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229708
	if (ctx.cr6.eq) goto loc_82229708;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ad6b0
	ctx.lr = 0x82229708;
	sub_822AD6B0(ctx, base);
loc_82229708:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822296e8
	if (ctx.cr6.lt) goto loc_822296E8;
loc_8222971C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822296A0) {
	__imp__sub_822296A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229724) {
	__imp__sub_82229724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82229730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229858
	if (ctx.cr6.eq) goto loc_82229858;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-11364
	ctx.r28.s64 = ctx.r11.s64 + -11364;
loc_8222975C:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// bgt cr6,0x8222983c
	if (ctx.cr6.gt) goto loc_8222983C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26752
	ctx.r12.s64 = ctx.r12.s64 + -26752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_822297FC;
	case 1:
		goto loc_8222980C;
	case 2:
		goto loc_8222981C;
	case 3:
		goto loc_8222982C;
	case 4:
		goto loc_822297C0;
	case 5:
		goto loc_8222983C;
	case 6:
		goto loc_822297D4;
	case 7:
		goto loc_82229848;
	case 8:
		goto loc_82229848;
	case 9:
		goto loc_8222983C;
	case 10:
		goto loc_8222983C;
	case 11:
		goto loc_8222983C;
	case 12:
		goto loc_8222983C;
	case 13:
		goto loc_8222983C;
	case 14:
		goto loc_8222983C;
	case 15:
		goto loc_8222980C;
	default:
		return;
	}
	// lwz r17,-26628(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26628);
	// lwz r17,-26612(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26612);
	// lwz r17,-26596(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26596);
	// lwz r17,-26580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26580);
	// lwz r17,-26688(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26688);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26668(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26668);
	// lwz r17,-26552(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26552);
	// lwz r17,-26552(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26552);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26564(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26564);
	// lwz r17,-26612(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26612);
loc_822297C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822a24e0
	ctx.lr = 0x822297D0;
	sub_822A24E0(ctx, base);
	// b 0x82229848
	goto loc_82229848;
loc_822297D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x82229848
	goto loc_82229848;
loc_822297FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82229848
	goto loc_82229848;
loc_8222980C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sthx r10,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u16);
	// b 0x82229848
	goto loc_82229848;
loc_8222981C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// b 0x82229848
	goto loc_82229848;
loc_8222982C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// b 0x82229848
	goto loc_82229848;
loc_8222983C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82229848;
	sub_82280B08(ctx, base);
loc_82229848:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222975c
	if (!ctx.cr6.eq) goto loc_8222975C;
loc_82229858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229728) {
	__imp__sub_82229728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229860) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r3,126(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// b 0x822a8ee0
	sub_822A8EE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229860) {
	__imp__sub_82229860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229874) {
	__imp__sub_82229874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229878) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-11308
	ctx.r4.s64 = ctx.r11.s64 + -11308;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e01e0
	ctx.lr = 0x8222989C;
	sub_823E01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822298dc
	if (!ctx.cr6.eq) goto loc_822298DC;
	// addi r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 7;
	// bl 0x82232100
	ctx.lr = 0x822298AC;
	sub_82232100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822298dc
	if (ctx.cr6.eq) goto loc_822298DC;
	// bl 0x82332af8
	ctx.lr = 0x822298BC;
	sub_82332AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f478
	ctx.lr = 0x822298C8;
	sub_8231F478(ctx, base);
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
loc_822298DC:
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

PPC_WEAK_FUNC(sub_82229878) {
	__imp__sub_82229878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822298F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822298F4) {
	__imp__sub_822298F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822298F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82229900;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82229944
	if (!ctx.cr6.gt) goto loc_82229944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82229920:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822ea1c0
	ctx.lr = 0x8222992C;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229950
	if (!ctx.cr6.eq) goto loc_82229950;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82229920
	if (ctx.cr6.lt) goto loc_82229920;
loc_82229944:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82229950:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822298F8) {
	__imp__sub_822298F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82229968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,294(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 294);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82229998
	if (!ctx.cr6.eq) goto loc_82229998;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-11216
	ctx.r4.s64 = ctx.r11.s64 + -11216;
	// bl 0x82280900
	ctx.lr = 0x8222998C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82229998:
	// bl 0x822a13a0
	ctx.lr = 0x8222999C;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822ea248
	ctx.lr = 0x822299A4;
	sub_822EA248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822299c8
	if (ctx.cr6.eq) goto loc_822299C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-11264
	ctx.r4.s64 = ctx.r11.s64 + -11264;
	// bl 0x82280900
	ctx.lr = 0x822299BC;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822299C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229878
	ctx.lr = 0x822299D0;
	sub_82229878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82229a00
	if (ctx.cr6.eq) goto loc_82229A00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fa060
	ctx.lr = 0x822299E4;
	sub_821FA060(ctx, base);
	// sth r3,292(r27)
	PPC_STORE_U16(ctx.r27.u32 + 292, ctx.r3.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f8930
	ctx.lr = 0x822299F4;
	sub_821F8930(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82229A00:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-11512
	ctx.r29.s64 = ctx.r11.s64 + -11512;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82229A10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ea1c0
	ctx.lr = 0x82229A1C;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82229a3c
	if (!ctx.cr6.eq) goto loc_82229A3C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82229a10
	if (ctx.cr6.lt) goto loc_82229A10;
	// b 0x82229a4c
	goto loc_82229A4C;
loc_82229A3C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82229a6c
	if (!ctx.cr6.eq) goto loc_82229A6C;
loc_82229A4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-11300
	ctx.r4.s64 = ctx.r11.s64 + -11300;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x82229A60;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82229A6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821fa060
	ctx.lr = 0x82229A74;
	sub_821FA060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,292(r27)
	PPC_STORE_U16(ctx.r27.u32 + 292, ctx.r11.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82229A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229960) {
	__imp__sub_82229960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82229AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-12000
	ctx.r30.s64 = ctx.r11.s64 + -12000;
	// lwz r4,-12000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12000);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82229ae0
	if (ctx.cr6.eq) goto loc_82229AE0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,20
	ctx.r29.s64 = 20;
loc_82229AC0:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822a8a78
	ctx.lr = 0x82229AD0;
	sub_822A8A78(ctx, base);
	// lwzu r4,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82229ac0
	if (!ctx.cr6.eq) goto loc_82229AC0;
loc_82229AE0:
	// bl 0x821c1948
	ctx.lr = 0x82229AE4;
	sub_821C1948(ctx, base);
	// bl 0x82240d20
	ctx.lr = 0x82229AE8;
	sub_82240D20(ctx, base);
	// bl 0x821e76f0
	ctx.lr = 0x82229AEC;
	sub_821E76F0(ctx, base);
	// bl 0x82355340
	ctx.lr = 0x82229AF0;
	sub_82355340(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229A98) {
	__imp__sub_82229A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-11172
	ctx.r4.s64 = ctx.r11.s64 + -11172;
	// addi r3,r10,-11180
	ctx.r3.s64 = ctx.r10.s64 + -11180;
	// b 0x822a4c20
	sub_822A4C20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229AF8) {
	__imp__sub_82229AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229B0C) {
	__imp__sub_82229B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B10) {
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
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229b34
	if (ctx.cr6.eq) goto loc_82229B34;
	// bl 0x822085b8
	ctx.lr = 0x82229B34;
	sub_822085B8(ctx, base);
loc_82229B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822085c8
	ctx.lr = 0x82229B3C;
	sub_822085C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822a88e0
	ctx.lr = 0x82229B48;
	sub_822A88E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82229B10) {
	__imp__sub_82229B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229B5C) {
	__imp__sub_82229B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B60) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822ace70
	sub_822ACE70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229B60) {
	__imp__sub_82229B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229B6C) {
	__imp__sub_82229B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229B70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82229B8C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82229bd4
	if (ctx.cr6.eq) goto loc_82229BD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2678
	ctx.lr = 0x82229B9C;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229bd4
	if (!ctx.cr6.eq) goto loc_82229BD4;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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
loc_82229BD4:
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
}

PPC_WEAK_FUNC(sub_82229B70) {
	__imp__sub_82229B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229BEC) {
	__imp__sub_82229BEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229BF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b2678
	ctx.lr = 0x82229C08;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229c40
	if (!ctx.cr6.eq) goto loc_82229C40;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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
loc_82229C40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17496
	ctx.r4.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad4e0
	ctx.lr = 0x82229C50;
	sub_822AD4E0(ctx, base);
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
}

PPC_WEAK_FUNC(sub_82229BF0) {
	__imp__sub_82229BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229C68) {
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r9,r11,-17544
	ctx.r9.s64 = ctx.r11.s64 + -17544;
	// li r5,172
	ctx.r5.s64 = 172;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r8,r10,-25976
	ctx.r8.s64 = ctx.r10.s64 + -25976;
	// divw r30,r7,r5
	ctx.r30.s32 = ctx.r7.s32 / ctx.r5.s32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,46(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 46);
	// bl 0x822ac430
	ctx.lr = 0x82229CB0;
	sub_822AC430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5578
	ctx.lr = 0x82229CB8;
	sub_821F5578(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a88e0
	ctx.lr = 0x82229CC4;
	sub_822A88E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82229C68) {
	__imp__sub_82229C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229CDC) {
	__imp__sub_82229CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,172
	ctx.r10.s64 = 172;
	// addi r9,r11,-17544
	ctx.r9.s64 = ctx.r11.s64 + -17544;
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// b 0x822ace70
	sub_822ACE70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229CE0) {
	__imp__sub_82229CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229CFC) {
	__imp__sub_82229CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229D00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b2678
	ctx.lr = 0x82229D18;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82229d50
	if (!ctx.cr6.eq) goto loc_82229D50;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r10,-17544
	ctx.r11.s64 = ctx.r10.s64 + -17544;
	// mulli r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 * 172;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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
loc_82229D50:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11168
	ctx.r4.s64 = ctx.r11.s64 + -11168;
	// bl 0x822ad4e0
	ctx.lr = 0x82229D60;
	sub_822AD4E0(ctx, base);
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
}

PPC_WEAK_FUNC(sub_82229D00) {
	__imp__sub_82229D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229D78) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822b1928
	sub_822B1928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229D78) {
	__imp__sub_82229D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229D8C) {
	__imp__sub_82229D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229D90) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822b1a70
	sub_822B1A70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229D90) {
	__imp__sub_82229D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229DA4) {
	__imp__sub_82229DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822ac430
	sub_822AC430(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229DA8) {
	__imp__sub_82229DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229DBC) {
	__imp__sub_82229DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82229DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-12000
	ctx.r11.s64 = ctx.r9.s64 + -12000;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82229e08
	if (ctx.cr6.eq) goto loc_82229E08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82229E08;
	sub_822AD4E0(ctx, base);
loc_82229E08:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r29,r10,9624
	ctx.r29.s64 = ctx.r10.s64 + 9624;
	// addi r31,r11,26552
	ctx.r31.s64 = ctx.r11.s64 + 26552;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82229eb0
	if (!ctx.cr6.gt) goto loc_82229EB0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r28,r9,-11152
	ctx.r28.s64 = ctx.r9.s64 + -11152;
	// addi r24,r11,11296
	ctx.r24.s64 = ctx.r11.s64 + 11296;
loc_82229E3C:
	// lbzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229e8c
	if (ctx.cr6.eq) goto loc_82229E8C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229e8c
	if (ctx.cr6.eq) goto loc_82229E8C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82229e8c
	if (!ctx.cr6.eq) goto loc_82229E8C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82229e88
	if (ctx.cr6.eq) goto loc_82229E88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82229E70;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82229E80;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82229E84;
	sub_822AD350(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82229E88:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82229E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82229e3c
	if (ctx.cr6.lt) goto loc_82229E3C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82229eb0
	if (ctx.cr6.eq) goto loc_82229EB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// bl 0x822ace70
	ctx.lr = 0x82229EB0;
	sub_822ACE70(ctx, base);
loc_82229EB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229DC0) {
	__imp__sub_82229DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229EB8) {
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
	// bl 0x822acb68
	ctx.lr = 0x82229ED0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82229ee4
	if (ctx.cr6.eq) goto loc_82229EE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// bl 0x822ad350
	ctx.lr = 0x82229EE4;
	sub_822AD350(ctx, base);
loc_82229EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82229EEC;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82229EF8;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a3ec0
	ctx.lr = 0x82229F08;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82229f3c
	if (ctx.cr6.lt) goto loc_82229F3C;
	// rlwinm r11,r3,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xE000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82229f2c
	if (!ctx.cr6.eq) goto loc_82229F2C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82229dc0
	ctx.lr = 0x82229F28;
	sub_82229DC0(ctx, base);
	// b 0x82229f3c
	goto loc_82229F3C;
loc_82229F2C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11068
	ctx.r4.s64 = ctx.r11.s64 + -11068;
	// bl 0x822ad4e0
	ctx.lr = 0x82229F3C;
	sub_822AD4E0(ctx, base);
loc_82229F3C:
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

PPC_WEAK_FUNC(sub_82229EB8) {
	__imp__sub_82229EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82229F54) {
	__imp__sub_82229F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82229F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82229F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-12000
	ctx.r11.s64 = ctx.r9.s64 + -12000;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82229f9c
	if (ctx.cr6.eq) goto loc_82229F9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82229F9C;
	sub_822AD4E0(ctx, base);
loc_82229F9C:
	// bl 0x822ad190
	ctx.lr = 0x82229FA0;
	sub_822AD190(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// addi r31,r10,26552
	ctx.r31.s64 = ctx.r10.s64 + 26552;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8222a010
	if (!ctx.cr6.gt) goto loc_8222A010;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r27,r11,11296
	ctx.r27.s64 = ctx.r11.s64 + 11296;
loc_82229FC8:
	// lbzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a000
	if (ctx.cr6.eq) goto loc_8222A000;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a000
	if (ctx.cr6.eq) goto loc_8222A000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8222a000
	if (!ctx.cr6.eq) goto loc_8222A000;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822ace70
	ctx.lr = 0x82229FF8;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82229FFC;
	sub_822AD208(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8222A000:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82229fc8
	if (ctx.cr6.lt) goto loc_82229FC8;
loc_8222A010:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82229F58) {
	__imp__sub_82229F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222A020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222A028;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222a098
	if (!ctx.cr6.eq) goto loc_8222A098;
	// bl 0x822ad190
	ctx.lr = 0x8222A034;
	sub_822AD190(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222a108
	if (!ctx.cr6.gt) goto loc_8222A108;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r30,r10,126
	ctx.r30.s64 = ctx.r10.s64 + 126;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// addi r28,r10,11296
	ctx.r28.s64 = ctx.r10.s64 + 11296;
loc_8222A060:
	// lbzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222a080
	if (ctx.cr6.eq) goto loc_8222A080;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x822ace70
	ctx.lr = 0x8222A078;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8222A07C;
	sub_822AD208(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8222A080:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a060
	if (ctx.cr6.lt) goto loc_8222A060;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A098:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8222A0A0;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8222A0AC;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a3ec0
	ctx.lr = 0x8222A0BC;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8222a0d0
	if (!ctx.cr6.lt) goto loc_8222A0D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10932
	ctx.r3.s64 = ctx.r11.s64 + -10932;
	// b 0x8222a0f4
	goto loc_8222A0F4;
loc_8222A0D0:
	// rlwinm r11,r3,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xE000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222a0ec
	if (!ctx.cr6.eq) goto loc_8222A0EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82229f58
	ctx.lr = 0x8222A0E4;
	sub_82229F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A0EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10988
	ctx.r3.s64 = ctx.r11.s64 + -10988;
loc_8222A0F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222A0FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x8222A108;
	sub_822AD4E0(ctx, base);
loc_8222A108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A018) {
	__imp__sub_8222A018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A110) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822ad738
	sub_822AD738(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A110) {
	__imp__sub_8222A110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222A128;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x8222A130;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27164
	ctx.r4.s64 = ctx.r11.s64 + 27164;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A15C;
	sub_821F9FD8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,-10696
	ctx.r4.s64 = ctx.r10.s64 + -10696;
	// bl 0x822e8058
	ctx.lr = 0x8222A16C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a184
	if (ctx.cr6.eq) goto loc_8222A184;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-10748
	ctx.r4.s64 = ctx.r11.s64 + -10748;
	// bl 0x822830e8
	ctx.lr = 0x8222A184;
	sub_822830E8(ctx, base);
loc_8222A184:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// bl 0x8233e7d8
	ctx.lr = 0x8222A194;
	sub_8233E7D8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-10764
	ctx.r4.s64 = ctx.r10.s64 + -10764;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A1AC;
	sub_821F9FD8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222a1d0
	if (ctx.cr6.eq) goto loc_8222A1D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10772
	ctx.r3.s64 = ctx.r11.s64 + -10772;
	// bl 0x822e84f0
	ctx.lr = 0x8222A1C8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222a1d4
	goto loc_8222A1D4;
loc_8222A1D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8222A1D4:
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233e7d8
	ctx.lr = 0x8222A1DC;
	sub_8233E7D8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-10780
	ctx.r4.s64 = ctx.r11.s64 + -10780;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A1F4;
	sub_821F9FD8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233e7d8
	ctx.lr = 0x8222A200;
	sub_8233E7D8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r10,-10784
	ctx.r5.s64 = ctx.r10.s64 + -10784;
	// addi r4,r9,-10792
	ctx.r4.s64 = ctx.r9.s64 + -10792;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A21C;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x8222A224;
	sub_823DEC00(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lwz r3,-16972(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16972);
	// bl 0x822e1f88
	ctx.lr = 0x8222A234;
	sub_822E1F88(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r7,-10804
	ctx.r4.s64 = ctx.r7.s64 + -10804;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A24C;
	sub_821F9FD8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r30,r11,8244
	ctx.r30.s64 = ctx.r11.s64 + 8244;
	// lfs f30,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// li r3,1201
	ctx.r3.s64 = 1201;
	// beq cr6,0x8222a2b8
	if (ctx.cr6.eq) goto loc_8222A2B8;
	// bl 0x8233e7d8
	ctx.lr = 0x8222A27C;
	sub_8233E7D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x8222A284;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x8222A29C;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16344, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x8222A2AC;
	sub_823DE800(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16340, temp.u32);
	// b 0x8222a2c8
	goto loc_8222A2C8;
loc_8222A2B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222A2C0;
	sub_8233E7D8(ctx, base);
	// stfs f31,16340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16340, temp.u32);
	// stfs f30,16344(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16344, temp.u32);
loc_8222A2C8:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,19
	ctx.r10.s64 = 1245184;
	// addi r29,r11,26552
	ctx.r29.s64 = ctx.r11.s64 + 26552;
	// ori r9,r10,31646
	ctx.r9.u64 = ctx.r10.u64 | 31646;
	// li r11,2046
	ctx.r11.s64 = 2046;
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// addis r10,r29,19
	ctx.r10.s64 = ctx.r29.s64 + 1245184;
	// addi r28,r8,-25976
	ctx.r28.s64 = ctx.r8.s64 + -25976;
	// sthx r11,r29,r9
	PPC_STORE_U16(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u16);
	// addi r3,r10,31812
	ctx.r3.s64 = ctx.r10.s64 + 31812;
	// lhz r4,286(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 286);
	// bl 0x822a24e0
	ctx.lr = 0x8222A2F8;
	sub_822A24E0(ctx, base);
	// addis r11,r29,19
	ctx.r11.s64 = ctx.r29.s64 + 1245184;
	// lhz r4,286(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 286);
	// addi r3,r11,31814
	ctx.r3.s64 = ctx.r11.s64 + 31814;
	// bl 0x822a24e0
	ctx.lr = 0x8222A308;
	sub_822A24E0(ctx, base);
	// lis r7,19
	ctx.r7.s64 = 1245184;
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// ori r5,r7,31696
	ctx.r5.u64 = ctx.r7.u64 | 31696;
	// addi r4,r6,11296
	ctx.r4.s64 = ctx.r6.s64 + 11296;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stbx r11,r29,r5
	PPC_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r10,2046(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2046, ctx.r10.u8);
	// addi r4,r3,-10812
	ctx.r4.s64 = ctx.r3.s64 + -10812;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A340;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x8222A348;
	sub_823DEC00(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// addi r4,r11,-10828
	ctx.r4.s64 = ctx.r11.s64 + -10828;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A364;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x8222A36C;
	sub_823DEC00(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// addi r5,r10,-17076
	ctx.r5.s64 = ctx.r10.s64 + -17076;
	// addi r4,r9,-10840
	ctx.r4.s64 = ctx.r9.s64 + -10840;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A38C;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823dec00
	ctx.lr = 0x8222A394;
	sub_823DEC00(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// addi r5,r8,-10848
	ctx.r5.s64 = ctx.r8.s64 + -10848;
	// addi r4,r7,-10860
	ctx.r4.s64 = ctx.r7.s64 + -10860;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A3B4;
	sub_821F9FD8(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r6,-27904
	ctx.r30.s64 = ctx.r6.s64 + -27904;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x823deeb8
	ctx.lr = 0x8222A3D4;
	sub_823DEEB8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d9048
	ctx.lr = 0x8222A3E0;
	sub_822D9048(ctx, base);
	// fsubs f0,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fsubs f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r5,-10868
	ctx.r5.s64 = ctx.r5.s64 + -10868;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f30,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f8,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f0,16348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16348, temp.u32);
	// stfs f13,16352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16352, temp.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stfs f12,16356(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16356, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r4,-10884
	ctx.r4.s64 = ctx.r4.s64 + -10884;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A434;
	sub_821F9FD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x823deeb8
	ctx.lr = 0x8222A44C;
	sub_823DEEB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16360
	ctx.r4.s64 = ctx.r31.s64 + 16360;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822da518
	ctx.lr = 0x8222A460;
	sub_822DA518(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x8222A46C;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A120) {
	__imp__sub_8222A120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222A478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// lwz r3,7828(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7828);
	// bl 0x822b1880
	ctx.lr = 0x8222A490;
	sub_822B1880(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x8222A494;
	sub_822AC730(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x821f9db8
	ctx.lr = 0x8222A4A4;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a500
	if (ctx.cr6.eq) goto loc_8222A500;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r9,-12312
	ctx.r31.s64 = ctx.r9.s64 + -12312;
	// addi r30,r10,27164
	ctx.r30.s64 = ctx.r10.s64 + 27164;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_8222A4C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A4D8;
	sub_821F9FD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea1c0
	ctx.lr = 0x8222A4E4;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a4f0
	if (ctx.cr6.eq) goto loc_8222A4F0;
	// bl 0x822296a0
	ctx.lr = 0x8222A4F0;
	sub_822296A0(ctx, base);
loc_8222A4F0:
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x821f9db8
	ctx.lr = 0x8222A4F8;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222a4c4
	if (!ctx.cr6.eq) goto loc_8222A4C4;
loc_8222A500:
	// bl 0x821f9bd0
	ctx.lr = 0x8222A504;
	sub_821F9BD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A470) {
	__imp__sub_8222A470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222A50C) {
	__imp__sub_8222A50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A510) {
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
	// bl 0x822295c8
	ctx.lr = 0x8222A528;
	sub_822295C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a540
	if (ctx.cr6.eq) goto loc_8222A540;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822ad738
	ctx.lr = 0x8222A540;
	sub_822AD738(ctx, base);
loc_8222A540:
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

PPC_WEAK_FUNC(sub_8222A510) {
	__imp__sub_8222A510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222A554) {
	__imp__sub_8222A554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8222A560;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-12000
	ctx.r31.s64 = ctx.r11.s64 + -12000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-12000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12000);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a5a8
	if (ctx.cr6.eq) goto loc_8222A5A8;
loc_8222A588:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8222A594;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a5d4
	if (ctx.cr6.eq) goto loc_8222A5D4;
	// lwzu r11,20(r31)
	ea = 20 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a588
	if (!ctx.cr6.eq) goto loc_8222A588;
loc_8222A5A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822295c8
	ctx.lr = 0x8222A5B4;
	sub_822295C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a5cc
	if (ctx.cr6.eq) goto loc_8222A5CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x822ad738
	ctx.lr = 0x8222A5CC;
	sub_822AD738(ctx, base);
loc_8222A5CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A5D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x8222a5cc
	if (ctx.cr6.gt) goto loc_8222A5CC;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23048
	ctx.r12.s64 = ctx.r12.s64 + -23048;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8222A6C4;
	case 1:
		goto loc_8222A6DC;
	case 2:
		goto loc_8222A6F4;
	case 3:
		goto loc_8222A70C;
	case 4:
		goto loc_8222A638;
	case 5:
		goto loc_8222A5CC;
	case 6:
		goto loc_8222A660;
	case 7:
		goto loc_8222A5CC;
	case 8:
		goto loc_8222A5CC;
	case 9:
		goto loc_8222A5CC;
	case 10:
		goto loc_8222A5CC;
	case 11:
		goto loc_8222A5CC;
	case 12:
		goto loc_8222A5CC;
	case 13:
		goto loc_8222A5CC;
	case 14:
		goto loc_8222A5CC;
	case 15:
		goto loc_8222A728;
	default:
		return;
	}
	// lwz r17,-22844(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22844);
	// lwz r17,-22820(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22820);
	// lwz r17,-22796(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22796);
	// lwz r17,-22772(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22772);
	// lwz r17,-22984(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22984);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-22944(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22944);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-23092(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23092);
	// lwz r17,-22744(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22744);
loc_8222A638:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8222A648;
	sub_822A24E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa060
	ctx.lr = 0x8222A650;
	sub_821FA060(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A660:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x8222A690;
	sub_823DEEB8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A6C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8222A6CC;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A6DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8222A6E4;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A6F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8222A6FC;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stbx r3,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A70C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dec00
	ctx.lr = 0x8222A714;
	sub_823DEC00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A728:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222a5cc
	if (!ctx.cr6.eq) goto loc_8222A5CC;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x8222a75c
	if (!ctx.cr6.eq) goto loc_8222A75C;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x823deaf8
	ctx.lr = 0x8222A748;
	sub_823DEAF8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r3,132(r30)
	PPC_STORE_U16(ctx.r30.u32 + 132, ctx.r3.u16);
	// stb r10,173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 173, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A75C:
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x8222a79c
	if (!ctx.cr6.eq) goto loc_8222A79C;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x823deaf8
	ctx.lr = 0x8222A76C;
	sub_823DEAF8(ctx, base);
	// sth r3,132(r30)
	PPC_STORE_U16(ctx.r30.u32 + 132, ctx.r3.u16);
	// bl 0x821f9bc0
	ctx.lr = 0x8222A774;
	sub_821F9BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a78c
	if (ctx.cr6.eq) goto loc_8222A78C;
	// bl 0x82272ee8
	ctx.lr = 0x8222A780;
	sub_82272EE8(ctx, base);
	// lhz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// sth r10,132(r30)
	PPC_STORE_U16(ctx.r30.u32 + 132, ctx.r10.u16);
loc_8222A78C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 173, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222A79C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222eb90
	ctx.lr = 0x8222A7A8;
	sub_8222EB90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A558) {
	__imp__sub_8222A558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8222A7B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222a808
	if (!ctx.cr6.gt) goto loc_8222A808;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
loc_8222A7E4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8222a558
	ctx.lr = 0x8222A7F8;
	sub_8222A558(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a7e4
	if (ctx.cr6.lt) goto loc_8222A7E4;
loc_8222A808:
	// addi r4,r28,232
	ctx.r4.s64 = ctx.r28.s64 + 232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222fb90
	ctx.lr = 0x8222A814;
	sub_8222FB90(ctx, base);
	// addi r4,r28,244
	ctx.r4.s64 = ctx.r28.s64 + 244;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x8222A820;
	sub_8222FBE8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222a834
	if (ctx.cr6.eq) goto loc_8222A834;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821fa060
	ctx.lr = 0x8222A830;
	sub_821FA060(ctx, base);
	// sth r3,292(r28)
	PPC_STORE_U16(ctx.r28.u32 + 292, ctx.r3.u16);
loc_8222A834:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A7B0) {
	__imp__sub_8222A7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222A83C) {
	__imp__sub_8222A83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222A840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222A848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,-28736
	ctx.r5.s64 = ctx.r10.s64 + -28736;
	// addi r4,r9,27164
	ctx.r4.s64 = ctx.r9.s64 + 27164;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x821f9fd8
	ctx.lr = 0x8222A870;
	sub_821F9FD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea2f0
	ctx.lr = 0x8222A878;
	sub_822EA2F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222aa30
	if (!ctx.cr6.eq) goto loc_8222AA30;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822ea2b8
	ctx.lr = 0x8222A888;
	sub_822EA2B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a89c
	if (ctx.cr6.eq) goto loc_8222A89C;
	// bl 0x82238570
	ctx.lr = 0x8222A894;
	sub_82238570(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A89C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-10684
	ctx.r4.s64 = ctx.r11.s64 + -10684;
	// bl 0x822ea1c0
	ctx.lr = 0x8222A8AC;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x8222a8c4
	if (ctx.cr6.eq) goto loc_8222A8C4;
	// bl 0x82353be8
	ctx.lr = 0x8222A8BC;
	sub_82353BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A8C4:
	// bl 0x822ea248
	ctx.lr = 0x8222A8C8;
	sub_822EA248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a8f4
	if (ctx.cr6.eq) goto loc_8222A8F4;
	// bl 0x8222f3a8
	ctx.lr = 0x8222A8D4;
	sub_8222F3A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222a7b0
	ctx.lr = 0x8222A8E4;
	sub_8222A7B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b03b8
	ctx.lr = 0x8222A8EC;
	sub_821B03B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A8F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82229878
	ctx.lr = 0x8222A8FC;
	sub_82229878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a930
	if (ctx.cr6.eq) goto loc_8222A930;
	// bl 0x8222f3a8
	ctx.lr = 0x8222A90C;
	sub_8222F3A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222a7b0
	ctx.lr = 0x8222A91C;
	sub_8222A7B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8930
	ctx.lr = 0x8222A928;
	sub_821F8930(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222A930:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-11640
	ctx.r30.s64 = ctx.r11.s64 + -11640;
	// addi r31,r30,128
	ctx.r31.s64 = ctx.r30.s64 + 128;
loc_8222A944:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ea1c0
	ctx.lr = 0x8222A950;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// bne cr6,0x8222a974
	if (!ctx.cr6.eq) goto loc_8222A974;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a944
	if (ctx.cr6.lt) goto loc_8222A944;
	// b 0x8222a984
	goto loc_8222A984;
loc_8222A974:
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8222a9d0
	if (!ctx.cr6.eq) goto loc_8222A9D0;
loc_8222A984:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8222A990:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ea1c0
	ctx.lr = 0x8222A99C;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222a9c0
	if (!ctx.cr6.eq) goto loc_8222A9C0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222a990
	if (ctx.cr6.lt) goto loc_8222A990;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8222a9e4
	goto loc_8222A9E4;
loc_8222A9C0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222a9e4
	if (ctx.cr6.eq) goto loc_8222A9E4;
loc_8222A9D0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-2432
	ctx.r9.s64 = ctx.r11.s64 + -2432;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8222aa30
	if (ctx.cr6.eq) goto loc_8222AA30;
loc_8222A9E4:
	// bl 0x8222f3a8
	ctx.lr = 0x8222A9E8;
	sub_8222F3A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222a9fc
	if (ctx.cr6.eq) goto loc_8222A9FC;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8222aa00
	goto loc_8222AA00;
loc_8222A9FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8222AA00:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222a7b0
	ctx.lr = 0x8222AA0C;
	sub_8222A7B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222feb8
	ctx.lr = 0x8222AA18;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222aa30
	if (ctx.cr6.eq) goto loc_8222AA30;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222AA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222AA30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222A840) {
	__imp__sub_8222A840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222AA38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bgt cr6,0x8222abec
	if (ctx.cr6.gt) goto loc_8222ABEC;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21900
	ctx.r12.s64 = ctx.r12.s64 + -21900;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8222AAF4;
	case 1:
		goto loc_8222AB00;
	case 2:
		goto loc_8222AB10;
	case 3:
		goto loc_8222AB20;
	case 4:
		goto loc_8222AAB0;
	case 5:
		goto loc_8222ABEC;
	case 6:
		goto loc_8222AAC8;
	case 7:
		goto loc_8222AB48;
	case 8:
		goto loc_8222AB54;
	case 9:
		goto loc_8222AB6C;
	case 10:
		goto loc_8222AB94;
	case 11:
		goto loc_8222ABB0;
	case 12:
		goto loc_8222ABEC;
	case 13:
		goto loc_8222ABE0;
	case 14:
		goto loc_8222AB30;
	default:
		return;
	}
	// lwz r17,-21772(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21772);
	// lwz r17,-21760(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21760);
	// lwz r17,-21744(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21744);
	// lwz r17,-21728(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21728);
	// lwz r17,-21840(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21840);
	// lwz r17,-21524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21524);
	// lwz r17,-21816(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21816);
	// lwz r17,-21688(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21688);
	// lwz r17,-21676(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21676);
	// lwz r17,-21652(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21652);
	// lwz r17,-21612(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21612);
	// lwz r17,-21584(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21584);
	// lwz r17,-21524(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21524);
	// lwz r17,-21536(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21536);
	// lwz r17,-21712(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21712);
loc_8222AAB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b22b0
	ctx.lr = 0x8222AAB8;
	sub_822B22B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8222AAC4;
	sub_822A24E0(ctx, base);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AAC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8222AAD4;
	sub_822B2498(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
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
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AAF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8222AAFC;
	sub_822B1C50(ctx, base);
	// b 0x8222abe8
	goto loc_8222ABE8;
loc_8222AB00:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8222AB08;
	sub_822B1C50(ctx, base);
	// sthx r3,r31,r30
	PPC_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u16);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8222AB18;
	sub_822B1C50(ctx, base);
	// stbx r3,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB20:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8222AB28;
	sub_822B1FB0(ctx, base);
	// stfsx f1,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8222AB3C;
	sub_822B2498(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229b70
	ctx.lr = 0x8222AB50;
	sub_82229B70(ctx, base);
	// b 0x8222abe8
	goto loc_8222ABE8;
loc_8222AB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229b70
	ctx.lr = 0x8222AB5C;
	sub_82229B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8222AB68;
	sub_821E2E18(ctx, base);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229b70
	ctx.lr = 0x8222AB74;
	sub_82229B70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222ab88
	if (!ctx.cr6.eq) goto loc_8222AB88;
loc_8222AB7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB88:
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222AB94:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229b70
	ctx.lr = 0x8222AB9C;
	sub_82229B70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ab7c
	if (ctx.cr6.eq) goto loc_8222AB7C;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222ABB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229b70
	ctx.lr = 0x8222ABB8;
	sub_82229B70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222abd0
	if (ctx.cr6.eq) goto loc_8222ABD0;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x821e2ec8
	ctx.lr = 0x8222ABCC;
	sub_821E2EC8(ctx, base);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222ABD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x821e2ec8
	ctx.lr = 0x8222ABDC;
	sub_821E2EC8(ctx, base);
	// b 0x8222abec
	goto loc_8222ABEC;
loc_8222ABE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x8222ABE8;
	sub_82234810(ctx, base);
loc_8222ABE8:
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
loc_8222ABEC:
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

PPC_WEAK_FUNC(sub_8222AA38) {
	__imp__sub_8222AA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222AC04) {
	__imp__sub_8222AC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222AC08) {
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
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x8222ae60
	if (ctx.cr6.gt) goto loc_8222AE60;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21452
	ctx.r12.s64 = ctx.r12.s64 + -21452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8222ACD8;
	case 1:
		goto loc_8222ACF0;
	case 2:
		goto loc_8222AD0C;
	case 3:
		goto loc_8222AD24;
	case 4:
		goto loc_8222AC74;
	case 5:
		goto loc_8222AC94;
	case 6:
		goto loc_8222ACC0;
	case 7:
		goto loc_8222AD6C;
	case 8:
		goto loc_8222AD94;
	case 9:
		goto loc_8222ADCC;
	case 10:
		goto loc_8222ADCC;
	case 11:
		goto loc_8222ADF8;
	case 12:
		goto loc_8222AE60;
	case 13:
		goto loc_8222AE34;
	case 14:
		goto loc_8222AD3C;
	case 15:
		goto loc_8222AE54;
	default:
		return;
	}
	// lwz r17,-21288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21288);
	// lwz r17,-21264(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21264);
	// lwz r17,-21236(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21236);
	// lwz r17,-21212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21212);
	// lwz r17,-21388(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21388);
	// lwz r17,-21356(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21356);
	// lwz r17,-21312(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21312);
	// lwz r17,-21140(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21140);
	// lwz r17,-21100(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21100);
	// lwz r17,-21044(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21044);
	// lwz r17,-21044(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21044);
	// lwz r17,-21000(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21000);
	// lwz r17,-20896(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20896);
	// lwz r17,-20940(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20940);
	// lwz r17,-21188(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21188);
	// lwz r17,-20908(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -20908);
loc_8222AC74:
	// lhzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// bl 0x822acff0
	ctx.lr = 0x8222AC84;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AC94:
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// bl 0x822aced0
	ctx.lr = 0x8222ACB0;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222ACC0:
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bl 0x822ad078
	ctx.lr = 0x8222ACC8;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222ACD8:
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// bl 0x822acbf8
	ctx.lr = 0x8222ACE0;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222ACF0:
	// lhzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822acbf8
	ctx.lr = 0x8222ACFC;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AD0C:
	// lbzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// bl 0x822acbf8
	ctx.lr = 0x8222AD14;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AD24:
	// lfsx f1,r3,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x8222AD2C;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AD3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfsx f0,r3,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x8222AD5C;
	sub_822AD078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AD6C:
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822ace70
	ctx.lr = 0x8222AD84;
	sub_822ACE70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AD94:
	// lhzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,-498(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + -498);
	// bl 0x822ace70
	ctx.lr = 0x8222ADBC;
	sub_822ACE70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222ADCC:
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x822ace70
	ctx.lr = 0x8222ADE8;
	sub_822ACE70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222ADF8:
	// lhzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,-112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -112);
	// lhz r3,126(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// bl 0x822ace70
	ctx.lr = 0x8222AE24;
	sub_822ACE70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AE34:
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ae60
	if (ctx.cr6.eq) goto loc_8222AE60;
	// bl 0x82237bc0
	ctx.lr = 0x8222AE44;
	sub_82237BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222AE54:
	// lhzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// bl 0x8222e3b0
	ctx.lr = 0x8222AE5C;
	sub_8222E3B0(ctx, base);
	// bl 0x822acff0
	ctx.lr = 0x8222AE60;
	sub_822ACFF0(ctx, base);
loc_8222AE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222AC08) {
	__imp__sub_8222AC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222AE70) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9db8
	ctx.lr = 0x8222AE90;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222aea8
	if (!ctx.cr6.eq) goto loc_8222AEA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-10664
	ctx.r4.s64 = ctx.r11.s64 + -10664;
	// bl 0x822830e8
	ctx.lr = 0x8222AEA8;
	sub_822830E8(ctx, base);
loc_8222AEA8:
	// bl 0x8222a120
	ctx.lr = 0x8222AEAC;
	sub_8222A120(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9db8
	ctx.lr = 0x8222AEB4;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222aed0
	if (ctx.cr6.eq) goto loc_8222AED0;
loc_8222AEBC:
	// bl 0x8222a840
	ctx.lr = 0x8222AEC0;
	sub_8222A840(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821f9db8
	ctx.lr = 0x8222AEC8;
	sub_821F9DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222aebc
	if (!ctx.cr6.eq) goto loc_8222AEBC;
loc_8222AED0:
	// bl 0x821f9bd0
	ctx.lr = 0x8222AED4;
	sub_821F9BD0(ctx, base);
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

PPC_WEAK_FUNC(sub_8222AE70) {
	__imp__sub_8222AE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222AEE8) {
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r9,r3,624
	ctx.r9.s64 = ctx.r3.s64 * 624;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// rlwinm r11,r4,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE000;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,24576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24576, ctx.xer);
	// bgt cr6,0x8222afb0
	if (ctx.cr6.gt) goto loc_8222AFB0;
	// beq cr6,0x8222af88
	if (ctx.cr6.eq) goto loc_8222AF88;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x8222af60
	if (ctx.cr6.eq) goto loc_8222AF60;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8222afb8
	if (!ctx.cr6.eq) goto loc_8222AFB8;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222af44
	if (!ctx.cr6.eq) goto loc_8222AF44;
loc_8222AF30:
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
loc_8222AF44:
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// bl 0x821c19a0
	ctx.lr = 0x8222AF4C;
	sub_821C19A0(ctx, base);
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
loc_8222AF60:
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af30
	if (ctx.cr6.eq) goto loc_8222AF30;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// bl 0x82240d78
	ctx.lr = 0x8222AF74;
	sub_82240D78(ctx, base);
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
loc_8222AF88:
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af30
	if (ctx.cr6.eq) goto loc_8222AF30;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// bl 0x821e7748
	ctx.lr = 0x8222AF9C;
	sub_821E7748(ctx, base);
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
loc_8222AFB0:
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x8222b018
	if (ctx.cr6.eq) goto loc_8222B018;
loc_8222AFB8:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-12000
	ctx.r10.s64 = ctx.r10.s64 + -12000;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222aff8
	if (ctx.cr6.eq) goto loc_8222AFF8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8222AFF8:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8222aa38
	ctx.lr = 0x8222B004;
	sub_8222AA38(ctx, base);
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
loc_8222B018:
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af30
	if (ctx.cr6.eq) goto loc_8222AF30;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// bl 0x82355398
	ctx.lr = 0x8222B02C;
	sub_82355398(ctx, base);
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

PPC_WEAK_FUNC(sub_8222AEE8) {
	__imp__sub_8222AEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B040) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8222b0dc
	if (ctx.cr6.gt) goto loc_8222B0DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222b090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B090;
	// bdzf 4*cr6+eq,0x8222b0a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B0A8;
	// bdzf 4*cr6+eq,0x8222b0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B0C0;
	// bdzf 4*cr6+eq,0x8222b0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B0DC;
	// bne cr6,0x8222b0cc
	if (!ctx.cr6.eq) goto loc_8222B0CC;
	// bl 0x8222aee8
	ctx.lr = 0x8222B080;
	sub_8222AEE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222B090:
	// bl 0x821f5538
	ctx.lr = 0x8222B094;
	sub_821F5538(ctx, base);
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
loc_8222B0A8:
	// bl 0x82234508
	ctx.lr = 0x8222B0AC;
	sub_82234508(ctx, base);
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
loc_8222B0C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10608
	ctx.r3.s64 = ctx.r11.s64 + -10608;
	// b 0x8222b0d4
	goto loc_8222B0D4;
loc_8222B0CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10636
	ctx.r3.s64 = ctx.r11.s64 + -10636;
loc_8222B0D4:
	// bl 0x822e84f0
	ctx.lr = 0x8222B0D8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222B0DC;
	sub_822AD350(ctx, base);
loc_8222B0DC:
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

PPC_WEAK_FUNC(sub_8222B040) {
	__imp__sub_8222B040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r9,r3,624
	ctx.r9.s64 = ctx.r3.s64 * 624;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// rlwinm r11,r4,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE000;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,24576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24576, ctx.xer);
	// bgt cr6,0x8222b15c
	if (ctx.cr6.gt) goto loc_8222B15C;
	// beq cr6,0x8222b148
	if (ctx.cr6.eq) goto loc_8222B148;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x8222b134
	if (ctx.cr6.eq) goto loc_8222B134;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8222b164
	if (!ctx.cr6.eq) goto loc_8222B164;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// b 0x821c19d8
	sub_821C19D8(ctx, base);
	return;
loc_8222B134:
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// b 0x82240db0
	sub_82240DB0(ctx, base);
	return;
loc_8222B148:
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// b 0x821e7780
	sub_821E7780(ctx, base);
	return;
loc_8222B15C:
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x8222b19c
	if (ctx.cr6.eq) goto loc_8222B19C;
loc_8222B164:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-12000
	ctx.r10.s64 = ctx.r10.s64 + -12000;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b190
	if (ctx.cr6.eq) goto loc_8222B190;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B190:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
loc_8222B19C:
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r4,r4,0,19,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// b 0x823553d0
	sub_823553D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222B0F0) {
	__imp__sub_8222B0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222B1B0) {
	__imp__sub_8222B1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222B1B4) {
	__imp__sub_8222B1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B1B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222b1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B1E8;
	// bdzf 4*cr6+eq,0x8222b1ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B1EC;
	// bdzf 4*cr6+eq,0x8222b1f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8222B1F0;
	// bne cr6,0x8222b1f4
	if (!ctx.cr6.eq) goto loc_8222B1F4;
	// b 0x8222b0f0
	sub_8222B0F0(ctx, base);
	return;
loc_8222B1E8:
	// b 0x821f54f8
	sub_821F54F8(ctx, base);
	return;
loc_8222B1EC:
	// b 0x82234548
	sub_82234548(ctx, base);
	return;
loc_8222B1F0:
	// b 0x82353ea0
	sub_82353EA0(ctx, base);
	return;
loc_8222B1F4:
	// b 0x82358590
	sub_82358590(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222B1B8) {
	__imp__sub_8222B1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222B1F8) {
	__imp__sub_8222B1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222B1FC) {
	__imp__sub_8222B1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8222B208;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de020
	ctx.lr = 0x8222B210;
	__savefpr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x8222b298
	if (ctx.cr6.eq) goto loc_8222B298;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,18652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18652);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r8,17(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222b298
	if (ctx.cr6.eq) goto loc_8222B298;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B298:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b2c8
	if (ctx.cr6.eq) goto loc_8222B2C8;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// b 0x8222b2cc
	goto loc_8222B2CC;
loc_8222B2C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222B2CC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4b08
	ctx.lr = 0x8222B2E8;
	sub_822D4B08(ctx, base);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f29,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,-12
	ctx.r24.s64 = ctx.r11.s64 + -12;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,14164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14164);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f31.f64 = double(temp.f32);
loc_8222B328:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f27,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f0.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f27,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f11.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f27,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f8.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x8222B378;
	sub_821FE618(ctx, base);
	// lbz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222b768
	if (!ctx.cr6.eq) goto loc_8222B768;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8222b3d8
	if (!ctx.cr6.gt) goto loc_8222B3D8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f2,f0,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
loc_8222B3D8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8222b728
	if (ctx.cr6.eq) goto loc_8222B728;
	// fnmsubs f27,f0,f27,f27
	ctx.f27.f64 = double(float(-(ctx.f0.f64 * ctx.f27.f64 - ctx.f27.f64)));
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// bge cr6,0x8222b784
	if (!ctx.cr6.lt) goto loc_8222B784;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8222b490
	if (!ctx.cr6.gt) goto loc_8222B490;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
loc_8222B408:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f28
	ctx.cr6.compare(ctx.f6.f64, ctx.f28.f64);
	// bgt cr6,0x8222b43c
	if (ctx.cr6.gt) goto loc_8222B43C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8222b408
	if (ctx.cr6.lt) goto loc_8222B408;
	// b 0x8222b49c
	goto loc_8222B49C;
loc_8222B43C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blt cr6,0x8222b71c
	if (ctx.cr6.lt) goto loc_8222B71C;
loc_8222B490:
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
loc_8222B49C:
	// stfs f12,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// addic. r27,r27,1
	ctx.xer.ca = ctx.r27.u32 > 4294967294;
	ctx.r27.s64 = ctx.r27.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f13,8(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfsu f0,12(r24)
	ea = 12 + ctx.r24.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r24.u32 = ea;
	// ble 0x8222b71c
	if (!ctx.cr0.gt) goto loc_8222B71C;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_8222B4C8:
	// lfs f11,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// blt cr6,0x8222b4fc
	if (ctx.cr6.lt) goto loc_8222B4FC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8222b4c8
	if (ctx.cr6.lt) goto loc_8222B4C8;
	// b 0x8222b71c
	goto loc_8222B71C;
loc_8222B4FC:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r26,r11
	ctx.r8.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8222B524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8222B53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r1,196
	ctx.r29.s64 = ctx.r1.s64 + 196;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8222B550:
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8222b6dc
	if (ctx.cr6.eq) goto loc_8222B6DC;
	// lfs f11,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bge cr6,0x8222b6dc
	if (!ctx.cr6.lt) goto loc_8222B6DC;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222B5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bge cr6,0x8222b6dc
	if (!ctx.cr6.lt) goto loc_8222B6DC;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,200
	ctx.r9.s64 = ctx.r1.s64 + 200;
	// lfs f26,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f12,f10,f9,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmsubs f10,f13,f7,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f9,f11,f0,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f11,f13,f30,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fdivs f8,f30,f11
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f9,f7,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmadds f8,f3,f6,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f5,f6,f2,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f4,f1,f11,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f3,f11,f26,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmuls f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f7,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f6,f4
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8222B69C:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8222b6cc
	if (ctx.cr6.eq) goto loc_8222B6CC;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8222b6cc
	if (ctx.cr6.eq) goto loc_8222B6CC;
	// lfs f11,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// blt cr6,0x8222b7a8
	if (ctx.cr6.lt) goto loc_8222B7A8;
loc_8222B6CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8222b69c
	if (ctx.cr6.lt) goto loc_8222B69C;
loc_8222B6DC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8222b550
	if (ctx.cr6.lt) goto loc_8222B550;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8222B71C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x8222b328
	if (ctx.cr6.lt) goto loc_8222B328;
loc_8222B728:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b750
	if (ctx.cr6.eq) goto loc_8222B750;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8222B750:
	// addic r11,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// subfe r3,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x8222B764;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8222B768:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f29,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x8222B780;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8222B784:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x8222B7A4;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8222B7A8:
	// stfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f29,4(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f29,8(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x8222B7C4;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222B200) {
	__imp__sub_8222B200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222B7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de024
	ctx.lr = 0x8222B7DC;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8222b200
	ctx.lr = 0x8222B814;
	sub_8222B200(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222b9f0
	if (ctx.cr6.eq) goto loc_8222B9F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f30,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f30.f64 = double(temp.f32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fsubs f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821fe618
	ctx.lr = 0x8222B860;
	sub_821FE618(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8222b898
	if (!ctx.cr6.gt) goto loc_8222B898;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x8222b9f0
	if (ctx.cr6.eq) goto loc_8222B9F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8222b9f0
	if (ctx.cr6.lt) goto loc_8222B9F0;
loc_8222B898:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821fe618
	ctx.lr = 0x8222B8D0;
	sub_821FE618(ctx, base);
	// lbz r10,169(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222b9f0
	if (!ctx.cr6.eq) goto loc_8222B9F0;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f30,f6,f0,f11
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f29,0(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f28,4(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// bl 0x8222b200
	ctx.lr = 0x8222B938;
	sub_8222B200(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x8222B978;
	sub_821FE618(ctx, base);
	// lbz r8,169(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8222b9cc
	if (!ctx.cr6.eq) goto loc_8222B9CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f2,f0,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8222B9CC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x8222b9f0
	if (!ctx.cr6.lt) goto loc_8222B9F0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B9F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x8222B9FC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222B7C8) {
	__imp__sub_8222B7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BA0C) {
	__imp__sub_8222BA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8222BA18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8222bad4
	if (!ctx.cr6.gt) goto loc_8222BAD4;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r11,916
	ctx.r31.s64 = ctx.r11.s64 + 916;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r10,-27364
	ctx.r27.s64 = ctx.r10.s64 + -27364;
	// addi r26,r9,-10564
	ctx.r26.s64 = ctx.r9.s64 + -10564;
	// addi r29,r8,-10572
	ctx.r29.s64 = ctx.r8.s64 + -10572;
	// addi r28,r11,-10580
	ctx.r28.s64 = ctx.r11.s64 + -10580;
loc_8222BA60:
	// lbz r10,-116(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222bac4
	if (ctx.cr6.eq) goto loc_8222BAC4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8222BA7C;
	sub_82280900(ctx, base);
	// lbz r3,-292(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + -292);
	// bl 0x8231f438
	ctx.lr = 0x8222BA84;
	sub_8231F438(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8222BA94;
	sub_82280900(ctx, base);
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bab4
	if (ctx.cr6.eq) goto loc_8222BAB4;
	// bl 0x822a13a0
	ctx.lr = 0x8222BAA4;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8222BAB4;
	sub_82280900(ctx, base);
loc_8222BAB4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8222BAC0;
	sub_82280900(ctx, base);
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
loc_8222BAC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8222ba60
	if (ctx.cr6.lt) goto loc_8222BA60;
loc_8222BAD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222BA10) {
	__imp__sub_8222BA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BADC) {
	__imp__sub_8222BADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BAE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222BAE0) {
	__imp__sub_8222BAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222BAF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r10,15528
	ctx.r29.s64 = ctx.r10.s64 + 15528;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r28,896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 896, ctx.r28.u32);
loc_8222BB10:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x8233e7d8
	ctx.lr = 0x8222BB20;
	sub_8233E7D8(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r29,896
	ctx.r11.s64 = ctx.r29.s64 + 896;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222bb10
	if (ctx.cr6.lt) goto loc_8222BB10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222BAE8) {
	__imp__sub_8222BAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BB3C) {
	__imp__sub_8222BB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8222BB48;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r10,15528
	ctx.r29.s64 = ctx.r10.s64 + 15528;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// stw r21,896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 896, ctx.r21.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// addi r24,r6,-22248
	ctx.r24.s64 = ctx.r6.s64 + -22248;
	// addi r23,r7,-22240
	ctx.r23.s64 = ctx.r7.s64 + -22240;
	// addi r28,r8,-27936
	ctx.r28.s64 = ctx.r8.s64 + -27936;
	// addi r27,r9,-22236
	ctx.r27.s64 = ctx.r9.s64 + -22236;
	// addi r26,r10,9624
	ctx.r26.s64 = ctx.r10.s64 + 9624;
	// addi r25,r11,-22228
	ctx.r25.s64 = ctx.r11.s64 + -22228;
loc_8222BBA4:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r22,80
	ctx.r3.s64 = ctx.r22.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x8222BBB4;
	sub_8233DD38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222bbc8
	if (!ctx.cr6.eq) goto loc_8222BBC8;
	// stw r21,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r21.u32);
	// b 0x8222bca0
	goto loc_8222BCA0;
loc_8222BBC8:
	// lwz r11,896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 896);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 896, ctx.r11.u32);
	// bl 0x822e8678
	ctx.lr = 0x8222BBE0;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222bbf8
	if (!ctx.cr6.eq) goto loc_8222BBF8;
	// stw r21,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r21.u32);
	// b 0x8222bc18
	goto loc_8222BC18;
loc_8222BBF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8222BC00;
	sub_823DEAF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8222BC08;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_8222BC18:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8678
	ctx.lr = 0x8222BC24;
	sub_822E8678(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,-8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc50
	if (ctx.cr6.eq) goto loc_8222BC50;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x823deeb8
	ctx.lr = 0x8222BC50;
	sub_823DEEB8(ctx, base);
loc_8222BC50:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8678
	ctx.lr = 0x8222BC5C;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc70
	if (ctx.cr6.eq) goto loc_8222BC70;
	// bl 0x823deaf8
	ctx.lr = 0x8222BC6C;
	sub_823DEAF8(ctx, base);
	// b 0x8222bc74
	goto loc_8222BC74;
loc_8222BC70:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222BC74:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8678
	ctx.lr = 0x8222BC84;
	sub_822E8678(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc98
	if (ctx.cr6.eq) goto loc_8222BC98;
	// bl 0x823deaf8
	ctx.lr = 0x8222BC94;
	sub_823DEAF8(ctx, base);
	// b 0x8222bc9c
	goto loc_8222BC9C;
loc_8222BC98:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222BC9C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8222BCA0:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r29,908
	ctx.r11.s64 = ctx.r29.s64 + 908;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222bba4
	if (ctx.cr6.lt) goto loc_8222BBA4;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222BB40) {
	__imp__sub_8222BB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222BCC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222BCD0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222bce4
	if (!ctx.cr6.lt) goto loc_8222BCE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222BCE4;
	sub_822AD350(ctx, base);
loc_8222BCE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222BCEC;
	sub_82229BF0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,15528
	ctx.r30.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_8222BD00:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222bd5c
	if (ctx.cr6.eq) goto loc_8222BD5C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222bd48
	if (ctx.cr6.eq) goto loc_8222BD48;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222bd50
	if (ctx.cr6.eq) goto loc_8222BD50;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222bd58
	if (ctx.cr6.eq) goto loc_8222BD58;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222bd00
	if (ctx.cr6.lt) goto loc_8222BD00;
	// b 0x8222bd5c
	goto loc_8222BD5C;
loc_8222BD48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8222bd5c
	goto loc_8222BD5C;
loc_8222BD50:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x8222bd5c
	goto loc_8222BD5C;
loc_8222BD58:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_8222BD5C:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bne cr6,0x8222bd78
	if (!ctx.cr6.eq) goto loc_8222BD78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222BD74;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222BD78;
	sub_822AD350(ctx, base);
loc_8222BD78:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8222BD80;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bda0
	if (ctx.cr6.eq) goto loc_8222BDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8222BD94;
	sub_822B2288(ctx, base);
	// bl 0x8222e138
	ctx.lr = 0x8222BD98;
	sub_8222E138(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8222bda4
	goto loc_8222BDA4;
loc_8222BDA0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8222BDA4:
	// mulli r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 * 28;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x8233dd38
	ctx.lr = 0x8222BDC4;
	sub_8233DD38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8222BDD4;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-22240
	ctx.r4.s64 = ctx.r10.s64 + -22240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222BDE8;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222BDF4;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222BCC0) {
	__imp__sub_8222BCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BDFC) {
	__imp__sub_8222BDFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222BE08;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222BE10;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222be24
	if (!ctx.cr6.lt) goto loc_8222BE24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222BE24;
	sub_822AD350(ctx, base);
loc_8222BE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222BE2C;
	sub_82229BF0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,15528
	ctx.r30.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
loc_8222BE40:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222be9c
	if (ctx.cr6.eq) goto loc_8222BE9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222be88
	if (ctx.cr6.eq) goto loc_8222BE88;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222be90
	if (ctx.cr6.eq) goto loc_8222BE90;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222be98
	if (ctx.cr6.eq) goto loc_8222BE98;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222be40
	if (ctx.cr6.lt) goto loc_8222BE40;
	// b 0x8222be9c
	goto loc_8222BE9C;
loc_8222BE88:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8222be9c
	goto loc_8222BE9C;
loc_8222BE90:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x8222be9c
	goto loc_8222BE9C;
loc_8222BE98:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_8222BE9C:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bne cr6,0x8222beb8
	if (!ctx.cr6.eq) goto loc_8222BEB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222BEB4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222BEB8;
	sub_822AD350(ctx, base);
loc_8222BEB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8222BEC0;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bee0
	if (ctx.cr6.eq) goto loc_8222BEE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8222BED4;
	sub_822B2288(ctx, base);
	// bl 0x8222e138
	ctx.lr = 0x8222BED8;
	sub_8222E138(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8222bee4
	goto loc_8222BEE4;
loc_8222BEE0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8222BEE4:
	// mulli r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 * 28;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x8233dd38
	ctx.lr = 0x8222BF04;
	sub_8233DD38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8222BF14;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-22248
	ctx.r4.s64 = ctx.r10.s64 + -22248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222BF28;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222BF34;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222BE00) {
	__imp__sub_8222BE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BF3C) {
	__imp__sub_8222BF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BF40) {
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
	// bl 0x822ad190
	ctx.lr = 0x8222BF58;
	sub_822AD190(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r31,r11,15528
	ctx.r31.s64 = ctx.r11.s64 + 15528;
loc_8222BF64:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bf78
	if (ctx.cr6.eq) goto loc_8222BF78;
	// bl 0x82229b60
	ctx.lr = 0x8222BF74;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8222BF78;
	sub_822AD208(ctx, base);
loc_8222BF78:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x8222bf64
	if (!ctx.cr0.eq) goto loc_8222BF64;
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

PPC_WEAK_FUNC(sub_8222BF40) {
	__imp__sub_8222BF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222BF9C) {
	__imp__sub_8222BF9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222BFB0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222bfd8
	if (ctx.cr6.eq) goto loc_8222BFD8;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222bfb0
	if (ctx.cr6.lt) goto loc_8222BFB0;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_8222BFD8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222BFA0) {
	__imp__sub_8222BFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222BFE0) {
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
	// bl 0x822acb68
	ctx.lr = 0x8222BFF0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8222c004
	if (!ctx.cr6.lt) goto loc_8222C004;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222C004;
	sub_822AD350(ctx, base);
loc_8222C004:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222C00C;
	sub_82229BF0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222C01C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222c054
	if (ctx.cr6.eq) goto loc_8222C054;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222c01c
	if (ctx.cr6.lt) goto loc_8222C01C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x8222C044;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222C054:
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x8222c074
	if (!ctx.cr6.eq) goto loc_8222C074;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x8222C064;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222C074:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acb78
	ctx.lr = 0x8222C07C;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222BFE0) {
	__imp__sub_8222BFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C08C) {
	__imp__sub_8222C08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8222C098;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222C0A4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8222c0b8
	if (!ctx.cr6.lt) goto loc_8222C0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222C0B8;
	sub_822AD350(ctx, base);
loc_8222C0B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222C0C0;
	sub_82229BF0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,15528
	ctx.r31.s64 = ctx.r11.s64 + 15528;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222C0D8:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222c134
	if (ctx.cr6.eq) goto loc_8222C134;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222c120
	if (ctx.cr6.eq) goto loc_8222C120;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222c128
	if (ctx.cr6.eq) goto loc_8222C128;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222c130
	if (ctx.cr6.eq) goto loc_8222C130;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222c0d8
	if (ctx.cr6.lt) goto loc_8222C0D8;
	// b 0x8222c134
	goto loc_8222C134;
loc_8222C120:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8222c134
	goto loc_8222C134;
loc_8222C128:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x8222c134
	goto loc_8222C134;
loc_8222C130:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
loc_8222C134:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8222c20c
	if (!ctx.cr6.eq) goto loc_8222C20C;
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8222c15c
	if (ctx.cr6.lt) goto loc_8222C15C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10508
	ctx.r3.s64 = ctx.r11.s64 + -10508;
	// bl 0x822ad350
	ctx.lr = 0x8222C15C;
	sub_822AD350(ctx, base);
loc_8222C15C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
loc_8222C168:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222c1c4
	if (ctx.cr6.eq) goto loc_8222C1C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222c1b0
	if (ctx.cr6.eq) goto loc_8222C1B0;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222c1b8
	if (ctx.cr6.eq) goto loc_8222C1B8;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222c1c0
	if (ctx.cr6.eq) goto loc_8222C1C0;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222c168
	if (ctx.cr6.lt) goto loc_8222C168;
	// b 0x8222c1c4
	goto loc_8222C1C4;
loc_8222C1B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8222c1c4
	goto loc_8222C1C4;
loc_8222C1B8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x8222c1c4
	goto loc_8222C1C4;
loc_8222C1C0:
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
loc_8222C1C4:
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r9,312(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r6,r9,1024
	ctx.r6.u64 = ctx.r9.u64 | 67108864;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r6.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
loc_8222C20C:
	// bl 0x822acb68
	ctx.lr = 0x8222C210;
	sub_822ACB68(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mulli r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 * 28;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ble cr6,0x8222c234
	if (!ctx.cr6.gt) goto loc_8222C234;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822b2498
	ctx.lr = 0x8222C230;
	sub_822B2498(ctx, base);
	// b 0x8222c240
	goto loc_8222C240;
loc_8222C234:
	// stfsx f31,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_8222C240:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r26,r10,13712
	ctx.r26.s64 = ctx.r10.s64 + 13712;
	// lhz r4,126(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222C25C;
	sub_822E84F0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-22228
	ctx.r4.s64 = ctx.r9.s64 + -22228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222C270;
	sub_822E8C20(ctx, base);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r3,r6,-13176
	ctx.r3.s64 = ctx.r6.s64 + -13176;
	// lfsx f0,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x8222C2B4;
	sub_822E84F0(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r4,-22236
	ctx.r4.s64 = ctx.r4.s64 + -22236;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222C2C8;
	sub_822E8C20(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222C2D8;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-22240
	ctx.r4.s64 = ctx.r10.s64 + -22240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222C2EC;
	sub_822E8C20(ctx, base);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222C2FC;
	sub_822E84F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-22248
	ctx.r4.s64 = ctx.r8.s64 + -22248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222C310;
	sub_822E8C20(ctx, base);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222C320;
	sub_822E84F0(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r6,-22256
	ctx.r4.s64 = ctx.r6.s64 + -22256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8c20
	ctx.lr = 0x8222C334;
	sub_822E8C20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x8233e7d8
	ctx.lr = 0x8222C340;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222C090) {
	__imp__sub_8222C090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C34C) {
	__imp__sub_8222C34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C350) {
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
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,15528
	ctx.r8.s64 = ctx.r10.s64 + 15528;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8222C370:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222c3a4
	if (ctx.cr6.eq) goto loc_8222C3A4;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,896
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 896, ctx.xer);
	// blt cr6,0x8222c370
	if (ctx.cr6.lt) goto loc_8222C370;
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
loc_8222C3A4:
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r11,896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r11.u32);
	// addi r4,r7,-28736
	ctx.r4.s64 = ctx.r7.s64 + -28736;
	// bl 0x8233e7d8
	ctx.lr = 0x8222C3CC;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8222C350) {
	__imp__sub_8222C350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8222C3E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,15528
	ctx.r30.s64 = ctx.r11.s64 + 15528;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r27,32
	ctx.r27.s64 = 32;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
loc_8222C40C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c434
	if (ctx.cr6.eq) goto loc_8222C434;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 896, ctx.r11.u32);
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x8233e7d8
	ctx.lr = 0x8222C434;
	sub_8233E7D8(ctx, base);
loc_8222C434:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x8222c40c
	if (!ctx.cr0.eq) goto loc_8222C40C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222C3E0) {
	__imp__sub_8222C3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C44C) {
	__imp__sub_8222C44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C450) {
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
	// bl 0x822acb68
	ctx.lr = 0x8222C464;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x8222c478
	if (!ctx.cr6.lt) goto loc_8222C478;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222C478;
	sub_822AD350(ctx, base);
loc_8222C478:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222C480;
	sub_82229BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222c350
	ctx.lr = 0x8222C488;
	sub_8222C350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c4a8
	if (!ctx.cr6.eq) goto loc_8222C4A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222C4A4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222C4A8;
	sub_822AD350(ctx, base);
loc_8222C4A8:
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

PPC_WEAK_FUNC(sub_8222C450) {
	__imp__sub_8222C450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C4BC) {
	__imp__sub_8222C4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C4C0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822da650
	ctx.lr = 0x8222C4F4;
	sub_822DA650(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6770
	ctx.lr = 0x8222C504;
	sub_822D6770(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8222c520
	if (ctx.cr6.gt) goto loc_8222C520;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222c594
	goto loc_8222C594;
loc_8222C520:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f8,f31,f13
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f9,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f30,f9,f10
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x8222C558;
	sub_823DDE60(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,8336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fdivs f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fdivs f4,f30,f6
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8222C594:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C4C0) {
	__imp__sub_8222C4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C5B4) {
	__imp__sub_8222C5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8222C5C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8222C5D0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222c5e4
	if (!ctx.cr6.lt) goto loc_8222C5E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222C5E4;
	sub_822AD350(ctx, base);
loc_8222C5E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222C5EC;
	sub_82229BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x8222C5F8;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c61c
	if (!ctx.cr6.eq) goto loc_8222C61C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8222C618;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x8222C61C;
	sub_822AD548(ctx, base);
loc_8222C61C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8222C624;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8222c648
	if (ctx.cr6.gt) goto loc_8222C648;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-10472
	ctx.r4.s64 = ctx.r11.s64 + -10472;
	// bl 0x822ad4e0
	ctx.lr = 0x8222C648;
	sub_822AD4E0(ctx, base);
loc_8222C648:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,15528
	ctx.r28.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
loc_8222C65C:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222c6b8
	if (ctx.cr6.eq) goto loc_8222C6B8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222c6a4
	if (ctx.cr6.eq) goto loc_8222C6A4;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222c6ac
	if (ctx.cr6.eq) goto loc_8222C6AC;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222c6b4
	if (ctx.cr6.eq) goto loc_8222C6B4;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222c65c
	if (ctx.cr6.lt) goto loc_8222C65C;
	// b 0x8222c6b8
	goto loc_8222C6B8;
loc_8222C6A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8222c6b8
	goto loc_8222C6B8;
loc_8222C6AC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x8222c6b8
	goto loc_8222C6B8;
loc_8222C6B4:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_8222C6B8:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bne cr6,0x8222c6d4
	if (!ctx.cr6.eq) goto loc_8222C6D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222C6D0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222C6D4;
	sub_822AD350(ctx, base);
loc_8222C6D4:
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f8,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f6,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f4,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lfs f3,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8222c4c0
	ctx.lr = 0x8222C75C;
	sub_8222C4C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222C5B8) {
	__imp__sub_8222C5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C768) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8222C780;
	sub_822B1FB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8222c5b8
	ctx.lr = 0x8222C78C;
	sub_8222C5B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c7b8
	if (ctx.cr6.eq) goto loc_8222C7B8;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x8222c7bc
	if (ctx.cr6.lt) goto loc_8222C7BC;
loc_8222C7B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C7BC:
	// bl 0x822acb78
	ctx.lr = 0x8222C7C0;
	sub_822ACB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_8222C768) {
	__imp__sub_8222C768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C7D4) {
	__imp__sub_8222C7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8222C7F4;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8222C800;
	sub_822B1FB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8222c5b8
	ctx.lr = 0x8222C80C;
	sub_8222C5B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c83c
	if (ctx.cr6.eq) goto loc_8222C83C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8222c83c
	if (!ctx.cr6.lt) goto loc_8222C83C;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x8222c840
	if (ctx.cr6.lt) goto loc_8222C840;
loc_8222C83C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C840:
	// bl 0x822acb78
	ctx.lr = 0x8222C844;
	sub_822ACB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C7D8) {
	__imp__sub_8222C7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C85C) {
	__imp__sub_8222C85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C860) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222C878;
	sub_82229BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8222C884;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r10,-10448
	ctx.r3.s64 = ctx.r10.s64 + -10448;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x8222C8AC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8222C8B8;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8222C860) {
	__imp__sub_8222C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C8CC) {
	__imp__sub_8222C8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C8D0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// bl 0x822e84f0
	ctx.lr = 0x8222C8F0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x8222C8FC;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C8D0) {
	__imp__sub_8222C8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222C90C) {
	__imp__sub_8222C90C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C910) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c948
	if (ctx.cr6.eq) goto loc_8222C948;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222C928:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8222c950
	if (ctx.cr6.eq) goto loc_8222C950;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x8222c928
	if (ctx.cr6.lt) goto loc_8222C928;
loc_8222C948:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_8222C950:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C910) {
	__imp__sub_8222C910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C958) {
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
	// bl 0x8222c910
	ctx.lr = 0x8222C968;
	sub_8222C910(ctx, base);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8222c998
	if (!ctx.cr6.eq) goto loc_8222C998;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222C998:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C958) {
	__imp__sub_8222C958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222C9D8) {
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
	// bl 0x8222c910
	ctx.lr = 0x8222C9E8;
	sub_8222C910(ctx, base);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8222ca04
	if (!ctx.cr6.eq) goto loc_8222CA04;
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
loc_8222CA04:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222C9D8) {
	__imp__sub_8222C9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222CA2C) {
	__imp__sub_8222CA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222CA38;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222CA40;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222ca54
	if (!ctx.cr6.lt) goto loc_8222CA54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222CA54;
	sub_822AD350(ctx, base);
loc_8222CA54:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222CA5C;
	sub_82229BF0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8222c910
	ctx.lr = 0x8222CA64;
	sub_8222C910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8222ca84
	if (!ctx.cr6.eq) goto loc_8222CA84;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222CA80;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222CA84;
	sub_822AD350(ctx, base);
loc_8222CA84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x8222CA8C;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// addi r31,r10,15528
	ctx.r31.s64 = ctx.r10.s64 + 15528;
	// lhz r10,262(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 262);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222cac0
	if (!ctx.cr6.eq) goto loc_8222CAC0;
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x8222caf0
	goto loc_8222CAF0;
loc_8222CAC0:
	// lhz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222cae4
	if (!ctx.cr6.eq) goto loc_8222CAE4;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x8222caf0
	goto loc_8222CAF0;
loc_8222CAE4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10428
	ctx.r3.s64 = ctx.r11.s64 + -10428;
	// bl 0x822ad350
	ctx.lr = 0x8222CAF0;
	sub_822AD350(ctx, base);
loc_8222CAF0:
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x8222CB04;
	sub_8233DD38(ctx, base);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,13712
	ctx.r3.s64 = ctx.r9.s64 + 13712;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222CB1C;
	sub_822E84F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-22256
	ctx.r4.s64 = ctx.r8.s64 + -22256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222CB30;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222CB3C;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222CA30) {
	__imp__sub_8222CA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222CB44) {
	__imp__sub_8222CB44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CB48) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8222CB60;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222cb74
	if (!ctx.cr6.lt) goto loc_8222CB74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222CB74;
	sub_822AD350(ctx, base);
loc_8222CB74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222CB7C;
	sub_82229BF0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8222c910
	ctx.lr = 0x8222CB84;
	sub_8222C910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8222cba4
	if (!ctx.cr6.eq) goto loc_8222CBA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// addi r3,r11,-10556
	ctx.r3.s64 = ctx.r11.s64 + -10556;
	// bl 0x822e84f0
	ctx.lr = 0x8222CBA0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222CBA4;
	sub_822AD350(ctx, base);
loc_8222CBA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x8222CBAC;
	sub_822B1C50(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// bne cr6,0x8222cbd4
	if (!ctx.cr6.eq) goto loc_8222CBD4;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8222CBD4:
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x8222CBEC;
	sub_8233DD38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8222CBFC;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-22256
	ctx.r4.s64 = ctx.r10.s64 + -22256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222CC10;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222CC1C;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_8222CB48) {
	__imp__sub_8222CB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222CC34) {
	__imp__sub_8222CC34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222CC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8222CC4C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8222cc60
	if (!ctx.cr6.lt) goto loc_8222CC60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// bl 0x822ad350
	ctx.lr = 0x8222CC60;
	sub_822AD350(ctx, base);
loc_8222CC60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x8222CC68;
	sub_82229BF0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8222c910
	ctx.lr = 0x8222CC70;
	sub_8222C910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x8222cc90
	if (!ctx.cr6.eq) goto loc_8222CC90;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// bl 0x822e84f0
	ctx.lr = 0x8222CC8C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222CC90;
	sub_822AD350(ctx, base);
loc_8222CC90:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x8222CC98;
	sub_82229BF0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8222ccbc
	if (ctx.cr6.eq) goto loc_8222CCBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,126(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r3,r11,-10372
	ctx.r3.s64 = ctx.r11.s64 + -10372;
	// bl 0x822e84f0
	ctx.lr = 0x8222CCB8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222CCBC;
	sub_822AD350(ctx, base);
loc_8222CCBC:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// mulli r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 * 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,15528
	ctx.r10.s64 = ctx.r10.s64 + 15528;
	// beq cr6,0x8222cd08
	if (ctx.cr6.eq) goto loc_8222CD08;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// b 0x8222cd1c
	goto loc_8222CD1C;
loc_8222CD08:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8222CD1C:
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233dd38
	ctx.lr = 0x8222CD30;
	sub_8233DD38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8222CD40;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-22256
	ctx.r4.s64 = ctx.r10.s64 + -22256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8c20
	ctx.lr = 0x8222CD54;
	sub_822E8C20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222CD60;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222CC38) {
	__imp__sub_8222CC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CD68) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222cc38
	sub_8222CC38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222CD68) {
	__imp__sub_8222CD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CD70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222cc38
	sub_8222CC38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222CD70) {
	__imp__sub_8222CD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CD78) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ac8c0
	ctx.lr = 0x8222CD9C;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222ce18
	if (ctx.cr6.eq) goto loc_8222CE18;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,9200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9200);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x8222cddc
	if (!ctx.cr6.eq) goto loc_8222CDDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x8222CDC0;
	sub_82229B60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,266(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// bl 0x82229da8
	ctx.lr = 0x8222CDD8;
	sub_82229DA8(ctx, base);
	// b 0x8222ce18
	goto loc_8222CE18;
loc_8222CDDC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,3056
	ctx.r8.s64 = ctx.r10.s64 + 3056;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,9200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9200, ctx.r11.u32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// sthx r7,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u16);
	// lhz r6,126(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_8222CE18:
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

PPC_WEAK_FUNC(sub_8222CD78) {
	__imp__sub_8222CD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CE30) {
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
	// bl 0x8233cb90
	ctx.lr = 0x8222CE48;
	sub_8233CB90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222cea8
	if (!ctx.cr6.eq) goto loc_8222CEA8;
	// lfs f3,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-10248
	ctx.r4.s64 = ctx.r11.s64 + -10248;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280b08
	ctx.lr = 0x8222CE88;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x8222CE90;
	sub_8222F680(ctx, base);
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
loc_8222CEA8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,16476
	ctx.r10.s64 = 1079771136;
	// lhz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r10,8
	ctx.r7.u64 = ctx.r10.u64 | 8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r8,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r8.u8);
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8222cedc
	if (!ctx.cr6.eq) goto loc_8222CEDC;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8222CEDC:
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

PPC_WEAK_FUNC(sub_8222CE30) {
	__imp__sub_8222CE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222CEF4) {
	__imp__sub_8222CEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CEF8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222cf68
	if (ctx.cr6.eq) goto loc_8222CF68;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-10180
	ctx.r3.s64 = ctx.r10.s64 + -10180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e8
	ctx.lr = 0x8222CF40;
	sub_822293E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222cf68
	if (ctx.cr6.eq) goto loc_8222CF68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8222cf68
	if (ctx.cr6.gt) goto loc_8222CF68;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// or r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 | ctx.r11.u64;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
loc_8222CF68:
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

PPC_WEAK_FUNC(sub_8222CEF8) {
	__imp__sub_8222CEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222CF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8222cfa0
	if (!ctx.cr6.eq) goto loc_8222CFA0;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
loc_8222CFA0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222cfb8
	if (ctx.cr6.eq) goto loc_8222CFB8;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
loc_8222CFB8:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222cfd0
	if (ctx.cr6.eq) goto loc_8222CFD0;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// oris r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 524288;
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
loc_8222CFD0:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222cfe8
	if (ctx.cr6.eq) goto loc_8222CFE8;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// oris r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 1048576;
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
loc_8222CFE8:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222d000
	if (ctx.cr6.eq) goto loc_8222D000;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
loc_8222D000:
	// b 0x82340d30
	sub_82340D30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222CF80) {
	__imp__sub_8222CF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D004) {
	__imp__sub_8222D004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222D008) {
	__imp__sub_8222D008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D028) {
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
	// bl 0x8222cd78
	ctx.lr = 0x8222D040;
	sub_8222CD78(ctx, base);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d05c
	if (ctx.cr6.eq) goto loc_8222D05C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
loc_8222D05C:
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

PPC_WEAK_FUNC(sub_8222D028) {
	__imp__sub_8222D028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D070) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,64
	ctx.r4.s64 = 64;
	// stb r11,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cef8
	ctx.lr = 0x8222D094;
	sub_8222CEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ce30
	ctx.lr = 0x8222D09C;
	sub_8222CE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222d0b0
	if (ctx.cr6.eq) goto loc_8222D0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf80
	ctx.lr = 0x8222D0B0;
	sub_8222CF80(ctx, base);
loc_8222D0B0:
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

PPC_WEAK_FUNC(sub_8222D070) {
	__imp__sub_8222D070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D0C4) {
	__imp__sub_8222D0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D0C8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lbz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222d1b0
	if (ctx.cr6.eq) goto loc_8222D1B0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-9968
	ctx.r3.s64 = ctx.r10.s64 + -9968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x822293e8
	ctx.lr = 0x8222D110;
	sub_822293E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d154
	if (!ctx.cr6.eq) goto loc_8222D154;
	// lfs f3,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8222D148;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222D154;
	sub_822830E8(ctx, base);
loc_8222D154:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e8
	ctx.lr = 0x8222D168;
	sub_822293E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d1e0
	if (!ctx.cr6.eq) goto loc_8222D1E0;
	// lfs f2,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f3,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8222D1A0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222D1AC;
	sub_822830E8(ctx, base);
	// b 0x8222d1e0
	goto loc_8222D1E0;
loc_8222D1B0:
	// bl 0x822acb68
	ctx.lr = 0x8222D1B4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bge cr6,0x8222d1c8
	if (!ctx.cr6.lt) goto loc_8222D1C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// bl 0x822ad350
	ctx.lr = 0x8222D1C8;
	sub_822AD350(ctx, base);
loc_8222D1C8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8222D1D0;
	sub_822B1FB0(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x8222D1DC;
	sub_822B1FB0(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8222D1E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r8.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stfs f10,188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f12,192(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f9,200(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stb r10,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r10.u8);
	// stb r10,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r10.u8);
	// bl 0x8222cef8
	ctx.lr = 0x8222D23C;
	sub_8222CEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf80
	ctx.lr = 0x8222D244;
	sub_8222CF80(ctx, base);
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

PPC_WEAK_FUNC(sub_8222D0C8) {
	__imp__sub_8222D0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D25C) {
	__imp__sub_8222D25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D260) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-9968
	ctx.r3.s64 = ctx.r10.s64 + -9968;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e8
	ctx.lr = 0x8222D28C;
	sub_822293E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d2d0
	if (!ctx.cr6.eq) goto loc_8222D2D0;
	// lfs f3,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8222D2C4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222D2D0;
	sub_822830E8(ctx, base);
loc_8222D2D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r8.u8);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-9960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9960);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stb r7,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r7.u8);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r6,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r6.u8);
	// bl 0x8222cef8
	ctx.lr = 0x8222D334;
	sub_8222CEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf80
	ctx.lr = 0x8222D33C;
	sub_8222CF80(ctx, base);
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

PPC_WEAK_FUNC(sub_8222D260) {
	__imp__sub_8222D260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222D358;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,289(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 289);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d438
	if (ctx.cr6.eq) goto loc_8222D438;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d38c
	if (ctx.cr6.eq) goto loc_8222D38C;
	// lwz r11,268(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222d438
	if (!ctx.cr6.eq) goto loc_8222D438;
loc_8222D38C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8222d438
	if (ctx.cr6.gt) goto loc_8222D438;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cd78
	ctx.lr = 0x8222D3B0;
	sub_8222CD78(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,344(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,332(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// bl 0x821f1080
	ctx.lr = 0x8222D3F0;
	sub_821F1080(ctx, base);
	// lwz r4,332(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8222d420
	if (ctx.cr6.eq) goto loc_8222D420;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d418
	if (ctx.cr6.eq) goto loc_8222D418;
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// b 0x8222d41c
	goto loc_8222D41C;
loc_8222D418:
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
loc_8222D41C:
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_8222D420:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d438
	if (ctx.cr6.eq) goto loc_8222D438;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r11.u8);
loc_8222D438:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222D350) {
	__imp__sub_8222D350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D440) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,291(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 291);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stb r8,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222D440) {
	__imp__sub_8222D440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D460) {
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
	// bl 0x8222ce30
	ctx.lr = 0x8222D47C;
	sub_8222CE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d4d0
	if (ctx.cr6.eq) goto loc_8222D4D0;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r30,5
	ctx.r30.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222d49c
	if (!ctx.cr6.eq) goto loc_8222D49C;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_8222D49C:
	// lis r11,16476
	ctx.r11.s64 = 1079771136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// bl 0x82340d30
	ctx.lr = 0x8222D4B0;
	sub_82340D30(ctx, base);
	// lwz r9,308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8222d4cc
	if (!ctx.cr6.eq) goto loc_8222D4CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r11.u8);
	// b 0x8222d4d0
	goto loc_8222D4D0;
loc_8222D4CC:
	// stb r30,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r30.u8);
loc_8222D4D0:
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

PPC_WEAK_FUNC(sub_8222D460) {
	__imp__sub_8222D460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D4E8) {
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
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// stb r10,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r10.u8);
	// stw r9,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r9.u32);
	// bl 0x8222ce30
	ctx.lr = 0x8222D514;
	sub_8222CE30(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8222d528
	if (ctx.cr6.eq) goto loc_8222D528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cf80
	ctx.lr = 0x8222D528;
	sub_8222CF80(ctx, base);
loc_8222D528:
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

PPC_WEAK_FUNC(sub_8222D4E8) {
	__imp__sub_8222D4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D53C) {
	__imp__sub_8222D53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d560
	if (ctx.cr6.eq) goto loc_8222D560;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8222d560
	if (!ctx.cr6.eq) goto loc_8222D560;
loc_8222D558:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8222D560:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d574
	if (ctx.cr6.eq) goto loc_8222D574;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
loc_8222D574:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d590
	if (ctx.cr6.eq) goto loc_8222D590;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x8222d590
	if (ctx.cr6.lt) goto loc_8222D590;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x8222d558
	if (!ctx.cr6.gt) goto loc_8222D558;
loc_8222D590:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d5ac
	if (ctx.cr6.eq) goto loc_8222D5AC;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
loc_8222D5AC:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d5c8
	if (ctx.cr6.eq) goto loc_8222D5C8;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
loc_8222D5C8:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222d5dc
	if (ctx.cr6.eq) goto loc_8222D5DC;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
loc_8222D5DC:
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222d600
	if (ctx.cr6.eq) goto loc_8222D600;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8222d558
	if (ctx.cr6.eq) goto loc_8222D558;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// ble cr6,0x8222d600
	if (!ctx.cr6.gt) goto loc_8222D600;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// ble cr6,0x8222d558
	if (!ctx.cr6.gt) goto loc_8222D558;
loc_8222D600:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222D540) {
	__imp__sub_8222D540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D608) {
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
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222d634
	if (!ctx.cr6.gt) goto loc_8222D634;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222d6a8
	if (ctx.cr6.lt) goto loc_8222D6A8;
loc_8222D634:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d540
	ctx.lr = 0x8222D640;
	sub_8222D540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d6a8
	if (ctx.cr6.eq) goto loc_8222D6A8;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// beq cr6,0x8222d670
	if (ctx.cr6.eq) goto loc_8222D670;
	// subfic r10,r10,32000
	ctx.xer.ca = ctx.r10.u32 <= 32000;
	ctx.r10.s64 = 32000 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222d6a8
	if (ctx.cr6.lt) goto loc_8222D6A8;
loc_8222D670:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x8222d684
	if (ctx.cr6.eq) goto loc_8222D684;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222cd78
	ctx.lr = 0x8222D684;
	sub_8222CD78(ctx, base);
loc_8222D684:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r10,32000
	ctx.r10.s64 = 32000;
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222d6a8
	if (ctx.cr6.eq) goto loc_8222D6A8;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
loc_8222D6A8:
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

PPC_WEAK_FUNC(sub_8222D608) {
	__imp__sub_8222D608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D6BC) {
	__imp__sub_8222D6BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x8222d608
	sub_8222D608(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222D6C0) {
	__imp__sub_8222D6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D6D0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222d608
	ctx.lr = 0x8222D6EC;
	sub_8222D608(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222d700
	if (!ctx.cr6.eq) goto loc_8222D700;
	// li r11,32000
	ctx.r11.s64 = 32000;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_8222D700:
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

PPC_WEAK_FUNC(sub_8222D6D0) {
	__imp__sub_8222D6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D714) {
	__imp__sub_8222D714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D718) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222d608
	ctx.lr = 0x8222D73C;
	sub_8222D608(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222d750
	if (!ctx.cr6.eq) goto loc_8222D750;
	// li r11,32000
	ctx.r11.s64 = 32000;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_8222D750:
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

PPC_WEAK_FUNC(sub_8222D718) {
	__imp__sub_8222D718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222D764) {
	__imp__sub_8222D764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D768) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,8244
	ctx.r30.s64 = ctx.r11.s64 + 8244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,356
	ctx.r5.s64 = ctx.r3.s64 + 356;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-9944
	ctx.r3.s64 = ctx.r10.s64 + -9944;
	// bl 0x82229450
	ctx.lr = 0x8222D79C;
	sub_82229450(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,-9956
	ctx.r3.s64 = ctx.r9.s64 + -9956;
	// bl 0x82229450
	ctx.lr = 0x8222D7B0;
	sub_82229450(ctx, base);
	// li r8,32000
	ctx.r8.s64 = 32000;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// stb r7,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r6.u8);
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8222cef8
	ctx.lr = 0x8222D7D4;
	sub_8222CEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ce30
	ctx.lr = 0x8222D7DC;
	sub_8222CE30(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222d7f0
	if (ctx.cr6.eq) goto loc_8222D7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8222D7F0;
	sub_82340D30(ctx, base);
loc_8222D7F0:
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

PPC_WEAK_FUNC(sub_8222D768) {
	__imp__sub_8222D768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222D808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8222D810;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8480(r1)
	ea = -8480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// fmuls f2,f8,f8
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f10,f3,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmadds f6,f9,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fabs f5,f11
	ctx.f5.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsqrts f1,f6
	ctx.f1.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f12,f0,f13,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x8222D8FC;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8222da2c
	if (!ctx.cr6.gt) goto loc_8222DA2C;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lfs f31,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r21,r1,160
	ctx.r21.s64 = ctx.r1.s64 + 160;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r19,32000
	ctx.r19.s64 = 32000;
	// addi r25,r11,-5928
	ctx.r25.s64 = ctx.r11.s64 + -5928;
	// addi r24,r10,7880
	ctx.r24.s64 = ctx.r10.s64 + 7880;
	// addi r30,r9,-25976
	ctx.r30.s64 = ctx.r9.s64 + -25976;
	// addi r23,r8,26552
	ctx.r23.s64 = ctx.r8.s64 + 26552;
loc_8222D938:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lhz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 272);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r8,292(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222da20
	if (!ctx.cr6.eq) goto loc_8222DA20;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82342300
	ctx.lr = 0x8222D968;
	sub_82342300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222da20
	if (ctx.cr6.eq) goto loc_8222DA20;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820eb998
	ctx.lr = 0x8222D97C;
	sub_820EB998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222d9bc
	if (!ctx.cr6.eq) goto loc_8222D9BC;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x8222D9B4;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222da20
	if (!ctx.cr6.eq) goto loc_8222DA20;
loc_8222D9BC:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x8222D9CC;
	sub_822ACFF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822ad078
	ctx.lr = 0x8222D9D4;
	sub_822AD078(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8222D9DC;
	sub_822AD078(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229b60
	ctx.lr = 0x8222D9E4;
	sub_82229B60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822acbf8
	ctx.lr = 0x8222D9EC;
	sub_822ACBF8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,42(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// bl 0x82229da8
	ctx.lr = 0x8222D9FC;
	sub_82229DA8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d608
	ctx.lr = 0x8222DA10;
	sub_8222D608(ctx, base);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8222da20
	if (!ctx.cr6.eq) goto loc_8222DA20;
	// stw r19,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r19.u32);
loc_8222DA20:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bne 0x8222d938
	if (!ctx.cr0.eq) goto loc_8222D938;
loc_8222DA2C:
	// addi r1,r1,8480
	ctx.r1.s64 = ctx.r1.s64 + 8480;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222D808) {
	__imp__sub_8222D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8222DA40;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8432(r1)
	ea = -8432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// fmuls f2,f8,f8
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fmadds f7,f9,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fabs f6,f12
	ctx.f6.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fabs f5,f11
	ctx.f5.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsqrts f2,f7
	ctx.f2.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f0,f1,f13,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x8222DB24;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8222dc10
	if (!ctx.cr6.gt) goto loc_8222DC10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r19,32000
	ctx.r19.s64 = 32000;
	// addi r26,r11,-5928
	ctx.r26.s64 = ctx.r11.s64 + -5928;
	// addi r25,r10,7880
	ctx.r25.s64 = ctx.r10.s64 + 7880;
	// addi r30,r9,-25976
	ctx.r30.s64 = ctx.r9.s64 + -25976;
	// addi r24,r8,26552
	ctx.r24.s64 = ctx.r8.s64 + 26552;
loc_8222DB58:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 272);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lhz r8,292(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222dc04
	if (!ctx.cr6.eq) goto loc_8222DC04;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222dc04
	if (ctx.cr6.eq) goto loc_8222DC04;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82342300
	ctx.lr = 0x8222DB98;
	sub_82342300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dc04
	if (ctx.cr6.eq) goto loc_8222DC04;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x8222DBB0;
	sub_822ACFF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ad078
	ctx.lr = 0x8222DBB8;
	sub_822AD078(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8222DBC0;
	sub_822AD078(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229b60
	ctx.lr = 0x8222DBC8;
	sub_82229B60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822acbf8
	ctx.lr = 0x8222DBD0;
	sub_822ACBF8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,42(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// bl 0x82229da8
	ctx.lr = 0x8222DBE0;
	sub_82229DA8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222d608
	ctx.lr = 0x8222DBF4;
	sub_8222D608(ctx, base);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8222dc04
	if (!ctx.cr6.eq) goto loc_8222DC04;
	// stw r19,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r19.u32);
loc_8222DC04:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x8222db58
	if (!ctx.cr0.eq) goto loc_8222DB58;
loc_8222DC10:
	// addi r1,r1,8432
	ctx.r1.s64 = ctx.r1.s64 + 8432;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DA38) {
	__imp__sub_8222DA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8222DC20;
	__savegprlr_27(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233cb90
	ctx.lr = 0x8222DC2C;
	sub_8233CB90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222dc7c
	if (!ctx.cr6.eq) goto loc_8222DC7C;
	// lfs f3,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-9800
	ctx.r4.s64 = ctx.r11.s64 + -9800;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280b08
	ctx.lr = 0x8222DC6C;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x8222DC74;
	sub_8222F680(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222DC7C:
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x82340d30
	ctx.lr = 0x8222DC8C;
	sub_82340D30(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stb r30,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r30.u8);
	// lhz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222dcd4
	if (!ctx.cr6.eq) goto loc_8222DCD4;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8222DCD4:
	// stb r27,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r27.u8);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-9812
	ctx.r3.s64 = ctx.r10.s64 + -9812;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293c8
	ctx.lr = 0x8222DCF8;
	sub_822293C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dd5c
	if (ctx.cr6.eq) goto loc_8222DD5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x822e8058
	ctx.lr = 0x8222DD10;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222dd24
	if (!ctx.cr6.eq) goto loc_8222DD24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x8222dd5c
	goto loc_8222DD5C;
loc_8222DD24:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r11,r11,13460
	ctx.r11.s64 = ctx.r11.s64 + 13460;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_8222DD30:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822e8058
	ctx.lr = 0x8222DD3C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222dd58
	if (ctx.cr6.eq) goto loc_8222DD58;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x8222dd30
	if (ctx.cr6.lt) goto loc_8222DD30;
	// b 0x8222dd5c
	goto loc_8222DD5C;
loc_8222DD58:
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_8222DD5C:
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r10,-9824
	ctx.r3.s64 = ctx.r10.s64 + -9824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293c8
	ctx.lr = 0x8222DD78;
	sub_822293C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222de10
	if (ctx.cr6.eq) goto loc_8222DE10;
loc_8222DD80:
	// addi r30,r27,112
	ctx.r30.s64 = ctx.r27.s64 + 112;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233dd38
	ctx.lr = 0x8222DD94;
	sub_8233DD38(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222dde4
	if (ctx.cr6.eq) goto loc_8222DDE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8222DDA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222ddcc
	if (ctx.cr6.eq) goto loc_8222DDCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222dda8
	if (ctx.cr6.eq) goto loc_8222DDA8;
loc_8222DDCC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8222ddf0
	if (ctx.cr6.eq) goto loc_8222DDF0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// blt cr6,0x8222dd80
	if (ctx.cr6.lt) goto loc_8222DD80;
	// b 0x8222ddf4
	goto loc_8222DDF4;
loc_8222DDE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233e7d8
	ctx.lr = 0x8222DDF0;
	sub_8233E7D8(ctx, base);
loc_8222DDF0:
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
loc_8222DDF4:
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bne cr6,0x8222de10
	if (!ctx.cr6.eq) goto loc_8222DE10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222DE10;
	sub_822830E8(ctx, base);
loc_8222DE10:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DC18) {
	__imp__sub_8222DC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8222dc18
	sub_8222DC18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DE18) {
	__imp__sub_8222DE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222DE1C) {
	__imp__sub_8222DE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8222dc18
	sub_8222DC18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DE20) {
	__imp__sub_8222DE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222DE24) {
	__imp__sub_8222DE24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DE28) {
	__imp__sub_8222DE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222DE3C) {
	__imp__sub_8222DE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8222DE48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222deec
	if (ctx.cr6.eq) goto loc_8222DEEC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222deec
	if (ctx.cr6.eq) goto loc_8222DEEC;
	// cmpwi cr6,r4,1167
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1167, ctx.xer);
	// blt cr6,0x8222de84
	if (ctx.cr6.lt) goto loc_8222DE84;
	// bl 0x822a1838
	ctx.lr = 0x8222DE80;
	sub_822A1838(ctx, base);
	// b 0x8222de88
	goto loc_8222DE88;
loc_8222DE84:
	// bl 0x822a1810
	ctx.lr = 0x8222DE88;
	sub_822A1810(ctx, base);
loc_8222DE88:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x8222dec4
	if (!ctx.cr6.gt) goto loc_8222DEC4;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222DE9C:
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8233dd98
	ctx.lr = 0x8222DEA4;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222dec4
	if (ctx.cr6.eq) goto loc_8222DEC4;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8222df2c
	if (ctx.cr6.eq) goto loc_8222DF2C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8222de9c
	if (ctx.cr6.lt) goto loc_8222DE9C;
loc_8222DEC4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8222def8
	if (!ctx.cr6.eq) goto loc_8222DEF8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8222deec
	if (ctx.cr6.eq) goto loc_8222DEEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9428
	ctx.r3.s64 = ctx.r11.s64 + -9428;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222DEE8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222DEEC;
	sub_822AD350(ctx, base);
loc_8222DEEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8222DEF8:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8222df20
	if (!ctx.cr6.eq) goto loc_8222DF20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222DF14;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222DF20;
	sub_822830E8(ctx, base);
loc_8222DF20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8222DF2C;
	sub_8233E7D8(ctx, base);
loc_8222DF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DE40) {
	__imp__sub_8222DE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222DF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8222DF40;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222df60
	if (!ctx.cr6.eq) goto loc_8222DF60;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8222DF60:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r22,-32191
	ctx.r22.s64 = -2109669376;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lis r25,-31859
	ctx.r25.s64 = -2087911424;
	// lis r24,-31859
	ctx.r24.s64 = -2087911424;
	// lwz r29,13548(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13548);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222dfb4
	if (!ctx.cr6.eq) goto loc_8222DFB4;
	// lwz r11,31488(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31488);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222dfa0
	if (!ctx.cr6.eq) goto loc_8222DFA0;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8222dfb4
	goto loc_8222DFB4;
loc_8222DFA0:
	// lwz r11,31484(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 31484);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_8222DFB4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a1810
	ctx.lr = 0x8222DFBC;
	sub_822A1810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r28,-31961
	ctx.r28.s64 = -2094596096;
loc_8222DFC8:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8233dd98
	ctx.lr = 0x8222DFD0;
	sub_8233DD98(ctx, base);
	// lhz r10,-25976(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + -25976);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// addi r27,r11,-9476
	ctx.r27.s64 = ctx.r11.s64 + -9476;
	// beq cr6,0x8222dff8
	if (ctx.cr6.eq) goto loc_8222DFF8;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8222e058
	if (ctx.cr6.eq) goto loc_8222E058;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// blt cr6,0x8222dfc8
	if (ctx.cr6.lt) goto loc_8222DFC8;
loc_8222DFF8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8222e028
	if (!ctx.cr6.eq) goto loc_8222E028;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222e020
	if (ctx.cr6.eq) goto loc_8222E020;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,-9428
	ctx.r3.s64 = ctx.r11.s64 + -9428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222E01C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222E020;
	sub_822AD350(ctx, base);
loc_8222E020:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8222e068
	goto loc_8222E068;
loc_8222E028:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bne cr6,0x8222e04c
	if (!ctx.cr6.eq) goto loc_8222E04C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x822e84f0
	ctx.lr = 0x8222E040;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E04C;
	sub_822830E8(ctx, base);
loc_8222E04C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E058;
	sub_8233E7D8(ctx, base);
loc_8222E058:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8222e11c
	if (!ctx.cr6.eq) goto loc_8222E11C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8222e11c
	if (!ctx.cr6.eq) goto loc_8222E11C;
loc_8222E068:
	// lwz r11,31488(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31488);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e11c
	if (ctx.cr6.eq) goto loc_8222E11C;
	// lwz r11,31484(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 31484);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e11c
	if (!ctx.cr6.eq) goto loc_8222E11C;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e128
	if (ctx.cr6.eq) goto loc_8222E128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a1810
	ctx.lr = 0x8222E09C;
	sub_822A1810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8222E0A4:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8233dd98
	ctx.lr = 0x8222E0AC;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e0cc
	if (ctx.cr6.eq) goto loc_8222E0CC;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8222e0fc
	if (ctx.cr6.eq) goto loc_8222E0FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// blt cr6,0x8222e0a4
	if (ctx.cr6.lt) goto loc_8222E0A4;
loc_8222E0CC:
	// cmpwi cr6,r31,1023
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1023, ctx.xer);
	// bne cr6,0x8222e0f0
	if (!ctx.cr6.eq) goto loc_8222E0F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x822e84f0
	ctx.lr = 0x8222E0E4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E0F0;
	sub_822830E8(ctx, base);
loc_8222E0F0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E0FC;
	sub_8233E7D8(ctx, base);
loc_8222E0FC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8222e11c
	if (ctx.cr6.eq) goto loc_8222E11C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,13548(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13548);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r4,r11,-9404
	ctx.r4.s64 = ctx.r11.s64 + -9404;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8222E11C;
	sub_82280B08(ctx, base);
loc_8222E11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8222E128:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222DF38) {
	__imp__sub_8222DF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E140;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_8222E150:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8222e150
	if (!ctx.cr6.eq) goto loc_8222E150;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8188
	ctx.lr = 0x8222E16C;
	sub_822E8188(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r28,36(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// beq cr6,0x8222e1e4
	if (ctx.cr6.eq) goto loc_8222E1E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a1838
	ctx.lr = 0x8222E18C;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E198:
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// bl 0x8233dd98
	ctx.lr = 0x8222E1A0;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e1c0
	if (ctx.cr6.eq) goto loc_8222E1C0;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e224
	if (ctx.cr6.eq) goto loc_8222E224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// blt cr6,0x8222e198
	if (ctx.cr6.lt) goto loc_8222E198;
loc_8222E1C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8222e1f0
	if (!ctx.cr6.eq) goto loc_8222E1F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,12792
	ctx.r4.s64 = ctx.r11.s64 + 12792;
	// addi r3,r10,-9428
	ctx.r3.s64 = ctx.r10.s64 + -9428;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822e84f0
	ctx.lr = 0x8222E1E0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222E1E4;
	sub_822AD350(ctx, base);
loc_8222E1E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222E1F0:
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bne cr6,0x8222e218
	if (!ctx.cr6.eq) goto loc_8222E218;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,2824
	ctx.r4.s64 = 2824;
	// bl 0x822e84f0
	ctx.lr = 0x8222E20C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E218;
	sub_822830E8(ctx, base);
loc_8222E218:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E224;
	sub_8233E7D8(ctx, base);
loc_8222E224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E138) {
	__imp__sub_8222E138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e258
	if (!ctx.cr6.eq) goto loc_8222E258;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222E258:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a1838
	ctx.lr = 0x8222E260;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E26C:
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// bl 0x8233dd98
	ctx.lr = 0x8222E274;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e294
	if (ctx.cr6.eq) goto loc_8222E294;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e2f8
	if (ctx.cr6.eq) goto loc_8222E2F8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// blt cr6,0x8222e26c
	if (ctx.cr6.lt) goto loc_8222E26C;
loc_8222E294:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222e2bc
	if (!ctx.cr6.eq) goto loc_8222E2BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// bl 0x822e84f0
	ctx.lr = 0x8222E2B8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222E2BC;
	sub_822AD350(ctx, base);
loc_8222E2BC:
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// bne cr6,0x8222e2d4
	if (!ctx.cr6.eq) goto loc_8222E2D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-9352
	ctx.r4.s64 = ctx.r11.s64 + -9352;
	// bl 0x822830e8
	ctx.lr = 0x8222E2D4;
	sub_822830E8(ctx, base);
loc_8222E2D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233cf00
	ctx.lr = 0x8222E2DC;
	sub_8233CF00(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E2F8;
	sub_8233E7D8(ctx, base);
loc_8222E2F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E230) {
	__imp__sub_8222E230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E304) {
	__imp__sub_8222E304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222E308) {
	__imp__sub_8222E308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E31C) {
	__imp__sub_8222E31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E320) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822d7a40
	ctx.lr = 0x8222E350;
	sub_822D7A40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300850
	ctx.lr = 0x8222E360;
	sub_82300850(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_8222E320) {
	__imp__sub_8222E320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,284(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222E380) {
	__imp__sub_8222E380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x822ff4e8
	sub_822FF4E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E398) {
	__imp__sub_8222E398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E3AC) {
	__imp__sub_8222E3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E3B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// b 0x8233dd98
	sub_8233DD98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E3B0) {
	__imp__sub_8222E3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222E3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822da650
	ctx.lr = 0x8222E3DC;
	sub_822DA650(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f11,f10,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f9,f13,f6,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmadds f7,f12,f5,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmadds f13,f6,f3,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fmadds f11,f5,f2,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f9,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f7,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f5,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E3B8) {
	__imp__sub_8222E3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E48C) {
	__imp__sub_8222E48C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E490) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// b 0x8222e3b8
	sub_8222E3B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E490) {
	__imp__sub_8222E490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E49C) {
	__imp__sub_8222E49C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E4A0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822da650
	ctx.lr = 0x8222E4E0;
	sub_822DA650(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f30,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f10.f64));
	// lfs f8,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f29,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f7.f64));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f8,f4,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f6,f3,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f2,f5,f13
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f1,f5,f8
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f2,f0,f5,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f1,f11,f9,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f4.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f0,f10,f12,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f13,f7,f12,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222E4A0) {
	__imp__sub_8222E4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E5A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e63c
	if (ctx.cr6.eq) goto loc_8222E63C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e63c
	if (ctx.cr6.eq) goto loc_8222E63C;
	// bl 0x822a1838
	ctx.lr = 0x8222E5C8;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E5D4:
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// bl 0x8233dd98
	ctx.lr = 0x8222E5DC;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e5fc
	if (ctx.cr6.eq) goto loc_8222E5FC;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e630
	if (ctx.cr6.eq) goto loc_8222E630;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x8222e5d4
	if (ctx.cr6.lt) goto loc_8222E5D4;
loc_8222E5FC:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bne cr6,0x8222e624
	if (!ctx.cr6.eq) goto loc_8222E624;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,2952
	ctx.r4.s64 = 2952;
	// bl 0x822e84f0
	ctx.lr = 0x8222E618;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E624;
	sub_822830E8(ctx, base);
loc_8222E624:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E630;
	sub_8233E7D8(ctx, base);
loc_8222E630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222E63C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E5A0) {
	__imp__sub_8222E5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8222E650;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,36(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// beq cr6,0x8222e6d4
	if (ctx.cr6.eq) goto loc_8222E6D4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e6d4
	if (ctx.cr6.eq) goto loc_8222E6D4;
	// bl 0x822a1838
	ctx.lr = 0x8222E67C;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E688:
	// addi r3,r31,2264
	ctx.r3.s64 = ctx.r31.s64 + 2264;
	// bl 0x8233dd98
	ctx.lr = 0x8222E690;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e6b0
	if (ctx.cr6.eq) goto loc_8222E6B0;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e714
	if (ctx.cr6.eq) goto loc_8222E714;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8222e688
	if (ctx.cr6.lt) goto loc_8222E688;
loc_8222E6B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222e6e0
	if (!ctx.cr6.eq) goto loc_8222E6E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-9300
	ctx.r4.s64 = ctx.r11.s64 + -9300;
	// addi r3,r10,-9428
	ctx.r3.s64 = ctx.r10.s64 + -9428;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8222E6D0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222E6D4;
	sub_822AD350(ctx, base);
loc_8222E6D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8222E6E0:
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bne cr6,0x8222e708
	if (!ctx.cr6.eq) goto loc_8222E708;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,2264
	ctx.r4.s64 = 2264;
	// bl 0x822e84f0
	ctx.lr = 0x8222E6FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E708;
	sub_822830E8(ctx, base);
loc_8222E708:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,2264
	ctx.r3.s64 = ctx.r31.s64 + 2264;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E714;
	sub_8233E7D8(ctx, base);
loc_8222E714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E648) {
	__imp__sub_8222E648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e7bc
	if (ctx.cr6.eq) goto loc_8222E7BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e7bc
	if (ctx.cr6.eq) goto loc_8222E7BC;
	// bl 0x822a1838
	ctx.lr = 0x8222E748;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E754:
	// addi r3,r31,2776
	ctx.r3.s64 = ctx.r31.s64 + 2776;
	// bl 0x8233dd98
	ctx.lr = 0x8222E75C;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e77c
	if (ctx.cr6.eq) goto loc_8222E77C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e7b0
	if (ctx.cr6.eq) goto loc_8222E7B0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8222e754
	if (ctx.cr6.lt) goto loc_8222E754;
loc_8222E77C:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bne cr6,0x8222e7a4
	if (!ctx.cr6.eq) goto loc_8222E7A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,2776
	ctx.r4.s64 = 2776;
	// bl 0x822e84f0
	ctx.lr = 0x8222E798;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E7A4;
	sub_822830E8(ctx, base);
loc_8222E7A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,2776
	ctx.r3.s64 = ctx.r31.s64 + 2776;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E7B0;
	sub_8233E7D8(ctx, base);
loc_8222E7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222E7BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E720) {
	__imp__sub_8222E720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E7C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,512
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 512, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222E7C8) {
	__imp__sub_8222E7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8222E7F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222e818
	if (!ctx.cr6.eq) goto loc_8222E818;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8222E818:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a1838
	ctx.lr = 0x8222E820;
	sub_822A1838(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// ori r27,r10,65280
	ctx.r27.u64 = ctx.r10.u64 | 65280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r10,3052(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3052);
	// lhz r11,3054(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3054);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e898
	if (ctx.cr6.eq) goto loc_8222E898;
loc_8222E84C:
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// bl 0x8233dd98
	ctx.lr = 0x8222E858;
	sub_8233DD98(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8222e904
	if (ctx.cr6.eq) goto loc_8222E904;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8222e878
	if (ctx.cr6.lt) goto loc_8222E878;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8222E878:
	// lhz r9,3054(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3054);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222e84c
	if (!ctx.cr6.eq) goto loc_8222E84C;
	// lhz r10,3052(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3052);
loc_8222E898:
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x8222e8b0
	if (ctx.cr6.lt) goto loc_8222E8B0;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
loc_8222E8B0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222e8dc
	if (!ctx.cr6.eq) goto loc_8222E8DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// blt cr6,0x8222e8d8
	if (ctx.cr6.lt) goto loc_8222E8D8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_8222E8D8:
	// sth r10,3052(r30)
	PPC_STORE_U16(ctx.r30.u32 + 3052, ctx.r10.u16);
loc_8222E8DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8222e8f4
	if (ctx.cr6.lt) goto loc_8222E8F4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8222E8F4:
	// sth r11,3054(r30)
	PPC_STORE_U16(ctx.r30.u32 + 3054, ctx.r11.u16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r8,1752
	ctx.r3.s64 = ctx.r8.s64 + 1752;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E904;
	sub_8233E7D8(ctx, base);
loc_8222E904:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E7F0) {
	__imp__sub_8222E7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222e9ac
	if (ctx.cr6.eq) goto loc_8222E9AC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222e9ac
	if (ctx.cr6.eq) goto loc_8222E9AC;
	// bl 0x822a1838
	ctx.lr = 0x8222E938;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E944:
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// bl 0x8233dd98
	ctx.lr = 0x8222E94C;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222e96c
	if (ctx.cr6.eq) goto loc_8222E96C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222e9a0
	if (ctx.cr6.eq) goto loc_8222E9A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8222e944
	if (ctx.cr6.lt) goto loc_8222E944;
loc_8222E96C:
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bne cr6,0x8222e994
	if (!ctx.cr6.eq) goto loc_8222E994;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,1752
	ctx.r4.s64 = 1752;
	// bl 0x822e84f0
	ctx.lr = 0x8222E988;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222E994;
	sub_822830E8(ctx, base);
loc_8222E994:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// bl 0x8233e7d8
	ctx.lr = 0x8222E9A0;
	sub_8233E7D8(ctx, base);
loc_8222E9A0:
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222E9AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E910) {
	__imp__sub_8222E910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222E9BC) {
	__imp__sub_8222E9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222E9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222E9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ea5c
	if (ctx.cr6.eq) goto loc_8222EA5C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ea5c
	if (ctx.cr6.eq) goto loc_8222EA5C;
	// bl 0x822a1838
	ctx.lr = 0x8222E9E8;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_8222E9F4:
	// addi r3,r31,1169
	ctx.r3.s64 = ctx.r31.s64 + 1169;
	// bl 0x8233dd98
	ctx.lr = 0x8222E9FC;
	sub_8233DD98(ctx, base);
	// lhz r11,-25976(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -25976);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222ea1c
	if (ctx.cr6.eq) goto loc_8222EA1C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222ea50
	if (ctx.cr6.eq) goto loc_8222EA50;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x8222e9f4
	if (ctx.cr6.lt) goto loc_8222E9F4;
loc_8222EA1C:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bne cr6,0x8222ea44
	if (!ctx.cr6.eq) goto loc_8222EA44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-9476
	ctx.r3.s64 = ctx.r11.s64 + -9476;
	// li r4,1169
	ctx.r4.s64 = 1169;
	// bl 0x822e84f0
	ctx.lr = 0x8222EA38;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8222EA44;
	sub_822830E8(ctx, base);
loc_8222EA44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1169
	ctx.r3.s64 = ctx.r31.s64 + 1169;
	// bl 0x8233e7d8
	ctx.lr = 0x8222EA50;
	sub_8233E7D8(ctx, base);
loc_8222EA50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222EA5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222E9C0) {
	__imp__sub_8222E9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EA68) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8222eb08
	if (ctx.cr6.eq) goto loc_8222EB08;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8222eac4
	if (ctx.cr6.eq) goto loc_8222EAC4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8222eaf0
	if (!ctx.cr6.eq) goto loc_8222EAF0;
	// lbz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// bl 0x822ea328
	ctx.lr = 0x8222EAA0;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222eaf0
	if (ctx.cr6.eq) goto loc_8222EAF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8940
	ctx.lr = 0x8222EAB0;
	sub_821B8940(ctx, base);
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
loc_8222EAC4:
	// lbz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x822ea328
	ctx.lr = 0x8222EACC;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222eaf0
	if (ctx.cr6.eq) goto loc_8222EAF0;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x821a9830
	ctx.lr = 0x8222EADC;
	sub_821A9830(ctx, base);
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
loc_8222EAF0:
	// lwz r3,616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
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
loc_8222EB08:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// addi r8,r10,-5864
	ctx.r8.s64 = ctx.r10.s64 + -5864;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addis r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 524288;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,10976
	ctx.r6.s64 = ctx.r10.s64 + 10976;
	// rlwinm r5,r7,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_8222EA68) {
	__imp__sub_8222EA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EB40) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222eb6c
	if (ctx.cr6.eq) goto loc_8222EB6C;
	// bl 0x82348478
	ctx.lr = 0x8222EB6C;
	sub_82348478(ctx, base);
loc_8222EB6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822341a8
	ctx.lr = 0x8222EB78;
	sub_822341A8(ctx, base);
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

PPC_WEAK_FUNC(sub_8222EB40) {
	__imp__sub_8222EB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EB90) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222ebc8
	if (!ctx.cr6.eq) goto loc_8222EBC8;
	// sth r11,604(r3)
	PPC_STORE_U16(ctx.r3.u32 + 604, ctx.r11.u16);
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
loc_8222EBC8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8222e230
	ctx.lr = 0x8222EBD0;
	sub_8222E230(ctx, base);
	// sth r3,604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 604, ctx.r3.u16);
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

PPC_WEAK_FUNC(sub_8222EB90) {
	__imp__sub_8222EB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EBE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82177538
	sub_82177538(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EBE8) {
	__imp__sub_8222EBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222EBEC) {
	__imp__sub_8222EBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EBF0) {
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
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8233dd98
	ctx.lr = 0x8222EC0C;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8222EC10;
	sub_822A13A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82177538
	ctx.lr = 0x8222EC18;
	sub_82177538(ctx, base);
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

PPC_WEAK_FUNC(sub_8222EBF0) {
	__imp__sub_8222EBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222EC2C) {
	__imp__sub_8222EC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lwz r10,2936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2936);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222ec50
	if (!ctx.cr6.eq) goto loc_8222EC50;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r10,2936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2936, ctx.r10.u32);
loc_8222EC50:
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lwz r10,2996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2996);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222ec68
	if (!ctx.cr6.eq) goto loc_8222EC68;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r10,2996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2996, ctx.r10.u32);
loc_8222EC68:
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// b 0x82284b78
	sub_82284B78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EC30) {
	__imp__sub_8222EC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r9,r11,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// lfs f1,-23144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8233d1c0
	sub_8233D1C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EC70) {
	__imp__sub_8222EC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222EC8C) {
	__imp__sub_8222EC8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222EC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822846c0
	ctx.lr = 0x8222ECA8;
	sub_822846C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8233d148
	ctx.lr = 0x8222ECB4;
	sub_8233D148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222ecf8
	if (!ctx.cr6.eq) goto loc_8222ECF8;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ecec
	if (ctx.cr6.eq) goto loc_8222ECEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8222ECEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222ECEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f13a0
	ctx.lr = 0x8222ECF8;
	sub_822F13A0(ctx, base);
loc_8222ECF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EC90) {
	__imp__sub_8222EC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222ED00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222ED08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822846c0
	ctx.lr = 0x8222ED18;
	sub_822846C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8233d0d0
	ctx.lr = 0x8222ED24;
	sub_8233D0D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222ed78
	if (!ctx.cr6.eq) goto loc_8222ED78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ee738
	ctx.lr = 0x8222ED3C;
	sub_822EE738(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r9,291(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r8,r9,44
	ctx.r8.s64 = ctx.r9.s64 * 44;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ed6c
	if (ctx.cr6.eq) goto loc_8222ED6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8222ED6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222ED6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f13a0
	ctx.lr = 0x8222ED78;
	sub_822F13A0(ctx, base);
loc_8222ED78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222ED00) {
	__imp__sub_8222ED00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222ED80) {
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
	// bl 0x8222ed00
	ctx.lr = 0x8222EDA0;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x8222EDA8;
	sub_8233D2E8(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_8222ED80) {
	__imp__sub_8222ED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222EDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8222ed00
	ctx.lr = 0x8222EDE4;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x8222EDEC;
	sub_8233D2E8(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8222EE00;
	sub_822DA650(ctx, base);
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadds f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fadds f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f2,f11,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fadds f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f10,f1,f5
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f7,f1,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f6,f0,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f5,f0,f3
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822d5c30
	ctx.lr = 0x8222EEC8;
	sub_822D5C30(ctx, base);
	// addi r5,r29,36
	ctx.r5.s64 = ctx.r29.s64 + 36;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x822d67f0
	ctx.lr = 0x8222EED8;
	sub_822D67F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EDC8) {
	__imp__sub_8222EDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222EEE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8222ed00
	ctx.lr = 0x8222EEFC;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x8222EF04;
	sub_8233D2E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8222EF14;
	sub_822DA650(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d67f0
	ctx.lr = 0x8222EF44;
	sub_822D67F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222EEE0) {
	__imp__sub_8222EEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222EF4C) {
	__imp__sub_8222EF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EF50) {
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
	// bl 0x8233d278
	ctx.lr = 0x8222EF6C;
	sub_8233D278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8222ef80
	if (!ctx.cr6.lt) goto loc_8222EF80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222ef9c
	goto loc_8222EF9C;
loc_8222EF80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ed00
	ctx.lr = 0x8222EF8C;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x8222EF94;
	sub_8233D2E8(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_8222EF9C:
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

PPC_WEAK_FUNC(sub_8222EF50) {
	__imp__sub_8222EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222EFB4) {
	__imp__sub_8222EFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222EFB8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8233d278
	ctx.lr = 0x8222EFD8;
	sub_8233D278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8222efec
	if (!ctx.cr6.lt) goto loc_8222EFEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222effc
	goto loc_8222EFFC;
loc_8222EFEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222edc8
	ctx.lr = 0x8222EFF8;
	sub_8222EDC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8222EFFC:
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

PPC_WEAK_FUNC(sub_8222EFB8) {
	__imp__sub_8222EFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F014) {
	__imp__sub_8222F014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222F020;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8233d278
	ctx.lr = 0x8222F030;
	sub_8233D278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8222f048
	if (!ctx.cr6.lt) goto loc_8222F048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8222F048:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ed00
	ctx.lr = 0x8222F054;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x8222F05C;
	sub_8233D2E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8222F06C;
	sub_822DA650(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d67f0
	ctx.lr = 0x8222F09C;
	sub_822D67F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F018) {
	__imp__sub_8222F018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222F0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8222f018
	ctx.lr = 0x8222F0C0;
	sub_8222F018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222f158
	if (!ctx.cr6.eq) goto loc_8222F158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822846c0
	ctx.lr = 0x8222F0D0;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f134
	if (ctx.cr6.eq) goto loc_8222F134;
	// bl 0x822f19f0
	ctx.lr = 0x8222F0E0;
	sub_822F19F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f134
	if (ctx.cr6.eq) goto loc_8222F134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef030
	ctx.lr = 0x8222F0F0;
	sub_822EF030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f134
	if (ctx.cr6.eq) goto loc_8222F134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef030
	ctx.lr = 0x8222F100;
	sub_822EF030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r30,126(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x822a13a0
	ctx.lr = 0x8222F110;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26052
	ctx.r4.s64 = ctx.r11.s64 + -26052;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x822830e8
	ctx.lr = 0x8222F12C;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8222F134:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r31,126(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x822a13a0
	ctx.lr = 0x8222F140;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-25804
	ctx.r4.s64 = ctx.r11.s64 + -25804;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822830e8
	ctx.lr = 0x8222F158;
	sub_822830E8(ctx, base);
loc_8222F158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F0A8) {
	__imp__sub_8222F0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x8222f178
	if (!ctx.cr6.eq) goto loc_8222F178;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8222f17c
	goto loc_8222F17C;
loc_8222F178:
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
loc_8222F17C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8222f1d4
	if (!ctx.cr6.lt) goto loc_8222F1D4;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subfic r8,r4,176
	ctx.xer.ca = ctx.r4.u32 <= 176;
	ctx.r8.s64 = 176 - ctx.r4.s64;
loc_8222F1A0:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f1c4
	if (ctx.cr6.eq) goto loc_8222F1C4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f1c4
	if (ctx.cr6.eq) goto loc_8222F1C4;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8222F1C4:
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222f1a0
	if (ctx.cr6.lt) goto loc_8222F1A0;
loc_8222F1D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222F160) {
	__imp__sub_8222F160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F1DC) {
	__imp__sub_8222F1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,624
	ctx.r10.s64 = 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r6,r8,11296
	ctx.r6.s64 = ctx.r8.s64 + 11296;
	// divw r5,r7,r10
	ctx.r5.s32 = ctx.r7.s32 / ctx.r10.s32;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r11.u32);
	// stb r10,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r10.u8);
	// lfs f0,12612(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12612);
	ctx.f0.f64 = double(temp.f32);
	// stbx r10,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u8);
	// stfs f0,612(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 612, temp.u32);
	// sth r5,126(r3)
	PPC_STORE_U16(ctx.r3.u32 + 126, ctx.r5.u16);
	// stb r11,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r11.u8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222F1E0) {
	__imp__sub_8222F1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F22C) {
	__imp__sub_8222F22C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8222F238;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222f390
	if (!ctx.cr6.gt) goto loc_8222F390;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r11,604
	ctx.r31.s64 = ctx.r11.s64 + 604;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// addi r29,r11,16432
	ctx.r29.s64 = ctx.r11.s64 + 16432;
	// addi r27,r10,-9220
	ctx.r27.s64 = ctx.r10.s64 + -9220;
	// addi r28,r9,-9288
	ctx.r28.s64 = ctx.r9.s64 + -9288;
	// addi r26,r8,-25976
	ctx.r26.s64 = ctx.r8.s64 + -25976;
loc_8222F28C:
	// lbz r10,-428(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -428);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f37c
	if (ctx.cr6.eq) goto loc_8222F37C;
	// lhz r3,-312(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + -312);
	// lhz r9,156(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 156);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222f320
	if (!ctx.cr6.eq) goto loc_8222F320;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f320
	if (ctx.cr6.eq) goto loc_8222F320;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,-604(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + -604);
	// lfs f31,-372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -372);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -368);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -364);
	ctx.f29.f64 = double(temp.f32);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a13c8
	ctx.lr = 0x8222F2D4;
	sub_822A13C8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8231f438
	ctx.lr = 0x8222F2E0;
	sub_8231F438(ctx, base);
	// stfd f31,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// stfd f30,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f30.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfd f29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f29.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,15
	ctx.r3.s64 = 15;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// bl 0x82280900
	ctx.lr = 0x8222F31C;
	sub_82280900(ctx, base);
	// b 0x8222f37c
	goto loc_8222F37C;
loc_8222F320:
	// lbz r24,-604(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + -604);
	// lfs f31,-372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -372);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -368);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -364);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13c8
	ctx.lr = 0x8222F334;
	sub_822A13C8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8231f438
	ctx.lr = 0x8222F340;
	sub_8231F438(ctx, base);
	// stfd f31,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// stfd f30,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f29,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f29.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// bl 0x82280900
	ctx.lr = 0x8222F37C;
	sub_82280900(ctx, base);
loc_8222F37C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222f28c
	if (ctx.cr6.lt) goto loc_8222F28C;
loc_8222F390:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_8222F230) {
	__imp__sub_8222F230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F3A4) {
	__imp__sub_8222F3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222F3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8222f420
	if (!ctx.cr6.eq) goto loc_8222F420;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,2046
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2046, ctx.xer);
	// bne cr6,0x8222f3f8
	if (!ctx.cr6.eq) goto loc_8222F3F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// bl 0x822ad350
	ctx.lr = 0x8222F3E4;
	sub_822AD350(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-9164
	ctx.r4.s64 = ctx.r10.s64 + -9164;
	// bl 0x822830e8
	ctx.lr = 0x8222F3F4;
	sub_822830E8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8222F3F8:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// ori r6,r6,45016
	ctx.r6.u64 = ctx.r6.u64 | 45016;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x8233ce88
	ctx.lr = 0x8222F41C;
	sub_8233CE88(ctx, base);
	// b 0x8222f43c
	goto loc_8222F43C;
loc_8222F420:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8222f438
	if (!ctx.cr6.eq) goto loc_8222F438;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_8222F438:
	// stw r29,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r29.u32);
loc_8222F43C:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r29,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r29.u32);
	// li r10,624
	ctx.r10.s64 = 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lis r8,-32024
	ctx.r8.s64 = -2098724864;
	// subf r7,r9,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r6,r8,11296
	ctx.r6.s64 = ctx.r8.s64 + 11296;
	// divw r5,r7,r10
	ctx.r5.s32 = ctx.r7.s32 / ctx.r10.s32;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// stbx r11,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u8);
	// lfs f0,12612(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12612);
	ctx.f0.f64 = double(temp.f32);
	// sth r5,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r5.u16);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stb r29,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r29.u8);
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F3A8) {
	__imp__sub_8222F3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F48C) {
	__imp__sub_8222F48C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F490) {
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
	// lwz r8,312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// rlwinm r5,r8,0,10,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// addi r8,r11,11296
	ctx.r8.s64 = ctx.r11.s64 + 11296;
	// addi r7,r10,26552
	ctx.r7.s64 = ctx.r10.s64 + 26552;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8222f514
	if (ctx.cr6.eq) goto loc_8222F514;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,9624
	ctx.r5.s64 = ctx.r11.s64 + 9624;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222f514
	if (!ctx.cr6.gt) goto loc_8222F514;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r7,130
	ctx.r11.s64 = ctx.r7.s64 + 130;
loc_8222F4EC:
	// lbzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222f508
	if (ctx.cr6.eq) goto loc_8222F508;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8222f508
	if (!ctx.cr6.eq) goto loc_8222F508;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_8222F508:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
	// bdnz 0x8222f4ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F4EC;
loc_8222F514:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f564
	if (ctx.cr6.eq) goto loc_8222F564;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f544
	if (ctx.cr6.eq) goto loc_8222F544;
	// lwz r11,264(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 264);
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8222f544
	if (!ctx.cr6.eq) goto loc_8222F544;
	// stw r6,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r6.u32);
loc_8222F544:
	// lbz r11,1(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f564
	if (ctx.cr6.eq) goto loc_8222F564;
	// lwz r11,888(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 888);
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8222f564
	if (!ctx.cr6.eq) goto loc_8222F564;
	// stw r6,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r6.u32);
loc_8222F564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343548
	ctx.lr = 0x8222F56C;
	sub_82343548(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f584
	if (ctx.cr6.eq) goto loc_8222F584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82202de8
	ctx.lr = 0x8222F584;
	sub_82202DE8(ctx, base);
loc_8222F584:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f59c
	if (ctx.cr6.eq) goto loc_8222F59C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222c350
	ctx.lr = 0x8222F59C;
	sub_8222C350(ctx, base);
loc_8222F59C:
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

PPC_WEAK_FUNC(sub_8222F490) {
	__imp__sub_8222F490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8222F5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f600
	if (ctx.cr6.eq) goto loc_8222F600;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r10,33024
	ctx.r29.u64 = ctx.r10.u64 | 33024;
loc_8222F5DC:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,5039(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5039);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222f5f4
	if (ctx.cr6.eq) goto loc_8222F5F4;
	// bl 0x821ac678
	ctx.lr = 0x8222F5F0;
	sub_821AC678(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_8222F5F4:
	// addi r31,r31,5128
	ctx.r31.s64 = ctx.r31.s64 + 5128;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8222f5dc
	if (ctx.cr6.lt) goto loc_8222F5DC;
loc_8222F600:
	// addi r31,r30,2660
	ctx.r31.s64 = ctx.r30.s64 + 2660;
loc_8222F604:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2e18
	ctx.lr = 0x8222F610;
	sub_821E2E18(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,2788
	ctx.r11.s64 = ctx.r30.s64 + 2788;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8222f604
	if (ctx.cr6.lt) goto loc_8222F604;
	// bl 0x8222c3e0
	ctx.lr = 0x8222F624;
	sub_8222C3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F5B0) {
	__imp__sub_8222F5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F62C) {
	__imp__sub_8222F62C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F630) {
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
	// lwz r3,476(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f660
	if (ctx.cr6.eq) goto loc_8222F660;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8229e118
	ctx.lr = 0x8222F658;
	sub_8229E118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
loc_8222F660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822340e0
	ctx.lr = 0x8222F668;
	sub_822340E0(ctx, base);
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

PPC_WEAK_FUNC(sub_8222F630) {
	__imp__sub_8222F630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F67C) {
	__imp__sub_8222F67C(ctx, base);
}

