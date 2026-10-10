#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82393EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393EE4) {
	__imp__sub_82393EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393EE8) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82393f24
	if (ctx.cr6.eq) goto loc_82393F24;
loc_82393F14:
	// bl 0x82393d48
	ctx.lr = 0x82393F18;
	sub_82393D48(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82393f14
	if (!ctx.cr6.eq) goto loc_82393F14;
loc_82393F24:
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

PPC_WEAK_FUNC(sub_82393EE8) {
	__imp__sub_82393EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393F40) {
	__imp__sub_82393F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lbz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lwsync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393F58) {
	__imp__sub_82393F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393F6C) {
	__imp__sub_82393F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,8456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82393fc0
	if (ctx.cr6.lt) goto loc_82393FC0;
loc_82393F90:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addi r6,r10,1352
	ctx.r6.s64 = ctx.r10.s64 + 1352;
	// slw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// and r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82393fc8
	if (!ctx.cr6.eq) goto loc_82393FC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82393f90
	if (!ctx.cr6.gt) goto loc_82393F90;
loc_82393FC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82393FC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393F70) {
	__imp__sub_82393F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FD0) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393FD0) {
	__imp__sub_82393FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc298
	sub_822DC298(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393FD8) {
	__imp__sub_82393FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393FDC) {
	__imp__sub_82393FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc298
	sub_822DC298(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393FE0) {
	__imp__sub_82393FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393FE4) {
	__imp__sub_82393FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r5,r11,16352
	ctx.r5.s64 = ctx.r11.s64 + 16352;
	// addi r4,r10,16344
	ctx.r4.s64 = ctx.r10.s64 + 16344;
	// b 0x822ff508
	sub_822FF508(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393FE8) {
	__imp__sub_82393FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393FFC) {
	__imp__sub_82393FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394000) {
	__imp__sub_82394000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239401C) {
	__imp__sub_8239401C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// subfe r11,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,337(r9)
	PPC_STORE_U8(ctx.r9.u32 + 337, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394020) {
	__imp__sub_82394020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394038) {
	PPC_FUNC_PROLOGUE();
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394038) {
	__imp__sub_82394038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82394048;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12576(r1)
	ea = -12576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82394090
	if (!ctx.cr6.lt) goto loc_82394090;
loc_82394080:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,12576
	ctx.r1.s64 = ctx.r1.s64 + 12576;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
loc_82394090:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82300a68
	ctx.lr = 0x8239409C;
	sub_82300A68(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823940b4
	if (ctx.cr6.eq) goto loc_823940B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f2368
	ctx.lr = 0x823940B4;
	sub_822F2368(ctx, base);
loc_823940B4:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r20,-3
	ctx.r20.s64 = -3;
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r3,-4
	ctx.r3.s64 = -4;
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// blt cr6,0x82394400
	if (ctx.cr6.lt) goto loc_82394400;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r21,240
	ctx.r11.s64 = ctx.r21.s64 + 240;
	// addi r22,r8,1
	ctx.r22.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_82394104:
	// addi r8,r1,8036
	ctx.r8.s64 = ctx.r1.s64 + 8036;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82394164
	if (ctx.cr6.gt) goto loc_82394164;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82394174
	if (ctx.cr6.eq) goto loc_82394174;
	// lwz r8,-120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -120);
	// lwz r6,-124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r5,-128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -128);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// and r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ctx.r28.u64;
	// lwz r16,-132(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// and r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 & ctx.r27.u64;
	// lwz r15,-136(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + -136);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwz r6,-140(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// and r16,r16,r26
	ctx.r16.u64 = ctx.r16.u64 & ctx.r26.u64;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// and r8,r15,r25
	ctx.r8.u64 = ctx.r15.u64 & ctx.r25.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// and r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 & ctx.r24.u64;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394174
	if (ctx.cr6.eq) goto loc_82394174;
loc_82394164:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x823941c0
	goto loc_823941C0;
loc_82394174:
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// sth r31,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r16,r11,-240
	ctx.r16.s64 = ctx.r11.s64 + -240;
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// stw r16,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r16.u32);
	// stfs f31,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823941A0:
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x823941a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823941A0;
	// lhz r8,-236(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -236);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// sth r9,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r9.u16);
	// sth r8,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r8.u16);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_823941C0:
	// addi r8,r1,8036
	ctx.r8.s64 = ctx.r1.s64 + 8036;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82394220
	if (ctx.cr6.gt) goto loc_82394220;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82394230
	if (ctx.cr6.eq) goto loc_82394230;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// and r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ctx.r27.u64;
	// lwz r16,-12(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// and r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 & ctx.r26.u64;
	// lwz r15,-16(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r16,r16,r25
	ctx.r16.u64 = ctx.r16.u64 & ctx.r25.u64;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// and r8,r15,r24
	ctx.r8.u64 = ctx.r15.u64 & ctx.r24.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// and r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ctx.r28.u64;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394230
	if (ctx.cr6.eq) goto loc_82394230;
loc_82394220:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8239427c
	goto loc_8239427C;
loc_82394230:
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// sth r31,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r16,r11,-116
	ctx.r16.s64 = ctx.r11.s64 + -116;
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// stw r16,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r16.u32);
	// stfs f31,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239425C:
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x8239425c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239425C;
	// lhz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -112);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// sth r9,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r9.u16);
	// sth r8,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r8.u16);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_8239427C:
	// addi r8,r1,8036
	ctx.r8.s64 = ctx.r1.s64 + 8036;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823942dc
	if (ctx.cr6.gt) goto loc_823942DC;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823942ec
	if (ctx.cr6.eq) goto loc_823942EC;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r6,124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// and r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ctx.r28.u64;
	// lwz r16,116(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// and r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 & ctx.r27.u64;
	// lwz r15,112(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// and r16,r16,r26
	ctx.r16.u64 = ctx.r16.u64 & ctx.r26.u64;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// and r8,r15,r25
	ctx.r8.u64 = ctx.r15.u64 & ctx.r25.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// and r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 & ctx.r24.u64;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823942ec
	if (ctx.cr6.eq) goto loc_823942EC;
loc_823942DC:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82394338
	goto loc_82394338;
loc_823942EC:
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// sth r31,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r16,r11,8
	ctx.r16.s64 = ctx.r11.s64 + 8;
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// stw r16,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r16.u32);
	// stfs f31,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82394318:
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x82394318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394318;
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// sth r9,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r9.u16);
	// sth r8,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r8.u16);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_82394338:
	// addi r8,r1,8036
	ctx.r8.s64 = ctx.r1.s64 + 8036;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82394398
	if (ctx.cr6.gt) goto loc_82394398;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823943a8
	if (ctx.cr6.eq) goto loc_823943A8;
	// lwz r8,252(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r6,248(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// and r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ctx.r28.u64;
	// lwz r16,240(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// and r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 & ctx.r27.u64;
	// lwz r15,236(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwz r6,232(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// and r16,r16,r26
	ctx.r16.u64 = ctx.r16.u64 & ctx.r26.u64;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// and r8,r15,r25
	ctx.r8.u64 = ctx.r15.u64 & ctx.r25.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// and r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 & ctx.r24.u64;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823943a8
	if (ctx.cr6.eq) goto loc_823943A8;
loc_82394398:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x823943f4
	goto loc_823943F4;
loc_823943A8:
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// sth r31,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r16,r11,132
	ctx.r16.s64 = ctx.r11.s64 + 132;
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// stw r16,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r16.u32);
	// stfs f31,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823943D4:
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x823943d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823943D4;
	// lhz r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 136);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// sth r9,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r9.u16);
	// sth r8,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r8.u16);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_823943F4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// bne 0x82394104
	if (!ctx.cr0.eq) goto loc_82394104;
loc_82394400:
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x823944e4
	if (!ctx.cr6.lt) goto loc_823944E4;
	// mulli r11,r4,124
	ctx.r11.s64 = ctx.r4.s64 * 124;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r5,r10,28
	ctx.r5.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// subf r4,r4,r23
	ctx.r4.s64 = ctx.r23.s64 - ctx.r4.s64;
loc_8239441C:
	// addi r8,r1,8036
	ctx.r8.s64 = ctx.r1.s64 + 8036;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8239447c
	if (ctx.cr6.gt) goto loc_8239447C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8239448c
	if (ctx.cr6.eq) goto loc_8239448C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// and r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 & ctx.r27.u64;
	// lwz r23,-12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// and r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 & ctx.r26.u64;
	// lwz r22,-16(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 & ctx.r25.u64;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// and r8,r22,r24
	ctx.r8.u64 = ctx.r22.u64 & ctx.r24.u64;
	// or r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 | ctx.r23.u64;
	// and r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 & ctx.r7.u64;
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239448c
	if (ctx.cr6.eq) goto loc_8239448C;
loc_8239447C:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x823944d8
	goto loc_823944D8;
loc_8239448C:
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f31,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r23,r11,-116
	ctx.r23.s64 = ctx.r11.s64 + -116;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// addi r7,r30,-4
	ctx.r7.s64 = ctx.r30.s64 + -4;
	// sth r31,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r31.u16);
	// addi r6,r5,-4
	ctx.r6.s64 = ctx.r5.s64 + -4;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r23,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r23.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823944B8:
	// lwzu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x823944b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823944B8;
	// lhz r8,-112(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -112);
	// addi r5,r5,60
	ctx.r5.s64 = ctx.r5.s64 + 60;
	// sth r9,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r9.u16);
	// sth r8,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r8.u16);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_823944D8:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// bne 0x8239441c
	if (!ctx.cr0.eq) goto loc_8239441C;
loc_823944E4:
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// addi r4,r11,5444
	ctx.r4.s64 = ctx.r11.s64 + 5444;
loc_823944F8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stwcx. r7,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823944f8
	if (!ctx.cr0.eq) goto loc_823944F8;
	// add r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82394080
	if (ctx.cr6.gt) goto loc_82394080;
	// lwz r10,14592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// rlwinm r9,r8,30,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFFF;
	// addic r8,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r18)
	PPC_STORE_U16(ctx.r18.u32 + 2, ctx.r9.u16);
	// subfe r7,r8,r31
	temp.u8 = (~ctx.r8.u32 + ctx.r31.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r7,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r7.u8);
	// bl 0x823de1f0
	ctx.lr = 0x82394550;
	sub_823DE1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r17,1(r18)
	PPC_STORE_U8(ctx.r18.u32 + 1, ctx.r17.u8);
	// addi r1,r1,12576
	ctx.r1.s64 = ctx.r1.s64 + 12576;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394040) {
	__imp__sub_82394040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394564) {
	__imp__sub_82394564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394568) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823d11b0
	ctx.lr = 0x82394590;
	sub_823D11B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823945b8
	if (!ctx.cr6.eq) goto loc_823945B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823945b0
	if (ctx.cr6.eq) goto loc_823945B0;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82102540
	ctx.lr = 0x823945B0;
	sub_82102540(ctx, base);
loc_823945B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823945dc
	goto loc_823945DC;
loc_823945B8:
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82102568
	ctx.lr = 0x823945C0;
	sub_82102568(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1048
	ctx.lr = 0x823945D8;
	sub_823D1048(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823945DC:
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

PPC_WEAK_FUNC(sub_82394568) {
	__imp__sub_82394568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823945F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823945F4) {
	__imp__sub_823945F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823945F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823945F8) {
	__imp__sub_823945F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82394608;
	__savegprlr_29(ctx, base);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// ble cr6,0x82394660
	if (!ctx.cr6.gt) goto loc_82394660;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r30,512
	ctx.r30.s64 = 512;
	// b 0x82394664
	goto loc_82394664;
loc_82394660:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82394664:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239468c
	if (!ctx.cr6.gt) goto loc_8239468C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82394680:
	// dcbt r8,r11
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x82394680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394680;
loc_8239468C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// ble cr6,0x823946b4
	if (!ctx.cr6.gt) goto loc_823946B4;
	// li r10,512
	ctx.r10.s64 = 512;
	// li r8,512
	ctx.r8.s64 = 512;
	// b 0x823946b8
	goto loc_823946B8;
loc_823946B4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823946B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823946e0
	if (!ctx.cr6.gt) goto loc_823946E0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823946D4:
	// dcbt r9,r3
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x823946d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823946D4;
loc_823946E0:
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r3,-31852
	ctx.r3.s64 = -2087452672;
	// addi r29,r9,12168
	ctx.r29.s64 = ctx.r9.s64 + 12168;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// addi r3,r3,-30336
	ctx.r3.s64 = ctx.r3.s64 + -30336;
	// lvrx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lvlx128 v57,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v11,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vand128 v59,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v62,v58,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// ble cr6,0x8239480c
	if (!ctx.cr6.gt) goto loc_8239480C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vpermwi128 v61,v62,99
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x9C));
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// vpermwi128 v60,v62,135
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x78));
	// addi r6,r10,-5840
	ctx.r6.s64 = ctx.r10.s64 + -5840;
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8239474C:
	// dcbt r30,r11
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// dcbt r8,r10
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lvx128 v55,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// vsubfp128 v54,v55,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v54.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v59.f32)));
	// rotlwi r4,r6,5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// vor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// rotlwi r3,r5,5
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lvx128 v53,r4,r31
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r31
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v51,v55,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v50,v55,v52
	simde_mm_store_ps(ctx.v50.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v49,v54,135
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0x78));
	// vpermwi128 v12,v54,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0x9C));
	// vmulfp128 v8,v61,v49
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vpermwi128 v48,v51,135
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0x78));
	// vpermwi128 v47,v50,99
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0x9C));
	// vpermwi128 v10,v50,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0x78));
	// vpermwi128 v9,v51,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0x9C));
	// vmulfp128 v7,v47,v48
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vnmsubfp v8,v0,v12,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v10,v9,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v46,v8,v51
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v51.f32), 0xEF));
	// vmsum3fp128 v45,v8,v50
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v50.f32), 0xEF));
	// vmsum3fp128 v44,v62,v0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmsum3fp128 v43,v54,v0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vcmpgtfp128 v42,v46,v63
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v41,v46,v45
	simde_mm_store_ps(ctx.v41.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vcmpgtfp128 v40,v63,v45
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vmulfp128 v39,v13,v44
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vrefp128 v38,v44
	simde_mm_store_ps(ctx.v38.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v44.f32)));
	// vcmpgtfp128 v37,v43,v63
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcmpgtfp128 v36,v44,v41
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vcmpgtfp128 v35,v43,v39
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v0,v43,v38
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vor128 v34,v40,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vor128 v33,v42,v34
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vandc128 v32,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vandc128 v10,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vsel v11,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v13,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// bdnz 0x8239474c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239474C;
loc_8239480C:
	// vmsum3fp128 v63,v11,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// vrsqrtefp128 v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vcmpeqfp128 v10,v63,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v11,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vsel v11,v12,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vspltw128 v60,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vspltw128 v59,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw128 v58,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// stvewx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v57,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vminfp128 v55,v13,v56
	simde_mm_store_ps(ctx.v55.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stvewx128 v54,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-48(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394600) {
	__imp__sub_82394600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239486C) {
	__imp__sub_8239486C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394870) {
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
	// bl 0x821a80b0
	ctx.lr = 0x82394880;
	sub_821A80B0(ctx, base);
	// bl 0x8228be98
	ctx.lr = 0x82394884;
	sub_8228BE98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394870) {
	__imp__sub_82394870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394894) {
	__imp__sub_82394894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394898) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821a80d8
	ctx.lr = 0x823948B4;
	sub_821A80D8(ctx, base);
	// bl 0x8228be88
	ctx.lr = 0x823948B8;
	sub_8228BE88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x821a6ab0
	ctx.lr = 0x823948C4;
	sub_821A6AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82187108
	ctx.lr = 0x823948D0;
	sub_82187108(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x823b7ac8
	ctx.lr = 0x823948DC;
	sub_823B7AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6b58
	ctx.lr = 0x823948E4;
	sub_821A6B58(ctx, base);
	// bl 0x823b6b00
	ctx.lr = 0x823948E8;
	sub_823B6B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823948fc
	if (ctx.cr6.eq) goto loc_823948FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6b20
	ctx.lr = 0x823948FC;
	sub_821A6B20(ctx, base);
loc_823948FC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8239491c
	if (!ctx.cr6.eq) goto loc_8239491C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x823b7ac8
	ctx.lr = 0x8239491C;
	sub_823B7AC8(ctx, base);
loc_8239491C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x823b7ac8
	ctx.lr = 0x82394928;
	sub_823B7AC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_82394898) {
	__imp__sub_82394898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394940) {
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
	// bl 0x8228bea8
	ctx.lr = 0x82394958;
	sub_8228BEA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x823b7ac8
	ctx.lr = 0x82394964;
	sub_823B7AC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82394940) {
	__imp__sub_82394940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394978) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x823b7ac8
	sub_823B7AC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394978) {
	__imp__sub_82394978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394984) {
	__imp__sub_82394984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394988) {
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
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823b7ac8
	ctx.lr = 0x823949A4;
	sub_823B7AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394988) {
	__imp__sub_82394988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823949B4) {
	__imp__sub_823949B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949B8) {
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
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823b7ac8
	ctx.lr = 0x823949D4;
	sub_823B7AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823949B8) {
	__imp__sub_823949B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823949E4) {
	__imp__sub_823949E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949E8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823949E8) {
	__imp__sub_823949E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823949F0) {
	__imp__sub_823949F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823949F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addis r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 393216;
	// addi r11,r11,20740
	ctx.r11.s64 = ctx.r11.s64 + 20740;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82394A18:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82394a3c
	if (!ctx.cr6.eq) goto loc_82394A3C;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82394a18
	if (!ctx.cr0.eq) goto loc_82394A18;
	// b 0x82394a44
	goto loc_82394A44;
loc_82394A3C:
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82394A44:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82394a58
	if (ctx.cr6.eq) goto loc_82394A58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82394A58:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,1365
	ctx.r8.s64 = ctx.r4.s64 + 1365;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r6,-24824
	ctx.r8.s64 = ctx.r6.s64 + -24824;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// bne cr6,0x82394afc
	if (!ctx.cr6.eq) goto loc_82394AFC;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addis r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 393216;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// addi r7,r9,20756
	ctx.r7.s64 = ctx.r9.s64 + 20756;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,640
	ctx.r6.s64 = 640;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// li r3,2560
	ctx.r3.s64 = 2560;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// li r9,3840
	ctx.r9.s64 = 3840;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// addis r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 131072;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r3,37
	ctx.r3.s64 = 37;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// addi r8,r8,18560
	ctx.r8.s64 = ctx.r8.s64 + 18560;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// b 0x82394b58
	goto loc_82394B58;
loc_82394AFC:
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// addis r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 393216;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// addi r7,r9,20752
	ctx.r7.s64 = ctx.r9.s64 + 20752;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// li r3,24576
	ctx.r3.s64 = 24576;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// addis r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 131072;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// li r7,35
	ctx.r7.s64 = 35;
	// li r6,34
	ctx.r6.s64 = 34;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// addi r9,r9,14464
	ctx.r9.s64 = ctx.r9.s64 + 14464;
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_82394B58:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r9,r4,92
	ctx.r9.s64 = ctx.r4.s64 * 92;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r4,54
	ctx.r6.s64 = ctx.r4.s64 + 54;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r4,r6,92
	ctx.r4.s64 = ctx.r6.s64 * 92;
	// lwz r8,4972(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4972);
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4928(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4928);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r9,5012(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5012);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823949F8) {
	__imp__sub_823949F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394BA4) {
	__imp__sub_82394BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// addi r7,r11,24448
	ctx.r7.s64 = ctx.r11.s64 + 24448;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r11,r7,6
	ctx.r11.s64 = ctx.r7.s64 + 393216;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r5,r11,20740
	ctx.r5.s64 = ctx.r11.s64 + 20740;
	// lwz r11,14592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14592);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,4972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4972, ctx.r7.u32);
	// lwz r11,14592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14592);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4928, ctx.r4.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,14592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14592);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r4,r10,1365
	ctx.r4.s64 = ctx.r10.s64 + 1365;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394BA8) {
	__imp__sub_82394BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82394c48
	if (!ctx.cr6.gt) goto loc_82394C48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82394C48:
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394C28) {
	__imp__sub_82394C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394C60) {
	__imp__sub_82394C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82394c90
	if (!ctx.cr6.gt) goto loc_82394C90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82394C90:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394C70) {
	__imp__sub_82394C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394CB4) {
	__imp__sub_82394CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394CB8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82394cdc
	if (!ctx.cr6.gt) goto loc_82394CDC;
loc_82394CD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82394CDC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82394cd0
	if (ctx.cr6.gt) goto loc_82394CD0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82394cd0
	if (ctx.cr6.gt) goto loc_82394CD0;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82394d54
	if (ctx.cr6.eq) goto loc_82394D54;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
loc_82394D54:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394CB8) {
	__imp__sub_82394CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394D60) {
	__imp__sub_82394D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,5,11,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1FFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394D70) {
	__imp__sub_82394D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394D80) {
	__imp__sub_82394D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394D90) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82394D98;
	__savegprlr_26(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82394e54
	if (ctx.cr6.eq) goto loc_82394E54;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
loc_82394DB0:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82394e48
	if (ctx.cr6.lt) goto loc_82394E48;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82394e48
	if (!ctx.cr6.lt) goto loc_82394E48;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82394e18
	if (ctx.cr6.eq) goto loc_82394E18;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82394DD8:
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82394e18
	if (!ctx.cr6.lt) goto loc_82394E18;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// bne 0x82394dd8
	if (!ctx.cr0.eq) goto loc_82394DD8;
loc_82394E18:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
loc_82394E48:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82394db0
	if (!ctx.cr0.eq) goto loc_82394DB0;
loc_82394E54:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394D90) {
	__imp__sub_82394D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82394E5C) {
	__imp__sub_82394E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394E60) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82394ec4
	if (ctx.cr6.eq) goto loc_82394EC4;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82394E78:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82394eb8
	if (ctx.cr6.lt) goto loc_82394EB8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82394eb8
	if (!ctx.cr6.lt) goto loc_82394EB8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82394EB8:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82394e78
	if (!ctx.cr0.eq) goto loc_82394E78;
loc_82394EC4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394E60) {
	__imp__sub_82394E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82394f38
	if (!ctx.cr6.eq) goto loc_82394F38;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r11,r11,-27528
	ctx.r11.s64 = ctx.r11.s64 + -27528;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82394f14
	if (ctx.cr6.eq) goto loc_82394F14;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82394f38
	if (ctx.cr6.eq) goto loc_82394F38;
loc_82394F14:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12852);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x823ddd78
	sub_823DDD78(ctx, base);
	return;
loc_82394F38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82394f50
	if (ctx.cr6.lt) goto loc_82394F50;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// b 0x823ddd78
	sub_823DDD78(ctx, base);
	return;
loc_82394F50:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rldicl r4,r9,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// rlwinm r5,r4,1,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// divwu r4,r6,r3
	ctx.r4.u32 = ctx.r6.u32 / ctx.r3.u32;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82394ED0) {
	__imp__sub_82394ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82394FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82394FA8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de018
	ctx.lr = 0x82394FB0;
	__savefpr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// addi r9,r10,-31032
	ctx.r9.s64 = ctx.r10.s64 + -31032;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// bl 0x82394ed0
	ctx.lr = 0x82395048;
	sub_82394ED0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,380(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,6004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6004);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmr f25,f12
	ctx.f25.f64 = ctx.f12.f64;
	// fmr f24,f12
	ctx.f24.f64 = ctx.f12.f64;
	// bl 0x8238fea8
	ctx.lr = 0x82395078;
	sub_8238FEA8(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r28,5,11,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1FFFE0;
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// vpkd3d128 v62,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v62.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v62.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// lfs f4,28(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f24,f11
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f10,f24
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f7,f24
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f24.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// fmadds f11,f31,f6,f9
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f9.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadds f10,f4,f31,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f8.f64));
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// fmadds f9,f3,f31,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f5.f64));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r24,r1,84
	ctx.r24.s64 = ctx.r1.s64 + 84;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// fmadds f8,f2,f0,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f13,f0,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f13,12168(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// fneg f9,f31
	ctx.f9.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fneg f11,f30
	ctx.f11.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f10,f24
	ctx.f10.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fneg f12,f24
	ctx.f12.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
	// stvewx128 v61,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// vpkd3d128 v60,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// lfs f6,24(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f6,f11,f6,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f31.f64));
	// fmadds f5,f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f4,f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f3,f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f2,f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f1,f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fadds f12,f28,f3
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// stfsu f12,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f11,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// stvewx128 v59,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r26,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f12,f9,f12,f3
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r24,r1,84
	ctx.r24.s64 = ctx.r1.s64 + 84;
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f26,116(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f1.f64));
	// lvx128 v63,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f10,f8,f9,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f2.f64));
	// vor128 v58,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fmadds f9,f7,f0,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// vpkd3d128 v58,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v58.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v58.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v58.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v58.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// fmadds f8,f6,f0,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f7,f5,f0,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfsu f6,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v56,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v56.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v56.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v56.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v56.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// vspltw128 v55,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// lfs f5,4(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
	// stvewx128 v57,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f24,f9
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f30,f11,f8
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f7,f24
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f24.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f5,f24
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f3,f30,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f6.f64));
	// fmadds f6,f11,f0,f2
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f7,f10,f30,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmadds f5,f1,f0,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfsu f3,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f12,f0,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stvewx128 v55,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de064
	ctx.lr = 0x8239538C;
	__restfpr_24(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82394FA0) {
	__imp__sub_82394FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395390) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r8,r11,4608
	ctx.r8.s64 = ctx.r11.s64 + 4608;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r30,r10,24448
	ctx.r30.s64 = ctx.r10.s64 + 24448;
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bne cr6,0x823953f0
	if (!ctx.cr6.eq) goto loc_823953F0;
	// ori r7,r9,20756
	ctx.r7.u64 = ctx.r9.u64 | 20756;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r3,r10,-32768
	ctx.r3.s64 = ctx.r10.s64 + -32768;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x82395430
	ctx.lr = 0x823953E4;
	sub_82395430(ctx, base);
	// lis r6,6
	ctx.r6.s64 = 393216;
	// ori r5,r6,20756
	ctx.r5.u64 = ctx.r6.u64 | 20756;
	// b 0x82395408
	goto loc_82395408;
