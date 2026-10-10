#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822DADB8) {
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
	// lis r31,-31857
	ctx.r31.s64 = -2087780352;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// addi r30,r31,19784
	ctx.r30.s64 = ctx.r31.s64 + 19784;
	// li r5,4
	ctx.r5.s64 = 4;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// stw r11,-4224(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4224, ctx.r11.u32);
	// bl 0x822e54e0
	ctx.lr = 0x822DADEC;
	sub_822E54E0(ctx, base);
	// stw r3,19784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19784, ctx.r3.u32);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// lwz r4,-4224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4224);
	// bl 0x8236fe38
	ctx.lr = 0x822DADFC;
	sub_8236FE38(ctx, base);
	// lwz r3,19784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r11,-4224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4224);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822DAE0C;
	sub_823A4B38(ctx, base);
	// lwz r11,19784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dae28
	if (!ctx.cr6.eq) goto loc_822DAE28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1674
	ctx.r4.s64 = 1674;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// bl 0x8230dec8
	ctx.lr = 0x822DAE28;
	sub_8230DEC8(ctx, base);
loc_822DAE28:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r5,r11,19788
	ctx.r5.s64 = ctx.r11.s64 + 19788;
	// addi r3,r9,-9268
	ctx.r3.s64 = ctx.r9.s64 + -9268;
	// addi r4,r10,-21120
	ctx.r4.s64 = ctx.r10.s64 + -21120;
	// bl 0x8227da10
	ctx.lr = 0x822DAE44;
	sub_8227DA10(ctx, base);
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

PPC_WEAK_FUNC(sub_822DADB8) {
	__imp__sub_822DADB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAE5C) {
	__imp__sub_822DAE5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DAE60) {
	__imp__sub_822DAE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAE64) {
	__imp__sub_822DAE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DAE70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15688
	ctx.r9.s64 = ctx.r11.s64 + 15688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822daec0
	if (ctx.cr6.eq) goto loc_822DAEC0;
loc_822DAE94:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822daeb4
	if (!ctx.cr6.eq) goto loc_822DAEB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 9;
	// bl 0x822e8058
	ctx.lr = 0x822DAEAC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822daecc
	if (ctx.cr6.eq) goto loc_822DAECC;
loc_822DAEB4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822dae94
	if (!ctx.cr6.eq) goto loc_822DAE94;
loc_822DAEC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DAECC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DAE68) {
	__imp__sub_822DAE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAED8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x822d3588
	ctx.lr = 0x822DAF00;
	sub_822D3588(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dae68
	ctx.lr = 0x822DAF10;
	sub_822DAE68(ctx, base);
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

PPC_WEAK_FUNC(sub_822DAED8) {
	__imp__sub_822DAED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r11,r11,15560
	ctx.r11.s64 = ctx.r11.s64 + 15560;
	// lwz r10,4224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4224);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822daf44
	if (!ctx.cr6.lt) goto loc_822DAF44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DAF44:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DAF28) {
	__imp__sub_822DAF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DAF5C) {
	__imp__sub_822DAF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DAF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822DAF68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822d3588
	ctx.lr = 0x822DAF88;
	sub_822D3588(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822DAF90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822daf90
	if (!ctx.cr6.eq) goto loc_822DAF90;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// bctrl 
	ctx.lr = 0x822DAFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,9
	ctx.r3.s64 = ctx.r3.s64 + 9;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
loc_822DAFD0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x822dafd0
	if (!ctx.cr6.eq) goto loc_822DAFD0;
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,15688
	ctx.r9.s64 = ctx.r9.s64 + 15688;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DAF60) {
	__imp__sub_822DAF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB004) {
	__imp__sub_822DB004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB008) {
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
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822DB030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// lwz r11,15580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15580);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,15580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15580, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DB008) {
	__imp__sub_822DB008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822DB06C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822db08c
	if (ctx.cr6.lt) goto loc_822DB08C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822db08c
	if (!ctx.cr6.lt) goto loc_822DB08C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822db090
	goto loc_822DB090;
loc_822DB08C:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_822DB090:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822db06c
	if (!ctx.cr6.eq) goto loc_822DB06C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB060) {
	__imp__sub_822DB060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// addi r9,r10,15580
	ctx.r9.s64 = ctx.r10.s64 + 15580;
	// addi r6,r9,108
	ctx.r6.s64 = ctx.r9.s64 + 108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,-20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r11,4204(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4204);
	// lwz r7,96(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822DB0D0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822db110
	if (ctx.cr6.eq) goto loc_822DB110;
loc_822DB0E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822db100
	if (ctx.cr6.lt) goto loc_822DB100;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822db100
	if (!ctx.cr6.lt) goto loc_822DB100;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822db104
	goto loc_822DB104;
loc_822DB100:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_822DB104:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822db0e0
	if (!ctx.cr6.eq) goto loc_822DB0E0;
loc_822DB110:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x822db0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB0D0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822DB124:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822db144
	if (ctx.cr6.lt) goto loc_822DB144;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822db144
	if (!ctx.cr6.lt) goto loc_822DB144;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x822db148
	goto loc_822DB148;
loc_822DB144:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_822DB148:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822db124
	if (!ctx.cr6.eq) goto loc_822DB124;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB0A0) {
	__imp__sub_822DB0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB158) {
	PPC_FUNC_PROLOGUE();
	// b 0x82172be8
	sub_82172BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB158) {
	__imp__sub_822DB158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB15C) {
	__imp__sub_822DB15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB160) {
	PPC_FUNC_PROLOGUE();
	// b 0x821724c0
	sub_821724C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB160) {
	__imp__sub_822DB160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB164) {
	__imp__sub_822DB164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r3,15668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15668);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB168) {
	__imp__sub_822DB168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB174) {
	__imp__sub_822DB174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,15668
	ctx.r10.s64 = ctx.r11.s64 + 15668;
	// stw r3,15668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15668, ctx.r3.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x822db0a0
	sub_822DB0A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB178) {
	__imp__sub_822DB178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB18C) {
	__imp__sub_822DB18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r3,15676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB190) {
	__imp__sub_822DB190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB19C) {
	__imp__sub_822DB19C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,15676
	ctx.r10.s64 = ctx.r11.s64 + 15676;
	// stw r3,15676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15676, ctx.r3.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x822db0a0
	sub_822DB0A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB1A0) {
	__imp__sub_822DB1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB1B4) {
	__imp__sub_822DB1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31857
	ctx.r7.s64 = -2087780352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,15668
	ctx.r6.s64 = ctx.r7.s64 + 15668;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,15668(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15668, ctx.r9.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// b 0x822db0a0
	sub_822DB0A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB1B8) {
	__imp__sub_822DB1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB1E4) {
	__imp__sub_822DB1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,15668
	ctx.r10.s64 = ctx.r11.s64 + 15668;
	// lwz r11,15668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15668);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB1E8) {
	__imp__sub_822DB1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB200) {
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
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r6,r10,15676
	ctx.r6.s64 = ctx.r10.s64 + 15676;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,-8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// lwz r10,-116(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -116);
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,4108(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4108);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,-8(r6)
	PPC_STORE_U32(ctx.r6.u32 + -8, ctx.r11.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r11.u32);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822db288
	if (!ctx.cr6.gt) goto loc_822DB288;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 20;
	// addi r4,r7,-9256
	ctx.r4.s64 = ctx.r7.s64 + -9256;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DB288;
	sub_822830E8(ctx, base);
loc_822DB288:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x822DB298;
	sub_823DE090(ctx, base);
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

PPC_WEAK_FUNC(sub_822DB200) {
	__imp__sub_822DB200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB2B4) {
	__imp__sub_822DB2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB2B8) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,15676
	ctx.r6.s64 = ctx.r11.s64 + 15676;
	// lwz r11,-4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r10,-116(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -116);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,4108(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4108);
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r4,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r11.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822db330
	if (!ctx.cr6.gt) goto loc_822DB330;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 20;
	// addi r4,r7,-9176
	ctx.r4.s64 = ctx.r7.s64 + -9176;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 20;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DB330;
	sub_822830E8(ctx, base);
loc_822DB330:
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

PPC_WEAK_FUNC(sub_822DB2B8) {
	__imp__sub_822DB2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,15668
	ctx.r10.s64 = ctx.r11.s64 + 15668;
	// lwz r11,15668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15668);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB348) {
	__imp__sub_822DB348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB35C) {
	__imp__sub_822DB35C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB360) {
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
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r7,r10,15560
	ctx.r7.s64 = ctx.r10.s64 + 15560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,15560(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15560);
	// lwz r10,116(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// lwz r8,4224(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4224);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,112(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 116, ctx.r11.u32);
	// stw r11,120(r7)
	PPC_STORE_U32(ctx.r7.u32 + 120, ctx.r11.u32);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822db3e4
	if (!ctx.cr6.gt) goto loc_822DB3E4;
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 20;
	// addi r4,r7,-9088
	ctx.r4.s64 = ctx.r7.s64 + -9088;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DB3E4;
	sub_822830E8(ctx, base);
loc_822DB3E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x822DB3F4;
	sub_823DE090(ctx, base);
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

PPC_WEAK_FUNC(sub_822DB360) {
	__imp__sub_822DB360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822DB418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// addi r31,r11,15560
	ctx.r31.s64 = ctx.r11.s64 + 15560;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,4224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4224);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r8,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x822db498
	if (!ctx.cr6.gt) goto loc_822DB498;
	// srawi r8,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 20;
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 20;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 20;
	// addi r4,r4,-9008
	ctx.r4.s64 = ctx.r4.s64 + -9008;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DB494;
	sub_822830E8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_822DB498:
	// lis r10,-30381
	ctx.r10.s64 = -1991049216;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// ori r8,r10,30866
	ctx.r8.u64 = ctx.r10.u64 | 30866;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB410) {
	__imp__sub_822DB410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB4B8) {
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
	// lis r11,-30381
	ctx.r11.s64 = -1991049216;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,30866
	ctx.r9.u64 = ctx.r11.u64 | 30866;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822db4f0
	if (ctx.cr6.eq) goto loc_822DB4F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-8900
	ctx.r4.s64 = ctx.r11.s64 + -8900;
	// bl 0x822830e8
	ctx.lr = 0x822DB4F0;
	sub_822830E8(ctx, base);
loc_822DB4F0:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r9,-30381
	ctx.r9.s64 = -1991049216;
	// addi r8,r11,15676
	ctx.r8.s64 = ctx.r11.s64 + 15676;
	// ori r7,r9,30867
	ctx.r7.u64 = ctx.r9.u64 | 30867;
	// stw r7,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r7.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822DB4B8) {
	__imp__sub_822DB4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,15676
	ctx.r10.s64 = ctx.r11.s64 + 15676;
	// lwz r11,15676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB528) {
	__imp__sub_822DB528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB53C) {
	__imp__sub_822DB53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r9,r10,15676
	ctx.r9.s64 = ctx.r10.s64 + 15676;
	// lwz r3,15676(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15676);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,15676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15676, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB540) {
	__imp__sub_822DB540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r3,15676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15676, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB558) {
	__imp__sub_822DB558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB564) {
	__imp__sub_822DB564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r9,r10,15668
	ctx.r9.s64 = ctx.r10.s64 + 15668;
	// lwz r3,15668(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15668);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,15668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15668, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB568) {
	__imp__sub_822DB568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r3,15668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15668, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB580) {
	__imp__sub_822DB580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB58C) {
	__imp__sub_822DB58C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB590) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15568
	ctx.r11.s64 = ctx.r11.s64 + 15568;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r3,r5,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// bge cr6,0x822db5e4
	if (!ctx.cr6.lt) goto loc_822DB5E4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822DB5E4:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf. r4,r3,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822db628
	if (ctx.cr0.eq) goto loc_822DB628;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// bl 0x8236fcf8
	ctx.lr = 0x822DB608;
	sub_8236FCF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822db618
	if (ctx.cr6.eq) goto loc_822DB618;
	// bl 0x8230dc80
	ctx.lr = 0x822DB614;
	sub_8230DC80(ctx, base);
	// b 0x822db628
	goto loc_822DB628;
loc_822DB618:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,715
	ctx.r4.s64 = 715;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// bl 0x8230dec8
	ctx.lr = 0x822DB628;
	sub_8230DEC8(ctx, base);
loc_822DB628:
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

PPC_WEAK_FUNC(sub_822DB590) {
	__imp__sub_822DB590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r3,15684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15684, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB640) {
	__imp__sub_822DB640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB64C) {
	__imp__sub_822DB64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB650) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r11,r11,15552
	ctx.r11.s64 = ctx.r11.s64 + 15552;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r7,r7,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// bge cr6,0x822db698
	if (!ctx.cr6.lt) goto loc_822DB698;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_822DB698:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r11,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf. r4,r3,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822db6d8
	if (ctx.cr0.eq) goto loc_822DB6D8;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// bl 0x8236fcf8
	ctx.lr = 0x822DB6B8;
	sub_8236FCF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822db6c8
	if (ctx.cr6.eq) goto loc_822DB6C8;
	// bl 0x8230dc80
	ctx.lr = 0x822DB6C4;
	sub_8230DC80(ctx, base);
	// b 0x822db6d8
	goto loc_822DB6D8;
loc_822DB6C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,715
	ctx.r4.s64 = 715;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// bl 0x8230dec8
	ctx.lr = 0x822DB6D8;
	sub_8230DEC8(ctx, base);
loc_822DB6D8:
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

PPC_WEAK_FUNC(sub_822DB650) {
	__imp__sub_822DB650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// stw r3,15552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15552, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB6F0) {
	__imp__sub_822DB6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB6FC) {
	__imp__sub_822DB6FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB700) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822DB710;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// beq cr6,0x822db738
	if (ctx.cr6.eq) goto loc_822DB738;
	// addi r10,r11,15552
	ctx.r10.s64 = ctx.r11.s64 + 15552;
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DB738:
	// lwz r3,15552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15552);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB700) {
	__imp__sub_822DB700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB74C) {
	__imp__sub_822DB74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB750) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822DB768;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// beq cr6,0x822db794
	if (ctx.cr6.eq) goto loc_822DB794;
	// addi r10,r11,15552
	ctx.r10.s64 = ctx.r11.s64 + 15552;
	// stw r31,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r31.u32);
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
loc_822DB794:
	// stw r31,15552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15552, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822DB750) {
	__imp__sub_822DB750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB7AC) {
	__imp__sub_822DB7AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB7B0) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822DB7D0;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,15564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15564);
	// bne cr6,0x822db7e8
	if (!ctx.cr6.eq) goto loc_822DB7E8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_822DB7E8:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822DB7B0) {
	__imp__sub_822DB7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB804) {
	__imp__sub_822DB804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB808) {
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
	// addi r11,r4,127
	ctx.r11.s64 = ctx.r4.s64 + 127;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// bl 0x8228bcc0
	ctx.lr = 0x822DB82C;
	sub_8228BCC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822db844
	if (ctx.cr6.eq) goto loc_822DB844;
	// bl 0x822db590
	ctx.lr = 0x822DB840;
	sub_822DB590(ctx, base);
	// b 0x822db848
	goto loc_822DB848;
loc_822DB844:
	// bl 0x822db650
	ctx.lr = 0x822DB848;
	sub_822DB650(ctx, base);
loc_822DB848:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822DB808) {
	__imp__sub_822DB808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB86C) {
	__imp__sub_822DB86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB870) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822DB888;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x822db8c0
	if (ctx.cr6.eq) goto loc_822DB8C0;
	// addi r8,r10,15552
	ctx.r8.s64 = ctx.r10.s64 + 15552;
	// stw r11,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r11.u32);
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
loc_822DB8C0:
	// stw r11,15552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15552, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822DB870) {
	__imp__sub_822DB870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822db870
	sub_822DB870(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DB8D8) {
	__imp__sub_822DB8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DB8E8) {
	__imp__sub_822DB8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB8EC) {
	__imp__sub_822DB8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB8F0) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8228bcc0
	ctx.lr = 0x822DB910;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r11,15564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15564);
	// bne cr6,0x822db928
	if (!ctx.cr6.eq) goto loc_822DB928;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_822DB928:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822DB8F0) {
	__imp__sub_822DB8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DB944) {
	__imp__sub_822DB944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DB948) {
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
	// bl 0x82393ee8
	ctx.lr = 0x822DB960;
	sub_82393EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82390a98
	ctx.lr = 0x822DB968;
	sub_82390A98(ctx, base);
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,15552
	ctx.r31.s64 = ctx.r10.s64 + 15552;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r7,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r10,r6,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822db9bc
	if (ctx.cr6.eq) goto loc_822DB9BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236fd48
	ctx.lr = 0x822DB9B4;
	sub_8236FD48(ctx, base);
	// bl 0x8230dc80
	ctx.lr = 0x822DB9B8;
	sub_8230DC80(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_822DB9BC:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r9,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822db9f4
	if (ctx.cr6.eq) goto loc_822DB9F4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8236fd48
	ctx.lr = 0x822DB9EC;
	sub_8236FD48(ctx, base);
	// bl 0x8230dc80
	ctx.lr = 0x822DB9F0;
	sub_8230DC80(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822DB9F4:
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x82390c00
	ctx.lr = 0x822DB9FC;
	sub_82390C00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82393e28
	ctx.lr = 0x822DBA04;
	sub_82393E28(ctx, base);
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

PPC_WEAK_FUNC(sub_822DB948) {
	__imp__sub_822DB948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBA1C) {
	__imp__sub_822DBA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBA20) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,15552
	ctx.r8.s64 = ctx.r9.s64 + 15552;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r10,15552(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15552, ctx.r10.u32);
	// stw r11,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r11.u32);
	// b 0x822db948
	sub_822DB948(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBA20) {
	__imp__sub_822DBA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBA3C) {
	__imp__sub_822DBA3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822DBA48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbae0
	if (ctx.cr6.eq) goto loc_822DBAE0;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r31,r11,15584
	ctx.r31.s64 = ctx.r11.s64 + 15584;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822dba8c
	if (ctx.cr6.lt) goto loc_822DBA8C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8868
	ctx.r3.s64 = ctx.r11.s64 + -8868;
	// bl 0x8230d720
	ctx.lr = 0x822DBA88;
	sub_8230D720(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822DBA8C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x822e54e0
	ctx.lr = 0x822DBAB4;
	sub_822E54E0(ctx, base);
	// add r28,r3,r29
	ctx.r28.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822DBAD0;
	sub_8236FE38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822DBADC;
	sub_823A4B38(ctx, base);
	// b 0x822dbb40
	goto loc_822DBB40;
loc_822DBAE0:
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fcf8
	ctx.lr = 0x822DBAF8;
	sub_8236FCF8(ctx, base);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236fcf8
	ctx.lr = 0x822DBB10;
	sub_8236FCF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbb20
	if (ctx.cr6.eq) goto loc_822DBB20;
	// bl 0x8230dc80
	ctx.lr = 0x822DBB1C;
	sub_8230DC80(ctx, base);
	// b 0x822dbb30
	goto loc_822DBB30;
loc_822DBB20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,715
	ctx.r4.s64 = 715;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// bl 0x8230dec8
	ctx.lr = 0x822DBB30;
	sub_8230DEC8(ctx, base);
loc_822DBB30:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_822DBB40:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stb r26,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r26.u8);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBA40) {
	__imp__sub_822DBA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822DBB68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// not r26,r28
	ctx.r26.u64 = ~ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// and r29,r7,r26
	ctx.r29.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x822dbc04
	if (!ctx.cr6.gt) goto loc_822DBC04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,-8828
	ctx.r25.s64 = ctx.r11.s64 + -8828;
loc_822DBBA8:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbbc4
	if (ctx.cr6.eq) goto loc_822DBBC4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x822DBBC4;
	sub_822830E8(ctx, base);
loc_822DBBC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822dba40
	ctx.lr = 0x822DBBD8;
	sub_822DBA40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// and r29,r7,r26
	ctx.r29.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822dbba8
	if (ctx.cr6.gt) goto loc_822DBBA8;
loc_822DBC04:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dbc3c
	if (!ctx.cr6.eq) goto loc_822DBC3C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r8,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x822dbc3c
	if (ctx.cr6.eq) goto loc_822DBC3C;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// bl 0x822dac80
	ctx.lr = 0x822DBC3C;
	sub_822DAC80(ctx, base);
loc_822DBC3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBB60) {
	__imp__sub_822DBB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBC48) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dbc7c
	if (!ctx.cr6.eq) goto loc_822DBC7C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
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
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x822dbca4
	goto loc_822DBCA4;
loc_822DBC7C:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dbca4
	if (!ctx.cr6.eq) goto loc_822DBCA4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_822DBCA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822dbb60
	sub_822DBB60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBC48) {
	__imp__sub_822DBC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBCAC) {
	__imp__sub_822DBCAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCB0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dbccc
	if (!ctx.cr6.eq) goto loc_822DBCCC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x822dbce4
	goto loc_822DBCE4;
loc_822DBCCC:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dbce8
	if (!ctx.cr6.eq) goto loc_822DBCE8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_822DBCE4:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_822DBCE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822dbb60
	sub_822DBB60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBCB0) {
	__imp__sub_822DBCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DBCF0) {
	__imp__sub_822DBCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822DBD00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbda0
	if (ctx.cr6.eq) goto loc_822DBDA0;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r31,r11,15656
	ctx.r31.s64 = ctx.r11.s64 + 15656;
	// addi r9,r31,-72
	ctx.r9.s64 = ctx.r31.s64 + -72;
	// lwz r11,-84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-36
	ctx.r9.s64 = ctx.r10.s64 + -36;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822dbd90
	if (!ctx.cr6.eq) goto loc_822DBD90;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dbd80
	if (!ctx.cr6.eq) goto loc_822DBD80;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r30,r8,0,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// subf. r7,r30,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble 0x822dbd80
	if (!ctx.cr0.gt) goto loc_822DBD80;
	// bl 0x82390a98
	ctx.lr = 0x822DBD6C;
	sub_82390A98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x823a62b8
	ctx.lr = 0x822DBD78;
	sub_823A62B8(ctx, base);
	// bl 0x82390c00
	ctx.lr = 0x822DBD7C;
	sub_82390C00(ctx, base);
	// lwz r11,-84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
loc_822DBD80:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-84(r31)
	PPC_STORE_U32(ctx.r31.u32 + -84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822DBD90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r3,r11,-8788
	ctx.r3.s64 = ctx.r11.s64 + -8788;
	// bl 0x8230d720
	ctx.lr = 0x822DBDA0;
	sub_8230D720(ctx, base);
loc_822DBDA0:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822dbdd8
	if (ctx.cr6.eq) goto loc_822DBDD8;
loc_822DBDB4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8230dc80
	ctx.lr = 0x822DBDBC;
	sub_8230DC80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fd48
	ctx.lr = 0x822DBDCC;
	sub_8236FD48(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822dbdb4
	if (!ctx.cr6.eq) goto loc_822DBDB4;
loc_822DBDD8:
	// bl 0x8230dc80
	ctx.lr = 0x822DBDDC;
	sub_8230DC80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236fd48
	ctx.lr = 0x822DBDEC;
	sub_8236FD48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBCF8) {
	__imp__sub_822DBCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBDF4) {
	__imp__sub_822DBDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBDF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DBDF8) {
	__imp__sub_822DBDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822DBE10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,15584
	ctx.r31.s64 = ctx.r10.s64 + 15584;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82390a98
	ctx.lr = 0x822DBE28;
	sub_82390A98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf. r28,r9,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x822dbe54
	if (!ctx.cr0.gt) goto loc_822DBE54;
	// lwz r8,4200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x823a62b8
	ctx.lr = 0x822DBE54;
	sub_823A62B8(ctx, base);
loc_822DBE54:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbea0
	if (ctx.cr6.eq) goto loc_822DBEA0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_822DBE70:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r3,r9,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x822dbe90
	if (!ctx.cr0.gt) goto loc_822DBE90;
	// bl 0x823a62b8
	ctx.lr = 0x822DBE8C;
	sub_823A62B8(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822DBE90:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dbe70
	if (ctx.cr6.lt) goto loc_822DBE70;
loc_822DBEA0:
	// bl 0x82390c00
	ctx.lr = 0x822DBEA4;
	sub_82390C00(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822dbedc
	if (!ctx.cr6.gt) goto loc_822DBEDC;
	// lwz r11,4200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822DBEC4;
	sub_8236FE38(ctx, base);
	// lwz r11,4200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822dd778
	ctx.lr = 0x822DBEDC;
	sub_822DD778(ctx, base);
loc_822DBEDC:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbf3c
	if (ctx.cr6.eq) goto loc_822DBF3C;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
loc_822DBEF0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r30,r8,0,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// subf. r29,r30,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x822dbf2c
	if (!ctx.cr0.gt) goto loc_822DBF2C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822DBF18;
	sub_8236FE38(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd778
	ctx.lr = 0x822DBF28;
	sub_822DD778(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822DBF2C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dbef0
	if (ctx.cr6.lt) goto loc_822DBEF0;
loc_822DBF3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBE08) {
	__imp__sub_822DBE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DBF44) {
	__imp__sub_822DBF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DBF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822DBF50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,15584
	ctx.r31.s64 = ctx.r11.s64 + 15584;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,-24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// rlwinm r10,r7,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r6,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// subf. r27,r11,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x822dbfb0
	if (!ctx.cr0.gt) goto loc_822DBFB0;
	// lwz r10,4200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822DBFB0;
	sub_8236FE38(ctx, base);
loc_822DBFB0:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dbff8
	if (ctx.cr6.eq) goto loc_822DBFF8;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_822DBFC4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r3,r8,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// subf. r4,r3,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x822dbfe8
	if (!ctx.cr0.gt) goto loc_822DBFE8;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// bl 0x8236fe38
	ctx.lr = 0x822DBFE4;
	sub_8236FE38(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822DBFE8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dbfc4
	if (ctx.cr6.lt) goto loc_822DBFC4;
loc_822DBFF8:
	// bl 0x82179de8
	ctx.lr = 0x822DBFFC;
	sub_82179DE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822dc028
	if (!ctx.cr6.gt) goto loc_822DC028;
	// lwz r11,4200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,-24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822DC028;
	sub_823A4B38(ctx, base);
loc_822DC028:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc06c
	if (ctx.cr6.eq) goto loc_822DC06C;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_822DC03C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r3,r9,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x822dc05c
	if (!ctx.cr0.gt) goto loc_822DC05C;
	// bl 0x823a4b38
	ctx.lr = 0x822DC058;
	sub_823A4B38(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_822DC05C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dc03c
	if (ctx.cr6.lt) goto loc_822DC03C;
loc_822DC06C:
	// bl 0x82179e70
	ctx.lr = 0x822DC070;
	sub_82179E70(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822dc07c
	if (ctx.cr6.eq) goto loc_822DC07C;
	// bl 0x823aee78
	ctx.lr = 0x822DC07C;
	sub_823AEE78(ctx, base);
loc_822DC07C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DBF48) {
	__imp__sub_822DBF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC084) {
	__imp__sub_822DC084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r3,15656(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15656);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC088) {
	__imp__sub_822DC088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC094) {
	__imp__sub_822DC094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822DC0A0;
	__savegprlr_28(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15584
	ctx.r9.s64 = ctx.r11.s64 + 15584;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r5,-24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24);
	// lwz r4,80(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r3,-12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x822dc128
	if (ctx.cr6.lt) goto loc_822DC128;
	// addi r6,r3,-2
	ctx.r6.s64 = ctx.r3.s64 + -2;
	// addi r11,r9,-20
	ctx.r11.s64 = ctx.r9.s64 + -20;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822DC0F4:
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r29,68(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwzu r5,72(r11)
	ea = 72 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r30,r30,0,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r28,r5,0,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// subf r5,r30,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r30.s64;
	// subf r4,r28,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r28.s64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// bdnz 0x822dc0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DC0F4;
loc_822DC128:
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822dc168
	if (!ctx.cr6.lt) goto loc_822DC168;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822DC168:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC098) {
	__imp__sub_822DC098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC174) {
	__imp__sub_822DC174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC178) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822DC190:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822dc190
	if (!ctx.cr6.eq) goto loc_822DC190;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x822dbb60
	ctx.lr = 0x822DC1B8;
	sub_822DBB60(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_822DC1C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822dc1c0
	if (!ctx.cr6.eq) goto loc_822DC1C0;
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

PPC_WEAK_FUNC(sub_822DC178) {
	__imp__sub_822DC178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DC1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x822dbb60
	ctx.lr = 0x822DC208;
	sub_822DBB60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823dfa38
	ctx.lr = 0x822DC218;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC1E8) {
	__imp__sub_822DC1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC22C) {
	__imp__sub_822DC22C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC230) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x822DC258;
	sub_822A1D20(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822DC25C;
	sub_822A13A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc278
	if (ctx.cr6.eq) goto loc_822DC278;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a1810
	ctx.lr = 0x822DC274;
	sub_822A1810(ctx, base);
	// bl 0x822a2468
	ctx.lr = 0x822DC278;
	sub_822A2468(ctx, base);
loc_822DC278:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822DC230) {
	__imp__sub_822DC230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC294) {
	__imp__sub_822DC294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC298) {
	PPC_FUNC_PROLOGUE();
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x822db200
	sub_822DB200(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC298) {
	__imp__sub_822DC298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC2A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x822db360
	sub_822DB360(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DC2A0) {
	__imp__sub_822DC2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC2A8) {
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
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fcf8
	ctx.lr = 0x822DC2CC;
	sub_8236FCF8(ctx, base);
	// lis r7,-31857
	ctx.r7.s64 = -2087780352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,15552
	ctx.r6.s64 = ctx.r7.s64 + 15552;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r9.u32);
	// stw r8,15552(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15552, ctx.r8.u32);
	// bl 0x822db948
	ctx.lr = 0x822DC2FC;
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

PPC_WEAK_FUNC(sub_822DC2A8) {
	__imp__sub_822DC2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC30C) {
	__imp__sub_822DC30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC310) {
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
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc35c
	if (ctx.cr6.eq) goto loc_822DC35C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r5,r30,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd778
	ctx.lr = 0x822DC354;
	sub_822DD778(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x822dc3c4
	goto loc_822DC3C4;
loc_822DC35C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dc378
	if (ctx.cr6.eq) goto loc_822DC378;
	// bl 0x822dbcf8
	ctx.lr = 0x822DC36C;
	sub_822DBCF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822DC378:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r3,r10,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822dc3ac
	if (ctx.cr6.eq) goto loc_822DC3AC;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8236fd48
	ctx.lr = 0x822DC3A8;
	sub_8236FD48(ctx, base);
	// bl 0x8230dc80
	ctx.lr = 0x822DC3AC;
	sub_8230DC80(ctx, base);
loc_822DC3AC:
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65504
	ctx.r5.u64 = ctx.r5.u64 | 65504;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x823de090
	ctx.lr = 0x822DC3C4;
	sub_823DE090(ctx, base);
loc_822DC3C4:
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

PPC_WEAK_FUNC(sub_822DC310) {
	__imp__sub_822DC310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC3DC) {
	__imp__sub_822DC3DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DC3F0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822dc3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DC3F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822dc420
	if (!ctx.cr6.eq) goto loc_822DC420;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// blr 
	return;
loc_822DC420:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC3E0) {
	__imp__sub_822DC3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DC444) {
	__imp__sub_822DC444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC448) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r9,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC448) {
	__imp__sub_822DC448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DC470) {
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
	// bl 0x82372ad8
	ctx.lr = 0x822DC480;
	sub_82372AD8(ctx, base);
	// cmpwi cr6,r3,10051
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10051, ctx.xer);
	// bgt cr6,0x822dc794
	if (ctx.cr6.gt) goto loc_822DC794;
	// beq cr6,0x822dc77c
	if (ctx.cr6.eq) goto loc_822DC77C;
	// addi r11,r3,-10004
	ctx.r11.s64 = ctx.r3.s64 + -10004;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bgt cr6,0x822dca9c
	if (ctx.cr6.gt) goto loc_822DCA9C;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15184
	ctx.r12.s64 = ctx.r12.s64 + -15184;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DC56C;
	case 1:
		goto loc_822DCA9C;
	case 2:
		goto loc_822DCA9C;
	case 3:
		goto loc_822DCA9C;
	case 4:
		goto loc_822DCA9C;
	case 5:
		goto loc_822DC584;
	case 6:
		goto loc_822DCA9C;
	case 7:
		goto loc_822DCA9C;
	case 8:
		goto loc_822DCA9C;
	case 9:
		goto loc_822DC59C;
	case 10:
		goto loc_822DC5B4;
	case 11:
		goto loc_822DCA9C;
	case 12:
		goto loc_822DCA9C;
	case 13:
		goto loc_822DCA9C;
	case 14:
		goto loc_822DCA9C;
	case 15:
		goto loc_822DCA9C;
	case 16:
		goto loc_822DCA9C;
	case 17:
		goto loc_822DCA9C;
	case 18:
		goto loc_822DC5CC;
	case 19:
		goto loc_822DCA9C;
	case 20:
		goto loc_822DC5E4;
	case 21:
		goto loc_822DCA9C;
	case 22:
		goto loc_822DCA9C;
	case 23:
		goto loc_822DCA9C;
	case 24:
		goto loc_822DCA9C;
	case 25:
		goto loc_822DCA9C;
	case 26:
		goto loc_822DCA9C;
	case 27:
		goto loc_822DCA9C;
	case 28:
		goto loc_822DCA9C;
	case 29:
		goto loc_822DCA9C;
	case 30:
		goto loc_822DCA9C;
	case 31:
		goto loc_822DC5FC;
	case 32:
		goto loc_822DC614;
	case 33:
		goto loc_822DC62C;
	case 34:
		goto loc_822DC644;
	case 35:
		goto loc_822DC65C;
	case 36:
		goto loc_822DC674;
	case 37:
		goto loc_822DC68C;
	case 38:
		goto loc_822DC6A4;
	case 39:
		goto loc_822DC6BC;
	case 40:
		goto loc_822DC6D4;
	case 41:
		goto loc_822DC6EC;
	case 42:
		goto loc_822DC704;
	case 43:
		goto loc_822DC71C;
	case 44:
		goto loc_822DC734;
	case 45:
		goto loc_822DC74C;
	case 46:
		goto loc_822DC764;
	default:
		return;
	}
	// lwz r17,-14996(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14996);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-14972(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14972);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-14948(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14948);
	// lwz r17,-14924(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14924);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-14900(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14900);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-14876(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14876);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-14852(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14852);
	// lwz r17,-14828(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14828);
	// lwz r17,-14804(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14804);
	// lwz r17,-14780(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14780);
	// lwz r17,-14756(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14756);
	// lwz r17,-14732(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14732);
	// lwz r17,-14708(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14708);
	// lwz r17,-14684(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14684);
	// lwz r17,-14660(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14660);
	// lwz r17,-14636(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14636);
	// lwz r17,-14612(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14612);
	// lwz r17,-14588(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14588);
	// lwz r17,-14564(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14564);
	// lwz r17,-14540(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14540);
	// lwz r17,-14516(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14516);
	// lwz r17,-14492(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14492);
loc_822DC56C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC584:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8060
	ctx.r3.s64 = ctx.r11.s64 + -8060;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC59C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC5B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8084
	ctx.r3.s64 = ctx.r11.s64 + -8084;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC5CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8096
	ctx.r3.s64 = ctx.r11.s64 + -8096;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC5E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8108
	ctx.r3.s64 = ctx.r11.s64 + -8108;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC5FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8124
	ctx.r3.s64 = ctx.r11.s64 + -8124;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC614:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8140
	ctx.r3.s64 = ctx.r11.s64 + -8140;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC62C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC644:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8164
	ctx.r3.s64 = ctx.r11.s64 + -8164;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC65C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8180
	ctx.r3.s64 = ctx.r11.s64 + -8180;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC674:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8192
	ctx.r3.s64 = ctx.r11.s64 + -8192;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC68C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8208
	ctx.r3.s64 = ctx.r11.s64 + -8208;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC6A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC6BC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8244
	ctx.r3.s64 = ctx.r11.s64 + -8244;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC6D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC6EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8280
	ctx.r3.s64 = ctx.r11.s64 + -8280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC704:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC71C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC734:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC74C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8348
	ctx.r3.s64 = ctx.r11.s64 + -8348;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC764:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC77C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC794:
	// cmpwi cr6,r3,10101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10101, ctx.xer);
	// bgt cr6,0x822dca1c
	if (ctx.cr6.gt) goto loc_822DCA1C;
	// beq cr6,0x822dca04
	if (ctx.cr6.eq) goto loc_822DCA04;
	// addi r11,r3,-10052
	ctx.r11.s64 = ctx.r3.s64 + -10052;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x822dca9c
	if (ctx.cr6.gt) goto loc_822DCA9C;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14396
	ctx.r12.s64 = ctx.r12.s64 + -14396;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DC86C;
	case 1:
		goto loc_822DC884;
	case 2:
		goto loc_822DC89C;
	case 3:
		goto loc_822DC8B4;
	case 4:
		goto loc_822DC8CC;
	case 5:
		goto loc_822DC8E4;
	case 6:
		goto loc_822DC8FC;
	case 7:
		goto loc_822DC914;
	case 8:
		goto loc_822DC92C;
	case 9:
		goto loc_822DC944;
	case 10:
		goto loc_822DC95C;
	case 11:
		goto loc_822DC974;
	case 12:
		goto loc_822DC98C;
	case 13:
		goto loc_822DC9EC;
	case 14:
		goto loc_822DCA9C;
	case 15:
		goto loc_822DCA9C;
	case 16:
		goto loc_822DCA9C;
	case 17:
		goto loc_822DCA9C;
	case 18:
		goto loc_822DCA9C;
	case 19:
		goto loc_822DCA9C;
	case 20:
		goto loc_822DCA9C;
	case 21:
		goto loc_822DCA9C;
	case 22:
		goto loc_822DCA9C;
	case 23:
		goto loc_822DCA9C;
	case 24:
		goto loc_822DCA9C;
	case 25:
		goto loc_822DCA9C;
	case 26:
		goto loc_822DCA9C;
	case 27:
		goto loc_822DCA9C;
	case 28:
		goto loc_822DCA9C;
	case 29:
		goto loc_822DCA9C;
	case 30:
		goto loc_822DCA9C;
	case 31:
		goto loc_822DCA9C;
	case 32:
		goto loc_822DCA9C;
	case 33:
		goto loc_822DCA9C;
	case 34:
		goto loc_822DCA9C;
	case 35:
		goto loc_822DCA9C;
	case 36:
		goto loc_822DCA9C;
	case 37:
		goto loc_822DCA9C;
	case 38:
		goto loc_822DCA9C;
	case 39:
		goto loc_822DC9A4;
	case 40:
		goto loc_822DC9BC;
	case 41:
		goto loc_822DC9D4;
	default:
		return;
	}
	// lwz r17,-14228(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14228);
	// lwz r17,-14204(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14204);
	// lwz r17,-14180(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14180);
	// lwz r17,-14156(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14156);
	// lwz r17,-14132(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14132);
	// lwz r17,-14108(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14108);
	// lwz r17,-14084(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14084);
	// lwz r17,-14060(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14060);
	// lwz r17,-14036(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14036);
	// lwz r17,-14012(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -14012);
	// lwz r17,-13988(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13988);
	// lwz r17,-13964(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13964);
	// lwz r17,-13940(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13940);
	// lwz r17,-13844(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13844);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13668(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13668);
	// lwz r17,-13916(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13916);
	// lwz r17,-13892(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13892);
	// lwz r17,-13868(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13868);
loc_822DC86C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC884:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC89C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8432
	ctx.r3.s64 = ctx.r11.s64 + -8432;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC8B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8444
	ctx.r3.s64 = ctx.r11.s64 + -8444;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC8CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC8E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8468
	ctx.r3.s64 = ctx.r11.s64 + -8468;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC8FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8484
	ctx.r3.s64 = ctx.r11.s64 + -8484;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC914:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8500
	ctx.r3.s64 = ctx.r11.s64 + -8500;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC92C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8516
	ctx.r3.s64 = ctx.r11.s64 + -8516;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC944:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8532
	ctx.r3.s64 = ctx.r11.s64 + -8532;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC95C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC974:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC98C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC9A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC9BC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8612
	ctx.r3.s64 = ctx.r11.s64 + -8612;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC9D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DC9EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8652
	ctx.r3.s64 = ctx.r11.s64 + -8652;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA04:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA1C:
	// addi r11,r3,-11001
	ctx.r11.s64 = ctx.r3.s64 + -11001;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822dca9c
	if (ctx.cr6.gt) goto loc_822DCA9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822dca54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822DCA54;
	// bdzf 4*cr6+eq,0x822dca6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822DCA6C;
	// bne cr6,0x822dca84
	if (!ctx.cr6.eq) goto loc_822DCA84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8684
	ctx.r3.s64 = ctx.r11.s64 + -8684;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA54:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8700
	ctx.r3.s64 = ctx.r11.s64 + -8700;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA6C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8716
	ctx.r3.s64 = ctx.r11.s64 + -8716;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DCA9C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DC470) {
	__imp__sub_822DC470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCAB4) {
	__imp__sub_822DCAB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCAB8) {
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
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DCAE4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822dcae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DCAE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x822e7d78
	ctx.lr = 0x822DCB04;
	sub_822E7D78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822dcb24
	if (ctx.cr6.eq) goto loc_822DCB24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372ad0
	ctx.lr = 0x822DCB18;
	sub_82372AD0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822dcb28
	goto loc_822DCB28;
loc_822DCB24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DCB28:
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

PPC_WEAK_FUNC(sub_822DCAB8) {
	__imp__sub_822DCAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCB40) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822dcab8
	ctx.lr = 0x822DCB5C;
	sub_822DCAB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822dcb78
	if (!ctx.cr6.eq) goto loc_822DCB78;
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
loc_822DCB78:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822dcb9c
	if (!ctx.cr6.eq) goto loc_822DCB9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,4
	ctx.r10.s64 = 4;
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
loc_822DCB9C:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_822DCB40) {
	__imp__sub_822DCB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCBB4) {
	__imp__sub_822DCBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCBB8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// bl 0x822e54e0
	ctx.lr = 0x822DCBD4;
	sub_822E54E0(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,19808
	ctx.r9.s64 = ctx.r11.s64 + 19808;
	// ori r8,r10,47184
	ctx.r8.u64 = ctx.r10.u64 | 47184;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCBB8) {
	__imp__sub_822DCBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822DCC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// li r29,2560
	ctx.r29.s64 = 2560;
	// addi r31,r11,19808
	ctx.r31.s64 = ctx.r11.s64 + 19808;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// addi r28,r11,-18348
	ctx.r28.s64 = ctx.r11.s64 + -18348;
loc_822DCC1C:
	// addi r11,r30,-80
	ctx.r11.s64 = ctx.r30.s64 + -80;
	// stw r30,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r11.u32);
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x822ebb28
	ctx.lr = 0x822DCC34;
	sub_822EBB28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x822dcc1c
	if (!ctx.cr0.eq) goto loc_822DCC1C;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-18392
	ctx.r10.s64 = ctx.r10.s64 + -18392;
	// ori r8,r9,36852
	ctx.r8.u64 = ctx.r9.u64 | 36852;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r10,r6,47172
	ctx.r10.u64 = ctx.r6.u64 | 47172;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r11,r11,-18392
	ctx.r11.s64 = ctx.r11.s64 + -18392;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r6,r5,47168
	ctx.r6.u64 = ctx.r5.u64 | 47168;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// ori r5,r4,47132
	ctx.r5.u64 = ctx.r4.u64 | 47132;
	// stwx r31,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r31.u32);
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// addis r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 131072;
	// ori r4,r3,47128
	ctx.r4.u64 = ctx.r3.u64 | 47128;
	// addi r9,r9,-28712
	ctx.r9.s64 = ctx.r9.s64 + -28712;
	// addi r11,r8,-18432
	ctx.r11.s64 = ctx.r8.s64 + -18432;
	// addi r10,r7,-18432
	ctx.r10.s64 = ctx.r7.s64 + -18432;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DCBF8) {
	__imp__sub_822DCBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCCB4) {
	__imp__sub_822DCCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,19808
	ctx.r10.s64 = ctx.r11.s64 + 19808;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCCB8) {
	__imp__sub_822DCCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCCCC) {
	__imp__sub_822DCCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,19808
	ctx.r10.s64 = ctx.r11.s64 + 19808;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCCD0) {
	__imp__sub_822DCCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCCE4) {
	__imp__sub_822DCCE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// rlwinm r11,r4,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1FFFFF;
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCCE8) {
	__imp__sub_822DCCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCD14) {
	__imp__sub_822DCD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1FFFFF;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,52429
	ctx.r8.u64 = ctx.r10.u64 | 52429;
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// mulhwu r6,r11,r8
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r6,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1FFFFF;
	// addi r7,r9,19808
	ctx.r7.s64 = ctx.r9.s64 + 19808;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r9,r7,2
	ctx.r9.s64 = ctx.r7.s64 + 131072;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r9,-28672
	ctx.r5.s64 = ctx.r9.s64 + -28672;
	// rlwinm r3,r4,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCD18) {
	__imp__sub_822DCD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCD5C) {
	__imp__sub_822DCD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCD60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r8,-31857
	ctx.r8.s64 = -2087780352;
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// ori r7,r9,52429
	ctx.r7.u64 = ctx.r9.u64 | 52429;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,19808
	ctx.r6.s64 = ctx.r8.s64 + 19808;
	// mulhwu r5,r11,r7
	ctx.r5.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r9,r5,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFFF;
	// addis r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 131072;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-28672
	ctx.r10.s64 = ctx.r10.s64 + -28672;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCD60) {
	__imp__sub_822DCD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCDB4) {
	__imp__sub_822DCDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,19808
	ctx.r9.s64 = ctx.r11.s64 + 19808;
	// ori r6,r10,47184
	ctx.r6.u64 = ctx.r10.u64 | 47184;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// li r8,40
	ctx.r8.s64 = 40;
	// divw r5,r7,r8
	ctx.r5.s32 = ctx.r7.s32 / ctx.r8.s32;
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r10,r5,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCDB8) {
	__imp__sub_822DCDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCDE4) {
	__imp__sub_822DCDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCDE8) {
	__imp__sub_822DCDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DCE04) {
	__imp__sub_822DCE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DCE08) {
	__imp__sub_822DCE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCE30) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dceac
	if (ctx.cr6.eq) goto loc_822DCEAC;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// bl 0x822ebb00
	ctx.lr = 0x822DCE74;
	sub_822EBB00(ctx, base);
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r10,r11,19808
	ctx.r10.s64 = ctx.r11.s64 + 19808;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// beq cr6,0x822dce90
	if (ctx.cr6.eq) goto loc_822DCE90;
	// addi r11,r11,-18432
	ctx.r11.s64 = ctx.r11.s64 + -18432;
	// b 0x822dce94
	goto loc_822DCE94;
loc_822DCE90:
	// addi r11,r11,-18392
	ctx.r11.s64 = ctx.r11.s64 + -18392;
loc_822DCE94:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
loc_822DCEAC:
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

PPC_WEAK_FUNC(sub_822DCE30) {
	__imp__sub_822DCE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCEC0) {
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
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r30,r11,19808
	ctx.r30.s64 = ctx.r11.s64 + 19808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-18348
	ctx.r11.s64 = ctx.r11.s64 + -18348;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822ebb28
	ctx.lr = 0x822DCF00;
	sub_822EBB28(ctx, base);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r7,-13108
	ctx.r7.s64 = -859045888;
	// addi r9,r11,-28672
	ctx.r9.s64 = ctx.r11.s64 + -28672;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r5,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFFF;
	// ori r6,r7,52429
	ctx.r6.u64 = ctx.r7.u64 | 52429;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r4,r11,r6
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r4,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822dcf60
	if (ctx.cr6.eq) goto loc_822DCF60;
loc_822DCF4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcf4c
	if (!ctx.cr6.eq) goto loc_822DCF4C;
loc_822DCF60:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822DCEC0) {
	__imp__sub_822DCEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DCF80) {
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
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822dcfc8
	if (!ctx.cr6.lt) goto loc_822DCFC8;
	// bl 0x822ebb00
	ctx.lr = 0x822DCFAC;
	sub_822EBB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dcfc8
	if (ctx.cr6.eq) goto loc_822DCFC8;
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,19808
	ctx.r10.s64 = ctx.r11.s64 + 19808;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// addi r11,r11,-18432
	ctx.r11.s64 = ctx.r11.s64 + -18432;
	// b 0x822dcfd8
	goto loc_822DCFD8;
loc_822DCFC8:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// addi r10,r11,19808
	ctx.r10.s64 = ctx.r11.s64 + 19808;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// addi r11,r11,-18392
	ctx.r11.s64 = ctx.r11.s64 + -18392;
loc_822DCFD8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_822DCF80) {
	__imp__sub_822DCF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD004) {
	__imp__sub_822DD004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r9,r11,19808
	ctx.r9.s64 = ctx.r11.s64 + 19808;
	// li r6,64
	ctx.r6.s64 = 64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r11,r11,-18348
	ctx.r11.s64 = ctx.r11.s64 + -18348;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822ebb80
	sub_822EBB80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD008) {
	__imp__sub_822DD008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD034) {
	__imp__sub_822DD034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DD040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-8032
	ctx.r30.s64 = ctx.r11.s64 + -8032;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822DD058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8058
	ctx.lr = 0x822DD060;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dd094
	if (ctx.cr6.eq) goto loc_822DD094;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822dd058
	if (!ctx.cr6.eq) goto loc_822DD058;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DD094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD038) {
	__imp__sub_822DD038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD0A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD0A0) {
	__imp__sub_822DD0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD0A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822DD0B0;
	__savegprlr_25(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dd174
	if (ctx.cr6.eq) goto loc_822DD174;
	// li r28,1
	ctx.r28.s64 = 1;
loc_822DD0D0:
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bne cr6,0x822dd0f0
	if (!ctx.cr6.eq) goto loc_822DD0F0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822dd180
	if (ctx.cr6.eq) goto loc_822DD180;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r27,r29,r5
	PPC_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r27.u8);
loc_822DD0F0:
	// lbzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822DD0FC:
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dd124
	if (ctx.cr6.eq) goto loc_822DD124;
	// lbzx r26,r9,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r25,r8,24
	ctx.r25.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822dd124
	if (!ctx.cr6.eq) goto loc_822DD124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x822dd0fc
	if (!ctx.cr6.eq) goto loc_822DD0FC;
loc_822DD124:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822dd180
	if (ctx.cr6.eq) goto loc_822DD180;
	// stbx r8,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822dd154
	if (!ctx.cr6.gt) goto loc_822DD154;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822dd180
	if (ctx.cr6.eq) goto loc_822DD180;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x822dd164
	goto loc_822DD164;
loc_822DD154:
	// lbzx r9,r29,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// slw r8,r28,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stbx r9,r29,r5
	PPC_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r9.u8);
loc_822DD164:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822dd0d0
	if (!ctx.cr6.eq) goto loc_822DD0D0;
loc_822DD174:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822DD180:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD0A8) {
	__imp__sub_822DD0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD18C) {
	__imp__sub_822DD18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822dd244
	if (ctx.cr6.eq) goto loc_822DD244;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822DD1B4:
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x822dd1d0
	if (!ctx.cr6.eq) goto loc_822DD1D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dd264
	if (ctx.cr6.eq) goto loc_822DD264;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822DD1D0:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dd264
	if (ctx.cr6.eq) goto loc_822DD264;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// slw r8,r30,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dd1fc
	if (ctx.cr6.eq) goto loc_822DD1FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822dd218
	goto loc_822DD218;
loc_822DD1FC:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822dd264
	if (ctx.cr6.eq) goto loc_822DD264;
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822dd274
	if (ctx.cr6.eq) goto loc_822DD274;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_822DD218:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd23c
	if (ctx.cr6.eq) goto loc_822DD23C;
loc_822DD224:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822dd284
	if (ctx.cr6.eq) goto loc_822DD284;
	// stbx r8,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x822dd224
	if (!ctx.cr0.eq) goto loc_822DD224;
loc_822DD23C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822dd1b4
	if (!ctx.cr6.eq) goto loc_822DD1B4;
loc_822DD244:
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DD264:
	// li r3,2
	ctx.r3.s64 = 2;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DD274:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822DD284:
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD190) {
	__imp__sub_822DD190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD294) {
	__imp__sub_822DD294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD298) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e1b60
	sub_823E1B60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD298) {
	__imp__sub_822DD298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD29C) {
	__imp__sub_822DD29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e1bc0
	sub_823E1BC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD2A0) {
	__imp__sub_822DD2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD2A4) {
	__imp__sub_822DD2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822DD2B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822dd560
	if (ctx.cr6.eq) goto loc_822DD560;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822DD2D4:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bne cr6,0x822dd3a0
	if (!ctx.cr6.eq) goto loc_822DD3A0;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dd31c
	if (ctx.cr6.eq) goto loc_822DD31C;
	// addi r8,r1,79
	ctx.r8.s64 = ctx.r1.s64 + 79;
loc_822DD2F4:
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// beq cr6,0x822dd31c
	if (ctx.cr6.eq) goto loc_822DD31C;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// beq cr6,0x822dd31c
	if (ctx.cr6.eq) goto loc_822DD31C;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822dd2f4
	if (!ctx.cr6.eq) goto loc_822DD2F4;
loc_822DD31C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stbx r27,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r27.u8);
loc_822DD32C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dd32c
	if (!ctx.cr6.eq) goto loc_822DD32C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dd550
	if (ctx.cr6.eq) goto loc_822DD550;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x822dd368
	if (ctx.cr6.eq) goto loc_822DD368;
	// bl 0x823dfa98
	ctx.lr = 0x822DD364;
	sub_823DFA98(ctx, base);
	// b 0x822dd36c
	goto loc_822DD36C;
loc_822DD368:
	// bl 0x822e7fd0
	ctx.lr = 0x822DD36C;
	sub_822E7FD0(ctx, base);
loc_822DD36C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd56c
	if (ctx.cr6.eq) goto loc_822DD56C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DD37C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dd37c
	if (!ctx.cr6.eq) goto loc_822DD37C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x822dd550
	goto loc_822DD550;
loc_822DD3A0:
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// beq cr6,0x822dd548
	if (ctx.cr6.eq) goto loc_822DD548;
	// cmpwi cr6,r31,91
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 91, ctx.xer);
	// bne cr6,0x822dd514
	if (!ctx.cr6.eq) goto loc_822DD514;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x822dd54c
	if (ctx.cr6.eq) goto loc_822DD54C;
	// cmpwi cr6,r31,91
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 91, ctx.xer);
	// bne cr6,0x822dd514
	if (!ctx.cr6.eq) goto loc_822DD514;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822dd56c
	if (ctx.cr6.eq) goto loc_822DD56C;
loc_822DD3D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822dd4e4
	if (!ctx.cr6.eq) goto loc_822DD4E4;
	// cmpwi cr6,r31,93
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 93, ctx.xer);
	// bne cr6,0x822dd3f4
	if (!ctx.cr6.eq) goto loc_822DD3F4;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822dd56c
	if (!ctx.cr6.eq) goto loc_822DD56C;
loc_822DD3F4:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822dd490
	if (!ctx.cr6.eq) goto loc_822DD490;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dd490
	if (ctx.cr6.eq) goto loc_822DD490;
	// cmpwi cr6,r10,93
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 93, ctx.xer);
	// bne cr6,0x822dd424
	if (!ctx.cr6.eq) goto loc_822DD424;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822dd490
	if (!ctx.cr6.eq) goto loc_822DD490;
loc_822DD424:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822dd444
	if (ctx.cr6.eq) goto loc_822DD444;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822dd488
	if (ctx.cr6.lt) goto loc_822DD488;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// b 0x822dd480
	goto loc_822DD480;
loc_822DD444:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfb10
	ctx.lr = 0x822DD44C;
	sub_823DFB10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb10
	ctx.lr = 0x822DD458;
	sub_823DFB10(ctx, base);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822dd488
	if (ctx.cr6.lt) goto loc_822DD488;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfb10
	ctx.lr = 0x822DD46C;
	sub_823DFB10(ctx, base);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfb10
	ctx.lr = 0x822DD47C;
	sub_823DFB10(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
loc_822DD480:
	// bgt cr6,0x822dd488
	if (ctx.cr6.gt) goto loc_822DD488;
	// li r29,1
	ctx.r29.s64 = 1;
loc_822DD488:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x822dd4cc
	goto loc_822DD4CC;
loc_822DD490:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822dd4a8
	if (ctx.cr6.eq) goto loc_822DD4A8;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// b 0x822dd4c0
	goto loc_822DD4C0;
loc_822DD4A8:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfb10
	ctx.lr = 0x822DD4B0;
	sub_823DFB10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb10
	ctx.lr = 0x822DD4BC;
	sub_823DFB10(ctx, base);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
loc_822DD4C0:
	// bne cr6,0x822dd4c8
	if (!ctx.cr6.eq) goto loc_822DD4C8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_822DD4C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822DD4CC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822dd3d8
	if (!ctx.cr6.eq) goto loc_822DD3D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822dd56c
	if (ctx.cr6.eq) goto loc_822DD56C;
loc_822DD4E4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822dd548
	if (ctx.cr6.eq) goto loc_822DD548;
loc_822DD4EC:
	// cmpwi cr6,r31,93
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 93, ctx.xer);
	// bne cr6,0x822dd500
	if (!ctx.cr6.eq) goto loc_822DD500;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x822dd548
	if (!ctx.cr6.eq) goto loc_822DD548;
loc_822DD500:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822dd4ec
	if (!ctx.cr6.eq) goto loc_822DD4EC;
	// b 0x822dd548
	goto loc_822DD548;
loc_822DD514:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x822dd52c
	if (ctx.cr6.eq) goto loc_822DD52C;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// b 0x822dd544
	goto loc_822DD544;
loc_822DD52C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfb10
	ctx.lr = 0x822DD534;
	sub_823DFB10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb10
	ctx.lr = 0x822DD540;
	sub_823DFB10(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
loc_822DD544:
	// bne cr6,0x822dd56c
	if (!ctx.cr6.eq) goto loc_822DD56C;
loc_822DD548:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_822DD54C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822DD550:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822dd2d4
	if (!ctx.cr6.eq) goto loc_822DD2D4;
loc_822DD560:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822DD56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD2A8) {
	__imp__sub_822DD2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subf r7,r3,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// li r4,47
	ctx.r4.s64 = 47;
loc_822DD5A4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822dd5e0
	if (ctx.cr6.eq) goto loc_822DD5E0;
	// cmpwi cr6,r9,92
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 92, ctx.xer);
	// beq cr6,0x822dd5cc
	if (ctx.cr6.eq) goto loc_822DD5CC;
	// cmpwi cr6,r9,58
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 58, ctx.xer);
	// beq cr6,0x822dd5cc
	if (ctx.cr6.eq) goto loc_822DD5CC;
	// stbx r8,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x822dd5d0
	goto loc_822DD5D0;
loc_822DD5CC:
	// stbx r4,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u8);
loc_822DD5D0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,63
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 63, ctx.xer);
	// blt cr6,0x822dd5a4
	if (ctx.cr6.lt) goto loc_822DD5A4;
loc_822DD5E0:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stbx r31,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u8);
loc_822DD5F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dd630
	if (ctx.cr6.eq) goto loc_822DD630;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x822dd61c
	if (ctx.cr6.eq) goto loc_822DD61C;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// beq cr6,0x822dd61c
	if (ctx.cr6.eq) goto loc_822DD61C;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x822dd620
	goto loc_822DD620;
loc_822DD61C:
	// stbx r4,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u8);
loc_822DD620:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r7,63
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 63, ctx.xer);
	// blt cr6,0x822dd5f4
	if (ctx.cr6.lt) goto loc_822DD5F4;
loc_822DD630:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stbx r31,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u8);
	// bl 0x822dd2a8
	ctx.lr = 0x822DD644;
	sub_822DD2A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD578) {
	__imp__sub_822DD578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD658) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822dd69c
	if (!ctx.cr6.gt) goto loc_822DD69C;
	// subfic r7,r3,119
	ctx.xer.ca = ctx.r3.u32 <= 119;
	ctx.r7.s64 = 119 - ctx.r3.s64;
loc_822DD670:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822dd69c
	if (ctx.cr6.eq) goto loc_822DD69C;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822dd670
	if (ctx.cr6.lt) goto loc_822DD670;
loc_822DD69C:
	// srawi r11,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 10;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// srawi r8,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 10;
	// xor r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD658) {
	__imp__sub_822DD658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD6B0) {
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
	// bl 0x823e1bc0
	ctx.lr = 0x822DD6CC;
	sub_823E1BC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// bne cr6,0x822dd6f0
	if (!ctx.cr6.eq) goto loc_822DD6F0;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
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
loc_822DD6F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e1b60
	ctx.lr = 0x822DD6F8;
	sub_823E1B60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dd748
	if (ctx.cr6.eq) goto loc_822DD748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_822DD748:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
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

PPC_WEAK_FUNC(sub_822DD6B0) {
	__imp__sub_822DD6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD764) {
	__imp__sub_822DD764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD768) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236f750
	sub_8236F750(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD768) {
	__imp__sub_822DD768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD76C) {
	__imp__sub_822DD76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD770) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236f620
	sub_8236F620(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD770) {
	__imp__sub_822DD770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD774) {
	__imp__sub_822DD774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD778) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236b468
	sub_8236B468(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD778) {
	__imp__sub_822DD778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD77C) {
	__imp__sub_822DD77C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD780) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// b 0x822d45d8
	sub_822D45D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD780) {
	__imp__sub_822DD780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD78C) {
	__imp__sub_822DD78C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD790) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DD790) {
	__imp__sub_822DD790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD7A0) {
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
	// bl 0x82301800
	ctx.lr = 0x822DD7C0;
	sub_82301800(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822DD7A0) {
	__imp__sub_822DD7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD804) {
	__imp__sub_822DD804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD808) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82177148
	ctx.lr = 0x822DD82C;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82172b20
	ctx.lr = 0x822DD83C;
	sub_82172B20(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_822DD808) {
	__imp__sub_822DD808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD860) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82177148
	ctx.lr = 0x822DD884;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82172b20
	ctx.lr = 0x822DD894;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dd8b8
	if (ctx.cr6.eq) goto loc_822DD8B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-6484
	ctx.r4.s64 = ctx.r11.s64 + -6484;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280b08
	ctx.lr = 0x822DD8B0;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822dd8bc
	goto loc_822DD8BC;
loc_822DD8B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822DD8BC:
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

PPC_WEAK_FUNC(sub_822DD860) {
	__imp__sub_822DD860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD8D4) {
	__imp__sub_822DD8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD8D8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82177148
	ctx.lr = 0x822DD8FC;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82172b20
	ctx.lr = 0x822DD90C;
	sub_82172B20(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_822DD8D8) {
	__imp__sub_822DD8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD930) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dd860
	sub_822DD860(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DD930) {
	__imp__sub_822DD930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD934) {
	__imp__sub_822DD934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD938) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dd984
	if (ctx.cr6.eq) goto loc_822DD984;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,27664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27664, ctx.r31.u32);
	// bl 0x82147340
	ctx.lr = 0x822DD96C;
	sub_82147340(ctx, base);
	// lwz r11,27664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27664);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x822DD980;
	sub_82177148(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822DD984:
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

PPC_WEAK_FUNC(sub_822DD938) {
	__imp__sub_822DD938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DD99C) {
	__imp__sub_822DD99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DD9A0) {
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
	// bl 0x822dd860
	ctx.lr = 0x822DD9BC;
	sub_822DD860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822dd9ec
	if (!ctx.cr6.gt) goto loc_822DD9EC;
loc_822DD9D4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822dd9f0
	if (ctx.cr6.eq) goto loc_822DD9F0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822dd9d4
	if (ctx.cr6.lt) goto loc_822DD9D4;
loc_822DD9EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DD9F0:
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

PPC_WEAK_FUNC(sub_822DD9A0) {
	__imp__sub_822DD9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDA04) {
	__imp__sub_822DDA04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDA08) {
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
	// bl 0x822dd860
	ctx.lr = 0x822DDA28;
	sub_822DD860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dda68
	if (ctx.cr6.eq) goto loc_822DDA68;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ble cr6,0x822dda64
	if (!ctx.cr6.gt) goto loc_822DDA64;
loc_822DDA48:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x822dda9c
	if (ctx.cr6.eq) goto loc_822DDA9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822dda48
	if (ctx.cr6.lt) goto loc_822DDA48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_822DDA64:
	// bne cr6,0x822dda84
	if (!ctx.cr6.eq) goto loc_822DDA84;
loc_822DDA68:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-6456
	ctx.r4.s64 = ctx.r11.s64 + -6456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DDA80;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DDA84:
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
loc_822DDA9C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x822dda84
	goto loc_822DDA84;
}

PPC_WEAK_FUNC(sub_822DDA08) {
	__imp__sub_822DDA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDAA4) {
	__imp__sub_822DDAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822ddacc
	if (!ctx.cr6.eq) goto loc_822DDACC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
loc_822DDACC:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x822ddae8
	if (!ctx.cr6.eq) goto loc_822DDAE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x822e8368
	sub_822E8368(ctx, base);
	return;
loc_822DDAE8:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822ebc78
	sub_822EBC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDAA8) {
	__imp__sub_822DDAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDAF4) {
	__imp__sub_822DDAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r10,r11,-31304
	ctx.r10.s64 = ctx.r11.s64 + -31304;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDAF8) {
	__imp__sub_822DDAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r10,r11,-31304
	ctx.r10.s64 = ctx.r11.s64 + -31304;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDB08) {
	__imp__sub_822DDB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r9,r11,-31304
	ctx.r9.s64 = ctx.r11.s64 + -31304;
	// ori r8,r10,17405
	ctx.r8.u64 = ctx.r10.u64 | 17405;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addis r11,r7,39
	ctx.r11.s64 = ctx.r7.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDB18) {
	__imp__sub_822DDB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDB48) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddba0
	if (ctx.cr6.eq) goto loc_822DDBA0;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82172b20
	ctx.lr = 0x822DDB78;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ddba8
	if (ctx.cr6.eq) goto loc_822DDBA8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ddba0
	if (ctx.cr6.eq) goto loc_822DDBA0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,-6372
	ctx.r4.s64 = ctx.r11.s64 + -6372;
	// bl 0x82280c30
	ctx.lr = 0x822DDBA0;
	sub_82280C30(ctx, base);
loc_822DDBA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ddce0
	goto loc_822DDCE0;
loc_822DDBA8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r7,38
	ctx.r7.s64 = 2490368;
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// ori r6,r8,17405
	ctx.r6.u64 = ctx.r8.u64 | 17405;
	// lfs f13,-31008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31008);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r7,40643
	ctx.r7.u64 = ctx.r7.u64 | 40643;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r9,r9,-31304
	ctx.r9.s64 = ctx.r9.s64 + -31304;
	// beq cr6,0x822ddc54
	if (ctx.cr6.eq) goto loc_822DDC54;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_822DDBF8:
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f12,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x822ddc3c
	if (!ctx.cr6.lt) goto loc_822DDC3C;
	// addi r3,r10,-24
	ctx.r3.s64 = ctx.r10.s64 + -24;
loc_822DDC3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x822ddc4c
	if (!ctx.cr6.lt) goto loc_822DDC4C;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_822DDC4C:
	// bdnz 0x822ddbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DDBF8;
	// b 0x822ddc58
	goto loc_822DDC58;
loc_822DDC54:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_822DDC58:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x822ddcd8
	if (!ctx.cr6.gt) goto loc_822DDCD8;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822ddcd8
	if (!ctx.cr6.eq) goto loc_822DDCD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x822ddcd8
	if (!ctx.cr6.gt) goto loc_822DDCD8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822DDC84:
	// lwz r8,-40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822ddcd0
	if (ctx.cr6.eq) goto loc_822DDCD0;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// clrlwi r5,r8,17
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bge cr6,0x822ddcd0
	if (!ctx.cr6.lt) goto loc_822DDCD0;
	// addi r3,r10,-64
	ctx.r3.s64 = ctx.r10.s64 + -64;
loc_822DDCD0:
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// bdnz 0x822ddc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DDC84;
loc_822DDCD8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_822DDCE0:
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

PPC_WEAK_FUNC(sub_822DDB48) {
	__imp__sub_822DDB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDCF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822ddb48
	sub_822DDB48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDCF8) {
	__imp__sub_822DDCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD00) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822ddb48
	sub_822DDB48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDD00) {
	__imp__sub_822DDD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD08) {
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
	// bl 0x822dd860
	ctx.lr = 0x822DDD18;
	sub_822DD860(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822ddb48
	ctx.lr = 0x822DDD20;
	sub_822DDB48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDD08) {
	__imp__sub_822DDD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD30) {
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
	// bl 0x822dd860
	ctx.lr = 0x822DDD40;
	sub_822DD860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ddd60
	if (!ctx.cr6.eq) goto loc_822DDD60;
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_822DDD60:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDD30) {
	__imp__sub_822DDD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDD84) {
	__imp__sub_822DDD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DDD88) {
	__imp__sub_822DDD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822DDDA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822de148
	ctx.lr = 0x822DDDB8;
	sub_822DE148(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822dde68
	if (ctx.cr6.eq) goto loc_822DDE68;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822ddde4
	if (ctx.cr6.lt) goto loc_822DDDE4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6296
	ctx.r4.s64 = ctx.r11.s64 + -6296;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822DDDE4;
	sub_822830E8(ctx, base);
loc_822DDDE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822dde38
	if (ctx.cr0.lt) goto loc_822DDE38;
loc_822DDDF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822dde30
	if (!ctx.cr6.eq) goto loc_822DDE30;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dde30
	if (ctx.cr6.eq) goto loc_822DDE30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e8058
	ctx.lr = 0x822DDE28;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dde74
	if (ctx.cr6.eq) goto loc_822DDE74;
loc_822DDE30:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x822dddf0
	if (!ctx.cr0.lt) goto loc_822DDDF0;
loc_822DDE38:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822dde68
	if (ctx.cr6.eq) goto loc_822DDE68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-6348
	ctx.r4.s64 = ctx.r11.s64 + -6348;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822DDE68;
	sub_82280B08(ctx, base);
loc_822DDE68:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DDE74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DDD98) {
	__imp__sub_822DDD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDE80) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822ddf44
	if (!ctx.cr6.lt) goto loc_822DDF44;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ddf44
	if (!ctx.cr6.lt) goto loc_822DDF44;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ddf44
	if (ctx.cr6.lt) goto loc_822DDF44;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822ddf44
	if (ctx.cr6.lt) goto loc_822DDF44;
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ddf44
	if (ctx.cr6.eq) goto loc_822DDF44;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ddf3c
	if (!ctx.cr6.eq) goto loc_822DDF3C;
	// lis r8,-31858
	ctx.r8.s64 = -2087845888;
	// lwz r8,3956(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3956);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822ddf3c
	if (ctx.cr6.eq) goto loc_822DDF3C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x822ddf18
	if (!ctx.cr6.gt) goto loc_822DDF18;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x822ddf20
	goto loc_822DDF20;
loc_822DDF18:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r9,-28736
	ctx.r8.s64 = ctx.r9.s64 + -28736;
loc_822DDF20:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,-6136
	ctx.r4.s64 = ctx.r9.s64 + -6136;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82280b08
	ctx.lr = 0x822DDF3C;
	sub_82280B08(ctx, base);
loc_822DDF3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822ddf7c
	goto loc_822DDF7C;
loc_822DDF44:
	// lis r11,-31858
	ctx.r11.s64 = -2087845888;
	// lwz r11,3956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ddf74
	if (ctx.cr6.eq) goto loc_822DDF74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-6224
	ctx.r4.s64 = ctx.r11.s64 + -6224;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82280b08
	ctx.lr = 0x822DDF74;
	sub_82280B08(ctx, base);
loc_822DDF74:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_822DDF7C:
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

PPC_WEAK_FUNC(sub_822DDE80) {
	__imp__sub_822DDE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DDF94) {
	__imp__sub_822DDF94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DDF98) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ddfd8
	if (!ctx.cr6.eq) goto loc_822DDFD8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r4,r11,-6008
	ctx.r4.s64 = ctx.r11.s64 + -6008;
	// bl 0x82280b08
	ctx.lr = 0x822DDFCC;
	sub_82280B08(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// b 0x822ddff0
	goto loc_822DDFF0;
loc_822DDFD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ddd98
	ctx.lr = 0x822DDFE0;
	sub_822DDD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822dde80
	ctx.lr = 0x822DDFF0;
	sub_822DDE80(ctx, base);
loc_822DDFF0:
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

PPC_WEAK_FUNC(sub_822DDF98) {
	__imp__sub_822DDF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE008) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE008) {
	__imp__sub_822DE008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DE018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DE02C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822de02c
	if (!ctx.cr6.eq) goto loc_822DE02C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821435e8
	ctx.lr = 0x822DE04C;
	sub_821435E8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822de0d0
	if (!ctx.cr6.gt) goto loc_822DE0D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_822DE060:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822de0c0
	if (!ctx.cr6.gt) goto loc_822DE0C0;
loc_822DE06C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822DE088:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822de088
	if (!ctx.cr6.eq) goto loc_822DE088;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x821435e8
	ctx.lr = 0x822DE0B0;
	sub_821435E8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822de06c
	if (ctx.cr6.lt) goto loc_822DE06C;
loc_822DE0C0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822de060
	if (ctx.cr6.lt) goto loc_822DE060;
loc_822DE0D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE010) {
	__imp__sub_822DE010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE0D8) {
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
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82177148
	ctx.lr = 0x822DE0F8;
	sub_82177148(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE0D8) {
	__imp__sub_822DE0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE110) {
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
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82177148
	ctx.lr = 0x822DE130;
	sub_82177148(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE110) {
	__imp__sub_822DE110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE148) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822DE170;
	sub_823DFA20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de1a0
	if (ctx.cr6.eq) goto loc_822DE1A0;
loc_822DE17C:
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x823dfa20
	ctx.lr = 0x822DE194;
	sub_823DFA20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de17c
	if (!ctx.cr6.eq) goto loc_822DE17C;
loc_822DE1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822DE148) {
	__imp__sub_822DE148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE1BC) {
	__imp__sub_822DE1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE1C0) {
	__imp__sub_822DE1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822de20c
	if (!ctx.cr6.eq) goto loc_822DE20C;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822de20c
	if (!ctx.cr6.eq) goto loc_822DE20C;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822de20c
	if (!ctx.cr6.eq) goto loc_822DE20C;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822DE20C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE1C8) {
	__imp__sub_822DE1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE214) {
	__imp__sub_822DE214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822de24c
	if (!ctx.cr6.gt) goto loc_822DE24C;
loc_822DE224:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822de224
	if (!ctx.cr0.eq) goto loc_822DE224;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822de224
	if (ctx.cr6.gt) goto loc_822DE224;
loc_822DE24C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822DE25C:
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
	// bne 0x822de25c
	if (!ctx.cr0.eq) goto loc_822DE25C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x822de25c
	if (ctx.cr6.gt) goto loc_822DE25C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE218) {
	__imp__sub_822DE218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE288) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822DE2A0;
	sub_822E8058(ctx, base);
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE288) {
	__imp__sub_822DE288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE2B4) {
	__imp__sub_822DE2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r3,r11,-30044
	ctx.r3.s64 = ctx.r11.s64 + -30044;
	// b 0x82171b90
	sub_82171B90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE2B8) {
	__imp__sub_822DE2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE2C4) {
	__imp__sub_822DE2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r8,r11,-30044
	ctx.r8.s64 = ctx.r11.s64 + -30044;
loc_822DE2D0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822de2d0
	if (!ctx.cr0.eq) goto loc_822DE2D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE2C8) {
	__imp__sub_822DE2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r3,r11,-30044
	ctx.r3.s64 = ctx.r11.s64 + -30044;
	// b 0x822de218
	sub_822DE218(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE2F0) {
	__imp__sub_822DE2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE2FC) {
	__imp__sub_822DE2FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE300) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-9552
	ctx.r10.s64 = ctx.r10.s64 + -9552;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE300) {
	__imp__sub_822DE300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE31C) {
	__imp__sub_822DE31C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// stb r3,-30048(r11)
	PPC_STORE_U8(ctx.r11.u32 + -30048, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE320) {
	__imp__sub_822DE320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE32C) {
	__imp__sub_822DE32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lbz r3,-30047(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -30047);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE330) {
	__imp__sub_822DE330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE33C) {
	__imp__sub_822DE33C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DE348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822de368
	if (!ctx.cr6.eq) goto loc_822DE368;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-4384
	ctx.r4.s64 = ctx.r11.s64 + -4384;
	// bl 0x822830e8
	ctx.lr = 0x822DE368;
	sub_822830E8(ctx, base);
loc_822DE368:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de3a4
	if (ctx.cr6.eq) goto loc_822DE3A4;
	// subfic r29,r31,119
	ctx.xer.ca = ctx.r31.u32 <= 119;
	ctx.r29.s64 = 119 - ctx.r31.s64;
loc_822DE380:
	// bl 0x823dfa20
	ctx.lr = 0x822DE384;
	sub_823DFA20(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de380
	if (!ctx.cr6.eq) goto loc_822DE380;
loc_822DE3A4:
	// clrlwi r3,r30,22
	ctx.r3.u64 = ctx.r30.u32 & 0x3FF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE340) {
	__imp__sub_822DE340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE3B0) {
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
	// bne cr6,0x822de3d4
	if (!ctx.cr6.eq) goto loc_822DE3D4;
loc_822DE3CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822de414
	goto loc_822DE414;
loc_822DE3D4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de410
	if (ctx.cr6.eq) goto loc_822DE410;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822DE3E4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfa00
	ctx.lr = 0x822DE3F4;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822de404
	if (!ctx.cr6.eq) goto loc_822DE404;
	// cmpwi cr6,r30,95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 95, ctx.xer);
	// bne cr6,0x822de3cc
	if (!ctx.cr6.eq) goto loc_822DE3CC;
loc_822DE404:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822de3e4
	if (!ctx.cr6.eq) goto loc_822DE3E4;
loc_822DE410:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822DE414:
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

PPC_WEAK_FUNC(sub_822DE3B0) {
	__imp__sub_822DE3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE42C) {
	__imp__sub_822DE42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE430) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dad28
	sub_822DAD28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE430) {
	__imp__sub_822DE430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE434) {
	__imp__sub_822DE434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE438) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dad58
	sub_822DAD58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE438) {
	__imp__sub_822DE438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE43C) {
	__imp__sub_822DE43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE440) {
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
	// bl 0x822dad28
	ctx.lr = 0x822DE458;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE440) {
	__imp__sub_822DE440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE470) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE470) {
	__imp__sub_822DE470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de4a0
	if (ctx.cr6.eq) goto loc_822DE4A0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822de4a0
	if (ctx.cr6.eq) goto loc_822DE4A0;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822de4a4
	if (!ctx.cr6.eq) goto loc_822DE4A4;
loc_822DE4A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DE4A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE478) {
	__imp__sub_822DE478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE4AC) {
	__imp__sub_822DE4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de4d8
	if (ctx.cr6.eq) goto loc_822DE4D8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822de4d8
	if (ctx.cr6.eq) goto loc_822DE4D8;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822de4dc
	if (!ctx.cr6.eq) goto loc_822DE4DC;
loc_822DE4D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DE4DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE4B0) {
	__imp__sub_822DE4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE4E4) {
	__imp__sub_822DE4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de510
	if (ctx.cr6.eq) goto loc_822DE510;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822de510
	if (ctx.cr6.eq) goto loc_822DE510;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822de514
	if (!ctx.cr6.eq) goto loc_822DE514;
loc_822DE510:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DE514:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE4E8) {
	__imp__sub_822DE4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE51C) {
	__imp__sub_822DE51C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE520) {
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
	// bl 0x822dad58
	ctx.lr = 0x822DE53C;
	sub_822DAD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822DE520) {
	__imp__sub_822DE520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE558) {
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
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de5b8
	if (ctx.cr6.eq) goto loc_822DE5B8;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de600
	if (ctx.cr6.eq) goto loc_822DE600;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE58C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822de5b0
	if (ctx.cr6.eq) goto loc_822DE5B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de58c
	if (ctx.cr6.eq) goto loc_822DE58C;
loc_822DE5B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de600
	if (ctx.cr6.eq) goto loc_822DE600;
loc_822DE5B8:
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de618
	if (ctx.cr6.eq) goto loc_822DE618;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de600
	if (ctx.cr6.eq) goto loc_822DE600;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE5D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822de5f8
	if (ctx.cr6.eq) goto loc_822DE5F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de5d4
	if (ctx.cr6.eq) goto loc_822DE5D4;
loc_822DE5F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822de618
	if (!ctx.cr6.eq) goto loc_822DE618;
loc_822DE600:
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
loc_822DE618:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822dad28
	ctx.lr = 0x822DE620;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE558) {
	__imp__sub_822DE558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE638) {
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
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de698
	if (ctx.cr6.eq) goto loc_822DE698;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de6e0
	if (ctx.cr6.eq) goto loc_822DE6E0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE66C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822de690
	if (ctx.cr6.eq) goto loc_822DE690;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de66c
	if (ctx.cr6.eq) goto loc_822DE66C;
loc_822DE690:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de6e0
	if (ctx.cr6.eq) goto loc_822DE6E0;
loc_822DE698:
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de6f8
	if (ctx.cr6.eq) goto loc_822DE6F8;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de6e0
	if (ctx.cr6.eq) goto loc_822DE6E0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE6B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822de6d8
	if (ctx.cr6.eq) goto loc_822DE6D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de6b4
	if (ctx.cr6.eq) goto loc_822DE6B4;
loc_822DE6D8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822de6f8
	if (!ctx.cr6.eq) goto loc_822DE6F8;
loc_822DE6E0:
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
loc_822DE6F8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822dad28
	ctx.lr = 0x822DE700;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE638) {
	__imp__sub_822DE638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE718) {
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
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de778
	if (ctx.cr6.eq) goto loc_822DE778;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de7c0
	if (ctx.cr6.eq) goto loc_822DE7C0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE74C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x822de770
	if (ctx.cr6.eq) goto loc_822DE770;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de74c
	if (ctx.cr6.eq) goto loc_822DE74C;
loc_822DE770:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de7c0
	if (ctx.cr6.eq) goto loc_822DE7C0;
loc_822DE778:
	// lwz r8,28(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822de7d8
	if (ctx.cr6.eq) goto loc_822DE7D8;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822de7c0
	if (ctx.cr6.eq) goto loc_822DE7C0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822DE794:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x822de7b8
	if (ctx.cr6.eq) goto loc_822DE7B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822de794
	if (ctx.cr6.eq) goto loc_822DE794;
loc_822DE7B8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822de7d8
	if (!ctx.cr6.eq) goto loc_822DE7D8;
loc_822DE7C0:
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
loc_822DE7D8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822dad28
	ctx.lr = 0x822DE7E0;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822DE718) {
	__imp__sub_822DE718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822de810
	if (!ctx.cr6.eq) goto loc_822DE810;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
loc_822DE810:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE7F8) {
	__imp__sub_822DE7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE824) {
	__imp__sub_822DE824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822DE830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822de8c4
	if (ctx.cr6.eq) goto loc_822DE8C4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822DE84C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822de84c
	if (!ctx.cr6.eq) goto loc_822DE84C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822de894
	if (!ctx.cr6.gt) goto loc_822DE894;
loc_822DE874:
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9a0
	ctx.lr = 0x822DE880;
	sub_823DF9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822de8c4
	if (ctx.cr6.eq) goto loc_822DE8C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822de874
	if (ctx.cr6.lt) goto loc_822DE874;
loc_822DE894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x822DE89C;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822de8c4
	if (ctx.cr6.lt) goto loc_822DE8C4;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822de8c4
	if (!ctx.cr6.lt) goto loc_822DE8C4;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822DE8C4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DE828) {
	__imp__sub_822DE828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DE8D4) {
	__imp__sub_822DE8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DE8D8) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822deb74
	if (ctx.cr6.gt) goto loc_822DEB74;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5872
	ctx.r12.s64 = ctx.r12.s64 + -5872;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DE938;
	case 1:
		goto loc_822DE994;
	case 2:
		goto loc_822DE9BC;
	case 3:
		goto loc_822DE9F0;
	case 4:
		goto loc_822DEA30;
	case 5:
		goto loc_822DE974;
	case 6:
		goto loc_822DEB28;
	case 7:
		goto loc_822DEB54;
	case 8:
		goto loc_822DEA7C;
	case 9:
		goto loc_822DE9F0;
	default:
		return;
	}
	// lwz r17,-5832(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5832);
	// lwz r17,-5740(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5740);
	// lwz r17,-5700(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5700);
	// lwz r17,-5648(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5648);
	// lwz r17,-5584(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5584);
	// lwz r17,-5772(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5772);
	// lwz r17,-5336(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5336);
	// lwz r17,-5292(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5292);
	// lwz r17,-5508(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5508);
	// lwz r17,-5648(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -5648);
loc_822DE938:
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822de95c
	if (ctx.cr6.eq) goto loc_822DE95C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-17076
	ctx.r3.s64 = ctx.r11.s64 + -17076;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DE95C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,8244
	ctx.r3.s64 = ctx.r11.s64 + 8244;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DE974:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x822DE984;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DE994:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// addi r3,r11,17796
	ctx.r3.s64 = ctx.r11.s64 + 17796;
	// bl 0x822e84f0
	ctx.lr = 0x822DE9AC;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DE9BC:
	// lfs f2,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-4340
	ctx.r3.s64 = ctx.r11.s64 + -4340;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x822DE9E0;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DE9F0:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x822DEA20;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DEA30:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lfs f4,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x822DEA6C;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DEA7C:
	// lbz r5,145(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r4,147(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lbz r3,146(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// lbz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// addi r3,r8,-4352
	ctx.r3.s64 = ctx.r8.s64 + -4352;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822e84f0
	ctx.lr = 0x822DEB18;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DEB28:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822deb74
	if (ctx.cr6.eq) goto loc_822DEB74;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DEB54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x822DEB64;
	sub_822E84F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DEB74:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DE8D8) {
	__imp__sub_822DE8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEB8C) {
	__imp__sub_822DEB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEB90) {
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
	// bl 0x823deaf8
	ctx.lr = 0x822DEBA0;
	sub_823DEAF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822DEB90) {
	__imp__sub_822DEB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823deaf8
	sub_823DEAF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEBB8) {
	__imp__sub_822DEBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEBBC) {
	__imp__sub_822DEBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBC0) {
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
	// bl 0x823dec00
	ctx.lr = 0x822DEBD0;
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

PPC_WEAK_FUNC(sub_822DEBC0) {
	__imp__sub_822DEBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEBE4) {
	__imp__sub_822DEBE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r4,r10,-4340
	ctx.r4.s64 = ctx.r10.s64 + -4340;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEBE8) {
	__imp__sub_822DEBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEC0C) {
	__imp__sub_822DEC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
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
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x822dec48
	if (ctx.cr6.eq) goto loc_822DEC48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27904
	ctx.r4.s64 = ctx.r11.s64 + -27904;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
loc_822DEC48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-4332
	ctx.r4.s64 = ctx.r11.s64 + -4332;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEC10) {
	__imp__sub_822DEC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEC54) {
	__imp__sub_822DEC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r10,-4352
	ctx.r4.s64 = ctx.r10.s64 + -4352;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEC58) {
	__imp__sub_822DEC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEC8C) {
	__imp__sub_822DEC8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822DEC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822dece4
	if (!ctx.cr6.gt) goto loc_822DECE4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822DECB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822e8058
	ctx.lr = 0x822DECC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dedac
	if (ctx.cr6.eq) goto loc_822DEDAC;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822decb8
	if (ctx.cr6.lt) goto loc_822DECB8;
loc_822DECE4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ded38
	if (ctx.cr6.eq) goto loc_822DED38;
loc_822DECFC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x822deda0
	if (ctx.cr6.lt) goto loc_822DEDA0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822deda0
	if (ctx.cr6.gt) goto loc_822DEDA0;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r3,r9,-48
	ctx.r3.s64 = ctx.r9.s64 + -48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822decfc
	if (!ctx.cr6.eq) goto loc_822DECFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ded40
	if (ctx.cr6.lt) goto loc_822DED40;
loc_822DED38:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822deda4
	if (ctx.cr6.lt) goto loc_822DEDA4;
loc_822DED40:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822DED44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ded44
	if (!ctx.cr6.eq) goto loc_822DED44;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ble cr6,0x822deda0
	if (!ctx.cr6.gt) goto loc_822DEDA0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822DED70:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822e7ee0
	ctx.lr = 0x822DED84;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dedac
	if (ctx.cr6.eq) goto loc_822DEDAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ded70
	if (ctx.cr6.lt) goto loc_822DED70;
loc_822DEDA0:
	// li r3,-1337
	ctx.r3.s64 = -1337;
loc_822DEDA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DEDAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DEC90) {
	__imp__sub_822DEC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEDB8) {
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
	// bl 0x823de028
	ctx.lr = 0x822DEDCC;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r4,r10,-4352
	ctx.r4.s64 = ctx.r10.s64 + -4352;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x822DEE08;
	sub_823DEEB8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f29,3100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fsel f12,f13,f30,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f31,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fmadds f1,f10,f29,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822DEE3C;
	sub_823DDE20(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsubs f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fsel f6,f8,f30,f0
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f31,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// fmadds f1,f4,f29,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822DEE6C;
	sub_823DDE20(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsubs f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fsel f0,f2,f30,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r4,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmadds f1,f12,f29,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822DEE9C;
	sub_823DDE20(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fsel f8,f10,f30,f0
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fmadds f1,f6,f29,f28
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822DEECC;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x822DEEEC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DEDB8) {
	__imp__sub_822DEDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DEEFC) {
	__imp__sub_822DEEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DEF00) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822df064
	if (ctx.cr6.gt) goto loc_822DF064;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4288
	ctx.r12.s64 = ctx.r12.s64 + -4288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DEF68;
	case 1:
		goto loc_822DEF88;
	case 2:
		goto loc_822DEF98;
	case 3:
		goto loc_822DEFC0;
	case 4:
		goto loc_822DF00C;
	case 5:
		goto loc_822DEF7C;
	case 6:
		goto loc_822DF044;
	case 7:
		goto loc_822DEF80;
	case 8:
		goto loc_822DF058;
	case 9:
		goto loc_822DEFC0;
	default:
		return;
	}
	// lwz r17,-4248(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4248);
	// lwz r17,-4216(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4216);
	// lwz r17,-4200(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4200);
	// lwz r17,-4160(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4160);
	// lwz r17,-4084(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4084);
	// lwz r17,-4228(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4228);
	// lwz r17,-4028(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4028);
	// lwz r17,-4224(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4224);
	// lwz r17,-4008(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4008);
	// lwz r17,-4160(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -4160);
loc_822DEF68:
	// bl 0x823deaf8
	ctx.lr = 0x822DEF6C;
	sub_823DEAF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DEF7C:
	// bl 0x823deaf8
	ctx.lr = 0x822DEF80;
	sub_823DEAF8(ctx, base);
loc_822DEF80:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DEF88:
	// bl 0x823dec00
	ctx.lr = 0x822DEF8C;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DEF98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-4340
	ctx.r4.s64 = ctx.r10.s64 + -4340;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x822DEFBC;
	sub_823DEEB8(ctx, base);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DEFC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x822deffc
	if (ctx.cr6.eq) goto loc_822DEFFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27904
	ctx.r4.s64 = ctx.r11.s64 + -27904;
	// bl 0x823deeb8
	ctx.lr = 0x822DEFF8;
	sub_823DEEB8(ctx, base);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DEFFC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-4332
	ctx.r4.s64 = ctx.r11.s64 + -4332;
	// bl 0x823deeb8
	ctx.lr = 0x822DF008;
	sub_823DEEB8(ctx, base);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DF00C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r10,-4352
	ctx.r4.s64 = ctx.r10.s64 + -4352;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x822DF040;
	sub_823DEEB8(ctx, base);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DF044:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822dec90
	ctx.lr = 0x822DF050;
	sub_822DEC90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DF058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822dedb8
	ctx.lr = 0x822DF060;
	sub_822DEDB8(ctx, base);
	// b 0x822df06c
	goto loc_822DF06C;
loc_822DF064:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822DF06C:
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

PPC_WEAK_FUNC(sub_822DEF00) {
	__imp__sub_822DEF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF084) {
	__imp__sub_822DF084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF088) {
	PPC_FUNC_PROLOGUE();
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// b 0x822de8d8
	sub_822DE8D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF088) {
	__imp__sub_822DF088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF098) {
	PPC_FUNC_PROLOGUE();
	// ld r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// b 0x822de8d8
	sub_822DE8D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF098) {
	__imp__sub_822DF098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF0A8) {
	PPC_FUNC_PROLOGUE();
	// ld r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 36);
	// b 0x822de8d8
	sub_822DE8D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF0A8) {
	__imp__sub_822DF0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_822DF0C8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x822df0dc
	if (!ctx.cr6.lt) goto loc_822DF0DC;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822df0e8
	goto loc_822DF0E8;
loc_822DF0DC:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x822df0e8
	if (!ctx.cr6.gt) goto loc_822DF0E8;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822DF0E8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822df0c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF0C8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF0B8) {
	__imp__sub_822DF0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF0F4) {
	__imp__sub_822DF0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822df12c
	if (!ctx.cr6.gt) goto loc_822DF12C;
loc_822DF108:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x822df134
	if (ctx.cr6.lt) goto loc_822DF134;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x822df134
	if (ctx.cr6.gt) goto loc_822DF134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822df108
	if (ctx.cr6.lt) goto loc_822DF108;
loc_822DF12C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF134:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF0F8) {
	__imp__sub_822DF0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF13C) {
	__imp__sub_822DF13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// bgt cr6,0x822df324
	if (ctx.cr6.gt) goto loc_822DF324;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3720
	ctx.r12.s64 = ctx.r12.s64 + -3720;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DF1A0;
	case 1:
		goto loc_822DF1D8;
	case 2:
		goto loc_822DF1FC;
	case 3:
		goto loc_822DF23C;
	case 4:
		goto loc_822DF2C4;
	case 5:
		goto loc_822DF1B4;
	case 6:
		goto loc_822DF304;
	case 7:
		goto loc_822DF324;
	case 8:
		goto loc_822DF324;
	case 9:
		goto loc_822DF27C;
	default:
		return;
	}
	// lwz r17,-3680(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3680);
	// lwz r17,-3624(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3624);
	// lwz r17,-3588(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3588);
	// lwz r17,-3524(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3524);
	// lwz r17,-3388(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3388);
	// lwz r17,-3660(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3660);
	// lwz r17,-3324(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3324);
	// lwz r17,-3292(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3292);
	// lwz r17,-3292(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3292);
	// lwz r17,-3460(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3460);
loc_822DF1A0:
	// lbz r10,32(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 32);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,32(r1)
	PPC_STORE_U8(ctx.r1.u32 + 32, ctx.r8.u8);
	// b 0x822df324
	goto loc_822DF324;
loc_822DF1B4:
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r10,64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822df1d0
	if (ctx.cr6.lt) goto loc_822DF1D0;
	// lwz r10,68(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822df324
	if (!ctx.cr6.gt) goto loc_822DF324;
loc_822DF1D0:
	// stw r10,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r10.u32);
	// b 0x822df324
	goto loc_822DF324;
loc_822DF1D8:
	// lfs f0,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822df1f4
	if (ctx.cr6.lt) goto loc_822DF1F4;
	// lfs f13,68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822df324
	if (!ctx.cr6.gt) goto loc_822DF324;
loc_822DF1F4:
	// stfs f13,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 32, temp.u32);
	// b 0x822df324
	goto loc_822DF324;
loc_822DF1FC:
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,68(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DF210:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822df224
	if (!ctx.cr6.lt) goto loc_822DF224;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822df230
	goto loc_822DF230;
loc_822DF224:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822df230
	if (!ctx.cr6.gt) goto loc_822DF230;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822DF230:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822df210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF210;
	// b 0x822df324
	goto loc_822DF324;
loc_822DF23C:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,68(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DF250:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822df264
	if (!ctx.cr6.lt) goto loc_822DF264;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822df270
	goto loc_822DF270;
loc_822DF264:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822df270
	if (!ctx.cr6.gt) goto loc_822DF270;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822DF270:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822df250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF250;
	// b 0x822df324
	goto loc_822DF324;
loc_822DF27C:
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
loc_822DF298:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822df2ac
	if (!ctx.cr6.lt) goto loc_822DF2AC;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822df2b8
	goto loc_822DF2B8;
loc_822DF2AC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822df2b8
	if (!ctx.cr6.gt) goto loc_822DF2B8;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822DF2B8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822df298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF298;
	// b 0x822df324
	goto loc_822DF324;
loc_822DF2C4:
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f13,68(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DF2D8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822df2ec
	if (!ctx.cr6.lt) goto loc_822DF2EC;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x822df2f8
	goto loc_822DF2F8;
loc_822DF2EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822df2f8
	if (!ctx.cr6.gt) goto loc_822DF2F8;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822DF2F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822df2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF2D8;
	// b 0x822df324
	goto loc_822DF324;
loc_822DF304:
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822df31c
	if (ctx.cr6.lt) goto loc_822DF31C;
	// lwz r10,64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822df324
	if (ctx.cr6.lt) goto loc_822DF324;
loc_822DF31C:
	// lwz r11,48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// stw r11,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r11.u32);
loc_822DF324:
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF140) {
	__imp__sub_822DF140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF34C) {
	__imp__sub_822DF34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3200
	ctx.r12.s64 = ctx.r12.s64 + -3200;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DF3A8;
	case 1:
		goto loc_822DF3D8;
	case 2:
		goto loc_822DF434;
	case 3:
		goto loc_822DF470;
	case 4:
		goto loc_822DF4EC;
	case 5:
		goto loc_822DF3B0;
	case 6:
		goto loc_822DF3FC;
	case 7:
		goto loc_822DF3A8;
	case 8:
		goto loc_822DF3A8;
	case 9:
		goto loc_822DF4AC;
	default:
		return;
	}
	// lwz r17,-3160(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3160);
	// lwz r17,-3112(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3112);
	// lwz r17,-3020(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3020);
	// lwz r17,-2960(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2960);
	// lwz r17,-2836(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2836);
	// lwz r17,-3152(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3152);
	// lwz r17,-3076(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3076);
	// lwz r17,-3160(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3160);
	// lwz r17,-3160(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -3160);
	// lwz r17,-2900(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2900);
loc_822DF3A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF3B0:
	// lwz r10,48(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// lwz r10,52(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822DF3D8:
	// lfs f13,48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// lfs f13,52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF3FC:
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822df41c
	if (ctx.cr6.lt) goto loc_822DF41C;
	// lwz r10,48(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822df428
	if (ctx.cr6.lt) goto loc_822DF428;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822df428
	if (ctx.cr6.eq) goto loc_822DF428;
loc_822DF41C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_822DF428:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_822DF434:
	// lfs f13,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
loc_822DF444:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x822df444
	if (ctx.cr6.lt) goto loc_822DF444;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF470:
	// lfs f13,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
loc_822DF480:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822df480
	if (ctx.cr6.lt) goto loc_822DF480;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF4AC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
loc_822DF4C0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822df4c0
	if (ctx.cr6.lt) goto loc_822DF4C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF4EC:
	// lfs f13,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
loc_822DF4FC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x822df528
	if (ctx.cr6.lt) goto loc_822DF528;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822df528
	if (ctx.cr6.gt) goto loc_822DF528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822df4fc
	if (ctx.cr6.lt) goto loc_822DF4FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822DF528:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF350) {
	__imp__sub_822DF350(ctx, base);
}