loc_823953F0:
	// ori r7,r9,20752
	ctx.r7.u64 = ctx.r9.u64 | 20752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x82395430
	ctx.lr = 0x82395400;
	sub_82395430(ctx, base);
	// lis r6,6
	ctx.r6.s64 = 393216;
	// ori r5,r6,20752
	ctx.r5.u64 = ctx.r6.u64 | 20752;
loc_82395408:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stwx r11,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82395390) {
	__imp__sub_82395390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239542C) {
	__imp__sub_8239542C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82395438;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r11,8194
	ctx.r6.s64 = ctx.r11.s64 + 8194;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82394d90
	ctx.lr = 0x82395478;
	sub_82394D90(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82394e60
	ctx.lr = 0x82395490;
	sub_82394E60(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394d90
	ctx.lr = 0x823954AC;
	sub_82394D90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82395430) {
	__imp__sub_82395430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823954B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823954B4) {
	__imp__sub_823954B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823954B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f0,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f10,f13,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f1,f9,f12,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823954B8) {
	__imp__sub_823954B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823954F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823954F4) {
	__imp__sub_823954F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823954F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82395500;
	__savegprlr_27(ctx, base);
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82395750
	if (!ctx.cr6.eq) goto loc_82395750;
	// lfs f0,176(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f13,172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f12,168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8239561c
	if (ctx.cr6.lt) goto loc_8239561C;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r1,24
	ctx.r7.s64 = ctx.r1.s64 + 24;
	// addi r6,r1,28
	ctx.r6.s64 = ctx.r1.s64 + 28;
	// addi r31,r1,36
	ctx.r31.s64 = ctx.r1.s64 + 36;
	// addi r30,r1,40
	ctx.r30.s64 = ctx.r1.s64 + 40;
	// addi r29,r1,20
	ctx.r29.s64 = ctx.r1.s64 + 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r28,r1,32
	ctx.r28.s64 = ctx.r1.s64 + 32;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82395584:
	// lfs f11,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,32(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f5,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,36(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,40(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f4,44(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfsu f2,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f11,r8,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f9,r11,r29
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfsx f7,r7,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fsubs f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f5,r6,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfsx f2,r11,r28
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// stfsx f1,r11,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfsx f10,r11,r30
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82395584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82395584;
loc_8239561C:
	// cmplw cr6,r27,r4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82395674
	if (!ctx.cr6.lt) goto loc_82395674;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,24
	ctx.r10.s64 = ctx.r1.s64 + 24;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r9,r27,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r27.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8239564C:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfsu f11,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f7,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239564c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239564C;
loc_82395674:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beq cr6,0x82395830
	if (ctx.cr6.eq) goto loc_82395830;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r9,r1,24
	ctx.r9.s64 = ctx.r1.s64 + 24;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r1,24
	ctx.r11.s64 = ctx.r1.s64 + 24;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
loc_823956C4:
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f4,f13,f12,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfsx f4,r9,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// fmsubs f2,f9,f11,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmsubs f3,f7,f10,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f11,f4,f4
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// fmadds f10,f2,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f9,f3,f3,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmuls f3,f2,f5
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfsx f4,r9,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfsu f2,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x823956c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823956C4;
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82395750:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82395830
	if (ctx.cr6.eq) goto loc_82395830;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r6,r3,-8
	ctx.xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r6.s64 = -8 - ctx.r3.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
loc_8239577C:
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f11,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f13,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfsx f4,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmuls f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmsubs f1,f12,f5,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f2.f64));
	// stfsx f1,r10,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lfs f13,168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f13,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f13,f3,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f12.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f13,172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f13,168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f9,f13,f7,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f10.f64));
	// fmadds f4,f1,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bdnz 0x8239577c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239577C;
loc_82395830:
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823954F8) {
	__imp__sub_823954F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395838) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r9,-24656
	ctx.r8.s64 = ctx.r9.s64 + -24656;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// lwz r11,164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82395838) {
	__imp__sub_82395838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823958B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823958B4) {
	__imp__sub_823958B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823958B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lfs f6,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f10,f11,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f4,f11,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f8,f9,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f12,f3,f9,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x82395a64
	if (!ctx.cr6.gt) goto loc_82395A64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82395a00
	if (ctx.cr6.lt) goto loc_82395A00;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
loc_8239594C:
	// lfs f10,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8239594c
	if (ctx.cr6.lt) goto loc_8239594C;
loc_82395A00:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82395A28:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82395a28
	if (ctx.cr6.lt) goto loc_82395A28;
	// blr 
	return;
loc_82395A64:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82395b40
	if (ctx.cr6.lt) goto loc_82395B40;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82395A90:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f9,-32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82395a90
	if (ctx.cr6.gt) goto loc_82395A90;
loc_82395B40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82395B68:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// bgt 0x82395b68
	if (ctx.cr0.gt) goto loc_82395B68;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823958B8) {
	__imp__sub_823958B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lfs f6,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f10,f11,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f4,f11,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f8,f9,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f12,f3,f9,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x82395d4c
	if (!ctx.cr6.lt) goto loc_82395D4C;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82395ce8
	if (ctx.cr6.lt) goto loc_82395CE8;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
loc_82395C34:
	// lfs f10,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82395c34
	if (ctx.cr6.lt) goto loc_82395C34;
loc_82395CE8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82395D10:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82395d10
	if (ctx.cr6.lt) goto loc_82395D10;
	// blr 
	return;
loc_82395D4C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82395e28
	if (ctx.cr6.lt) goto loc_82395E28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82395D78:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f9,-32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82395d78
	if (ctx.cr6.gt) goto loc_82395D78;
loc_82395E28:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82395E50:
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// bgt 0x82395e50
	if (ctx.cr0.gt) goto loc_82395E50;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82395BA0) {
	__imp__sub_82395BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// lfs f0,12168(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
loc_82395EB8:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f10,f9,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f6,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f5,f1,f13,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f12,f11,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f3,f9,f10,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f6,f2,f1,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f5,f13,f12,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f10,f11,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f4,12(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f3,f2,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f6,f1,f13,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f11,f12,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfsu f5,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f13,f4,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f12,f3,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f6,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfsx f5,r6,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f4,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82395eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82395EB8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82395E88) {
	__imp__sub_82395E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82395FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f12,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,14156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14156);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// ble cr6,0x82396118
	if (!ctx.cr6.gt) goto loc_82396118;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
loc_8239602C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f7,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f3,f0,f6,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fadds f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// blt cr6,0x82396168
	if (ctx.cr6.lt) goto loc_82396168;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f5,f0,f3,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f4,f0,f2,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f3,f1,f13,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f2,f1,f10,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f0,f2,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fmuls f13,f1,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x823960d0
	if (!ctx.cr6.gt) goto loc_823960D0;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_823960D0:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823960e0
	if (!ctx.cr6.lt) goto loc_823960E0;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_823960E0:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823960f4
	if (!ctx.cr6.gt) goto loc_823960F4;
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_823960F4:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82396104
	if (!ctx.cr6.lt) goto loc_82396104;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_82396104:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8239602c
	if (ctx.cr6.lt) goto loc_8239602C;
loc_82396118:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13040);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f10
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// bge cr6,0x8239618c
	if (!ctx.cr6.lt) goto loc_8239618C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82396168:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f11,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239618C:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r9,r1,24
	ctx.r9.s64 = ctx.r1.s64 + 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f8,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blt cr6,0x8239621c
	if (ctx.cr6.lt) goto loc_8239621C;
	// rlwinm r8,r3,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823961F0:
	// lfs f8,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f12,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmadds f0,f4,f8,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f13,f2,f5,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64));
	// bdnz 0x823961f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823961F0;
loc_8239621C:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8239624c
	if (ctx.cr6.gt) goto loc_8239624C;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,20
	ctx.r10.s64 = ctx.r1.s64 + 20;
	// addi r9,r1,28
	ctx.r9.s64 = ctx.r1.s64 + 28;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfsx f7,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
loc_8239624C:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x82396268
	if (ctx.cr6.lt) goto loc_82396268;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82396268:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82395FE0) {
	__imp__sub_82395FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f6,f0,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f0,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f0,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f0,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f7,f0,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f0,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f0,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82396278) {
	__imp__sub_82396278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82396334) {
	__imp__sub_82396334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82396340;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823ddff0
	ctx.lr = 0x82396348;
	__savefpr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// fmr f24,f7
	ctx.f24.f64 = ctx.f7.f64;
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// lfs f3,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// lfs f12,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmuls f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f12,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f13,f5
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f19,f12,f5
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f10,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f23,f0,f5
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f9,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f22,f13,f5
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f3,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f21,f11,f5
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f8,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f20,f12,f5
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f6,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f18,f11,f25
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// lfs f5,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f17,f0,f25
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f2,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f16,f7,f24,f1
	ctx.f16.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f1.f64));
	// lfs f1,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f15,f10,f24,f4
	ctx.f15.f64 = double(float(ctx.f10.f64 * ctx.f24.f64 + ctx.f4.f64));
	// lfs f4,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f14,f9,f24,f31
	ctx.f14.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 + ctx.f31.f64));
	// lfs f31,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f28,f8,f28,f19
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f19.f64));
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f23,f10,f26,f23
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f23.f64));
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmadds f22,f9,f26,f22
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f22.f64));
	// fmadds f21,f7,f26,f21
	ctx.f21.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f21.f64));
	// fmadds f20,f8,f24,f20
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f20.f64));
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f19,f13,f25
	ctx.f19.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmadds f18,f7,f26,f18
	ctx.f18.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 + ctx.f18.f64));
	// fadds f16,f16,f3
	ctx.f16.f64 = double(float(ctx.f16.f64 + ctx.f3.f64));
	// fmadds f17,f10,f26,f17
	ctx.f17.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f17.f64));
	// fmuls f27,f12,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fadds f15,f15,f6
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f6.f64));
	// fadds f14,f14,f5
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f5.f64));
	// fadds f23,f23,f6
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f6.f64));
	// fadds f22,f22,f5
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f5.f64));
	// fadds f21,f21,f3
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f3.f64));
	// fadds f20,f20,f4
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f4.f64));
	// fadds f28,f28,f4
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// fadds f16,f16,f29
	ctx.f16.f64 = double(float(ctx.f16.f64 + ctx.f29.f64));
	// fmadds f19,f9,f26,f19
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f19.f64));
	// fmadds f26,f8,f26,f27
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fadds f15,f15,f2
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f2.f64));
	// fadds f14,f14,f1
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f1.f64));
	// fadds f23,f23,f2
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// fadds f22,f22,f1
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f1.f64));
	// fadds f21,f21,f29
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f29.f64));
	// fadds f20,f20,f31
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f31.f64));
	// fadds f18,f18,f3
	ctx.f18.f64 = double(float(ctx.f18.f64 + ctx.f3.f64));
	// fdivs f16,f30,f16
	ctx.f16.f64 = double(float(ctx.f30.f64 / ctx.f16.f64));
	// fadds f28,f28,f31
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f17,f17,f6
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f6.f64));
	// fmuls f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f28,f15,f16
	ctx.f28.f64 = double(float(ctx.f15.f64 * ctx.f16.f64));
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f27,f14,f16
	ctx.f27.f64 = double(float(ctx.f14.f64 * ctx.f16.f64));
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,192(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f28,f19,f5
	ctx.f28.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// stfs f27,196(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f27,f26,f4
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fadds f25,f18,f29
	ctx.f25.f64 = double(float(ctx.f18.f64 + ctx.f29.f64));
	// fadds f19,f17,f2
	ctx.f19.f64 = double(float(ctx.f17.f64 + ctx.f2.f64));
	// fmadds f11,f7,f24,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f11.f64));
	// fmadds f8,f8,f24,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f12.f64));
	// fmadds f10,f10,f24,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fmadds f9,f9,f24,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 + ctx.f13.f64));
	// fdivs f21,f30,f21
	ctx.f21.f64 = double(float(ctx.f30.f64 / ctx.f21.f64));
	// fmuls f26,f20,f16
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f16.f64));
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f7,f28,f1
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// stfs f26,200(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// fdivs f13,f30,f25
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f25.f64));
	// lfs f25,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fmuls f12,f23,f21
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f21.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f12,f22,f21
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f21.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f25,f21
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f21.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f3,f11,f29
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// fmuls f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f6,f19,f13
	ctx.f6.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f5,172(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fdivs f13,f30,f3
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f3.f64));
	// fmuls f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x823954f8
	ctx.lr = 0x82396578;
	sub_823954F8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lfs f10,5804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f10.f64 = double(temp.f32);
loc_8239659C:
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bne cr6,0x82396618
	if (!ctx.cr6.eq) goto loc_82396618;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82396618
	if (ctx.cr6.eq) goto loc_82396618;
	// lwz r7,12784(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12784);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_823965E8:
	// lfs f9,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f12,f6,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x82396654
	if (ctx.cr6.gt) goto loc_82396654;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823965e8
	if (ctx.cr6.lt) goto loc_823965E8;
loc_82396618:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfsx f8,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfsu f4,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_82396654:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// bdnz 0x8239659c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239659C;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de03c
	ctx.lr = 0x8239666C;
	__restfpr_14(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396338) {
	__imp__sub_82396338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82396678;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1712(r1)
	ea = -1712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,10
	ctx.xer.ca = ctx.r4.u32 <= 10;
	ctx.r11.s64 = 10 - ctx.r4.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82396724
	if (ctx.cr6.eq) goto loc_82396724;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13148);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396724
	if (!ctx.cr6.eq) goto loc_82396724;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,12784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12784);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823966e4
	if (!ctx.cr6.gt) goto loc_823966E4;
loc_823966E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823966E4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823954f8
	ctx.lr = 0x823966F8;
	sub_823954F8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8239672c
	if (!ctx.cr6.eq) goto loc_8239672C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13040);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8239672c
	if (ctx.cr6.gt) goto loc_8239672C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x8239676c
	goto loc_8239676C;
loc_82396724:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x823966e0
	goto loc_823966E0;
loc_8239672C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82395fe0
	ctx.lr = 0x82396744;
	sub_82395FE0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239676c
	if (ctx.cr6.eq) goto loc_8239676C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82396338
	ctx.lr = 0x82396768;
	sub_82396338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8239676C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82396a08
	if (ctx.cr6.eq) goto loc_82396A08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f11,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82396960
	if (ctx.cr6.lt) goto loc_82396960;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// subf r26,r31,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r31.s64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823967E4:
	// lfs f13,-8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// beq cr6,0x82396840
	if (ctx.cr6.eq) goto loc_82396840;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmadds f6,f12,f13,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f10,f0,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396840:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f0,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// beq cr6,0x8239689c
	if (ctx.cr6.eq) goto loc_8239689C;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f9,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f0,f7,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8239689C:
	// lfsx f13,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f0,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// beq cr6,0x823968f8
	if (ctx.cr6.eq) goto loc_823968F8;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f9,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823968F8:
	// lfsx f13,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f0,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// beq cr6,0x82396954
	if (ctx.cr6.eq) goto loc_82396954;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f9,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396954:
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x823967e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823967E4;
loc_82396960:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82396a08
	if (!ctx.cr6.lt) goto loc_82396A08;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r7,r8,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r8.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r8,r6,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r6.s64;
loc_823969A0:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// beq cr6,0x823969fc
	if (ctx.cr6.eq) goto loc_823969FC;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f7,f8,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f5,f13,f0,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfsu f4,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_823969FC:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x823969a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823969A0;
loc_82396A08:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,-24656
	ctx.r7.s64 = ctx.r11.s64 + -24656;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 160);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// bl 0x82395ba0
	ctx.lr = 0x82396A4C;
	sub_82395BA0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82396a60
	if (!ctx.cr6.gt) goto loc_82396A60;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_82396A60:
	// lwz r11,164(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 164);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396a9c
	if (ctx.cr6.eq) goto loc_82396A9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
loc_82396A9C:
	// addi r1,r1,1712
	ctx.r1.s64 = ctx.r1.s64 + 1712;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396670) {
	__imp__sub_82396670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82396AB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823954f8
	ctx.lr = 0x82396AC8;
	sub_823954F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bgt cr6,0x82396d68
	if (ctx.cr6.gt) goto loc_82396D68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f10,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82396cc4
	if (ctx.cr6.lt) goto loc_82396CC4;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// addi r29,r1,104
	ctx.r29.s64 = ctx.r1.s64 + 104;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r25,r31,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r31.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82396B48:
	// lfs f13,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,-8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x82396ba4
	if (ctx.cr6.eq) goto loc_82396BA4;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f5,f12,f13,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f9,f0,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396BA4:
	// lfsx f0,r25,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x82396c00
	if (ctx.cr6.eq) goto loc_82396C00;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f7,f8,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396C00:
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x82396c5c
	if (ctx.cr6.eq) goto loc_82396C5C;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f7,f8,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396C5C:
	// lfsx f0,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x82396cb8
	if (ctx.cr6.eq) goto loc_82396CB8;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f8,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82396CB8:
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82396b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396B48;
loc_82396CC4:
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82396d68
	if (!ctx.cr6.lt) goto loc_82396D68;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + ctx.r26.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r8,r6,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r6.s64;
loc_82396D04:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// beq cr6,0x82396d5c
	if (ctx.cr6.eq) goto loc_82396D5C;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f6,f7,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f4,f13,f0,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfsu f3,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_82396D5C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x82396d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396D04;
loc_82396D68:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396AA8) {
	__imp__sub_82396AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r9,8456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf. r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82396e14
	if (ctx.cr0.lt) goto loc_82396E14;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
loc_82396DAC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// ble cr6,0x82396dec
	if (!ctx.cr6.gt) goto loc_82396DEC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82396DEC:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r9,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// subf. r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82396dac
	if (!ctx.cr0.lt) goto loc_82396DAC;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// blr 
	return;
loc_82396E14:
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82396D70) {
	__imp__sub_82396D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82396E1C) {
	__imp__sub_82396E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82396e78
	if (ctx.cr6.eq) goto loc_82396E78;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
loc_82396E4C:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// bgt cr6,0x82396e80
	if (ctx.cr6.gt) goto loc_82396E80;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82396e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396E4C;
loc_82396E78:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82396E80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82396E20) {
	__imp__sub_82396E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396E88) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82396ec0
	if (ctx.cr6.eq) goto loc_82396EC0;
loc_82396EA0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82396e20
	ctx.lr = 0x82396EA8;
	sub_82396E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396ed4
	if (!ctx.cr6.eq) goto loc_82396ED4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x82396ea0
	if (!ctx.cr0.eq) goto loc_82396EA0;
loc_82396EC0:
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
loc_82396ED4:
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

PPC_WEAK_FUNC(sub_82396E88) {
	__imp__sub_82396E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82396EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82396EF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82396fb0
	if (!ctx.cr6.gt) goto loc_82396FB0;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f11,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lfs f12,-30864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -30864);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f13,5804(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82396F4C:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f6,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f3,f9,f5,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82396f88
	if (!ctx.cr6.lt) goto loc_82396F88;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// b 0x82396f98
	goto loc_82396F98;
loc_82396F88:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82396f98
	if (!ctx.cr6.gt) goto loc_82396F98;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82396F98:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82396f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396F4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82396fc0
	if (!ctx.cr6.eq) goto loc_82396FC0;
loc_82396FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82396FC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82397104
	if (ctx.cr6.eq) goto loc_82397104;
	// lbz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 16);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// subfic r29,r29,1
	ctx.xer.ca = ctx.r29.u32 <= 1;
	ctx.r29.s64 = 1 - ctx.r29.s64;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// stfsx f0,r7,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82396FF8:
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bge cr6,0x823970fc
	if (!ctx.cr6.lt) goto loc_823970FC;
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82397034
	if (!ctx.cr6.eq) goto loc_82397034;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x823970e0
	goto loc_823970E0;
loc_82397034:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239705c
	if (!ctx.cr6.eq) goto loc_8239705C;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8239705C:
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x823970e4
	if (ctx.cr6.eq) goto loc_823970E4;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823970e4
	if (ctx.cr6.eq) goto loc_823970E4;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// divwu r31,r9,r7
	ctx.r31.u32 = ctx.r9.u32 / ctx.r7.u32;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f10,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f13,f0,f10,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfsu f13,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_823970E0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823970E4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82396ff8
	if (ctx.cr6.lt) goto loc_82396FF8;
loc_823970FC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_82397104:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82396EE8) {
	__imp__sub_82396EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239710C) {
	__imp__sub_8239710C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lfs f0,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82397288
	if (ctx.cr6.lt) goto loc_82397288;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82397160:
	// lbz r8,-2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x823971a8
	if (!ctx.cr6.lt) goto loc_823971A8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_823971A8:
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x823971f0
	if (!ctx.cr6.lt) goto loc_823971F0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_823971F0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82397238
	if (!ctx.cr6.lt) goto loc_82397238;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82397238:
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f5,f5,f3
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82397280
	if (!ctx.cr6.lt) goto loc_82397280;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82397280:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82397160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397160;
loc_82397288:
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823972fc
	if (!ctx.cr6.lt) goto loc_823972FC;
	// subf r11,r6,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r6.s64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823972AC:
	// lbzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f13,f5,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823972f4
	if (!ctx.cr6.lt) goto loc_823972F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_823972F4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x823972ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823972AC;
loc_823972FC:
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82397110) {
	__imp__sub_82397110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239730C) {
	__imp__sub_8239730C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lfs f13,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82397398
	if (!ctx.cr6.gt) goto loc_82397398;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
loc_82397340:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82397384
	if (!ctx.cr6.lt) goto loc_82397384;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82397384:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82397340
	if (ctx.cr6.lt) goto loc_82397340;
loc_82397398:
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82397310) {
	__imp__sub_82397310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823973A0) {
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
	// bl 0x82396d70
	ctx.lr = 0x823973B4;
	sub_82396D70(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823973dc
	if (!ctx.cr6.eq) goto loc_823973DC;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,3216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3216);
	// bl 0x82397310
	ctx.lr = 0x823973CC;
	sub_82397310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823973DC:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r3,3216(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3216);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82397110
	ctx.lr = 0x82397408;
	sub_82397110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823973A0) {
	__imp__sub_823973A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397418) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,24448
	ctx.r9.s64 = ctx.r10.s64 + 24448;
	// addis r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 393216;
	// addis r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 393216;
	// addi r10,r10,20696
	ctx.r10.s64 = ctx.r10.s64 + 20696;
	// addi r8,r9,20652
	ctx.r8.s64 = ctx.r9.s64 + 20652;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// stwx r4,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x823ce698
	sub_823CE698(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397418) {
	__imp__sub_82397418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239744C) {
	__imp__sub_8239744C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82397458;
	__savegprlr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// ori r5,r10,20624
	ctx.r5.u64 = ctx.r10.u64 | 20624;
	// ori r4,r9,20620
	ctx.r4.u64 = ctx.r9.u64 | 20620;
	// ori r3,r8,20608
	ctx.r3.u64 = ctx.r8.u64 | 20608;
	// ori r11,r7,20612
	ctx.r11.u64 = ctx.r7.u64 | 20612;
	// ori r10,r6,20616
	ctx.r10.u64 = ctx.r6.u64 | 20616;
	// lwzx r7,r31,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lwzx r6,r31,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lwzx r5,r31,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lis r29,6
	ctx.r29.s64 = 393216;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r30,6
	ctx.r30.s64 = 393216;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r9,r9,20712
	ctx.r9.u64 = ctx.r9.u64 | 20712;
	// ori r8,r8,20708
	ctx.r8.u64 = ctx.r8.u64 | 20708;
	// ori r29,r29,20700
	ctx.r29.u64 = ctx.r29.u64 | 20700;
	// ori r28,r30,20696
	ctx.r28.u64 = ctx.r30.u64 | 20696;
	// ori r27,r11,20704
	ctx.r27.u64 = ctx.r11.u64 | 20704;
	// ori r25,r10,20712
	ctx.r25.u64 = ctx.r10.u64 | 20712;
	// lwzx r30,r31,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r26,6
	ctx.r26.s64 = 393216;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r9,r31,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r26,r26,64936
	ctx.r26.u64 = ctx.r26.u64 | 64936;
	// lwzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r8,r31,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r29,r31,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwzx r28,r31,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// beq cr6,0x823975e4
	if (ctx.cr6.eq) goto loc_823975E4;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r29,r11,-484
	ctx.r29.s64 = ctx.r11.s64 + -484;
loc_8239755C:
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r26,r11,-3724
	ctx.r26.s64 = ctx.r11.s64 + -3724;
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823975d4
	if (!ctx.cr6.eq) goto loc_823975D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r25,r11,24,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// rlwinm r24,r11,23,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// bl 0x82102458
	ctx.lr = 0x82397584;
	sub_82102458(ctx, base);
	// addi r27,r29,-104
	ctx.r27.s64 = ctx.r29.s64 + -104;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ba200
	ctx.lr = 0x823975A4;
	sub_823BA200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823975b8
	if (!ctx.cr6.eq) goto loc_823975B8;
	// stbx r19,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r19.u8);
	// b 0x823975d4
	goto loc_823975D4;
loc_823975B8:
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r11.u8);
	// bl 0x82387e10
	ctx.lr = 0x823975D4;
	sub_82387E10(ctx, base);
loc_823975D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8239755c
	if (ctx.cr6.lt) goto loc_8239755C;
loc_823975E4:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// ori r10,r11,65408
	ctx.r10.u64 = ctx.r11.u64 | 65408;
	// lwzx r26,r31,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82397694
	if (ctx.cr6.eq) goto loc_82397694;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r30,r11,-68
	ctx.r30.s64 = ctx.r11.s64 + -68;
loc_82397604:
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r27,r11,8076
	ctx.r27.s64 = ctx.r11.s64 + 8076;
	// lbzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397684
	if (!ctx.cr6.eq) goto loc_82397684;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-20
	ctx.r29.s64 = ctx.r30.s64 + -20;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r11,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x823ba270
	ctx.lr = 0x8239763C;
	sub_823BA270(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82397650
	if (!ctx.cr6.eq) goto loc_82397650;
	// stbx r19,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r19.u8);
	// b 0x82397684
	goto loc_82397684;
loc_82397650:
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// lwz r4,-44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,-48
	ctx.r3.s64 = ctx.r30.s64 + -48;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// bl 0x82387b98
	ctx.lr = 0x82397684;
	sub_82387B98(ctx, base);
loc_82397684:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82397604
	if (ctx.cr6.lt) goto loc_82397604;
loc_82397694:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r20,r11,4608
	ctx.r20.s64 = ctx.r11.s64 + 4608;
	// ori r9,r10,41364
	ctx.r9.u64 = ctx.r10.u64 | 41364;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// addi r25,r11,23040
	ctx.r25.s64 = ctx.r11.s64 + 23040;
	// lwz r5,8456(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
	// lwzx r21,r31,r9
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r23,672(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 672);
	// beq cr6,0x82397824
	if (ctx.cr6.eq) goto loc_82397824;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_823976C8:
	// lwz r11,512(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 512);
	// add r26,r11,r22
	ctx.r26.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// lbzx r11,r30,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397814
	if (!ctx.cr6.eq) goto loc_82397814;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,188(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 188);
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r9,172(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822d6b00
	ctx.lr = 0x82397718;
	sub_822D6B00(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f13,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// lfs f8,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f6,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r27,6
	ctx.r5.s64 = ctx.r27.s64 + 6;
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f4,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f9,f6,f13,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f13,f12,f5,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f4
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmadds f4,f3,f8,f5
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f12,f7,f2,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x823ba1c0
	ctx.lr = 0x823977D4;
	sub_823BA1C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823977e8
	if (!ctx.cr6.eq) goto loc_823977E8;
	// stbx r19,r24,r23
	PPC_STORE_U8(ctx.r24.u32 + ctx.r23.u32, ctx.r19.u8);
	// b 0x82397810
	goto loc_82397810;
loc_823977E8:
	// lbz r5,97(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lbz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82387b98
	ctx.lr = 0x82397810;
	sub_82387B98(ctx, base);
loc_82397810:
	// lwz r5,8456(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
loc_82397814:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823976c8
	if (ctx.cr6.lt) goto loc_823976C8;
loc_82397824:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// ori r10,r11,15244
	ctx.r10.u64 = ctx.r11.u64 | 15244;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwzx r27,r31,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823978cc
	if (ctx.cr6.eq) goto loc_823978CC;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
loc_82397848:
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// addi r11,r11,-29804
	ctx.r11.s64 = ctx.r11.s64 + -29804;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823978bc
	if (!ctx.cr6.eq) goto loc_823978BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82396d70
	ctx.lr = 0x82397864;
	sub_82396D70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwz r3,3216(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3216);
	// bne cr6,0x82397880
	if (!ctx.cr6.eq) goto loc_82397880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82397310
	ctx.lr = 0x8239787C;
	sub_82397310(ctx, base);
	// b 0x8239789c
	goto loc_8239789C;
loc_82397880:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82397110
	ctx.lr = 0x8239789C;
	sub_82397110(ctx, base);
loc_8239789C:
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// bl 0x82387a10
	ctx.lr = 0x823978B8;
	sub_82387A10(ctx, base);
	// lwz r5,8456(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
loc_823978BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82397848
	if (ctx.cr6.lt) goto loc_82397848;
loc_823978CC:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lwz r26,684(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 684);
	// ori r10,r11,41368
	ctx.r10.u64 = ctx.r11.u64 | 41368;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397994
	if (ctx.cr6.eq) goto loc_82397994;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_823978EC:
	// lwz r11,516(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 516);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82397988
	if (!ctx.cr6.eq) goto loc_82397988;
	// lwz r10,176(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// mulli r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 * 92;
	// lwz r9,184(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x82397924;
	sub_823862B0(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82396d70
	ctx.lr = 0x82397934;
	sub_82396D70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwz r3,3216(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3216);
	// bne cr6,0x82397950
	if (!ctx.cr6.eq) goto loc_82397950;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82397310
	ctx.lr = 0x8239794C;
	sub_82397310(ctx, base);
	// b 0x8239796c
	goto loc_8239796C;
loc_82397950:
	// lwz r10,8456(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82397110
	ctx.lr = 0x8239796C;
	sub_82397110(ctx, base);
loc_8239796C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82387a10
	ctx.lr = 0x82397984;
	sub_82387A10(ctx, base);
	// lwz r5,8456(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
loc_82397988:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x823978ec
	if (!ctx.cr0.eq) goto loc_823978EC;
loc_82397994:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r8,r11,20712
	ctx.r8.u64 = ctx.r11.u64 | 20712;
	// ori r7,r9,20668
	ctx.r7.u64 = ctx.r9.u64 | 20668;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// ori r5,r6,20712
	ctx.r5.u64 = ctx.r6.u64 | 20712;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi r4,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 3;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// bl 0x823ce698
	ctx.lr = 0x823979C8;
	sub_823CE698(ctx, base);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r9,r11,20708
	ctx.r9.u64 = ctx.r11.u64 | 20708;
	// ori r8,r10,20664
	ctx.r8.u64 = ctx.r10.u64 | 20664;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// ori r6,r7,20708
	ctx.r6.u64 = ctx.r7.u64 | 20708;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// stwx r4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x823ce698
	ctx.lr = 0x823979FC;
	sub_823CE698(ctx, base);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ori r10,r3,20696
	ctx.r10.u64 = ctx.r3.u64 | 20696;
	// ori r9,r11,20652
	ctx.r9.u64 = ctx.r11.u64 | 20652;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// ori r7,r8,20696
	ctx.r7.u64 = ctx.r8.u64 | 20696;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// stwx r4,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// bl 0x823ce698
	ctx.lr = 0x82397A30;
	sub_823CE698(ctx, base);
	// lis r4,6
	ctx.r4.s64 = 393216;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// ori r11,r4,20700
	ctx.r11.u64 = ctx.r4.u64 | 20700;
	// ori r10,r3,20656
	ctx.r10.u64 = ctx.r3.u64 | 20656;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r8,r9,20700
	ctx.r8.u64 = ctx.r9.u64 | 20700;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// bl 0x823ce698
	ctx.lr = 0x82397A64;
	sub_823CE698(ctx, base);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r4,6
	ctx.r4.s64 = 393216;
	// ori r3,r5,20704
	ctx.r3.u64 = ctx.r5.u64 | 20704;
	// ori r10,r4,20660
	ctx.r10.u64 = ctx.r4.u64 | 20660;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r8,r9,20704
	ctx.r8.u64 = ctx.r9.u64 | 20704;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823ce698
	ctx.lr = 0x82397A98;
	sub_823CE698(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397450) {
	__imp__sub_82397450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82397AA8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// addi r29,r10,24448
	ctx.r29.s64 = ctx.r10.s64 + 24448;
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 393216;
	// addis r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 393216;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r19,r11,20696
	ctx.r19.s64 = ctx.r11.s64 + 20696;
	// ori r8,r9,64936
	ctx.r8.u64 = ctx.r9.u64 | 64936;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// lwzx r7,r20,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// rlwinm r21,r3,9,0,22
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r11,-3212
	ctx.r10.s64 = ctx.r11.s64 + -3212;
	// lwzx r11,r20,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r30,r29,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// add r26,r21,r10
	ctx.r26.u64 = ctx.r21.u64 + ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r22,r9,r11
	ctx.r22.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82397b48
	if (ctx.cr6.eq) goto loc_82397B48;
	// addis r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 458752;
	// addi r28,r11,-588
	ctx.r28.s64 = ctx.r11.s64 + -588;
loc_82397B14:
	// lbzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397b38
	if (!ctx.cr6.eq) goto loc_82397B38;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388060
	ctx.lr = 0x82397B34;
	sub_82388060(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82397B38:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,120
	ctx.r28.s64 = ctx.r28.s64 + 120;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82397b14
	if (ctx.cr6.lt) goto loc_82397B14;
loc_82397B48:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addis r10,r29,9
	ctx.r10.s64 = ctx.r29.s64 + 589824;
	// ori r9,r11,65408
	ctx.r9.u64 = ctx.r11.u64 | 65408;
	// rlwinm r11,r23,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 10) & 0xFFFFFC00;
	// addi r10,r10,9100
	ctx.r10.s64 = ctx.r10.s64 + 9100;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r28,r29,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82397bb0
	if (ctx.cr6.eq) goto loc_82397BB0;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// addi r31,r11,-116
	ctx.r31.s64 = ctx.r11.s64 + -116;
loc_82397B78:
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397ba0
	if (!ctx.cr6.eq) goto loc_82397BA0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387d00
	ctx.lr = 0x82397B9C;
	sub_82387D00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82397BA0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82397b78
	if (ctx.cr6.lt) goto loc_82397B78;
loc_82397BB0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r25,r11,4608
	ctx.r25.s64 = ctx.r11.s64 + 4608;
	// ori r8,r10,41364
	ctx.r8.u64 = ctx.r10.u64 | 41364;
	// addi r9,r23,169
	ctx.r9.s64 = ctx.r23.s64 + 169;
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// addi r24,r10,23040
	ctx.r24.s64 = ctx.r10.s64 + 23040;
	// lwzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r30,r7,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// beq cr6,0x82397c38
	if (ctx.cr6.eq) goto loc_82397C38;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82397BEC:
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82397c2c
	if (!ctx.cr6.eq) goto loc_82397C2C;
	// lwz r11,172(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 172);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82387d00
	ctx.lr = 0x82397C24;
	sub_82387D00(ctx, base);
	// lwz r11,8456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82397C2C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x82397bec
	if (!ctx.cr0.eq) goto loc_82397BEC;
loc_82397C38:
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addis r10,r29,10
	ctx.r10.s64 = ctx.r29.s64 + 655360;
	// ori r8,r9,15244
	ctx.r8.u64 = ctx.r9.u64 | 15244;
	// addi r10,r10,-29292
	ctx.r10.s64 = ctx.r10.s64 + -29292;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r26,r21,r10
	ctx.r26.u64 = ctx.r21.u64 + ctx.r10.u64;
	// lwzx r28,r29,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82397ca0
	if (ctx.cr6.eq) goto loc_82397CA0;
	// addis r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 589824;
	// addi r31,r11,15252
	ctx.r31.s64 = ctx.r11.s64 + 15252;
loc_82397C64:
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397c8c
	if (!ctx.cr6.eq) goto loc_82397C8C;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387ae0
	ctx.lr = 0x82397C88;
	sub_82387AE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82397C8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82397c64
	if (ctx.cr6.lt) goto loc_82397C64;
	// lwz r11,8456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
loc_82397CA0:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r23,172
	ctx.r9.s64 = ctx.r23.s64 + 172;
	// ori r8,r10,41368
	ctx.r8.u64 = ctx.r10.u64 | 41368;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// lwzx r28,r7,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397d1c
	if (ctx.cr6.eq) goto loc_82397D1C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82397CC8:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82397d10
	if (!ctx.cr6.eq) goto loc_82397D10;
	// lwz r11,176(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 176);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x82397CF4;
	sub_823862B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387ae0
	ctx.lr = 0x82397D0C;
	sub_82387AE0(ctx, base);
	// lwz r11,8456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
loc_82397D10:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82397cc8
	if (!ctx.cr0.eq) goto loc_82397CC8;
loc_82397D1C:
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// addis r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 393216;
	// addi r9,r11,20652
	ctx.r9.s64 = ctx.r11.s64 + 20652;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// stwx r4,r20,r9
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwzx r3,r20,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// bl 0x823ce698
	ctx.lr = 0x82397D3C;
	sub_823CE698(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397AA0) {
	__imp__sub_82397AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82397D44) {
	__imp__sub_82397D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397D48) {
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
loc_82397D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397aa0
	ctx.lr = 0x82397D64;
	sub_82397AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82397d5c
	if (ctx.cr6.lt) goto loc_82397D5C;
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

PPC_WEAK_FUNC(sub_82397D48) {
	__imp__sub_82397D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82397D84) {
	__imp__sub_82397D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82397D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82397D90;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// addi r28,r10,24448
	ctx.r28.s64 = ctx.r10.s64 + 24448;
	// rlwinm r21,r11,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r28,6
	ctx.r10.s64 = ctx.r28.s64 + 393216;
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r20,r11,20696
	ctx.r20.s64 = ctx.r11.s64 + 20696;
	// ori r7,r9,64936
	ctx.r7.u64 = ctx.r9.u64 | 64936;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// lwzx r6,r21,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// rlwinm r10,r3,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// addi r9,r11,-2188
	ctx.r9.s64 = ctx.r11.s64 + -2188;
	// lwzx r11,r21,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r29,r28,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// add r24,r8,r11
	ctx.r24.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82397e34
	if (ctx.cr6.eq) goto loc_82397E34;
	// addis r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 458752;
	// addi r27,r11,-588
	ctx.r27.s64 = ctx.r11.s64 + -588;
loc_82397E00:
	// lbzx r11,r30,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397e24
	if (!ctx.cr6.eq) goto loc_82397E24;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82388060
	ctx.lr = 0x82397E20;
	sub_82388060(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82397E24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,120
	ctx.r27.s64 = ctx.r27.s64 + 120;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82397e00
	if (ctx.cr6.lt) goto loc_82397E00;
loc_82397E34:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addis r10,r28,9
	ctx.r10.s64 = ctx.r28.s64 + 589824;
	// ori r9,r11,65408
	ctx.r9.u64 = ctx.r11.u64 | 65408;
	// rlwinm r11,r31,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0xFFFFFC00;
	// addi r10,r10,11148
	ctx.r10.s64 = ctx.r10.s64 + 11148;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r29,r28,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82397e9c
	if (ctx.cr6.eq) goto loc_82397E9C;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// addi r31,r11,-116
	ctx.r31.s64 = ctx.r11.s64 + -116;
loc_82397E64:
	// lbzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82397e8c
	if (!ctx.cr6.eq) goto loc_82397E8C;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387d00
	ctx.lr = 0x82397E88;
	sub_82387D00(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82397E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82397e64
	if (ctx.cr6.lt) goto loc_82397E64;
loc_82397E9C:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// ori r9,r10,41364
	ctx.r9.u64 = ctx.r10.u64 | 41364;
	// addi r23,r11,4608
	ctx.r23.s64 = ctx.r11.s64 + 4608;
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// addi r26,r10,23040
	ctx.r26.s64 = ctx.r10.s64 + 23040;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397f24
	if (ctx.cr6.eq) goto loc_82397F24;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82397EC8:
	// lwz r11,8456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239e180
	ctx.lr = 0x82397EE8;
	sub_8239E180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397f18
	if (ctx.cr6.eq) goto loc_82397F18;
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// mulli r10,r30,92
	ctx.r10.s64 = ctx.r30.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82387d00
	ctx.lr = 0x82397F14;
	sub_82387D00(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82397F18:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// bne 0x82397ec8
	if (!ctx.cr0.eq) goto loc_82397EC8;
loc_82397F24:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,15244
	ctx.r9.u64 = ctx.r10.u64 | 15244;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r27,5388(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397fc4
	if (ctx.cr6.eq) goto loc_82397FC4;
	// addis r10,r28,9
	ctx.r10.s64 = ctx.r28.s64 + 589824;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r31,r10,15254
	ctx.r31.s64 = ctx.r10.s64 + 15254;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82397F54:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8239e118
	ctx.lr = 0x82397F64;
	sub_8239E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397fb8
	if (ctx.cr6.eq) goto loc_82397FB8;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r9,r11,63904
	ctx.r9.u64 = ctx.r11.u64 | 63904;
	// srawi r8,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 5;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r29,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82397fb8
	if (!ctx.cr6.eq) goto loc_82397FB8;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,-2
	ctx.r3.s64 = ctx.r31.s64 + -2;
	// bl 0x82387ae0
	ctx.lr = 0x82397FB4;
	sub_82387AE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82397FB8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x82397f54
	if (!ctx.cr0.eq) goto loc_82397F54;
loc_82397FC4:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41368
	ctx.r10.u64 = ctx.r11.u64 | 41368;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398040
	if (ctx.cr6.eq) goto loc_82398040;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82397FE0:
	// lwz r11,8456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r30,2(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239e180
	ctx.lr = 0x82398000;
	sub_8239E180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398034
	if (ctx.cr6.eq) goto loc_82398034;
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// mulli r10,r30,92
	ctx.r10.s64 = ctx.r30.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x8239801C;
	sub_823862B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387ae0
	ctx.lr = 0x82398034;
	sub_82387AE0(ctx, base);
loc_82398034:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82397fe0
	if (!ctx.cr0.eq) goto loc_82397FE0;
loc_82398040:
	// lwzx r10,r21,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r9,r11,20652
	ctx.r9.s64 = ctx.r11.s64 + 20652;
	// subf r8,r10,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r10.s64;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// stwx r4,r21,r9
	PPC_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwzx r3,r21,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// bl 0x823ce698
	ctx.lr = 0x82398060;
	sub_823CE698(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82397D88) {
	__imp__sub_82397D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
	// li r8,1
	ctx.r8.s64 = 1;
	// addis r11,r9,10
	ctx.r11.s64 = ctx.r9.s64 + 655360;
	// addi r7,r11,-24156
	ctx.r7.s64 = ctx.r11.s64 + -24156;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stbx r8,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82398068) {
	__imp__sub_82398068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239808C) {
	__imp__sub_8239808C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lhz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r10,r10,5444
	ctx.r10.s64 = ctx.r10.s64 + 5444;
loc_823980A8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823980a8
	if (!ctx.cr0.eq) goto loc_823980A8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823980e0
	if (!ctx.cr6.gt) goto loc_823980E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823980E0:
	// lwz r9,14592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,14464
	ctx.r9.s64 = ctx.r10.s64 + 14464;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_823980FC:
	// lwzu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823980fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823980FC;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r8,r9,28
	ctx.r8.s64 = ctx.r9.s64 + 28;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r7,r10,4608
	ctx.r7.s64 = ctx.r10.s64 + 4608;
	// addi r6,r11,-14464
	ctx.r6.s64 = ctx.r11.s64 + -14464;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r6,30,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFFF;
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// lwz r7,8456(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8456);
	// lhz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r10,54(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 54);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r7,624(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x82398174
	if (ctx.cr6.eq) goto loc_82398174;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_82398158:
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82398158
	if (ctx.cr6.lt) goto loc_82398158;
loc_82398174:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82398090) {
	__imp__sub_82398090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239817C) {
	__imp__sub_8239817C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82398188;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r3,171
	ctx.r10.s64 = ctx.r3.s64 + 171;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r23,652(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mullw r7,r23,r4
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// lwzx r27,r8,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x823982d0
	if (ctx.cr6.eq) goto loc_823982D0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r20,1
	ctx.r20.s64 = 1;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,23040
	ctx.r26.s64 = ctx.r11.s64 + 23040;
	// addi r25,r10,17280
	ctx.r25.s64 = ctx.r10.s64 + 17280;
loc_823981F0:
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823982c0
	if (!ctx.cr6.lt) goto loc_823982C0;
	// rlwinm r28,r24,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82398208:
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// andc r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// lbzx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823982b0
	if (!ctx.cr6.eq) goto loc_823982B0;
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// mulli r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x82398234;
	sub_823862B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823982ac
	if (!ctx.cr6.gt) goto loc_823982AC;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
loc_8239825C:
	// lfs f8,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f3,f13,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f3,f6,f9,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f8,f11,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f8,f4,f10,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x823982b0
	if (!ctx.cr6.gt) goto loc_823982B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8239825c
	if (ctx.cr6.lt) goto loc_8239825C;
loc_823982AC:
	// stbx r20,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r20.u8);
loc_823982B0:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82398208
	if (ctx.cr6.lt) goto loc_82398208;
loc_823982C0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823981f0
	if (ctx.cr6.lt) goto loc_823981F0;
loc_823982D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398180) {
	__imp__sub_82398180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823982DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823982DC) {
	__imp__sub_823982DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823982E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823982E8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f19f0
	ctx.lr = 0x82398304;
	sub_822F19F0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f31,700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsqrts f30,f5
	ctx.f30.f64 = double(float(sqrt(ctx.f5.f64)));
	// beq cr6,0x823983a4
	if (ctx.cr6.eq) goto loc_823983A4;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r28,r11,-3456
	ctx.r28.s64 = ctx.r11.s64 + -3456;
loc_8239835C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x82398368;
	sub_822F1EB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821742a0
	ctx.lr = 0x82398370;
	sub_821742A0(ctx, base);
	// lfs f0,244(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f9,f10,f12,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blt cr6,0x8239835c
	if (ctx.cr6.lt) goto loc_8239835C;
loc_823983A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823982E0) {
	__imp__sub_823982E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823983B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823983B4) {
	__imp__sub_823983B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823983B8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,65404
	ctx.r9.u64 = ctx.r10.u64 | 65404;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398428
	if (ctx.cr6.eq) goto loc_82398428;
loc_823983EC:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// ori r9,r10,65400
	ctx.r9.u64 = ctx.r10.u64 | 65400;
	// addi r10,r11,-588
	ctx.r10.s64 = ctx.r11.s64 + -588;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r8,120
	ctx.r11.s64 = ctx.r8.s64 * 120;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82394568
	ctx.lr = 0x82398410;
	sub_82394568(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r6,r7,65404
	ctx.r6.u64 = ctx.r7.u64 | 65404;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823983ec
	if (ctx.cr6.lt) goto loc_823983EC;
loc_82398428:
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

PPC_WEAK_FUNC(sub_823983B8) {
	__imp__sub_823983B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82398440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82398448;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de028
	ctx.lr = 0x82398450;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// ori r8,r10,41376
	ctx.r8.u64 = ctx.r10.u64 | 41376;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// addi r7,r9,-24656
	ctx.r7.s64 = ctx.r9.s64 + -24656;
	// ori r4,r5,64936
	ctx.r4.u64 = ctx.r5.u64 | 64936;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addis r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 65536;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r3,r10,-29776
	ctx.r3.s64 = ctx.r10.s64 + -29776;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lwzx r28,r31,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addis r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 524288;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r9,r9,-3724
	ctx.r9.s64 = ctx.r9.s64 + -3724;
	// lwzx r20,r5,r3
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addis r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 524288;
	// lwz r10,-19420(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19420);
	// addis r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 524288;
	// addis r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 524288;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addis r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 524288;
	// addis r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 524288;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// li r21,0
	ctx.r21.s64 = 0;
	// mulli r10,r10,696
	ctx.r10.s64 = ctx.r10.s64 * 696;
	// addi r11,r11,-32564
	ctx.r11.s64 = ctx.r11.s64 + -32564;
	// addi r8,r8,-3212
	ctx.r8.s64 = ctx.r8.s64 + -3212;
	// addi r7,r7,-2700
	ctx.r7.s64 = ctx.r7.s64 + -2700;
	// addi r6,r6,-2188
	ctx.r6.s64 = ctx.r6.s64 + -2188;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r5,-1676
	ctx.r5.s64 = ctx.r5.s64 + -1676;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r4,-1164
	ctx.r4.s64 = ctx.r4.s64 + -1164;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r3,-652
	ctx.r3.s64 = ctx.r3.s64 + -652;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r19,r9,17280
	ctx.r19.s64 = ctx.r9.s64 + 17280;
	// beq cr6,0x8239892c
	if (ctx.cr6.eq) goto loc_8239892C;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r27,r11,-484
	ctx.r27.s64 = ctx.r11.s64 + -484;
loc_82398520:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r27,-104
	ctx.r26.s64 = ctx.r27.s64 + -104;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// rlwinm r8,r8,0,31,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC1;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// beq cr6,0x82398744
	if (ctx.cr6.eq) goto loc_82398744;
	// lwzx r7,r10,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// lwzx r6,r9,r19
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82398650
	if (ctx.cr6.eq) goto loc_82398650;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// and r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239857c
	if (!ctx.cr6.eq) goto loc_8239857C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,41380
	ctx.r9.u64 = ctx.r10.u64 | 41380;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82398580
	goto loc_82398580;
loc_8239857C:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82398580:
	// addis r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 524288;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,-3212
	ctx.r9.s64 = ctx.r9.s64 + -3212;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r10,-512(r9)
	PPC_STORE_U8(ctx.r9.u32 + -512, ctx.r10.u8);
	// lwz r10,232(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// and r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823985bc
	if (!ctx.cr6.eq) goto loc_823985BC;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r6,r10,41384
	ctx.r6.u64 = ctx.r10.u64 | 41384;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x823985c0
	goto loc_823985C0;
loc_823985BC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823985C0:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,464(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 464);
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823985f0
	if (!ctx.cr6.eq) goto loc_823985F0;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r8,r10,41388
	ctx.r8.u64 = ctx.r10.u64 | 41388;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x823985f4
	goto loc_823985F4;
loc_823985F0:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823985F4:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,512(r9)
	PPC_STORE_U8(ctx.r9.u32 + 512, ctx.r6.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82398610:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x82398610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82398610;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239891c
	if (ctx.cr6.eq) goto loc_8239891C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823982e0
	ctx.lr = 0x8239864C;
	sub_823982E0(ctx, base);
	// b 0x8239891c
	goto loc_8239891C;
loc_82398650:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,41380
	ctx.r9.u64 = ctx.r10.u64 | 41380;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239866c
	if (!ctx.cr6.eq) goto loc_8239866C;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_8239866C:
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r10,r10,-3212
	ctx.r10.s64 = ctx.r10.s64 + -3212;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r6,41384
	ctx.r7.u64 = ctx.r6.u64 | 41384;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r10,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r10.u8);
	// lwzx r9,r31,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823986b0
	if (!ctx.cr6.eq) goto loc_823986B0;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_823986B0:
	// lwz r7,232(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// ori r4,r6,41388
	ctx.r4.u64 = ctx.r6.u64 | 41388;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stb r5,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lwzx r9,r31,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823986ec
	if (!ctx.cr6.eq) goto loc_823986EC;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_823986EC:
	// lwz r5,464(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 464);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r9,12
	ctx.r9.s64 = 12;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r5.u8);
	// or r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_82398718:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x82398718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82398718;
	// b 0x823988b4
	goto loc_823988B4;
loc_82398744:
	// lwzx r8,r10,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// lwzx r7,r9,r19
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823987fc
	if (ctx.cr6.eq) goto loc_823987FC;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// ori r8,r9,41380
	ctx.r8.u64 = ctx.r9.u64 | 41380;
	// addi r10,r10,-3212
	ctx.r10.s64 = ctx.r10.s64 + -3212;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// ori r6,r7,41384
	ctx.r6.u64 = ctx.r7.u64 | 41384;
	// lwzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r4,r5,41388
	ctx.r4.u64 = ctx.r5.u64 | 41388;
	// li r9,12
	ctx.r9.s64 = 12;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stb r3,-512(r10)
	PPC_STORE_U8(ctx.r10.u32 + -512, ctx.r3.u8);
	// lwzx r8,r31,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lwzx r8,r31,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r3,512(r10)
	PPC_STORE_U8(ctx.r10.u32 + 512, ctx.r3.u8);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
loc_823987BC:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x823987bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823987BC;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239891c
	if (ctx.cr6.eq) goto loc_8239891C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823982e0
	ctx.lr = 0x823987F8;
	sub_823982E0(ctx, base);
	// b 0x8239891c
	goto loc_8239891C;
loc_823987FC:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,41380
	ctx.r9.u64 = ctx.r10.u64 | 41380;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82398818
	if (!ctx.cr6.eq) goto loc_82398818;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_82398818:
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// addi r10,r10,-3212
	ctx.r10.s64 = ctx.r10.s64 + -3212;
	// ori r7,r8,41384
	ctx.r7.u64 = ctx.r8.u64 | 41384;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r10,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r10.u8);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239884c
	if (!ctx.cr6.eq) goto loc_8239884C;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8239884C:
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// or r7,r5,r9
	ctx.r7.u64 = ctx.r5.u64 | ctx.r9.u64;
	// ori r6,r8,41388
	ctx.r6.u64 = ctx.r8.u64 | 41388;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398874
	if (!ctx.cr6.eq) goto loc_82398874;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82398874:
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r10,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r10.u8);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r9,12
	ctx.r9.s64 = 12;
	// or r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 | ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239888C:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x8239888c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239888C;
loc_823988B4:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239891c
	if (ctx.cr6.eq) goto loc_8239891C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82394568
	ctx.lr = 0x823988C8;
	sub_82394568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398900
	if (ctx.cr6.eq) goto loc_82398900;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r11,65400
	ctx.r9.u64 = ctx.r11.u64 | 65400;
	// ori r8,r10,65404
	ctx.r8.u64 = ctx.r10.u64 | 65404;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8239891c
	if (ctx.cr6.lt) goto loc_8239891C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823982e0
	ctx.lr = 0x823988FC;
	sub_823982E0(ctx, base);
	// b 0x8239891c
	goto loc_8239891C;
loc_82398900:
	// stb r21,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r21.u8);
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// stb r21,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r21.u8);
	// stb r21,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r21.u8);
	// stb r21,1536(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1536, ctx.r21.u8);
	// stb r21,2048(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2048, ctx.r21.u8);
	// stb r21,2560(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2560, ctx.r21.u8);
loc_8239891C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,120
	ctx.r27.s64 = ctx.r27.s64 + 120;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82398520
	if (ctx.cr6.lt) goto loc_82398520;
loc_8239892C:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// ori r5,r10,65408
	ctx.r5.u64 = ctx.r10.u64 | 65408;
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// addis r9,r31,9
	ctx.r9.s64 = ctx.r31.s64 + 589824;
	// addis r8,r31,9
	ctx.r8.s64 = ctx.r31.s64 + 589824;
	// addi r4,r11,8076
	ctx.r4.s64 = ctx.r11.s64 + 8076;
	// addi r3,r10,9100
	ctx.r3.s64 = ctx.r10.s64 + 9100;
	// lwzx r26,r31,r5
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r9,10124
	ctx.r11.s64 = ctx.r9.s64 + 10124;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r10,r8,11148
	ctx.r10.s64 = ctx.r8.s64 + 11148;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addis r7,r31,9
	ctx.r7.s64 = ctx.r31.s64 + 589824;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addis r6,r31,9
	ctx.r6.s64 = ctx.r31.s64 + 589824;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addis r5,r31,9
	ctx.r5.s64 = ctx.r31.s64 + 589824;
	// addi r9,r7,12172
	ctx.r9.s64 = ctx.r7.s64 + 12172;
	// addi r8,r6,13196
	ctx.r8.s64 = ctx.r6.s64 + 13196;
	// addi r7,r5,14220
	ctx.r7.s64 = ctx.r5.s64 + 14220;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r22,r11,-3456
	ctx.r22.s64 = ctx.r11.s64 + -3456;
	// addi r24,r10,13536
	ctx.r24.s64 = ctx.r10.s64 + 13536;
	// beq cr6,0x82398e60
	if (ctx.cr6.eq) goto loc_82398E60;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r27,r11,-72
	ctx.r27.s64 = ctx.r11.s64 + -72;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r25,r11,13312
	ctx.r25.s64 = ctx.r11.s64 + 13312;
loc_823989B8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r27,-44
	ctx.r28.s64 = ctx.r27.s64 + -44;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r9,r10,19,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// rlwinm r8,r8,0,31,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82398c24
	if (ctx.cr6.eq) goto loc_82398C24;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82398b78
	if (ctx.cr6.eq) goto loc_82398B78;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r9,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lwzx r6,r10,r19
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82398ab8
	if (ctx.cr6.eq) goto loc_82398AB8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398a24
	if (!ctx.cr6.eq) goto loc_82398A24;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41380
	ctx.r10.u64 = ctx.r11.u64 | 41380;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82398a28
	goto loc_82398A28;
loc_82398A24:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82398A28:
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,9100
	ctx.r10.s64 = ctx.r10.s64 + 9100;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r11,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r11.u8);
	// lwz r11,232(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398a64
	if (!ctx.cr6.eq) goto loc_82398A64;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41384
	ctx.r10.u64 = ctx.r11.u64 | 41384;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82398a68
	goto loc_82398A68;
loc_82398A64:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82398A68:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,464(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 464);
	// and r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82398aa4
	if (!ctx.cr6.eq) goto loc_82398AA4;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r8,r11,41388
	ctx.r8.u64 = ctx.r11.u64 | 41388;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r11.u8);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x82398bec
	goto loc_82398BEC;
loc_82398AA4:
	// clrlwi r8,r21,24
	ctx.r8.u64 = ctx.r21.u32 & 0xFF;
	// stb r21,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r21.u8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x82398bec
	goto loc_82398BEC;
loc_82398AB8:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41380
	ctx.r10.u64 = ctx.r11.u64 | 41380;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398ad4
	if (!ctx.cr6.eq) goto loc_82398AD4;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82398AD4:
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// lis r6,9
	ctx.r6.s64 = 589824;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r6,41384
	ctx.r7.u64 = ctx.r6.u64 | 41384;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r11,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r11.u8);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82398b18
	if (!ctx.cr6.eq) goto loc_82398B18;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82398B18:
	// lwz r7,232(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// ori r4,r6,41388
	ctx.r4.u64 = ctx.r6.u64 | 41388;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// lwzx r10,r31,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398b54
	if (!ctx.cr6.eq) goto loc_82398B54;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398B54:
	// lwz r10,464(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 464);
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & ctx.r11.u64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r3.u8);
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// b 0x82398bec
	goto loc_82398BEC;
loc_82398B78:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82398b9c
	if (!ctx.cr6.eq) goto loc_82398B9C;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,-1024(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1024);
	// b 0x82398bac
	goto loc_82398BAC;
loc_82398B9C:
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// addi r10,r10,9100
	ctx.r10.s64 = ctx.r10.s64 + 9100;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r21,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r21.u8);
loc_82398BAC:
	// lwz r10,232(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82398bc8
	if (!ctx.cr6.eq) goto loc_82398BC8;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82398bcc
	goto loc_82398BCC;
loc_82398BC8:
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
loc_82398BCC:
	// lwz r10,464(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 464);
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82398be8
	if (!ctx.cr6.eq) goto loc_82398BE8;
	// lbz r10,1024(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1024);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82398bec
	goto loc_82398BEC;
loc_82398BE8:
	// stb r21,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r21.u8);
loc_82398BEC:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,12
	ctx.r10.s64 = 12;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82398BF8:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x82398bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82398BF8;
	// b 0x82398d84
	goto loc_82398D84;
loc_82398C24:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82398d30
	if (ctx.cr6.eq) goto loc_82398D30;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r9,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lwzx r7,r10,r19
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82398ca8
	if (ctx.cr6.eq) goto loc_82398CA8;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// ori r8,r10,41380
	ctx.r8.u64 = ctx.r10.u64 | 41380;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ori r6,r7,41384
	ctx.r6.u64 = ctx.r7.u64 | 41384;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// ori r4,r5,41388
	ctx.r4.u64 = ctx.r5.u64 | 41388;
	// lbzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r3,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r3.u8);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r5.u8);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// b 0x82398d50
	goto loc_82398D50;
loc_82398CA8:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41380
	ctx.r10.u64 = ctx.r11.u64 | 41380;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398cc4
	if (!ctx.cr6.eq) goto loc_82398CC4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398CC4:
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,9100
	ctx.r10.s64 = ctx.r10.s64 + 9100;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// ori r7,r8,41384
	ctx.r7.u64 = ctx.r8.u64 | 41384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r11.u8);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398cf8
	if (!ctx.cr6.eq) goto loc_82398CF8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398CF8:
	// lis r8,9
	ctx.r8.s64 = 589824;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// ori r7,r8,41388
	ctx.r7.u64 = ctx.r8.u64 | 41388;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398d20
	if (!ctx.cr6.eq) goto loc_82398D20;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398D20:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r11.u8);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x82398d50
	goto loc_82398D50;
loc_82398D30:
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// lbz r10,1024(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1024);
	// lbz r8,-1024(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1024);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
loc_82398D50:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,12
	ctx.r10.s64 = 12;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82398D5C:
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-24156
	ctx.r6.s64 = ctx.r8.s64 + -24156;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stbx r3,r5,r29
	PPC_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r3.u8);
	// bdnz 0x82398d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82398D5C;
loc_82398D84:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82398e50
	if (ctx.cr6.eq) goto loc_82398E50;
	// lfs f0,688(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// lwz r16,4(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lfs f13,692(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,696(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f29,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// bl 0x821742a0
	ctx.lr = 0x82398DC4;
	sub_821742A0(ctx, base);
	// fmuls f10,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fres f9,f29
	ctx.f9.f64 = float(1.0 / ctx.f29.f64);
	// lfs f8,244(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,700(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r22,3
	ctx.r11.s64 = ctx.r22.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,69(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// lwz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lfs f1,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r28,12
	ctx.r6.s64 = ctx.r28.s64 + 12;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmadds f6,f28,f28,f10
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f5,f31,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmsubs f3,f4,f9,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 - ctx.f8.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fsel f13,f0,f7,f2
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f7.f64 : ctx.f2.f64;
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bl 0x82394040
	ctx.lr = 0x82398E2C;
	sub_82394040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398e50
	if (!ctx.cr6.eq) goto loc_82398E50;
	// stb r21,-1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1024, ctx.r21.u8);
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// stb r21,1024(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1024, ctx.r21.u8);
	// stb r21,2048(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2048, ctx.r21.u8);
	// stb r21,3072(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3072, ctx.r21.u8);
	// stb r21,4096(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4096, ctx.r21.u8);
	// stb r21,5120(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5120, ctx.r21.u8);
loc_82398E50:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,72
	ctx.r27.s64 = ctx.r27.s64 + 72;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823989b8
	if (ctx.cr6.lt) goto loc_823989B8;
loc_82398E60:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// ori r10,r11,15244
	ctx.r10.u64 = ctx.r11.u64 | 15244;
	// lwzx r25,r31,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82399078
	if (ctx.cr6.eq) goto loc_82399078;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// li r26,56
	ctx.r26.s64 = 56;
	// addi r29,r11,15284
	ctx.r29.s64 = ctx.r11.s64 + 15284;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r27,r11,4608
	ctx.r27.s64 = ctx.r11.s64 + 4608;
loc_82398E8C:
	// lhz r4,-30(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + -30);
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r4,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// lwzx r9,r11,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lwzx r8,r10,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82398f08
	if (ctx.cr6.eq) goto loc_82398F08;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// ori r9,r10,41380
	ctx.r9.u64 = ctx.r10.u64 | 41380;
	// addi r11,r11,-29292
	ctx.r11.s64 = ctx.r11.s64 + -29292;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ori r7,r8,41384
	ctx.r7.u64 = ctx.r8.u64 | 41384;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// ori r5,r6,41388
	ctx.r5.u64 = ctx.r6.u64 | 41388;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r3,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r3.u8);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r6.u8);
	// or r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// b 0x82398f8c
	goto loc_82398F8C;
loc_82398F08:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41380
	ctx.r10.u64 = ctx.r11.u64 | 41380;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398f24
	if (!ctx.cr6.eq) goto loc_82398F24;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398F24:
	// addis r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 655360;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addi r10,r10,-29292
	ctx.r10.s64 = ctx.r10.s64 + -29292;
	// ori r8,r9,41384
	ctx.r8.u64 = ctx.r9.u64 | 41384;
	// add r30,r10,r28
	ctx.r30.u64 = ctx.r10.u64 + ctx.r28.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r11.u8);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398f58
	if (!ctx.cr6.eq) goto loc_82398F58;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398F58:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// ori r8,r9,41388
	ctx.r8.u64 = ctx.r9.u64 | 41388;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398f80
	if (!ctx.cr6.eq) goto loc_82398F80;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82398F80:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r11.u8);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82398F8C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82398fa8
	if (!ctx.cr6.eq) goto loc_82398FA8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8239e230
	ctx.lr = 0x82398FA0;
	sub_8239E230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399068
	if (ctx.cr6.eq) goto loc_82399068;
loc_82398FA8:
	// lfs f0,692(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,696(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addis r10,r22,3
	ctx.r10.s64 = ctx.r22.s64 + 196608;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,688(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,6400
	ctx.r10.s64 = ctx.r10.s64 + 6400;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lfs f0,700(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / ctx.r26.s32;
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f10,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fsubs f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsel f12,f13,f5,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// stfsx f12,r11,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// bl 0x82398090
	ctx.lr = 0x82399028;
	sub_82398090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399068
	if (!ctx.cr6.eq) goto loc_82399068;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lhz r10,-30(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + -30);
	// ori r9,r11,63904
	ctx.r9.u64 = ctx.r11.u64 | 63904;
	// srawi r8,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 5;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r18,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// stb r21,-512(r30)
	PPC_STORE_U8(ctx.r30.u32 + -512, ctx.r21.u8);
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// stb r21,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r21.u8);
loc_82399068:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82398e8c
	if (ctx.cr6.lt) goto loc_82398E8C;
loc_82399078:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x82399084;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82398440) {
	__imp__sub_82398440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82399090;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de028
	ctx.lr = 0x82399098;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r18,r11,4608
	ctx.r18.s64 = ctx.r11.s64 + 4608;
	// addi r30,r10,13536
	ctx.r30.s64 = ctx.r10.s64 + 13536;
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r23,r10,23040
	ctx.r23.s64 = ctx.r10.s64 + 23040;
	// lfs f31,700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f31.f64 = double(temp.f32);
	// addi r21,r9,-3456
	ctx.r21.s64 = ctx.r9.s64 + -3456;
	// lfs f29,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f29.f64 = double(temp.f32);
	// addi r28,r8,24448
	ctx.r28.s64 = ctx.r8.s64 + 24448;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lwz r22,656(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r8,680(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// beq cr6,0x8239926c
	if (ctx.cr6.eq) goto loc_8239926C;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// subf r20,r10,r9
	ctx.r20.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r19,r10,r8
	ctx.r19.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_8239910C:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lbzx r9,r20,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r25.u32);
	// lbzx r8,r19,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r25.u32);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82399144
	if (!ctx.cr6.eq) goto loc_82399144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239e348
	ctx.lr = 0x82399138;
	sub_8239E348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399250
	if (ctx.cr6.eq) goto loc_82399250;
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
loc_82399144:
	// lwz r10,180(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// lfs f0,692(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// add r31,r27,r10
	ctx.r31.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lfs f12,688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f12.f64 = double(temp.f32);
	// ori r8,r9,41364
	ctx.r8.u64 = ctx.r9.u64 | 41364;
	// lwz r10,172(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 172);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lwz r9,512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// add r6,r26,r10
	ctx.r6.u64 = ctx.r26.u64 + ctx.r10.u64;
	// ori r5,r7,41364
	ctx.r5.u64 = ctx.r7.u64 | 41364;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lwzx r4,r28,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// lwzx r10,r28,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,32(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f28,f3
	ctx.f28.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x821742a0
	ctx.lr = 0x823991C0;
	sub_821742A0(ctx, base);
	// lfs f2,244(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// addis r11,r21,3
	ctx.r11.s64 = ctx.r21.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f2
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f2.f64));
	// fmuls f2,f28,f29
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bl 0x82300b48
	ctx.lr = 0x823991F8;
	sub_82300B48(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82394040
	ctx.lr = 0x82399218;
	sub_82394040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399244
	if (ctx.cr6.eq) goto loc_82399244;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// sth r24,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r24.u16);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r11,41364
	ctx.r9.u64 = ctx.r11.u64 | 41364;
	// ori r7,r10,41364
	ctx.r7.u64 = ctx.r10.u64 | 41364;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stwx r6,r28,r7
	PPC_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r6.u32);
	// b 0x82399250
	goto loc_82399250;
loc_82399244:
	// stbx r17,r20,r25
	PPC_STORE_U8(ctx.r20.u32 + ctx.r25.u32, ctx.r17.u8);
	// stb r17,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r17.u8);
	// stbx r17,r19,r25
	PPC_STORE_U8(ctx.r19.u32 + ctx.r25.u32, ctx.r17.u8);
loc_82399250:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r26,r26,92
	ctx.r26.s64 = ctx.r26.s64 + 92;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8239910c
	if (ctx.cr6.lt) goto loc_8239910C;
loc_8239926C:
	// lwz r19,660(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lwz r9,684(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lwz r11,692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// beq cr6,0x823993bc
	if (ctx.cr6.eq) goto loc_823993BC;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// subf r22,r10,r9
	ctx.r22.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8239929C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lbzx r10,r27,r20
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r20.u32);
	// lbzx r9,r27,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r22.u32);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823993a4
	if (ctx.cr6.eq) goto loc_823993A4;
	// lwz r11,176(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	// lwz r10,184(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 184);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r31,r26,r10
	ctx.r31.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lhz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823862b0
	ctx.lr = 0x823992D8;
	sub_823862B0(ctx, base);
	// lhz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823993a4
	if (ctx.cr6.eq) goto loc_823993A4;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r21,3
	ctx.r11.s64 = ctx.r21.s64 + 196608;
	// lfs f0,692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,6400
	ctx.r11.s64 = ctx.r11.s64 + 6400;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// ori r7,r9,41368
	ctx.r7.u64 = ctx.r9.u64 | 41368;
	// lwz r8,8456(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// lfsx f6,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lwzx r9,r28,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f4,f10,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fsubs f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsel f12,f13,f6,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 516);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398090
	ctx.lr = 0x8239936C;
	sub_82398090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399398
	if (ctx.cr6.eq) goto loc_82399398;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// sth r24,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r24.u16);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r11,41368
	ctx.r9.u64 = ctx.r11.u64 | 41368;
	// ori r7,r10,41368
	ctx.r7.u64 = ctx.r10.u64 | 41368;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r28,r7
	PPC_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u32);
	// b 0x823993a4
	goto loc_823993A4;
loc_82399398:
	// stbx r17,r27,r22
	PPC_STORE_U8(ctx.r27.u32 + ctx.r22.u32, ctx.r17.u8);
	// stb r17,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r17.u8);
	// stbx r17,r27,r20
	PPC_STORE_U8(ctx.r27.u32 + ctx.r20.u32, ctx.r17.u8);
loc_823993A4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r25,r25,92
	ctx.r25.s64 = ctx.r25.s64 + 92;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8239929c
	if (ctx.cr6.lt) goto loc_8239929C;
loc_823993BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x823993C8;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399088) {
	__imp__sub_82399088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823993CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823993CC) {
	__imp__sub_823993CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823993D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r5,r10,4608
	ctx.r5.s64 = ctx.r10.s64 + 4608;
	// addi r6,r11,-29776
	ctx.r6.s64 = ctx.r11.s64 + -29776;
	// addi r8,r8,13312
	ctx.r8.s64 = ctx.r8.s64 + 13312;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r30,r4,2,25,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// lwz r10,8456(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8456);
	// addi r31,r11,17280
	ctx.r31.s64 = ctx.r11.s64 + 17280;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r6,r8,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwzx r7,r30,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mullw r3,r6,r3
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// and r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 & ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// beq cr6,0x8239946c
	if (ctx.cr6.eq) goto loc_8239946C;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
loc_8239945C:
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// and r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	// stwu r9,1024(r11)
	ea = 1024 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239945c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239945C;
loc_8239946C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823993D0) {
	__imp__sub_823993D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,17280
	ctx.r8.s64 = ctx.r10.s64 + 17280;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// not r8,r6
	ctx.r8.u64 = ~ctx.r6.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_823994B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x823994b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823994B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82399478) {
	__imp__sub_82399478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823994D0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r10,13312
	ctx.r6.s64 = ctx.r10.s64 + 13312;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,4608
	ctx.r9.s64 = ctx.r9.s64 + 4608;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r4,-32191
	ctx.r4.s64 = -2109669376;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lwz r9,8456(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// addi r4,r4,17280
	ctx.r4.s64 = ctx.r4.s64 + 17280;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r6,-24656
	ctx.r6.s64 = ctx.r6.s64 + -24656;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r5,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 65536;
	// lwzx r4,r8,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-29776
	ctx.r7.s64 = ctx.r9.s64 + -29776;
	// lis r6,-31809
	ctx.r6.s64 = -2084634624;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,24448
	ctx.r6.s64 = ctx.r6.s64 + 24448;
	// or r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 | ctx.r4.u64;
	// addis r9,r6,10
	ctx.r9.s64 = ctx.r6.s64 + 655360;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r9,-24120
	ctx.r9.s64 = ctx.r9.s64 + -24120;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r3,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r3.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823994D0) {
	__imp__sub_823994D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399584) {
	__imp__sub_82399584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399588) {
	PPC_FUNC_PROLOGUE();
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82399588) {
	__imp__sub_82399588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823995B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823995C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r9,4608
	ctx.r8.s64 = ctx.r9.s64 + 4608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,8456(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// subf. r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82399614
	if (ctx.cr0.lt) goto loc_82399614;
loc_823995EC:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823995b8
	ctx.lr = 0x82399604;
	sub_823995B8(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf. r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823995ec
	if (!ctx.cr0.lt) goto loc_823995EC;
loc_82399614:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82399628
	if (ctx.cr6.eq) goto loc_82399628;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823994d0
	ctx.lr = 0x82399628;
	sub_823994D0(ctx, base);
loc_82399628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823995B8) {
	__imp__sub_823995B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82399638;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x82399640;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r26,r10,4608
	ctx.r26.s64 = ctx.r10.s64 + 4608;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// lwz r11,8456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82399670:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82399670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399670;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf. r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82399734
	if (ctx.cr0.lt) goto loc_82399734;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f29.f64 = double(temp.f32);
loc_82399698:
	// lwz r9,8456(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fabs f2,f5
	ctx.f2.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f0,f8,f12,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f13,f4,f11,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f12,f6,f10,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f11,f2,f9,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsubs f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82399758
	if (!ctx.cr6.gt) goto loc_82399758;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82399710:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82399728:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf. r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82399698
	if (!ctx.cr0.lt) goto loc_82399698;
loc_82399734:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82399748
	if (ctx.cr6.eq) goto loc_82399748;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823994d0
	ctx.lr = 0x82399748;
	sub_823994D0(ctx, base);
loc_82399748:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x82399754;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82399758:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8239976c
	if (!ctx.cr6.lt) goto loc_8239976C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82399710
	goto loc_82399710;
loc_8239976C:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r27,r10,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823997ec
	if (!ctx.cr6.lt) goto loc_823997EC;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,92
	ctx.r28.s64 = ctx.r1.s64 + 92;
	// lfsx f0,r31,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r28
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fsubs f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfsx f9,r31,r29
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// fmuls f8,f10,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfsx f8,r31,r28
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// bge cr6,0x823997cc
	if (!ctx.cr6.lt) goto loc_823997CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82399630
	ctx.lr = 0x823997CC;
	sub_82399630(ctx, base);
loc_823997CC:
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfsx f12,r31,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfsx f11,r31,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// b 0x82399728
	goto loc_82399728;
loc_823997EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82399630
	ctx.lr = 0x823997FC;
	sub_82399630(ctx, base);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// b 0x82399728
	goto loc_82399728;
}

PPC_WEAK_FUNC(sub_82399630) {
	__imp__sub_82399630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399804) {
	__imp__sub_82399804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82399810;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de028
	ctx.lr = 0x82399818;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r23,r10,4608
	ctx.r23.s64 = ctx.r10.s64 + 4608;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,8456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_82399850:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82399850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399850;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// subf. r11,r22,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82399914
	if (ctx.cr0.lt) goto loc_82399914;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f29.f64 = double(temp.f32);
loc_82399878:
	// lwz r9,8456(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fabs f2,f5
	ctx.f2.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f0,f8,f12,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f13,f4,f11,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f12,f6,f10,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f11,f2,f9,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsubs f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8239995c
	if (!ctx.cr6.gt) goto loc_8239995C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823998F0:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82399908:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// subf. r11,r22,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82399878
	if (!ctx.cr0.lt) goto loc_82399878;
loc_82399914:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239994c
	if (ctx.cr6.eq) goto loc_8239994C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r26,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,17280
	ctx.r9.s64 = ctx.r10.s64 + 17280;
	// rlwinm r8,r26,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r5.u32);
loc_8239994C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de074
	ctx.lr = 0x82399958;
	__restfpr_28(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8239995C:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82399970
	if (!ctx.cr6.lt) goto loc_82399970;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823998f0
	goto loc_823998F0;
loc_82399970:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r27,r10,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823999f8
	if (!ctx.cr6.lt) goto loc_823999F8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r1,92
	ctx.r28.s64 = ctx.r1.s64 + 92;
	// lfsx f0,r30,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r30,r28
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fsubs f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfsx f9,r30,r29
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, temp.u32);
	// fmuls f8,f10,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfsx f8,r30,r28
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// bge cr6,0x823999d8
	if (!ctx.cr6.lt) goto loc_823999D8;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82399808
	ctx.lr = 0x823999D8;
	sub_82399808(ctx, base);
loc_823999D8:
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfsx f12,r30,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, temp.u32);
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfsx f11,r30,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// b 0x82399908
	goto loc_82399908;
loc_823999F8:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82399808
	ctx.lr = 0x82399A10;
	sub_82399808(ctx, base);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// b 0x82399908
	goto loc_82399908;
}

PPC_WEAK_FUNC(sub_82399808) {
	__imp__sub_82399808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82399A20;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x82399A28;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f29,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x822ff520
	ctx.lr = 0x82399A44;
	sub_822FF520(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmuls f30,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r11,-24656
	ctx.r8.s64 = ctx.r11.s64 + -24656;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// addi r10,r10,-32564
	ctx.r10.s64 = ctx.r10.s64 + -32564;
	// li r30,1
	ctx.r30.s64 = 1;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r8,r11,228
	ctx.r8.s64 = ctx.r11.s64 + 228;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_82399A84:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,-224
	ctx.r11.s64 = ctx.r8.s64 + -224;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82399ae0
	if (!ctx.cr6.gt) goto loc_82399AE0;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
loc_82399AA4:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f5,f12,f8,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x82399aec
	if (!ctx.cr6.gt) goto loc_82399AEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82399aa4
	if (ctx.cr6.lt) goto loc_82399AA4;
loc_82399AE0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r30,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u8);
	// b 0x82399af8
	goto loc_82399AF8;
loc_82399AEC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
loc_82399AF8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,232
	ctx.r8.s64 = ctx.r8.s64 + 232;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82399a84
	if (ctx.cr6.lt) goto loc_82399A84;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82399bb4
	if (!ctx.cr6.eq) goto loc_82399BB4;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// bl 0x821742a0
	ctx.lr = 0x82399B44;
	sub_821742A0(ctx, base);
	// fmuls f10,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f9,244(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fres f8,f29
	ctx.f8.f64 = float(1.0 / ctx.f29.f64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32083
	ctx.r7.s64 = -2102591488;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,-3456
	ctx.r6.s64 = ctx.r7.s64 + -3456;
	// lfs f0,20476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// addis r11,r6,3
	ctx.r11.s64 = ctx.r6.s64 + 196608;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fmadds f7,f28,f28,f10
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f10.f64));
	// lfsx f6,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f31,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmsubs f3,f4,f8,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f9.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsel f12,f13,f6,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x82399BB0;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82399BB4:
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fres f11,f29
	ctx.f11.f64 = float(1.0 / ctx.f29.f64);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 680);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f2,f0,f1
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// bl 0x82300b48
	ctx.lr = 0x82399C08;
	sub_82300B48(ctx, base);
	// extsb r26,r3
	ctx.r26.s64 = ctx.r3.s8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82399d5c
	if (ctx.cr6.lt) goto loc_82399D5C;
	// rlwinm r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// beq cr6,0x82399c94
	if (ctx.cr6.eq) goto loc_82399C94;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r6,r11,-1628
	ctx.r6.s64 = ctx.r11.s64 + -1628;
loc_82399C30:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82399c30
	if (!ctx.cr0.eq) goto loc_82399C30;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x82399c78
	if (ctx.cr6.lt) goto loc_82399C78;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// li r10,128
	ctx.r10.s64 = 128;
	// ori r9,r11,63908
	ctx.r9.u64 = ctx.r11.u64 | 63908;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x82399C74;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82399C78:
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1624
	ctx.r11.s64 = ctx.r11.s64 + -1624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82399c98
	goto loc_82399C98;
loc_82399C94:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82399C98:
	// bl 0x82386210
	ctx.lr = 0x82399C9C;
	sub_82386210(ctx, base);
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// bge cr6,0x82399d5c
	if (!ctx.cr6.lt) goto loc_82399D5C;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,13312
	ctx.r8.s64 = ctx.r10.s64 + 13312;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwimi r10,r30,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwimi r28,r10,13,0,18
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFFFE000) | (ctx.r28.u64 & 0xFFFFFFFF00001FFF);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82399CE8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82399ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399CE8;
	// stfs f30,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
	// stb r26,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r26.u8);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// addis r9,r31,9
	ctx.r9.s64 = ctx.r31.s64 + 589824;
	// addis r8,r31,9
	ctx.r8.s64 = ctx.r31.s64 + 589824;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r10,8076
	ctx.r4.s64 = ctx.r10.s64 + 8076;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r9,r9,9100
	ctx.r9.s64 = ctx.r9.s64 + 9100;
	// addi r8,r8,10124
	ctx.r8.s64 = ctx.r8.s64 + 10124;
	// lfs f0,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// stfs f10,64(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stbx r6,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r6.u8);
	// stbx r5,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r5.u8);
	// stbx r10,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82399D5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x82399D68;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399A18) {
	__imp__sub_82399A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399D6C) {
	__imp__sub_82399D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82399D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823993d0
	ctx.lr = 0x82399D8C;
	sub_823993D0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,13008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13008);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x82399df8
	if (ctx.cr6.eq) goto loc_82399DF8;
	// bl 0x823995b8
	ctx.lr = 0x82399DF0;
	sub_823995B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82399DF8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82399630
	ctx.lr = 0x82399E00;
	sub_82399630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399D70) {
	__imp__sub_82399D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82399E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823993d0
	ctx.lr = 0x82399E24;
	sub_823993D0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,13008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13008);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x82399e6c
	if (ctx.cr6.eq) goto loc_82399E6C;
	// bl 0x823995b8
	ctx.lr = 0x82399E64;
	sub_823995B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82399E6C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82399630
	ctx.lr = 0x82399E74;
	sub_82399630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399E08) {
	__imp__sub_82399E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399E7C) {
	__imp__sub_82399E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r6,r11,4608
	ctx.r6.s64 = ctx.r11.s64 + 4608;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r10,17280
	ctx.r3.s64 = ctx.r10.s64 + 17280;
	// rlwinm r10,r9,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwz r11,8456(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82399ee0
	if (ctx.cr6.eq) goto loc_82399EE0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82399EC8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82399ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399EC8;
	// lwz r11,8456(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
loc_82399EE0:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82399808
	sub_82399808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399E80) {
	__imp__sub_82399E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82399EF4) {
	__imp__sub_82399EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82399EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82399F00;
	__savegprlr_28(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// addi r7,r9,-24656
	ctx.r7.s64 = ctx.r9.s64 + -24656;
	// lwz r11,-19420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19420);
	// ori r6,r8,64936
	ctx.r6.u64 = ctx.r8.u64 | 64936;
	// addis r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 65536;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mulli r9,r11,696
	ctx.r9.s64 = ctx.r11.s64 * 696;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lfs f0,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-32564
	ctx.r10.s64 = ctx.r10.s64 + -32564;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8239a020
	if (ctx.cr6.eq) goto loc_8239A020;
	// addis r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 458752;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r6,r10,-484
	ctx.r6.s64 = ctx.r10.s64 + -484;
loc_82399F54:
	// lwz r11,-64(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -64);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8239a014
	if (ctx.cr6.eq) goto loc_8239A014;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r5,r11,19,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// beq cr6,0x8239a014
	if (ctx.cr6.eq) goto loc_8239A014;
	// addis r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 655360;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// addi r7,r11,-24156
	ctx.r7.s64 = ctx.r11.s64 + -24156;
loc_82399F80:
	// lwz r9,224(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239a008
	if (!ctx.cr6.gt) goto loc_8239A008;
	// lfs f13,-40(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -60);
	ctx.f8.f64 = double(temp.f32);
loc_82399FAC:
	// lfs f7,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f4,f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f2,f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f6,f8,f5,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f5,f9,f7,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f4,f10,f3,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8239a000
	if (!ctx.cr6.gt) goto loc_8239A000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82399fac
	if (ctx.cr6.lt) goto loc_82399FAC;
	// b 0x8239a008
	goto loc_8239A008;
loc_8239A000:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
loc_8239A008:
	// addi r8,r8,232
	ctx.r8.s64 = ctx.r8.s64 + 232;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82399f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399F80;
loc_8239A014:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r6,120
	ctx.r6.s64 = ctx.r6.s64 + 120;
	// bne 0x82399f54
	if (!ctx.cr0.eq) goto loc_82399F54;
loc_8239A020:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,65416
	ctx.r10.u64 = ctx.r11.u64 | 65416;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239a0e4
	if (ctx.cr6.eq) goto loc_8239A0E4;
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r6,r11,-88
	ctx.r6.s64 = ctx.r11.s64 + -88;
loc_8239A040:
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r5,r11,19,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// beq cr6,0x8239a0d8
	if (ctx.cr6.eq) goto loc_8239A0D8;
	// addis r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 655360;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r8,r29,228
	ctx.r8.s64 = ctx.r29.s64 + 228;
	// addi r7,r11,-24156
	ctx.r7.s64 = ctx.r11.s64 + -24156;
loc_8239A060:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,-224
	ctx.r11.s64 = ctx.r8.s64 + -224;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239a0cc
	if (!ctx.cr6.gt) goto loc_8239A0CC;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
loc_8239A084:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f3,f6,f11,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8239a0c4
	if (!ctx.cr6.gt) goto loc_8239A0C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239a084
	if (ctx.cr6.lt) goto loc_8239A084;
	// b 0x8239a0cc
	goto loc_8239A0CC;
loc_8239A0C4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
loc_8239A0CC:
	// addi r8,r8,232
	ctx.r8.s64 = ctx.r8.s64 + 232;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8239a060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239A060;
loc_8239A0D8:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r6,72
	ctx.r6.s64 = ctx.r6.s64 + 72;
	// bne 0x8239a040
	if (!ctx.cr0.eq) goto loc_8239A040;
loc_8239A0E4:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,15244
	ctx.r10.u64 = ctx.r11.u64 | 15244;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239a1c4
	if (ctx.cr6.eq) goto loc_8239A1C4;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r4,r11,15256
	ctx.r4.s64 = ctx.r11.s64 + 15256;
loc_8239A104:
	// lhz r5,-2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + -2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x8239a1b8
	if (ctx.cr6.eq) goto loc_8239A1B8;
	// addis r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 655360;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// addi r7,r11,-24156
	ctx.r7.s64 = ctx.r11.s64 + -24156;
loc_8239A124:
	// lwz r9,224(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8239a1ac
	if (!ctx.cr6.gt) goto loc_8239A1AC;
	// lfs f13,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
loc_8239A150:
	// lfs f7,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f4,f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f2,f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f6,f8,f5,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f5,f9,f7,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f4,f10,f3,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8239a1a4
	if (!ctx.cr6.gt) goto loc_8239A1A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239a150
	if (ctx.cr6.lt) goto loc_8239A150;
	// b 0x8239a1ac
	goto loc_8239A1AC;
loc_8239A1A4:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
loc_8239A1AC:
	// addi r8,r8,232
	ctx.r8.s64 = ctx.r8.s64 + 232;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8239a124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239A124;
loc_8239A1B8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// bne 0x8239a104
	if (!ctx.cr0.eq) goto loc_8239A104;
loc_8239A1C4:
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82399EF8) {
	__imp__sub_82399EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// b 0x82398180
	sub_82398180(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A1C8) {
	__imp__sub_8239A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A1DC) {
	__imp__sub_8239A1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A1E0) {
	__imp__sub_8239A1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A1EC) {
	__imp__sub_8239A1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A1F0) {
	__imp__sub_8239A1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A1FC) {
	__imp__sub_8239A1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A200) {
	__imp__sub_8239A200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A204) {
	__imp__sub_8239A204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A208) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-24656
	ctx.r31.s64 = ctx.r11.s64 + -24656;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x8239a248
	if (ctx.cr6.lt) goto loc_8239A248;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,-30792
	ctx.r4.s64 = ctx.r11.s64 + -30792;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8239A248;
	sub_822830E8(ctx, base);
loc_8239A248:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r4,34(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x823958b8
	ctx.lr = 0x8239A260;
	sub_823958B8(ctx, base);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi. r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8239a2b0
	if (ctx.cr0.lt) goto loc_8239A2B0;
loc_8239A270:
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8239a2b4
	if (!ctx.cr6.gt) goto loc_8239A2B4;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// srawi. r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// bge 0x8239a270
	if (!ctx.cr0.lt) goto loc_8239A270;
loc_8239A2B0:
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
loc_8239A2B4:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8239A208) {
	__imp__sub_8239A208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A2EC) {
	__imp__sub_8239A2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,-24656
	ctx.r7.s64 = ctx.r11.s64 + -24656;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,192(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// lwz r10,188(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 188, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8239a39c
	if (ctx.cr6.lt) goto loc_8239A39C;
loc_8239A324:
	// lwz r9,192(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8239a34c
	if (!ctx.cr6.lt) goto loc_8239A34C;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8239a34c
	if (!ctx.cr6.lt) goto loc_8239A34C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8239A34C:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8239a3a0
	if (!ctx.cr6.gt) goto loc_8239A3A0;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r6,r9
	ctx.r31.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stwx r4,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,188(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8239a324
	if (!ctx.cr6.gt) goto loc_8239A324;
loc_8239A39C:
	// lwz r9,192(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
loc_8239A3A0:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A2F0) {
	__imp__sub_8239A2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A3C8) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r30,r11,-24656
	ctx.r30.s64 = ctx.r11.s64 + -24656;
	// lwz r31,196(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239a404
	if (!ctx.cr6.eq) goto loc_8239A404;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8239A404;
	sub_822830E8(ctx, base);
loc_8239A404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8239A3C8) {
	__imp__sub_8239A3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// lwz r11,196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A428) {
	__imp__sub_8239A428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239A448;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239a474
	if (!ctx.cr6.eq) goto loc_8239A474;
	// bl 0x8239a3c8
	ctx.lr = 0x8239A464;
	sub_8239A3C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x8239a4c0
	goto loc_8239A4C0;
loc_8239A474:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8239a4c0
	if (!ctx.cr6.eq) goto loc_8239A4C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822d3368
	ctx.lr = 0x8239A48C;
	sub_822D3368(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bne cr6,0x8239a4ac
	if (!ctx.cr6.eq) goto loc_8239A4AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8239A4AC;
	sub_822830E8(ctx, base);
loc_8239A4AC:
	// rlwinm r5,r29,3,21,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0x7F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r29.u8);
	// bl 0x823de1f0
	ctx.lr = 0x8239A4C0;
	sub_823DE1F0(ctx, base);
loc_8239A4C0:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfsx f6,r9,r10
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lfs f3,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// rotlwi r10,r8,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f3,f13,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f11,f2,f0,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r6.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A440) {
	__imp__sub_8239A440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A540) {
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
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a56c
	if (ctx.cr6.eq) goto loc_8239A56C;
loc_8239A558:
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
loc_8239A56C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f5,f9,f13,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f8,f12,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x8239a558
	if (ctx.cr6.gt) goto loc_8239A558;
	// bl 0x82396e88
	ctx.lr = 0x8239A5B8;
	sub_82396E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
}

PPC_WEAK_FUNC(sub_8239A540) {
	__imp__sub_8239A540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A5D4) {
	__imp__sub_8239A5D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8239A5E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82396ee8
	ctx.lr = 0x8239A610;
	sub_82396EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a628
	if (!ctx.cr6.eq) goto loc_8239A628;
loc_8239A61C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8239A628:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r10,-24656
	ctx.r9.s64 = ctx.r10.s64 + -24656;
	// lwz r5,164(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239a66c
	if (ctx.cr6.eq) goto loc_8239A66C;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82396ee8
	ctx.lr = 0x8239A660;
	sub_82396EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a61c
	if (ctx.cr6.eq) goto loc_8239A61C;
loc_8239A66C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239a6bc
	if (ctx.cr6.eq) goto loc_8239A6BC;
loc_8239A678:
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82396ee8
	ctx.lr = 0x8239A6A0;
	sub_82396EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a61c
	if (ctx.cr6.eq) goto loc_8239A61C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8239a678
	if (ctx.cr6.lt) goto loc_8239A678;
loc_8239A6BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239a6c8
	if (ctx.cr6.eq) goto loc_8239A6C8;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8239A6C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A5D8) {
	__imp__sub_8239A5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A6D4) {
	__imp__sub_8239A6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239A6E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-3200(r1)
	ea = -3200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8239a5d8
	ctx.lr = 0x8239A6F4;
	sub_8239A5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a704
	if (!ctx.cr6.eq) goto loc_8239A704;
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8239A704:
	// ble cr6,0x8239a728
	if (!ctx.cr6.gt) goto loc_8239A728;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8239A710:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239a440
	ctx.lr = 0x8239A71C;
	sub_8239A440(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8239a710
	if (!ctx.cr0.eq) goto loc_8239A710;
loc_8239A728:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A6D8) {
	__imp__sub_8239A6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A734) {
	__imp__sub_8239A734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239A740;
	__savegprlr_29(ctx, base);
	// stwu r1,-3200(r1)
	ea = -3200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239a76c
	if (ctx.cr6.eq) goto loc_8239A76C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// bl 0x8239a5d8
	ctx.lr = 0x8239A75C;
	sub_8239A5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a778
	if (!ctx.cr6.eq) goto loc_8239A778;
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8239A76C:
	// lbz r3,34(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 34);
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x8239a77c
	goto loc_8239A77C;
loc_8239A778:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8239A77C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a7a0
	if (!ctx.cr6.gt) goto loc_8239A7A0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8239A788:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239a440
	ctx.lr = 0x8239A794;
	sub_8239A440(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8239a788
	if (!ctx.cr0.eq) goto loc_8239A788;
loc_8239A7A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A738) {
	__imp__sub_8239A738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A7AC) {
	__imp__sub_8239A7AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r9,r11,17280
	ctx.r9.s64 = ctx.r11.s64 + 17280;
	// lwzx r7,r10,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A7B0) {
	__imp__sub_8239A7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r10,17280
	ctx.r9.s64 = ctx.r10.s64 + 17280;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A7D8) {
	__imp__sub_8239A7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A7FC) {
	__imp__sub_8239A7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8239A808;
	__savegprlr_19(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,24(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8239a960
	if (!ctx.cr6.gt) goto loc_8239A960;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r11,17280
	ctx.r25.s64 = ctx.r11.s64 + 17280;
loc_8239A864:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r7,r9,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8239a94c
	if (!ctx.cr6.eq) goto loc_8239A94C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a540
	ctx.lr = 0x8239A89C;
	sub_8239A540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a94c
	if (!ctx.cr6.eq) goto loc_8239A94C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8239a8cc
	if (!ctx.cr6.gt) goto loc_8239A8CC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396e88
	ctx.lr = 0x8239A8C0;
	sub_82396E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239a94c
	if (!ctx.cr6.eq) goto loc_8239A94C;
loc_8239A8CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a5d8
	ctx.lr = 0x8239A8E8;
	sub_8239A5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a94c
	if (ctx.cr6.eq) goto loc_8239A94C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,34(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// bl 0x82396670
	ctx.lr = 0x8239A904;
	sub_82396670(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8239a94c
	if (!ctx.cr6.gt) goto loc_8239A94C;
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r11,r7,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r4,r7,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r19,r4,r25
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// or r3,r19,r3
	ctx.r3.u64 = ctx.r19.u64 | ctx.r3.u64;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// bl 0x8239a800
	ctx.lr = 0x8239A94C;
	sub_8239A800(ctx, base);
loc_8239A94C:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,60
	ctx.r23.s64 = ctx.r23.s64 + 60;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239a864
	if (ctx.cr6.lt) goto loc_8239A864;
loc_8239A960:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239A800) {
	__imp__sub_8239A800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// ori r8,r10,35776
	ctx.r8.u64 = ctx.r10.u64 | 35776;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r5,r7,17280
	ctx.r5.s64 = ctx.r7.s64 + 17280;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A968) {
	__imp__sub_8239A968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A9A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8239A9A8:
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239a9a8
	if (!ctx.cr6.eq) goto loc_8239A9A8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A9A0) {
	__imp__sub_8239A9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239A9BC) {
	__imp__sub_8239A9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A9C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8239A9CC:
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239a9cc
	if (!ctx.cr6.eq) goto loc_8239A9CC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A9C0) {
	__imp__sub_8239A9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239A9E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239A9EC:
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239a9ec
	if (!ctx.cr6.eq) goto loc_8239A9EC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239A9E0) {
	__imp__sub_8239A9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8239AA08;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r23,r11,-24656
	ctx.r23.s64 = ctx.r11.s64 + -24656;
	// ori r9,r10,35776
	ctx.r9.u64 = ctx.r10.u64 | 35776;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwzx r11,r23,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r8,17280
	ctx.r6.s64 = ctx.r8.s64 + 17280;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// beq cr6,0x8239aa78
	if (ctx.cr6.eq) goto loc_8239AA78;
loc_8239AA68:
	// stb r20,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r20.u8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239aa68
	if (!ctx.cr6.eq) goto loc_8239AA68;
loc_8239AA78:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8239abb4
	if (!ctx.cr6.gt) goto loc_8239ABB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8239AAB8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239aad4
	if (ctx.cr6.eq) goto loc_8239AAD4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8239ab30
	goto loc_8239AB30;
loc_8239AAD4:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,180(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,168(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f7,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x8239ab14
	if (!ctx.cr6.gt) goto loc_8239AB14;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8239ab30
	goto loc_8239AB30;
loc_8239AB14:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396e88
	ctx.lr = 0x8239AB24;
	sub_82396E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8239AB30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239aba0
	if (!ctx.cr6.eq) goto loc_8239ABA0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a738
	ctx.lr = 0x8239AB50;
	sub_8239A738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239aba0
	if (ctx.cr6.eq) goto loc_8239ABA0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ab7c
	if (!ctx.cr6.eq) goto loc_8239AB7C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r24,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r24.u8);
	// bl 0x8239a208
	ctx.lr = 0x8239AB78;
	sub_8239A208(ctx, base);
	// b 0x8239aba0
	goto loc_8239ABA0;
loc_8239AB7C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8239ab8c
	if (ctx.cr6.lt) goto loc_8239AB8C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8239AB8C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8239aba0
	if (ctx.cr6.eq) goto loc_8239ABA0;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
loc_8239ABA0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239aab8
	if (ctx.cr6.lt) goto loc_8239AAB8;
loc_8239ABB4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239abd0
	if (ctx.cr6.eq) goto loc_8239ABD0;
loc_8239ABC0:
	// stb r21,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r21.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239abc0
	if (!ctx.cr6.eq) goto loc_8239ABC0;
loc_8239ABD0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AA00) {
	__imp__sub_8239AA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239ABDC) {
	__imp__sub_8239ABDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8239ABE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-3472(r1)
	ea = -3472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x8239ABFC;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8239AC04;
	sub_822DB8F0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8239AC10:
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bdnz 0x8239ac10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239AC10;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// ori r9,r10,65024
	ctx.r9.u64 = ctx.r10.u64 | 65024;
	// addi r30,r11,-24656
	ctx.r30.s64 = ctx.r11.s64 + -24656;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,1376
	ctx.r11.s64 = ctx.r1.s64 + 1376;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r28,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x8239aa00
	ctx.lr = 0x8239AC68;
	sub_8239AA00(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239aefc
	if (ctx.cr6.eq) goto loc_8239AEFC;
loc_8239AC74:
	// bl 0x8239a2f0
	ctx.lr = 0x8239AC78;
	sub_8239A2F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d3368
	ctx.lr = 0x8239AC8C;
	sub_822D3368(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// beq cr6,0x8239aef0
	if (ctx.cr6.eq) goto loc_8239AEF0;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// blt cr6,0x8239ae2c
	if (ctx.cr6.lt) goto loc_8239AE2C;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,616
	ctx.r8.s64 = ctx.r1.s64 + 616;
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-12
	ctx.r11.s64 = ctx.r8.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239AD18:
	// lfs f5,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f5,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f3,f10,f5,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f2,f9,f5,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f1,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f7,f1,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f1,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f2,f11,f3,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f1,f10,f3,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f5,f9,f3,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f8,f4,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f7,f4,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f6,f4,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f3.f64));
	// lfs f1,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmadds f5,f11,f1,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f4,f10,f1,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f4,32(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmadds f3,f9,f1,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f3,36(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f2,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f8,f2,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f7,f2,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f6,f2,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f4,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmadds f3,f11,f4,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmadds f2,f10,f4,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmadds f1,f9,f4,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfsu f5,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f8,f5,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f7,f5,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f5,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfsu f3,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239ad18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239AD18;
loc_8239AE2C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8239aec4
	if (!ctx.cr6.lt) goto loc_8239AEC4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f10,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,616
	ctx.r8.s64 = ctx.r1.s64 + 616;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r9,-12
	ctx.r11.s64 = ctx.r9.s64 + -12;
loc_8239AE7C:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f10,f11,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f3,f9,f11,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f2,f8,f11,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsu f11,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f4,f7,f11,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f6,f11,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f5,f11,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfsu f11,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239ae7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239AE7C;
loc_8239AEC4:
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// bl 0x82396aa8
	ctx.lr = 0x8239AED0;
	sub_82396AA8(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r6,r30,204
	ctx.r6.s64 = ctx.r30.s64 + 204;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// bl 0x8239aa00
	ctx.lr = 0x8239AEF0;
	sub_8239AA00(ctx, base);
loc_8239AEF0:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239ac74
	if (!ctx.cr6.eq) goto loc_8239AC74;
loc_8239AEFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8239AF04;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,3472
	ctx.r1.s64 = ctx.r1.s64 + 3472;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239ABE0) {
	__imp__sub_8239ABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239AF0C) {
	__imp__sub_8239AF0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239AF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8239AF18;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r27,r11,4608
	ctx.r27.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// addi r11,r10,31
	ctx.r11.s64 = ctx.r10.s64 + 31;
	// srawi r23,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 5;
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x8239AF4C;
	sub_823DE090(ctx, base);
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8239b028
	if (ctx.cr6.lt) goto loc_8239B028;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r26,68
	ctx.r26.s64 = 68;
	// addi r31,r9,-24656
	ctx.r31.s64 = ctx.r9.s64 + -24656;
	// lfs f31,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r10,-11984
	ctx.r25.s64 = ctx.r10.s64 + -11984;
loc_8239AF7C:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239b014
	if (!ctx.cr6.gt) goto loc_8239B014;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r23,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239AFE0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r10,35776
	ctx.r9.u64 = ctx.r10.u64 | 35776;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8239abe0
	ctx.lr = 0x8239AFFC;
	sub_8239ABE0(ctx, base);
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8239afe0
	if (ctx.cr6.lt) goto loc_8239AFE0;
loc_8239B014:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8239af7c
	if (!ctx.cr6.gt) goto loc_8239AF7C;
loc_8239B028:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239AF10) {
	__imp__sub_8239AF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B034) {
	__imp__sub_8239B034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239B040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r31,8456(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r30,508(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r9,r29,31
	ctx.r9.s64 = ctx.r29.s64 + 31;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x8239B070;
	sub_823DE090(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8239b110
	if (ctx.cr6.lt) goto loc_8239B110;
	// lwz r6,636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239b110
	if (ctx.cr6.eq) goto loc_8239B110;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r7,r11,17280
	ctx.r7.s64 = ctx.r11.s64 + 17280;
loc_8239B09C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r11,26(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b100
	if (ctx.cr6.eq) goto loc_8239B100;
	// lwz r9,616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8239B0C0:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// ldx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r6.u32);
	// rldicl r11,r3,19,45
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 19) & 0x7FFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8239b0f8
	if (ctx.cr6.gt) goto loc_8239B0F8;
	// rlwinm r11,r8,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r8,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7C;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
loc_8239B0F8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8239b0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B0C0;
loc_8239B100:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8239b09c
	if (ctx.cr6.lt) goto loc_8239B09C;
loc_8239B110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B038) {
	__imp__sub_8239B038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B118) {
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
	// lbz r11,430(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 430);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239b144
	if (!ctx.cr6.eq) goto loc_8239B144;
loc_8239B130:
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
loc_8239B144:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8239b1d0
	if (ctx.cr6.eq) goto loc_8239B1D0;
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
	// bl 0x8239ca60
	ctx.lr = 0x8239B154;
	sub_8239CA60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b1d0
	if (ctx.cr6.eq) goto loc_8239B1D0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r5,8456(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r4,52(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239b1d0
	if (ctx.cr6.eq) goto loc_8239B1D0;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r9,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// addi r7,r8,-24656
	ctx.r7.s64 = ctx.r8.s64 + -24656;
	// addi r6,r10,17280
	ctx.r6.s64 = ctx.r10.s64 + 17280;
loc_8239B18C:
	// addis r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 65536;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r8,-29756
	ctx.r8.s64 = ctx.r8.s64 + -29756;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239b1c0
	if (ctx.cr6.eq) goto loc_8239B1C0;
	// lwz r8,508(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 508);
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239b130
	if (!ctx.cr6.eq) goto loc_8239B130;
loc_8239B1C0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r11,r9,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// blt cr6,0x8239b18c
	if (ctx.cr6.lt) goto loc_8239B18C;
loc_8239B1D0:
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

PPC_WEAK_FUNC(sub_8239B118) {
	__imp__sub_8239B118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B1E4) {
	__imp__sub_8239B1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8239B1F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r28,r11,4608
	ctx.r28.s64 = ctx.r11.s64 + 4608;
	// addi r29,r10,13312
	ctx.r29.s64 = ctx.r10.s64 + 13312;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,8456(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239b258
	if (ctx.cr6.eq) goto loc_8239B258;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8239b234
	goto loc_8239B234;
loc_8239B230:
	// lwz r10,8456(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
loc_8239B234:
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x822dd778
	ctx.lr = 0x8239B248;
	sub_822DD778(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1024
	ctx.r30.s64 = ctx.r30.s64 + 1024;
	// bne 0x8239b230
	if (!ctx.cr0.eq) goto loc_8239B230;
loc_8239B258:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r10,-24656
	ctx.r9.s64 = ctx.r10.s64 + -24656;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,-29776
	ctx.r8.s64 = ctx.r11.s64 + -29776;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823de090
	ctx.lr = 0x8239B27C;
	sub_823DE090(ctx, base);
	// lis r7,-31809
	ctx.r7.s64 = -2084634624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,24448
	ctx.r6.s64 = ctx.r7.s64 + 24448;
	// addis r11,r6,10
	ctx.r11.s64 = ctx.r6.s64 + 655360;
	// addi r5,r11,-24120
	ctx.r5.s64 = ctx.r11.s64 + -24120;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x8239B2A0;
	sub_823DE090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B1E8) {
	__imp__sub_8239B1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,24448
	ctx.r9.s64 = ctx.r10.s64 + 24448;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addis r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 393216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,19840
	ctx.r9.s64 = ctx.r9.s64 + 19840;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8239B2D0:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239b2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239B2D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B2A8) {
	__imp__sub_8239B2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B2DC) {
	__imp__sub_8239B2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B2E0) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// addi r7,r10,24448
	ctx.r7.s64 = ctx.r10.s64 + 24448;
	// ori r6,r9,41364
	ctx.r6.u64 = ctx.r9.u64 | 41364;
	// ori r5,r8,41368
	ctx.r5.u64 = ctx.r8.u64 | 41368;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// li r31,664
	ctx.r31.s64 = 664;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r9,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u32);
loc_8239B330:
	// lwz r10,-16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822dd778
	ctx.lr = 0x8239B34C;
	sub_822DD778(ctx, base);
	// lwz r11,8456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,672
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 672, ctx.xer);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x8239b330
	if (ctx.cr6.lt) goto loc_8239B330;
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

PPC_WEAK_FUNC(sub_8239B2E0) {
	__imp__sub_8239B2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8239B380;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r10,13312
	ctx.r31.s64 = ctx.r10.s64 + 13312;
	// addi r30,r11,-30680
	ctx.r30.s64 = ctx.r11.s64 + -30680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x8238fe30
	ctx.lr = 0x8239B3A4;
	sub_8238FE30(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r27,r11,24448
	ctx.r27.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,63904
	ctx.r9.u64 = ctx.r10.u64 | 63904;
	// addis r11,r27,10
	ctx.r11.s64 = ctx.r27.s64 + 655360;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r28,r11,-24160
	ctx.r28.s64 = ctx.r11.s64 + -24160;
	// stwx r3,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r3.u32);
loc_8239B3C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8238fe30
	ctx.lr = 0x8239B3D0;
	sub_8238FE30(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// bne 0x8239b3c4
	if (!ctx.cr0.eq) goto loc_8239B3C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8238fe30
	ctx.lr = 0x8239B3EC;
	sub_8238FE30(ctx, base);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r8,r9,41408
	ctx.r8.u64 = ctx.r9.u64 | 41408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x8238fe30
	ctx.lr = 0x8239B40C;
	sub_8238FE30(ctx, base);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r6,r7,41412
	ctx.r6.u64 = ctx.r7.u64 | 41412;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r3,r27,r6
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r3.u32);
	// beq cr6,0x8239b480
	if (ctx.cr6.eq) goto loc_8239B480;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-24656
	ctx.r26.s64 = ctx.r11.s64 + -24656;
loc_8239B434:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,29,3,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x8238fe30
	ctx.lr = 0x8239B444;
	sub_8238FE30(ctx, base);
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r10,-29776
	ctx.r10.s64 = ctx.r10.s64 + -29776;
	// stwx r3,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8238fe30
	ctx.lr = 0x8239B460;
	sub_8238FE30(ctx, base);
	// addis r10,r27,10
	ctx.r10.s64 = ctx.r27.s64 + 655360;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r9,r10,-24120
	ctx.r9.s64 = ctx.r10.s64 + -24120;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// stwx r3,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// blt cr6,0x8239b434
	if (ctx.cr6.lt) goto loc_8239B434;
loc_8239B480:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B378) {
	__imp__sub_8239B378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B488) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r31,r11,13312
	ctx.r31.s64 = ctx.r11.s64 + 13312;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addi r30,r10,24448
	ctx.r30.s64 = ctx.r10.s64 + 24448;
	// ori r8,r9,41408
	ctx.r8.u64 = ctx.r9.u64 | 41408;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x822dd778
	ctx.lr = 0x8239B4C8;
	sub_822DD778(ctx, base);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r6,r7,41412
	ctx.r6.u64 = ctx.r7.u64 | 41412;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x822dd778
	ctx.lr = 0x8239B4E4;
	sub_822DD778(ctx, base);
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

PPC_WEAK_FUNC(sub_8239B488) {
	__imp__sub_8239B488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B4FC) {
	__imp__sub_8239B4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8239B508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82193660
	ctx.lr = 0x8239B510;
	sub_82193660(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r29,r10,13312
	ctx.r29.s64 = ctx.r10.s64 + 13312;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r27,r11,24448
	ctx.r27.s64 = ctx.r11.s64 + 24448;
	// ori r8,r9,63904
	ctx.r8.u64 = ctx.r9.u64 | 63904;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r27,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x822dd778
	ctx.lr = 0x8239B53C;
	sub_822DD778(ctx, base);
	// addis r11,r27,10
	ctx.r11.s64 = ctx.r27.s64 + 655360;
	// li r31,7
	ctx.r31.s64 = 7;
	// addi r30,r11,-24160
	ctx.r30.s64 = ctx.r11.s64 + -24160;
loc_8239B548:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x822dd778
	ctx.lr = 0x8239B558;
	sub_822DD778(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8239b548
	if (!ctx.cr0.eq) goto loc_8239B548;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r28,604
	ctx.r28.s64 = 604;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_8239B574:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// lwz r3,-12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// bl 0x822dd778
	ctx.lr = 0x8239B584;
	sub_822DD778(ctx, base);
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lhz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// bl 0x822dd778
	ctx.lr = 0x8239B59C;
	sub_822DD778(ctx, base);
	// li r31,656
	ctx.r31.s64 = 656;
	// addi r30,r28,68
	ctx.r30.s64 = ctx.r28.s64 + 68;
loc_8239B5A4:
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x822dd778
	ctx.lr = 0x8239B5B8;
	sub_822DD778(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,664
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 664, ctx.xer);
	// blt cr6,0x8239b5a4
	if (ctx.cr6.lt) goto loc_8239B5A4;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r28,616
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 616, ctx.xer);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// blt cr6,0x8239b574
	if (ctx.cr6.lt) goto loc_8239B574;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lwz r3,512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,41364
	ctx.r9.u64 = ctx.r10.u64 | 41364;
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822dd778
	ctx.lr = 0x8239B600;
	sub_822DD778(ctx, base);
	// lis r7,9
	ctx.r7.s64 = 589824;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8456(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// ori r6,r7,41364
	ctx.r6.u64 = ctx.r7.u64 | 41364;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r5,41368
	ctx.r9.u64 = ctx.r5.u64 | 41368;
	// stwx r11,r27,r6
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r3,516(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822dd778
	ctx.lr = 0x8239B630;
	sub_822DD778(ctx, base);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r7,r8,41368
	ctx.r7.u64 = ctx.r8.u64 | 41368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r27,r7
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B500) {
	__imp__sub_8239B500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B648) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r11,-24656
	ctx.r7.s64 = ctx.r11.s64 + -24656;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// ori r5,r6,20808
	ctx.r5.u64 = ctx.r6.u64 | 20808;
	// addi r31,r10,24448
	ctx.r31.s64 = ctx.r10.s64 + 24448;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r4,r9,-32336
	ctx.r4.s64 = ctx.r9.s64 + -32336;
	// addis r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r8,-32560
	ctx.r9.s64 = ctx.r8.s64 + -32560;
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x8239b6b8
	if (!ctx.cr6.eq) goto loc_8239B6B8;
loc_8239B6A0:
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
loc_8239B6B8:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r10,r11,20812
	ctx.r10.u64 = ctx.r11.u64 | 20812;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8239b6a0
	if (!ctx.cr6.eq) goto loc_8239B6A0;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// ori r9,r10,20852
	ctx.r9.u64 = ctx.r10.u64 | 20852;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// lfsx f1,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8238fe40
	ctx.lr = 0x8239B6E4;
	sub_8238FE40(ctx, base);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// ori r7,r8,22860
	ctx.r7.u64 = ctx.r8.u64 | 22860;
	// stbx r3,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u8);
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

PPC_WEAK_FUNC(sub_8239B648) {
	__imp__sub_8239B648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B704) {
	__imp__sub_8239B704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8239B710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r11,-24656
	ctx.r7.s64 = ctx.r11.s64 + -24656;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// addi r30,r10,24448
	ctx.r30.s64 = ctx.r10.s64 + 24448;
	// ori r5,r6,20808
	ctx.r5.u64 = ctx.r6.u64 | 20808;
	// mulli r10,r11,696
	ctx.r10.s64 = ctx.r11.s64 * 696;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r4,r9,-32336
	ctx.r4.s64 = ctx.r9.s64 + -32336;
	// addis r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r8,-32560
	ctx.r9.s64 = ctx.r8.s64 + -32560;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r27,r10,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x8239b7b8
	if (ctx.cr6.eq) goto loc_8239B7B8;
	// addis r10,r30,6
	ctx.r10.s64 = ctx.r30.s64 + 393216;
	// addi r31,r10,20840
	ctx.r31.s64 = ctx.r10.s64 + 20840;
loc_8239B768:
	// lbz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -28);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239b77c
	if (!ctx.cr6.eq) goto loc_8239B77C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239b7a8
	if (ctx.cr6.eq) goto loc_8239B7A8;
loc_8239B77C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238fe40
	ctx.lr = 0x8239B790;
	sub_8238FE40(ctx, base);
	// addis r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 393216;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r9,r11,22860
	ctx.r9.s64 = ctx.r11.s64 + 22860;
	// ori r8,r10,20808
	ctx.r8.u64 = ctx.r10.u64 | 20808;
	// stbx r3,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r3.u8);
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
loc_8239B7A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239b768
	if (ctx.cr6.lt) goto loc_8239B768;
loc_8239B7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B708) {
	__imp__sub_8239B708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r11,-24656
	ctx.r8.s64 = ctx.r11.s64 + -24656;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// addi r10,r10,-32564
	ctx.r10.s64 = ctx.r10.s64 + -32564;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,444(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,448(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,452(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,456(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,460(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,464(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,468(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,472(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,476(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,480(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// lfs f3,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,484(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,488(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,492(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,500(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B7C0) {
	__imp__sub_8239B7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B864) {
	__imp__sub_8239B864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B868) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r10,-24656
	ctx.r6.s64 = ctx.r10.s64 + -24656;
	// li r8,65
	ctx.r8.s64 = 65;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// addis r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 65536;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-32332
	ctx.r9.s64 = ctx.r9.s64 + -32332;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mulli r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 * 232;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de1f0
	ctx.lr = 0x8239B8C0;
	sub_823DE1F0(ctx, base);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_8239B868) {
	__imp__sub_8239B868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B8DC) {
	__imp__sub_8239B8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12640);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// lfs f1,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B8E0) {
	__imp__sub_8239B8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B90C) {
	__imp__sub_8239B90C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r10,r11,-24656
	ctx.r10.s64 = ctx.r11.s64 + -24656;
	// bgt cr6,0x8239b930
	if (ctx.cr6.gt) goto loc_8239B930;
	// stfs f0,200(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// blr 
	return;
loc_8239B930:
	// stfs f1,200(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B910) {
	__imp__sub_8239B910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// addi r4,r11,-29756
	ctx.r4.s64 = ctx.r11.s64 + -29756;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_8239B938) {
	__imp__sub_8239B938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239B974) {
	__imp__sub_8239B974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// addi r7,r9,24448
	ctx.r7.s64 = ctx.r9.s64 + 24448;
	// ori r6,r8,41412
	ctx.r6.u64 = ctx.r8.u64 | 41412;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addis r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -65536;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239B978) {
	__imp__sub_8239B978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8239B9B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r26,r6,24
	ctx.r26.u64 = ctx.r6.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stb r27,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r27.u8);
	// sth r25,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r25.u16);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x8239BA08;
	sub_823B7AC8(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r26.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r27,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r27.u8);
	// sth r25,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r25.u16);
	// bl 0x823b7ac8
	ctx.lr = 0x8239BA28;
	sub_823B7AC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823b7ac8
	ctx.lr = 0x8239BA34;
	sub_823B7AC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b7ac8
	ctx.lr = 0x8239BA40;
	sub_823B7AC8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8239ba88
	if (!ctx.cr6.eq) goto loc_8239BA88;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// sth r29,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r29.u16);
	// addi r9,r11,-24656
	ctx.r9.s64 = ctx.r11.s64 + -24656;
	// sth r31,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r31.u16);
	// lfs f0,168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x821a1158
	ctx.lr = 0x8239BA78;
	sub_821A1158(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823b7ac8
	ctx.lr = 0x8239BA88;
	sub_823B7AC8(ctx, base);
loc_8239BA88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239B9A8) {
	__imp__sub_8239B9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239BA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8239BA98;
	__savegprlr_23(ctx, base);
	// stwu r1,-3360(r1)
	ea = -3360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8239BAB8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8239bab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BAB8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8239a800
	ctx.lr = 0x8239BADC;
	sub_8239A800(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// addi r25,r10,-24656
	ctx.r25.s64 = ctx.r10.s64 + -24656;
	// addi r29,r11,17280
	ctx.r29.s64 = ctx.r11.s64 + 17280;
loc_8239BAF4:
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8239bb60
	if (!ctx.cr6.lt) goto loc_8239BB60;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239BB08:
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// andc r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// bl 0x8239b9a8
	ctx.lr = 0x8239BB2C;
	sub_8239B9A8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r31,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// ori r8,r10,35776
	ctx.r8.u64 = ctx.r10.u64 | 35776;
	// rlwinm r7,r31,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r10,r25,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// blt cr6,0x8239bb08
	if (ctx.cr6.lt) goto loc_8239BB08;
loc_8239BB60:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r28,1024
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1024, ctx.xer);
	// blt cr6,0x8239baf4
	if (ctx.cr6.lt) goto loc_8239BAF4;
	// addi r1,r1,3360
	ctx.r1.s64 = ctx.r1.s64 + 3360;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239BA90) {
	__imp__sub_8239BA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239BB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8239BB80;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// bl 0x8239b9a8
	ctx.lr = 0x8239BBC0;
	sub_8239B9A8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r21,r11,-24656
	ctx.r21.s64 = ctx.r11.s64 + -24656;
	// ori r8,r10,35776
	ctx.r8.u64 = ctx.r10.u64 | 35776;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r6,r31,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r5,r7,17280
	ctx.r5.s64 = ctx.r7.s64 + 17280;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r11,r21,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r8.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// beq cr6,0x8239bc14
	if (ctx.cr6.eq) goto loc_8239BC14;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8239BC04:
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239bc04
	if (!ctx.cr6.eq) goto loc_8239BC04;
loc_8239BC14:
	// lwz r18,356(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8239bc64
	if (!ctx.cr6.eq) goto loc_8239BC64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239ba90
	ctx.lr = 0x8239BC38;
	sub_8239BA90(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239be3c
	if (ctx.cr6.eq) goto loc_8239BE3C;
	// li r19,0
	ctx.r19.s64 = 0;
loc_8239BC48:
	// stb r19,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r19.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239bc48
	if (!ctx.cr6.eq) goto loc_8239BC48;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8239BC64:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// add r20,r11,r10
	ctx.r20.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,24(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8239be20
	if (!ctx.cr6.gt) goto loc_8239BE20;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f31,-30660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30660);
	ctx.f31.f64 = double(temp.f32);
loc_8239BCAC:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r31,r22,r11
	ctx.r31.u64 = ctx.r22.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a540
	ctx.lr = 0x8239BCC4;
	sub_8239A540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239be0c
	if (!ctx.cr6.eq) goto loc_8239BE0C;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lfs f0,176(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,172(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,180(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,168(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f13,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f8,f12,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f7,f11,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// ble cr6,0x8239bda8
	if (!ctx.cr6.gt) goto loc_8239BDA8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r15,34(r31)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r14,28(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d49e0
	ctx.lr = 0x8239BD24;
	sub_822D49E0(ctx, base);
	// addi r7,r21,168
	ctx.r7.s64 = ctx.r21.s64 + 168;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d87c0
	ctx.lr = 0x8239BD3C;
	sub_822D87C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239be0c
	if (ctx.cr6.eq) goto loc_8239BE0C;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
	// bge cr6,0x8239be0c
	if (!ctx.cr6.lt) goto loc_8239BE0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bl 0x8239bb78
	ctx.lr = 0x8239BDA4;
	sub_8239BB78(ctx, base);
	// b 0x8239be0c
	goto loc_8239BE0C;
loc_8239BDA8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a6d8
	ctx.lr = 0x8239BDBC;
	sub_8239A6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239be0c
	if (ctx.cr6.eq) goto loc_8239BE0C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239bde8
	if (!ctx.cr6.eq) goto loc_8239BDE8;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r16,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r16.u8);
	// bl 0x8239a208
	ctx.lr = 0x8239BDE4;
	sub_8239A208(ctx, base);
	// b 0x8239be0c
	goto loc_8239BE0C;
loc_8239BDE8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x8239bdf8
	if (ctx.cr6.lt) goto loc_8239BDF8;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8239BDF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8239be0c
	if (ctx.cr6.eq) goto loc_8239BE0C;
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
loc_8239BE0C:
	// lwz r11,24(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r22,r22,60
	ctx.r22.s64 = ctx.r22.s64 + 60;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239bcac
	if (ctx.cr6.lt) goto loc_8239BCAC;
loc_8239BE20:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239be3c
	if (ctx.cr6.eq) goto loc_8239BE3C;
loc_8239BE2C:
	// stb r19,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r19.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239be2c
	if (!ctx.cr6.eq) goto loc_8239BE2C;
loc_8239BE3C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239BB78) {
	__imp__sub_8239BB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239BE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8239BE50;
	__savegprlr_21(ctx, base);
	// stwu r1,-3536(r1)
	ea = -3536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822db808
	ctx.lr = 0x8239BE70;
	sub_822DB808(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db8f0
	ctx.lr = 0x8239BE78;
	sub_822DB8F0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8239BE8C:
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bdnz 0x8239be8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BE8C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// ori r9,r10,65024
	ctx.r9.u64 = ctx.r10.u64 | 65024;
	// addi r28,r11,-24656
	ctx.r28.s64 = ctx.r11.s64 + -24656;
	// addi r11,r1,1392
	ctx.r11.s64 = ctx.r1.s64 + 1392;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// stwx r25,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r25,188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 188, ctx.r25.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239bb78
	ctx.lr = 0x8239BEF0;
	sub_8239BB78(ctx, base);
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239c258
	if (ctx.cr6.eq) goto loc_8239C258;
	// lis r24,-31780
	ctx.r24.s64 = -2082734080;
	// lis r22,-31780
	ctx.r22.s64 = -2082734080;
loc_8239BF08:
	// bl 0x8239a2f0
	ctx.lr = 0x8239BF0C;
	sub_8239A2F0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d3368
	ctx.lr = 0x8239BF20;
	sub_822D3368(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r11.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// beq cr6,0x8239c20c
	if (ctx.cr6.eq) goto loc_8239C20C;
	// lwz r11,12740(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12740);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8239c228
	if (ctx.cr6.eq) goto loc_8239C228;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// blt cr6,0x8239c0d4
	if (ctx.cr6.lt) goto loc_8239C0D4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,632
	ctx.r8.s64 = ctx.r1.s64 + 632;
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-12
	ctx.r11.s64 = ctx.r8.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239BFC0:
	// lfs f5,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f5,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f3,f10,f5,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f2,f9,f5,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f1,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f7,f1,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f1,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f2,f11,f3,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f1,f10,f3,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f5,f9,f3,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f8,f4,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f7,f4,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f6,f4,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f3.f64));
	// lfs f1,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmadds f5,f11,f1,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f4,f10,f1,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f4,32(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmadds f3,f9,f1,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f3,36(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f2,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f8,f2,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f7,f2,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f6,f2,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f4,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmadds f3,f11,f4,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmadds f2,f10,f4,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmadds f1,f9,f4,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfsu f5,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f8,f5,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f7,f5,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f5,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfsu f3,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239bfc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239BFC0;
loc_8239C0D4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8239c16c
	if (!ctx.cr6.lt) goto loc_8239C16C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f10,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// subf r6,r10,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,632
	ctx.r8.s64 = ctx.r1.s64 + 632;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r9,-12
	ctx.r11.s64 = ctx.r9.s64 + -12;
loc_8239C124:
	// lfs f4,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f10,f4,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f2,f9,f4,f13
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f1,f8,f4,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsu f11,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// fmadds f3,f7,f11,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f6,f11,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f11,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfsu f3,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239c124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C124;
loc_8239C16C:
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// ble cr6,0x8239c1a4
	if (!ctx.cr6.gt) goto loc_8239C1A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b7e40
	ctx.lr = 0x8239C180;
	sub_823B7E40(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823b7e40
	ctx.lr = 0x8239C188;
	sub_823B7E40(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823b7e40
	ctx.lr = 0x8239C190;
	sub_823B7E40(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823b7e40
	ctx.lr = 0x8239C198;
	sub_823B7E40(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823b7e40
	ctx.lr = 0x8239C1A0;
	sub_823B7E40(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8239C1A4:
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r28,204
	ctx.r11.s64 = ctx.r28.s64 + 204;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82396670
	ctx.lr = 0x8239C1C4;
	sub_82396670(ctx, base);
	// lwz r10,12592(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12592);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8239c1e4
	if (!ctx.cr6.lt) goto loc_8239C1E4;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_8239C1E4:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8239bb78
	ctx.lr = 0x8239C20C;
	sub_8239BB78(ctx, base);
loc_8239C20C:
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239bf08
	if (!ctx.cr6.eq) goto loc_8239BF08;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db8d8
	ctx.lr = 0x8239C220;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,3536
	ctx.r1.s64 = ctx.r1.s64 + 3536;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8239C228:
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239c258
	if (ctx.cr6.eq) goto loc_8239C258;
loc_8239C234:
	// bl 0x8239a2f0
	ctx.lr = 0x8239C238;
	sub_8239A2F0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r11.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239c234
	if (!ctx.cr6.eq) goto loc_8239C234;
loc_8239C258:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822db8d8
	ctx.lr = 0x8239C260;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,3536
	ctx.r1.s64 = ctx.r1.s64 + 3536;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239BE48) {
	__imp__sub_8239BE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f0,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// lfs f13,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,268
	ctx.r10.s64 = ctx.r3.s64 + 268;
	// stfs f13,172(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f12,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r9.u32);
	// stfs f11,180(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r9,12640(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12640);
	// stfs f12,176(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f11,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,128(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f11,f13,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,132(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lfs f10,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f9,6020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6020);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// fsubs f11,f9,f8
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f8,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,136(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f11,140(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// beq cr6,0x8239c300
	if (ctx.cr6.eq) goto loc_8239C300;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x8239c304
	goto loc_8239C304;
loc_8239C300:
	// lfs f9,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
loc_8239C304:
	// fcmpu cr6,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x8239c318
	if (ctx.cr6.gt) goto loc_8239C318;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// blr 
	return;
loc_8239C318:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,144(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,148(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fneg f0,f7
	ctx.f0.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fmadds f6,f10,f13,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// fmadds f5,f0,f12,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsubs f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C268) {
	__imp__sub_8239C268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C35C) {
	__imp__sub_8239C35C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8239C368;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// addi r23,r11,4608
	ctx.r23.s64 = ctx.r11.s64 + 4608;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r10,-24656
	ctx.r30.s64 = ctx.r10.s64 + -24656;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12752(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12752);
	// lwz r28,8456(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,-32564
	ctx.r9.s64 = ctx.r8.s64 + -32564;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// mulli r11,r7,232
	ctx.r11.s64 = ctx.r7.s64 * 232;
	// lwz r25,52(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8239c568
	if (ctx.cr6.eq) goto loc_8239C568;
	// addi r11,r25,31
	ctx.r11.s64 = ctx.r25.s64 + 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r31,r11,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823de090
	ctx.lr = 0x8239C3E0;
	sub_823DE090(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r26,r11,17280
	ctx.r26.s64 = ctx.r11.s64 + 17280;
	// beq cr6,0x8239c46c
	if (ctx.cr6.eq) goto loc_8239C46C;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r10,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
loc_8239C400:
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// addi r8,r8,-29756
	ctx.r8.s64 = ctx.r8.s64 + -29756;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239c454
	if (ctx.cr6.eq) goto loc_8239C454;
	// lwz r11,504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8239c454
	if (ctx.cr6.eq) goto loc_8239C454;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_8239C43C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8239c43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C43C;
loc_8239C454:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r10,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// blt cr6,0x8239c400
	if (ctx.cr6.lt) goto loc_8239C400;
loc_8239C46C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239c630
	if (ctx.cr6.eq) goto loc_8239C630;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r31,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// lfs f31,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8239C490:
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239c540
	if (ctx.cr6.eq) goto loc_8239C540;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r5,r27,4
	ctx.r5.s64 = ctx.r27.s64 + 4;
	// lwz r7,228(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8239c52c
	if (!ctx.cr6.gt) goto loc_8239C52C;
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
loc_8239C4DC:
	// lfs f8,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f3,f0,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f3,f9,f6,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f1,f10,f8,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f8,f11,f4,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x8239c540
	if (!ctx.cr6.gt) goto loc_8239C540;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8239c4dc
	if (ctx.cr6.lt) goto loc_8239C4DC;
loc_8239C52C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239b9a8
	ctx.lr = 0x8239C53C;
	sub_8239B9A8(ctx, base);
	// lwz r28,8456(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
loc_8239C540:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r31,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// blt cr6,0x8239c490
	if (ctx.cr6.lt) goto loc_8239C490;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8239C568:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239c630
	if (ctx.cr6.eq) goto loc_8239C630;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8239C584:
	// lwz r7,228(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,76(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// ble cr6,0x8239c608
	if (!ctx.cr6.gt) goto loc_8239C608;
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
loc_8239C5B8:
	// lfs f8,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f3,f0,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f3,f6,f9,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f8,f10,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fmadds f8,f4,f11,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x8239c620
	if (!ctx.cr6.gt) goto loc_8239C620;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8239c5b8
	if (ctx.cr6.lt) goto loc_8239C5B8;
loc_8239C608:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239b9a8
	ctx.lr = 0x8239C61C;
	sub_8239B9A8(ctx, base);
	// lwz r28,8456(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
loc_8239C620:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8239c584
	if (ctx.cr6.lt) goto loc_8239C584;
loc_8239C630:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C360) {
	__imp__sub_8239C360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C63C) {
	__imp__sub_8239C63C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8239C648;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r28,r11,4608
	ctx.r28.s64 = ctx.r11.s64 + 4608;
	// addi r30,r10,-24656
	ctx.r30.s64 = ctx.r10.s64 + -24656;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,8456(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
	// addi r3,r11,-29756
	ctx.r3.s64 = ctx.r11.s64 + -29756;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x8239C684;
	sub_823DE090(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// ori r7,r8,35776
	ctx.r7.u64 = ctx.r8.u64 | 35776;
	// addi r11,r11,-29756
	ctx.r11.s64 = ctx.r11.s64 + -29756;
	// lwz r10,13044(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13044);
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// lbz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8239c7c4
	if (!ctx.cr6.eq) goto loc_8239C7C4;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-32564
	ctx.r10.s64 = ctx.r11.s64 + -32564;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82396d70
	ctx.lr = 0x8239C6CC;
	sub_82396D70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8239c758
	if (ctx.cr6.lt) goto loc_8239C758;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lwz r11,12680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12680);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239c740
	if (ctx.cr6.eq) goto loc_8239C740;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,228(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x8239b9a8
	ctx.lr = 0x8239C70C;
	sub_8239B9A8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// ori r8,r11,35776
	ctx.r8.u64 = ctx.r11.u64 | 35776;
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r7,r31,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r6,r9,17280
	ctx.r6.s64 = ctx.r9.s64 + 17280;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8239C740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,228(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// bl 0x8239be48
	ctx.lr = 0x8239C750;
	sub_8239BE48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8239C758:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239c7c4
	if (!ctx.cr6.gt) goto loc_8239C7C4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
loc_8239C774:
	// lwz r6,228(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239b9a8
	ctx.lr = 0x8239C78C;
	sub_8239B9A8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// ori r9,r11,35776
	ctx.r9.u64 = ctx.r11.u64 | 35776;
	// rlwinm r8,r31,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r8,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r11,8456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8239c774
	if (ctx.cr6.lt) goto loc_8239C774;
loc_8239C7C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C640) {
	__imp__sub_8239C640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C7CC) {
	__imp__sub_8239C7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8239C7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r31,r11,-24656
	ctx.r31.s64 = ctx.r11.s64 + -24656;
	// li r10,8
	ctx.r10.s64 = 8;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// addi r9,r9,-32564
	ctx.r9.s64 = ctx.r9.s64 + -32564;
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_8239C81C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8239c81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C81C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d6708
	ctx.lr = 0x8239C864;
	sub_822D6708(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239C874:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8239c874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239C874;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// addi r4,r11,-30856
	ctx.r4.s64 = ctx.r11.s64 + -30856;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82395e88
	ctx.lr = 0x8239C89C;
	sub_82395E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239c268
	ctx.lr = 0x8239C8A4;
	sub_8239C268(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r9,r10,35756
	ctx.r9.u64 = ctx.r10.u64 | 35756;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r28,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u32);
	// bl 0x82395838
	ctx.lr = 0x8239C8BC;
	sub_82395838(ctx, base);
	// stw r3,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239C7D0) {
	__imp__sub_8239C7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C8C8) {
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
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// addi r31,r3,256
	ctx.r31.s64 = ctx.r3.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,764(r9)
	PPC_STORE_U32(ctx.r9.u32 + 764, ctx.r11.u32);
	// bl 0x8239c640
	ctx.lr = 0x8239C8F8;
	sub_8239C640(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// addi r6,r8,-24656
	ctx.r6.s64 = ctx.r8.s64 + -24656;
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// lwz r10,-19420(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19420);
	// addi r9,r11,-32564
	ctx.r9.s64 = ctx.r11.s64 + -32564;
	// mulli r10,r10,696
	ctx.r10.s64 = ctx.r10.s64 * 696;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,164(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239c934
	if (ctx.cr6.eq) goto loc_8239C934;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x823d1af0
	ctx.lr = 0x8239C934;
	sub_823D1AF0(ctx, base);
loc_8239C934:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12860);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239c958
	if (ctx.cr6.eq) goto loc_8239C958;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r5,228(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239f010
	ctx.lr = 0x8239C958;
	sub_8239F010(ctx, base);
loc_8239C958:
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

PPC_WEAK_FUNC(sub_8239C8C8) {
	__imp__sub_8239C8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// stb r11,710(r9)
	PPC_STORE_U8(ctx.r9.u32 + 710, ctx.r11.u8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,716(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 716, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,720(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 720, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,724(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 724, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C970) {
	__imp__sub_8239C970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C99C) {
	__imp__sub_8239C99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// stb r11,710(r9)
	PPC_STORE_U8(ctx.r9.u32 + 710, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C9A0) {
	__imp__sub_8239C9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C9B4) {
	__imp__sub_8239C9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,711(r9)
	PPC_STORE_U8(ctx.r9.u32 + 711, ctx.r11.u8);
	// stb r10,712(r9)
	PPC_STORE_U8(ctx.r9.u32 + 712, ctx.r10.u8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,728(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 728, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,732(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 732, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,736(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 736, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C9B8) {
	__imp__sub_8239C9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239C9EC) {
	__imp__sub_8239C9EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,711(r9)
	PPC_STORE_U8(ctx.r9.u32 + 711, ctx.r11.u8);
	// stb r10,712(r9)
	PPC_STORE_U8(ctx.r9.u32 + 712, ctx.r10.u8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,728(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 728, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,732(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 732, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,736(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 736, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,740(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 740, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,744(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 744, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 752, ctx.r5.u32);
	// stfs f0,748(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 748, temp.u32);
	// stw r6,756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 756, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239C9F0) {
	__imp__sub_8239C9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CA44) {
	__imp__sub_8239CA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// stb r11,711(r9)
	PPC_STORE_U8(ctx.r9.u32 + 711, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CA48) {
	__imp__sub_8239CA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CA5C) {
	__imp__sub_8239CA5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,18(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CA60) {
	__imp__sub_8239CA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r3,544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// b 0x823b9d60
	sub_823B9D60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239CA68) {
	__imp__sub_8239CA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CA7C) {
	__imp__sub_8239CA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CA80) {
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
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82177148
	ctx.lr = 0x8239CA98;
	sub_82177148(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// stw r3,8456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8456, ctx.r3.u32);
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8320, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CA80) {
	__imp__sub_8239CA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CAC0) {
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
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82177148
	ctx.lr = 0x8239CAD8;
	sub_82177148(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// stw r3,8456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8456, ctx.r3.u32);
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8320, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CAC0) {
	__imp__sub_8239CAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8239CB08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823a1fa0
	ctx.lr = 0x8239CB18;
	sub_823A1FA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82177148
	ctx.lr = 0x8239CB24;
	sub_82177148(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// stw r3,8456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8456, ctx.r3.u32);
	// lwsync 
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// addi r9,r3,544
	ctx.r9.s64 = ctx.r3.s64 + 544;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,14492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14492, ctx.r10.u32);
	// stw r9,13412(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13412, ctx.r9.u32);
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// stw r11,8320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8320, ctx.r11.u32);
	// lis r4,-31799
	ctx.r4.s64 = -2083979264;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r30,-31799
	ctx.r30.s64 = -2083979264;
	// stw r11,4568(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4568, ctx.r11.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4576(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4576, ctx.r11.u32);
	// addi r9,r31,436
	ctx.r9.s64 = ctx.r31.s64 + 436;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r3,-31777
	ctx.r3.s64 = -2082537472;
	// stw r11,14480(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14480, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,3216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3216, ctx.r10.u32);
	// addi r3,r3,-19840
	ctx.r3.s64 = ctx.r3.s64 + -19840;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8239CBA4;
	sub_823DE1F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239cbb4
	if (ctx.cr6.eq) goto loc_8239CBB4;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8239CBB4:
	// bl 0x823cd710
	ctx.lr = 0x8239CBB8;
	sub_823CD710(ctx, base);
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// lwz r3,544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// bl 0x823b9d60
	ctx.lr = 0x8239CBC4;
	sub_823B9D60(ctx, base);
	// bl 0x82141398
	ctx.lr = 0x8239CBC8;
	sub_82141398(ctx, base);
	// bl 0x823b98b8
	ctx.lr = 0x8239CBCC;
	sub_823B98B8(ctx, base);
	// bl 0x823a1e98
	ctx.lr = 0x8239CBD0;
	sub_823A1E98(ctx, base);
	// bl 0x823b9a18
	ctx.lr = 0x8239CBD4;
	sub_823B9A18(ctx, base);
	// bl 0x823ad988
	ctx.lr = 0x8239CBD8;
	sub_823AD988(ctx, base);
	// bl 0x8239b2e0
	ctx.lr = 0x8239CBDC;
	sub_8239B2E0(ctx, base);
	// bl 0x8239af10
	ctx.lr = 0x8239CBE0;
	sub_8239AF10(ctx, base);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8239cc34
	if (!ctx.cr6.gt) goto loc_8239CC34;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8239CC00:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8239CC18;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,52
	ctx.r25.s64 = ctx.r25.s64 + 52;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239cc00
	if (ctx.cr6.lt) goto loc_8239CC00;
loc_8239CC34:
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239ccac
	if (!ctx.cr6.gt) goto loc_8239CCAC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8239CC58:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8239CC70;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8239CC90;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8239cc58
	if (ctx.cr6.lt) goto loc_8239CC58;
loc_8239CCAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239CB00) {
	__imp__sub_8239CB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CCB4) {
	__imp__sub_8239CCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CCB8) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,280
	ctx.r5.s64 = 280;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x823de090
	ctx.lr = 0x8239CCE0;
	sub_823DE090(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
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

PPC_WEAK_FUNC(sub_8239CCB8) {
	__imp__sub_8239CCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// rlwimi r5,r6,8,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r4,r6,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r7,r3,13536
	ctx.r7.s64 = ctx.r3.s64 + 13536;
	// rlwimi r10,r5,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r10,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r10,r6,255
	ctx.r10.u64 = ctx.r6.u64 | 255;
	// ori r8,r5,255
	ctx.r8.u64 = ctx.r5.u64 | 255;
	// stfs f1,440(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 440, temp.u32);
	// stfs f2,444(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 444, temp.u32);
	// stw r10,436(r7)
	PPC_STORE_U32(ctx.r7.u32 + 436, ctx.r10.u32);
	// stfs f3,448(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 448, temp.u32);
	// stb r9,452(r7)
	PPC_STORE_U8(ctx.r7.u32 + 452, ctx.r9.u8);
	// stw r8,456(r7)
	PPC_STORE_U32(ctx.r7.u32 + 456, ctx.r8.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 460, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,464(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 468, temp.u32);
	// stfs f4,472(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 472, temp.u32);
	// stfs f5,476(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 476, temp.u32);
	// stfs f6,480(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 480, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CD08) {
	__imp__sub_8239CD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CD84) {
	__imp__sub_8239CD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8239CD90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// li r5,56
	ctx.r5.s64 = 56;
	// lfs f0,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// beq cr6,0x8239cdd4
	if (ctx.cr6.eq) goto loc_8239CDD4;
	// addi r4,r31,484
	ctx.r4.s64 = ctx.r31.s64 + 484;
	// bl 0x823de1f0
	ctx.lr = 0x8239CDD0;
	sub_823DE1F0(ctx, base);
	// b 0x8239cde8
	goto loc_8239CDE8;
loc_8239CDD4:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8239CDE4;
	sub_823DE1F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8239CDE8:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x823de1f0
	ctx.lr = 0x8239CE00;
	sub_823DE1F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8239ce20
	if (!ctx.cr6.eq) goto loc_8239CE20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8239CE20:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r28,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r28.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239CD88) {
	__imp__sub_8239CD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CE34) {
	__imp__sub_8239CE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CE38) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239CE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,652
	ctx.r5.s64 = ctx.r31.s64 + 652;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239CE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

PPC_WEAK_FUNC(sub_8239CE38) {
	__imp__sub_8239CE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239CE9C) {
	__imp__sub_8239CE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blt cr6,0x8239cec8
	if (ctx.cr6.lt) goto loc_8239CEC8;
loc_8239CEC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8239CEC8:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239d02c
	if (ctx.cr6.eq) goto loc_8239D02C;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8239CFE4:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fmadds f4,f9,f0,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f3,f8,f12,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsubs f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fabs f11,f2
	ctx.f11.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f5
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// bge cr6,0x8239cec0
	if (!ctx.cr6.lt) goto loc_8239CEC0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8239cfe4
	if (ctx.cr6.lt) goto loc_8239CFE4;
loc_8239D02C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239CEA0) {
	__imp__sub_8239CEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D034) {
	__imp__sub_8239D034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239D040;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8239d068
	if (!ctx.cr6.eq) goto loc_8239D068;
loc_8239D058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8239D068:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8239d0d4
	if (ctx.cr6.eq) goto loc_8239D0D4;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8239D0A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239cea0
	ctx.lr = 0x8239D0B8;
	sub_8239CEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239d058
	if (ctx.cr6.eq) goto loc_8239D058;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8239d0a8
	if (ctx.cr6.lt) goto loc_8239D0A8;
loc_8239D0D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239D038) {
	__imp__sub_8239D038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D0E4) {
	__imp__sub_8239D0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f5,f5
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f0,f9,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f13,f4,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x8239d140
	if (ctx.cr6.lt) goto loc_8239D140;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8239D140:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239d170
	if (!ctx.cr6.eq) goto loc_8239D170;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8239d170
	if (ctx.cr6.lt) goto loc_8239D170;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822d9e88
	sub_822D9E88(ctx, base);
	return;
loc_8239D170:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D0E8) {
	__imp__sub_8239D0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f10,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lfs f9,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f7,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r9,-5900
	ctx.r7.s64 = ctx.r9.s64 + -5900;
	// lwz r11,12968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12968);
	// lfs f8,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,12964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12964);
	// lfs f5,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f10,f1,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-5900(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5900);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f8,f1,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f4.f64));
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f12,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsubs f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmadds f3,f31,f0,f1
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f2,f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f1,f7,f10,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f0,f4,f10,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f13,f30,f13,f3
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmuls f10,f2,f2
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f8,f1,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fdivs f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f5.f64));
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D178) {
	__imp__sub_8239D178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D254) {
	__imp__sub_8239D254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,24244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24244);
	ctx.f0.f64 = double(temp.f32);
	// addis r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 524288;
	// lfs f13,5576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5576);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,28304
	ctx.r7.s64 = ctx.r7.s64 + 28304;
	// lfs f12,5580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5580);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5584);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bgt cr6,0x8239d2ac
	if (ctx.cr6.gt) goto loc_8239D2AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239D2AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D258) {
	__imp__sub_8239D258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D2B4) {
	__imp__sub_8239D2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8239D2C0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d338
	if (ctx.cr6.eq) goto loc_8239D338;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r28,r11,4608
	ctx.r28.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239d34c
	if (ctx.cr6.gt) goto loc_8239D34C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8239d258
	ctx.lr = 0x8239D300;
	sub_8239D258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239d338
	if (ctx.cr6.eq) goto loc_8239D338;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,5408
	ctx.r11.s64 = ctx.r11.s64 + 5408;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8239D338:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8239D34C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r31,8634
	ctx.r10.s64 = ctx.r31.s64 + 8634;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239d338
	if (ctx.cr6.eq) goto loc_8239D338;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12612);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239d338
	if (ctx.cr6.eq) goto loc_8239D338;
	// bl 0x8239d178
	ctx.lr = 0x8239D384;
	sub_8239D178(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,12816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12816);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8239d338
	if (ctx.cr6.lt) goto loc_8239D338;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12596);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239d434
	if (ctx.cr6.eq) goto loc_8239D434;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-11984
	ctx.r11.s64 = ctx.r11.s64 + -11984;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239d434
	if (!ctx.cr6.lt) goto loc_8239D434;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mulli r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 * 68;
	// lwz r11,13000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13000);
	// lfs f0,20480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239d0e8
	ctx.lr = 0x8239D3FC;
	sub_8239D0E8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8239d338
	if (!ctx.cr6.eq) goto loc_8239D338;
	// lwz r11,8456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8456);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8239d038
	ctx.lr = 0x8239D428;
	sub_8239D038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239d338
	if (!ctx.cr6.eq) goto loc_8239D338;
loc_8239D434:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8239d468
	if (ctx.cr6.eq) goto loc_8239D468;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8239D44C:
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8239d468
	if (!ctx.cr6.gt) goto loc_8239D468;
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stdu r9,-8(r11)
	ea = -8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bne 0x8239d44c
	if (!ctx.cr0.eq) goto loc_8239D44C;
loc_8239D468:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// stfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,12656(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12656);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8239d494
	if (!ctx.cr6.lt) goto loc_8239D494;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8239D494:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12616);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8239d4ac
	if (ctx.cr6.lt) goto loc_8239D4AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8239D4AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239D2B8) {
	__imp__sub_8239D2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D4C0) {
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
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239d544
	if (!ctx.cr6.lt) goto loc_8239D544;
	// lis r30,-31799
	ctx.r30.s64 = -2083979264;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r9,r11,28289
	ctx.r9.u64 = ctx.r11.u64 | 28289;
	// lwz r11,14592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14592);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239d544
	if (ctx.cr6.eq) goto loc_8239D544;
	// addi r10,r4,8634
	ctx.r10.s64 = ctx.r4.s64 + 8634;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823c5e48
	ctx.lr = 0x8239D51C;
	sub_823C5E48(ctx, base);
	// lwz r11,14592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14592);
	// srawi r9,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 5;
	// addi r11,r11,5408
	ctx.r11.s64 = ctx.r11.s64 + 5408;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
loc_8239D544:
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

PPC_WEAK_FUNC(sub_8239D4C0) {
	__imp__sub_8239D4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239D55C) {
	__imp__sub_8239D55C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239d5a0
	if (ctx.cr6.eq) goto loc_8239D5A0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
loc_8239D580:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8239d6b8
	if (ctx.cr6.eq) goto loc_8239D6B8;
	// lwz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8239d580
	if (!ctx.cr6.eq) goto loc_8239D580;
loc_8239D5A0:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12656);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239d6ac
	if (!ctx.cr6.lt) goto loc_8239D6AC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12616);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239d6ac
	if (!ctx.cr6.lt) goto loc_8239D6AC;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfsx f1,r6,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r4,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r4.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r7,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r7.u8);
	// slw r4,r5,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r6,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8239d624
	if (!ctx.cr6.eq) goto loc_8239D624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
loc_8239D624:
	// stfs f2,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
loc_8239D634:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239d6ac
	if (ctx.cr6.eq) goto loc_8239D6AC;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8239D650:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8239d6ac
	if (!ctx.cr6.gt) goto loc_8239D6AC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// bne 0x8239d650
	if (!ctx.cr0.eq) goto loc_8239D650;
loc_8239D6AC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239D6B8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,12168(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stb r7,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r7.u8);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfsx f1,r9,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f10,40(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x8239d634
	goto loc_8239D634;
}

PPC_WEAK_FUNC(sub_8239D560) {
	__imp__sub_8239D560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// addi r8,r4,40
	ctx.r8.s64 = ctx.r4.s64 + 40;
	// addi r7,r4,21
	ctx.r7.s64 = ctx.r4.s64 + 21;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
loc_8239D728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239d794
	if (ctx.cr6.eq) goto loc_8239D794;
	// lbz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239d76c
	if (!ctx.cr6.eq) goto loc_8239D76C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r5,12(r7)
	ea = 12 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r7.u32 = ea;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8239d7c8
	goto loc_8239D7C8;
loc_8239D76C:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8239d794
	if (ctx.cr6.lt) goto loc_8239D794;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8239d7c8
	goto loc_8239D7C8;
loc_8239D794:
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8239D7C8:
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8239d728
	if (!ctx.cr6.eq) goto loc_8239D728;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D700) {
	__imp__sub_8239D700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// addi r11,r11,11984
	ctx.r11.s64 = ctx.r11.s64 + 11984;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239D7D8) {
	__imp__sub_8239D7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D800) {
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
	// lwz r31,432(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r31,8634
	ctx.r9.s64 = ctx.r31.s64 + 8634;
	// stw r10,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r10.u32);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8239D838;
	sub_823DE1F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8239D800) {
	__imp__sub_8239D800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subfc r8,r9,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239D850) {
	__imp__sub_8239D850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239D870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8239D878;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31799
	ctx.r24.s64 = -2083979264;
	// lwz r11,384(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 384);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r10,r10,11984
	ctx.r10.s64 = ctx.r10.s64 + 11984;
	// lwz r29,14592(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
	// lwz r9,5388(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5388);
	// mulli r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 * 88;
	// add r23,r9,r10
	ctx.r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,84(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// subf. r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8239d9b4
	if (!ctx.cr0.eq) goto loc_8239D9B4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r8,r11,4608
	ctx.r8.s64 = ctx.r11.s64 + 4608;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,8456(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8239db18
	if (ctx.cr6.lt) goto loc_8239DB18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// li r7,64
	ctx.r7.s64 = 64;
	// ori r6,r6,28304
	ctx.r6.u64 = ctx.r6.u64 | 28304;
	// lfs f0,24244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24244);
	ctx.f0.f64 = double(temp.f32);
loc_8239D8E4:
	// lbz r11,430(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 430);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239d910
	if (!ctx.cr6.eq) goto loc_8239D910;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r4,r26,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// and r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8239d91c
	if (!ctx.cr6.eq) goto loc_8239D91C;
loc_8239D910:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8239d920
	if (!ctx.cr6.eq) goto loc_8239D920;
loc_8239D91C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8239D920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239d99c
	if (ctx.cr6.eq) goto loc_8239D99C;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f13,5576(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5580(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5580);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f11,5584(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5584);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f7,f11,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bgt cr6,0x8239d968
	if (ctx.cr6.gt) goto loc_8239D968;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239D968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239d99c
	if (ctx.cr6.eq) goto loc_8239D99C;
	// srawi r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// addi r11,r29,5408
	ctx.r11.s64 = ctx.r29.s64 + 5408;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r9,27
	ctx.r5.u64 = ctx.r9.u32 & 0x1F;
	// slw r4,r26,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r29,14592(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
	// lwz r10,8456(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
loc_8239D99C:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8239d8e4
	if (!ctx.cr6.gt) goto loc_8239D8E4;
	// b 0x8239db18
	goto loc_8239DB18;
loc_8239D9B4:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,12632(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12632);
	// lfs f0,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f31,f11,f9
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239d700
	ctx.lr = 0x8239D9F4;
	sub_8239D700(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8239DA04:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239da04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239DA04;
	// lwz r11,432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239dacc
	if (ctx.cr6.eq) goto loc_8239DACC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,4608
	ctx.r27.s64 = ctx.r11.s64 + 4608;
loc_8239DA40:
	// lbz r10,430(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 430);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239da80
	if (ctx.cr6.eq) goto loc_8239DA80;
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// slw. r11,r26,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239da80
	if (ctx.cr0.eq) goto loc_8239DA80;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8239da7c
	if (!ctx.cr6.eq) goto loc_8239DA7C;
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
	// b 0x8239da80
	goto loc_8239DA80;
loc_8239DA7C:
	// andc r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r11.u64;
loc_8239DA80:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8239dab8
	if (ctx.cr6.eq) goto loc_8239DAB8;
loc_8239DA8C:
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// andc r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// bl 0x8239d2b8
	ctx.lr = 0x8239DAA8;
	sub_8239D2B8(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8239da8c
	if (!ctx.cr6.eq) goto loc_8239DA8C;
loc_8239DAB8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x8239da40
	if (!ctx.cr0.eq) goto loc_8239DA40;
	// lwz r29,14592(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
loc_8239DACC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8239dafc
	if (ctx.cr6.eq) goto loc_8239DAFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_8239DAE0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfsu f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8239d560
	ctx.lr = 0x8239DAF4;
	sub_8239D560(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8239dae0
	if (!ctx.cr0.eq) goto loc_8239DAE0;
loc_8239DAFC:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239DB0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8239db0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239DB0C;
loc_8239DB18:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239db60
	if (ctx.cr6.eq) goto loc_8239DB60;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239db60
	if (!ctx.cr6.eq) goto loc_8239DB60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393f70
	ctx.lr = 0x8239DB48;
	sub_82393F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,14592(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239db60
	if (!ctx.cr6.eq) goto loc_8239DB60;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r26.u32);
loc_8239DB60:
	// lwz r11,80(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8239dbf8
	if (!ctx.cr6.gt) goto loc_8239DBF8;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// addi r30,r23,40
	ctx.r30.s64 = ctx.r23.s64 + 40;
	// ori r27,r11,28289
	ctx.r27.u64 = ctx.r11.u64 | 28289;
loc_8239DB7C:
	// lbz r31,-8(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// lwz r10,432(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239dbe4
	if (!ctx.cr6.lt) goto loc_8239DBE4;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239dbe4
	if (ctx.cr6.eq) goto loc_8239DBE4;
	// addi r11,r31,8634
	ctx.r11.s64 = ctx.r31.s64 + 8634;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823c5e48
	ctx.lr = 0x8239DBBC;
	sub_823C5E48(ctx, base);
	// lwz r11,14592(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addi r11,r11,5408
	ctx.r11.s64 = ctx.r11.s64 + 5408;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r29,14592(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14592);
loc_8239DBE4:
	// lwz r11,80(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239db7c
	if (ctx.cr6.lt) goto loc_8239DB7C;
loc_8239DBF8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239D870) {
	__imp__sub_8239D870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239DC04) {
	__imp__sub_8239DC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,13312
	ctx.r8.s64 = ctx.r10.s64 + 13312;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mullw r3,r6,r4
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239DC08) {
	__imp__sub_8239DC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239DC48) {
	__imp__sub_8239DC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239DC74) {
	__imp__sub_8239DC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8239DC80;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r22,r11,4608
	ctx.r22.s64 = ctx.r11.s64 + 4608;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r9,8456(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8239de08
	if (!ctx.cr6.lt) goto loc_8239DE08;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r28,r29,68
	ctx.r28.s64 = ctx.r29.s64 * 68;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r27,r11,-11984
	ctx.r27.s64 = ctx.r11.s64 + -11984;
	// addi r26,r10,13312
	ctx.r26.s64 = ctx.r10.s64 + 13312;
loc_8239DCDC:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// mullw r8,r8,r25
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r6,r8,r24
	ctx.r6.u64 = ctx.r8.u64 + ctx.r24.u64;
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f1,f8,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x8239dd74
	if (ctx.cr6.lt) goto loc_8239DD74;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// lwz r11,520(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8239ddf0
	goto loc_8239DDF0;
loc_8239DD74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239ddd0
	if (!ctx.cr6.eq) goto loc_8239DDD0;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x8239ddd0
	if (ctx.cr6.lt) goto loc_8239DDD0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822d9e88
	ctx.lr = 0x8239DD9C;
	sub_822D9E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239ddcc
	if (ctx.cr6.eq) goto loc_8239DDCC;
	// lwz r10,8456(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// b 0x8239ddec
	goto loc_8239DDEC;
loc_8239DDCC:
	// lwz r9,8456(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
loc_8239DDD0:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lwz r10,520(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_8239DDEC:
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8239DDF0:
	// lwz r9,8456(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8239dcdc
	if (ctx.cr6.lt) goto loc_8239DCDC;
loc_8239DE08:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239DC78) {
	__imp__sub_8239DC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239DE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8239DE20;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r20,r11,4608
	ctx.r20.s64 = ctx.r11.s64 + 4608;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,8456(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8239dff4
	if (!ctx.cr6.lt) goto loc_8239DFF4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r19,r27,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r26,r27,68
	ctx.r26.s64 = ctx.r27.s64 * 68;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r24,r11,-11984
	ctx.r24.s64 = ctx.r11.s64 + -11984;
	// addi r23,r10,13312
	ctx.r23.s64 = ctx.r10.s64 + 13312;
loc_8239DE78:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// fabs f13,f5
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// add r28,r10,r27
	ctx.r28.u64 = ctx.r10.u64 + ctx.r27.u64;
	// fsel f5,f8,f8,f31
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f31.f64;
	// fsel f4,f7,f7,f31
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f31.f64;
	// fsel f3,f6,f6,f31
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f31.f64;
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f0,f4,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f13,f3,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x8239df38
	if (ctx.cr6.lt) goto loc_8239DF38;
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// clrlwi r9,r28,27
	ctx.r9.u64 = ctx.r28.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// b 0x8239dfd4
	goto loc_8239DFD4;
loc_8239DF38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239df94
	if (!ctx.cr6.eq) goto loc_8239DF94;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8239df94
	if (ctx.cr6.lt) goto loc_8239DF94;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9a88
	ctx.lr = 0x8239DF60;
	sub_822D9A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239df90
	if (ctx.cr6.eq) goto loc_8239DF90;
	// lwz r11,8456(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// clrlwi r9,r28,27
	ctx.r9.u64 = ctx.r28.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// b 0x8239dfd4
	goto loc_8239DFD4;
loc_8239DF90:
	// lwz r29,8456(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
loc_8239DF94:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82386040
	ctx.lr = 0x8239DFA8;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r28,27
	ctx.r9.u64 = ctx.r28.u32 & 0x1F;
	// slw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// bne cr6,0x8239dfd4
	if (!ctx.cr6.eq) goto loc_8239DFD4;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_8239DFD4:
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r29,8456(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8456);
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8239de78
	if (ctx.cr6.lt) goto loc_8239DE78;
loc_8239DFF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239DE18) {
	__imp__sub_8239DE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E000) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r5,r11,4608
	ctx.r5.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8239e08c
	if (!ctx.cr6.lt) goto loc_8239E08C;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r8,13312
	ctx.r31.s64 = ctx.r8.s64 + 13312;
loc_8239E034:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,520(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r11,r6,r3
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r30,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// andc r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r11,8456(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8456);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239e034
	if (ctx.cr6.lt) goto loc_8239E034;
loc_8239E08C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E000) {
	__imp__sub_8239E000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r6,r11,4608
	ctx.r6.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r8,r4,131
	ctx.r8.s64 = ctx.r4.s64 + 131;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239E0C4:
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mullw r7,r9,r3
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r4,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,8456(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239e0c4
	if (ctx.cr6.lt) goto loc_8239E0C4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E098) {
	__imp__sub_8239E098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E114) {
	__imp__sub_8239E114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,13312
	ctx.r8.s64 = ctx.r10.s64 + 13312;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r6,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 5;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r7,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E118) {
	__imp__sub_8239E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r4,131
	ctx.r10.s64 = ctx.r4.s64 + 131;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r3,r7,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
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

PPC_WEAK_FUNC(sub_8239E180) {
	__imp__sub_8239E180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E1DC) {
	__imp__sub_8239E1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r10,8456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239e200
	if (ctx.cr6.lt) goto loc_8239E200;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239E200:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwz r10,520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8239E1E0) {
	__imp__sub_8239E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r8,13312
	ctx.r7.s64 = ctx.r8.s64 + 13312;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r9,8456(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,5388(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r3,8736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mullw r7,r4,r8
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// beq cr6,0x8239e2d8
	if (ctx.cr6.eq) goto loc_8239E2D8;
	// addi r8,r11,9184
	ctx.r8.s64 = ctx.r11.s64 + 9184;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8239E290:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8239e2c8
	if (!ctx.cr6.lt) goto loc_8239E2C8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,520(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	// srawi r31,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8239e2e4
	if (!ctx.cr0.eq) goto loc_8239E2E4;
loc_8239E2C8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,464
	ctx.r8.s64 = ctx.r8.s64 + 464;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8239e290
	if (ctx.cr6.lt) goto loc_8239E290;
loc_8239E2D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239E2E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E230) {
	__imp__sub_8239E230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r10,8456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239e310
	if (ctx.cr6.lt) goto loc_8239E310;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8239E310:
	// addi r9,r4,131
	ctx.r9.s64 = ctx.r4.s64 + 131;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r11,r4,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E2F0) {
	__imp__sub_8239E2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r8,r11,4608
	ctx.r8.s64 = ctx.r11.s64 + 4608;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,14592(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r10,8456(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r31,8736(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8736);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r6,r11,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mullw r3,r6,r3
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// beq cr6,0x8239e3e4
	if (ctx.cr6.eq) goto loc_8239E3E4;
	// addi r9,r9,9184
	ctx.r9.s64 = ctx.r9.s64 + 9184;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8239E394:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8239e3d4
	if (!ctx.cr6.lt) goto loc_8239E3D4;
	// addi r3,r4,131
	ctx.r3.s64 = ctx.r4.s64 + 131;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r30,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8239e3f4
	if (!ctx.cr0.eq) goto loc_8239E3F4;
loc_8239E3D4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,464
	ctx.r9.s64 = ctx.r9.s64 + 464;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8239e394
	if (ctx.cr6.lt) goto loc_8239E394;
loc_8239E3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239E3F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8239E348) {
	__imp__sub_8239E348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E404) {
	__imp__sub_8239E404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8239E410;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r11,4608
	ctx.r25.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239e4ec
	if (!ctx.cr6.lt) goto loc_8239E4EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r26,r28,68
	ctx.r26.s64 = ctx.r28.s64 * 68;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r11,-11984
	ctx.r24.s64 = ctx.r11.s64 + -11984;
loc_8239E454:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239e490
	if (!ctx.cr6.eq) goto loc_8239E490;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8239e490
	if (ctx.cr6.lt) goto loc_8239E490;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9ce8
	ctx.lr = 0x8239E48C;
	sub_822D9CE8(ctx, base);
	// b 0x8239e4a4
	goto loc_8239E4A4;
loc_8239E490:
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9be8
	ctx.lr = 0x8239E4A4;
	sub_822D9BE8(ctx, base);
loc_8239E4A4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r30,8456(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239e4d4
	if (!ctx.cr6.eq) goto loc_8239E4D4;
	// lwz r11,540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82386040
	ctx.lr = 0x8239E4C8;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e4fc
	if (ctx.cr6.eq) goto loc_8239E4FC;
loc_8239E4D4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239e454
	if (ctx.cr6.lt) goto loc_8239E454;
loc_8239E4EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8239E4FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239E408) {
	__imp__sub_8239E408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E50C) {
	__imp__sub_8239E50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8239E518;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r11,4608
	ctx.r25.s64 = ctx.r11.s64 + 4608;
	// lwz r29,8456(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8239e63c
	if (!ctx.cr6.lt) goto loc_8239E63C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// rlwinm r26,r28,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r27,r28,68
	ctx.r27.s64 = ctx.r28.s64 * 68;
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r24,r11,-11984
	ctx.r24.s64 = ctx.r11.s64 + -11984;
loc_8239E564:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f1,f8,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x8239e5bc
	if (ctx.cr6.lt) goto loc_8239E5BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8239e5f4
	goto loc_8239E5F4;
loc_8239E5BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8239e5f0
	if (!ctx.cr6.eq) goto loc_8239E5F0;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x8239e5f0
	if (ctx.cr6.lt) goto loc_8239E5F0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9e88
	ctx.lr = 0x8239E5E8;
	sub_822D9E88(ctx, base);
	// lwz r29,8456(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// b 0x8239e5f4
	goto loc_8239E5F4;
loc_8239E5F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239E5F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239e624
	if (!ctx.cr6.eq) goto loc_8239E624;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x8239d038
	ctx.lr = 0x8239E618;
	sub_8239D038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e650
	if (ctx.cr6.eq) goto loc_8239E650;
loc_8239E624:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,68
	ctx.r27.s64 = ctx.r27.s64 + 68;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8239e564
	if (ctx.cr6.lt) goto loc_8239E564;
loc_8239E63C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8239E650:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239E510) {
	__imp__sub_8239E510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E664) {
	__imp__sub_8239E664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8239E670;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,4608
	ctx.r26.s64 = ctx.r11.s64 + 4608;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f31,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,8456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8239e830
	if (!ctx.cr6.lt) goto loc_8239E830;
	// addi r10,r4,131
	ctx.r10.s64 = ctx.r4.s64 + 131;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r24,r10,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// rlwinm r22,r28,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r25,r28,68
	ctx.r25.s64 = ctx.r28.s64 * 68;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r20,r10,-11984
	ctx.r20.s64 = ctx.r10.s64 + -11984;
loc_8239E6D8:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mullw r8,r9,r21
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// add r30,r10,r28
	ctx.r30.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bne cr6,0x8239e72c
	if (!ctx.cr6.eq) goto loc_8239E72C;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x8239e72c
	if (ctx.cr6.lt) goto loc_8239E72C;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9ce8
	ctx.lr = 0x8239E728;
	sub_822D9CE8(ctx, base);
	// b 0x8239e740
	goto loc_8239E740;
loc_8239E72C:
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9be8
	ctx.lr = 0x8239E740;
	sub_822D9BE8(ctx, base);
loc_8239E740:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e774
	if (ctx.cr6.eq) goto loc_8239E774;
	// lwz r11,8456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8239e814
	goto loc_8239E814;
loc_8239E774:
	// lwz r29,8456(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82386040
	ctx.lr = 0x8239E78C;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// beq cr6,0x8239e7bc
	if (ctx.cr6.eq) goto loc_8239E7BC;
	// srawi r10,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 5;
	// lwzx r11,r24,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8239e814
	goto loc_8239E814;
loc_8239E7BC:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lwzx r10,r24,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f4,f7,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f0,f5,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8239e814
	if (!ctx.cr6.lt) goto loc_8239E814;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8239E814:
	// lwz r11,8456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,68
	ctx.r25.s64 = ctx.r25.s64 + 68;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239e6d8
	if (ctx.cr6.lt) goto loc_8239E6D8;
loc_8239E830:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x8239e840
	if (!ctx.cr6.eq) goto loc_8239E840;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// stbx r18,r11,r21
	PPC_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r18.u8);
loc_8239E840:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239E668) {
	__imp__sub_8239E668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8239E858;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8239e8b4
	if (ctx.cr6.eq) goto loc_8239E8B4;
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9048
	ctx.lr = 0x8239E88C;
	sub_822D9048(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8239e8b4
	if (ctx.cr6.eq) goto loc_8239E8B4;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// b 0x8239e8bc
	goto loc_8239E8BC;
loc_8239E8B4:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
loc_8239E8BC:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e8d8
	if (ctx.cr6.eq) goto loc_8239E8D8;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8239e8e4
	goto loc_8239E8E4;
loc_8239E8D8:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
loc_8239E8E4:
	// lfs f9,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f6,f12,f9,f31
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f31.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8239E850) {
	__imp__sub_8239E850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239E90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239E90C) {
	__imp__sub_8239E90C(ctx, base);
}

