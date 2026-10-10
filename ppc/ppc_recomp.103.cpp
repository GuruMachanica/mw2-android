#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823D3A70) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwimi r10,r5,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3A70) {
	__imp__sub_823D3A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3AB4) {
	__imp__sub_823D3AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3AB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwimi r10,r5,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3AB8) {
	__imp__sub_823D3AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3AFC) {
	__imp__sub_823D3AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,1156
	ctx.r10.s64 = ctx.r11.s64 + 1156;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// rlwimi r10,r6,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r10.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3B00) {
	__imp__sub_823D3B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3B4C) {
	__imp__sub_823D3B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B50) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_823D3B50) {
	__imp__sub_823D3B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3B64) {
	__imp__sub_823D3B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B68) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_823D3B68) {
	__imp__sub_823D3B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3B7C) {
	__imp__sub_823D3B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-7352
	ctx.r4.s64 = ctx.r11.s64 + -7352;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3B80) {
	__imp__sub_823D3B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D3B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,5792
	ctx.r5.s64 = 5792;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x823D3BB4;
	sub_823DE090(ctx, base);
	// addi r3,r31,3584
	ctx.r3.s64 = ctx.r31.s64 + 3584;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823D3BC4;
	sub_823DE1F0(ctx, base);
	// li r10,75
	ctx.r10.s64 = 75;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r7,r11,-8704
	ctx.r7.s64 = ctx.r11.s64 + -8704;
	// lfs f13,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,5344
	ctx.r9.s64 = ctx.r31.s64 + 5344;
	// addi r11,r31,3592
	ctx.r11.s64 = ctx.r31.s64 + 3592;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-21248
	ctx.r10.s64 = ctx.r10.s64 + -21248;
loc_823D3BFC:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d3c20
	if (ctx.cr6.eq) goto loc_823D3C20;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x823d3c20
	if (!ctx.cr6.eq) goto loc_823D3C20;
	// cmplwi cr6,r8,22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 22, ctx.xer);
	// blt cr6,0x823d3c20
	if (ctx.cr6.lt) goto loc_823D3C20;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// b 0x823d3c30
	goto loc_823D3C30;
loc_823D3C20:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_823D3C30:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x823d3bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3BFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,5692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5692, ctx.r29.u32);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5672, temp.u32);
	// stfs f0,5688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5688, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3B90) {
	__imp__sub_823D3B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3C60) {
	__imp__sub_823D3C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D3C80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2864
	ctx.r5.s64 = 2864;
	// lwz r30,144(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x823D3C98;
	sub_823DE090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r9,6144
	ctx.r9.s64 = 402653184;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,15
	ctx.r7.s64 = 15;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r9,18432
	ctx.r11.u64 = ctx.r9.u64 | 18432;
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r26,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// addi r4,r31,2804
	ctx.r4.s64 = ctx.r31.s64 + 2804;
	// stw r7,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2804, ctx.r11.u32);
	// stw r10,2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2808, ctx.r10.u32);
	// stw r11,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r11.u32);
	// stw r10,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r10.u32);
	// bl 0x823c9330
	ctx.lr = 0x823D3CF4;
	sub_823C9330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820bede0
	ctx.lr = 0x823D3D00;
	sub_820BEDE0(ctx, base);
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r6,-26336
	ctx.r5.s64 = ctx.r6.s64 + -26336;
	// stb r30,2784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2784, ctx.r30.u8);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,4(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_823D3D1C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823d4400
	ctx.lr = 0x823D3D2C;
	sub_823D4400(ctx, base);
	// stbx r27,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x823d3d1c
	if (ctx.cr6.lt) goto loc_823D3D1C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
	// stw r26,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r26.u32);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D3C78) {
	__imp__sub_823D3C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3D5C) {
	__imp__sub_823D3D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3D60) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,5606(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5606);
	// lhz r10,5608(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// lhz r11,5610(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5610);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r9,5606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5606, ctx.r9.u16);
	// sth r8,5608(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5608, ctx.r8.u16);
	// sth r7,5610(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5610, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3D60) {
	__imp__sub_823D3D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3D88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r9,2803
	ctx.r7.s64 = ctx.r9.s64 + 2803;
	// addi r6,r10,2803
	ctx.r6.s64 = ctx.r10.s64 + 2803;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lhzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// addi r4,r9,2803
	ctx.r4.s64 = ctx.r9.s64 + 2803;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u16);
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// sthx r5,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u16);
	// lhzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u16);
	// bne cr6,0x823d3dfc
	if (!ctx.cr6.eq) goto loc_823D3DFC;
	// lhz r9,5614(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5614);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,5614(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5614, ctx.r9.u16);
loc_823D3DFC:
	// addi r11,r11,2767
	ctx.r11.s64 = ctx.r11.s64 + 2767;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3D88) {
	__imp__sub_823D3D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3E10) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,5616(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5616);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,1280
	ctx.r3.s64 = ctx.r3.s64 + 1280;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,5616(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5616, ctx.r10.u16);
	// lhz r10,5618(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5618);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,5618(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5618, ctx.r8.u16);
	// lhz r10,5620(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5620);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,5620(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5620, ctx.r6.u16);
	// lhz r10,5614(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5614);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,5614(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5614, ctx.r4.u16);
	// lhz r9,5616(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5616);
	// sth r9,5534(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5534, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D3E10) {
	__imp__sub_823D3E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D3E54) {
	__imp__sub_823D3E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3E58) {
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
	// bl 0x823d3d88
	ctx.lr = 0x823D3E70;
	sub_823D3D88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
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

PPC_WEAK_FUNC(sub_823D3E58) {
	__imp__sub_823D3E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D3E98) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,4928
	ctx.r30.s64 = ctx.r3.s64 + 4928;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D3EC4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823d3ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3EC4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lfs f10,13216(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13216);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,-7352
	ctx.r11.s64 = ctx.r11.s64 + -7352;
	// lfs f13,2424(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// lfs f11,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fdivs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_823D3F64:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823d3f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3F64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823D3F80;
	sub_823DE1F0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D3F90:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823d3f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3F90;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D3FAC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823d3fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3FAC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D3FC8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823d3fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3FC8;
	// lhz r9,5606(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5606);
	// li r11,8
	ctx.r11.s64 = 8;
	// lhz r8,5608(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5608);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// lhz r7,5610(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5610);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r9,5606(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5606, ctx.r9.u16);
	// sth r8,5608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5608, ctx.r8.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sth r7,5610(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5610, ctx.r7.u16);
	// addi r6,r31,1272
	ctx.r6.s64 = ctx.r31.s64 + 1272;
	// lhz r11,5616(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5616);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,5616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5616, ctx.r3.u16);
	// lhz r11,5618(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5618);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,5618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5618, ctx.r9.u16);
	// lhz r11,5620(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5620);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,5620(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5620, ctx.r7.u16);
	// lhz r11,5614(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5614);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,5614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5614, ctx.r4.u16);
	// lhz r11,5616(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5616);
	// sth r11,5534(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5534, ctx.r11.u16);
loc_823D403C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r6.u32 = ea;
	// bdnz 0x823d403c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D403C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_823D3E98) {
	__imp__sub_823D3E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4060) {
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
	// lwz r11,5696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5696);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823d40c4
	if (ctx.cr6.eq) goto loc_823D40C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,5696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5696, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,5772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5772, ctx.r8.u8);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,5264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5264, temp.u32);
	// stfs f0,5268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5268, temp.u32);
	// stfs f0,5272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5272, temp.u32);
	// stfs f13,5276(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5276, temp.u32);
	// bl 0x823c8a38
	ctx.lr = 0x823D40B8;
	sub_823C8A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3e98
	ctx.lr = 0x823D40C4;
	sub_823D3E98(ctx, base);
loc_823D40C4:
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

PPC_WEAK_FUNC(sub_823D4060) {
	__imp__sub_823D4060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D40D8) {
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
	// lhz r11,5610(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5610);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,5608(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lhz r9,5606(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5606);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// sth r7,5610(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5610, ctx.r7.u16);
	// sth r5,5608(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5608, ctx.r5.u16);
	// addi r4,r8,-7352
	ctx.r4.s64 = ctx.r8.s64 + -7352;
	// sth r6,5606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5606, ctx.r6.u16);
	// addi r30,r3,1280
	ctx.r30.s64 = ctx.r3.s64 + 1280;
	// lhz r11,5616(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5616);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5616, ctx.r10.u16);
	// li r5,64
	ctx.r5.s64 = 64;
	// lhz r11,5618(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5618);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,5618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5618, ctx.r8.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,5620(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5620);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,5620(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5620, ctx.r6.u16);
	// lhz r11,5614(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5614);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5614, ctx.r10.u16);
	// lhz r8,5616(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5616);
	// sth r8,5534(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5534, ctx.r8.u16);
	// bl 0x823de1f0
	ctx.lr = 0x823D4164;
	sub_823DE1F0(ctx, base);
	// lfs f0,1328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5264);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,1328(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1328, temp.u32);
	// lfs f11,1332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5268);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,1332(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// lfs f8,1336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,5272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5272);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,1336(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
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

PPC_WEAK_FUNC(sub_823D40D8) {
	__imp__sub_823D40D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D41B0) {
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
	// lwz r11,5696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5696);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d4214
	if (ctx.cr6.eq) goto loc_823D4214;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,5652(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5652);
	// addi r3,r3,4928
	ctx.r3.s64 = ctx.r3.s64 + 4928;
	// stw r11,5696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5696, ctx.r11.u32);
	// li r5,336
	ctx.r5.s64 = 336;
	// bl 0x823de1f0
	ctx.lr = 0x823D41E8;
	sub_823DE1F0(ctx, base);
	// lfs f13,5184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5264, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,5188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5188);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,5268(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5268, temp.u32);
	// lfs f11,5192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,5272(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5272, temp.u32);
	// stfs f0,5276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5276, temp.u32);
	// bl 0x823d40d8
	ctx.lr = 0x823D4214;
	sub_823D40D8(ctx, base);
loc_823D4214:
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

PPC_WEAK_FUNC(sub_823D41B0) {
	__imp__sub_823D41B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5164);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,5176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f9,5172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5172);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,4928
	ctx.r11.s64 = ctx.r3.s64 + 4928;
	// lfs f7,5156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5156);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,5168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5168);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,5152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5152);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,5192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,5188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5188);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f11,5184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4540(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4540, temp.u32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f7,f5,f10,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f1.f64));
	// stfs f7,4532(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4532, temp.u32);
	// fmsubs f6,f3,f10,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f11.f64));
	// stfs f6,4528(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4528, temp.u32);
	// fmsubs f8,f8,f10,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f2.f64));
	// stfs f8,4536(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4536, temp.u32);
	// lhz r11,5462(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5462);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,5462(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5462, ctx.r7.u16);
	// lfs f5,5120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,5128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5128);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f2,5124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5124);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f3,4552(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4552, temp.u32);
	// stfs f0,4556(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4556, temp.u32);
	// stfs f1,4548(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4548, temp.u32);
	// stfs f13,4544(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4544, temp.u32);
	// lhz r11,5464(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5464);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,5464(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5464, ctx.r5.u16);
	// lfs f12,5136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f11,5144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f8,5140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5140);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f0,4572(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4572, temp.u32);
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f5,4564(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4564, temp.u32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f4,4568(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4568, temp.u32);
	// stfs f3,4560(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4560, temp.u32);
	// lhz r11,5466(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5466);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5466(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5466, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4228) {
	__imp__sub_823D4228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4328) {
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
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r3,5696
	ctx.r10.s64 = ctx.r3.s64 + 5696;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D4354:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d4354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D4354;
	// stw r5,5652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5652, ctx.r5.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5676, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,5680(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5680, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,5684(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5684, temp.u32);
	// stw r11,5696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5696, ctx.r11.u32);
	// bl 0x823d41b0
	ctx.lr = 0x823D438C;
	sub_823D41B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5998
	ctx.lr = 0x823D4398;
	sub_823D5998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4228
	ctx.lr = 0x823D43A0;
	sub_823D4228(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// li r4,51
	ctx.r4.s64 = 51;
	// stw r10,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r10.u32);
	// bl 0x823be950
	ctx.lr = 0x823D43B4;
	sub_823BE950(ctx, base);
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

PPC_WEAK_FUNC(sub_823D4328) {
	__imp__sub_823D4328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D43CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D43CC) {
	__imp__sub_823D43CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r8,5612(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5612);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,5272
	ctx.r10.s64 = ctx.r3.s64 + 5272;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// sth r8,5612(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5612, ctx.r8.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D43EC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823d43ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D43EC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D43D0) {
	__imp__sub_823D43D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D43FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D43FC) {
	__imp__sub_823D43FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D4408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r5,r5,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820c0208
	ctx.lr = 0x823D4420;
	sub_820C0208(ctx, base);
	// rlwinm r5,r29,20,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c03b0
	ctx.lr = 0x823D4430;
	sub_820C03B0(ctx, base);
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x823d4448
	if (!ctx.cr6.gt) goto loc_823D4448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c0650
	ctx.lr = 0x823D4448;
	sub_820C0650(ctx, base);
loc_823D4448:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// srd r28,r6,r7
	ctx.r28.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// addi r9,r5,3224
	ctx.r9.s64 = ctx.r5.s64 + 3224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwimi r10,r29,7,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r10.u32);
	// addi r11,r11,1164
	ctx.r11.s64 = ctx.r11.s64 + 1164;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r7,r28,r8
	ctx.r7.u64 = ctx.r28.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// lwz r5,1264(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1264);
	// bl 0x820c0770
	ctx.lr = 0x823D44A0;
	sub_820C0770(ctx, base);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r29,22,20,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 22) & 0xC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwinm r4,r5,0,20,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r10,r28,r3
	ctx.r10.u64 = ctx.r28.u64 | ctx.r3.u64;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r29,23,17,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 23) & 0x6000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r8,r9,0,17,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r6,r28,r7
	ctx.r6.u64 = ctx.r28.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r29,24,14,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0x30000) | (ctx.r5.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r4,r5,0,14,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 | ctx.r3.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4400) {
	__imp__sub_823D4400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D450C) {
	__imp__sub_823D450C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4510) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4510) {
	__imp__sub_823D4510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4518) {
	__imp__sub_823D4518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4540) {
	__imp__sub_823D4540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D456C) {
	__imp__sub_823D456C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4570) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4570) {
	__imp__sub_823D4570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4584) {
	__imp__sub_823D4584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r6,r8,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r8.s64;
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r11,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r11.s64 = ctx.r5.s64 >> temp.u64;
	// srd r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4588) {
	__imp__sub_823D4588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D45E4) {
	__imp__sub_823D45E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D45E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r6,r8,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r8.s64;
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f12,6024(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// stfs f11,6028(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// srad r11,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r11.s64 = ctx.r5.s64 >> temp.u64;
	// srd r10,r11,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D45E8) {
	__imp__sub_823D45E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4644) {
	__imp__sub_823D4644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820b8988
	sub_820B8988(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4648) {
	__imp__sub_823D4648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4674) {
	__imp__sub_823D4674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820b8a60
	sub_820B8A60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4678) {
	__imp__sub_823D4678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D46A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D46A4) {
	__imp__sub_823D46A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D46A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r4,120
	ctx.r7.s64 = ctx.r4.s64 + 120;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r8,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u64);
	// rldicr r8,r11,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r4,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r4.s64;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srad r9,r8,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r9.s64 = ctx.r8.s64 >> temp.u64;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// srd r8,r9,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r4.u8 & 0x7F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D46A8) {
	__imp__sub_823D46A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4718) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4718) {
	__imp__sub_823D4718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4730) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// cmplwi cr6,r4,75
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 75, ctx.xer);
	// blt cr6,0x823d476c
	if (ctx.cr6.lt) goto loc_823D476C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x823c8400
	ctx.lr = 0x823D475C;
	sub_823C8400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823D476C:
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
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

PPC_WEAK_FUNC(sub_823D4730) {
	__imp__sub_823D4730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D478C) {
	__imp__sub_823D478C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r11,-75
	ctx.r9.s64 = ctx.r11.s64 + -75;
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r7,r11,2803
	ctx.r7.s64 = ctx.r11.s64 + 2803;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r3.u32);
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x823d47cc
	if (!ctx.cr6.eq) goto loc_823D47CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D47CC:
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d47ec
	if (ctx.cr0.eq) goto loc_823D47EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823D47E4:
	// stdu r11,8(r4)
	ea = 8 + ctx.r4.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r4.u32 = ea;
	// bdnz 0x823d47e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D47E4;
loc_823D47EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4790) {
	__imp__sub_823D4790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D47F4) {
	__imp__sub_823D47F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D47F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r11,2672
	ctx.r9.s64 = ctx.r11.s64 + 2672;
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x823d482c
	if (!ctx.cr6.eq) goto loc_823D482C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D482C:
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D47F8) {
	__imp__sub_823D47F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4838) {
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
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// cmplwi cr6,r11,75
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 75, ctx.xer);
	// blt cr6,0x823d4884
	if (ctx.cr6.lt) goto loc_823D4884;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d4790
	ctx.lr = 0x823D4874;
	sub_823D4790(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823D4884:
	// addi r10,r11,2672
	ctx.r10.s64 = ctx.r11.s64 + 2672;
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ldx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r4,r9
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x823d48d4
	if (!ctx.cr6.eq) goto loc_823D48D4;
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
loc_823D48D4:
	// stdx r9,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
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

PPC_WEAK_FUNC(sub_823D4838) {
	__imp__sub_823D4838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D48EC) {
	__imp__sub_823D48EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D48F0) {
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
	// bl 0x823d4838
	ctx.lr = 0x823D4900;
	sub_823D4838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D48F0) {
	__imp__sub_823D48F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D491C) {
	__imp__sub_823D491C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4920) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823d4838
	ctx.lr = 0x823D493C;
	sub_823D4838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d49b4
	if (!ctx.cr6.eq) goto loc_823D49B4;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,75
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 75, ctx.xer);
	// blt cr6,0x823d4968
	if (ctx.cr6.lt) goto loc_823D4968;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// bl 0x823c8400
	ctx.lr = 0x823D4960;
	sub_823C8400(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x823d4978
	goto loc_823D4978;
loc_823D4968:
	// addi r10,r4,224
	ctx.r10.s64 = ctx.r4.s64 + 224;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823D4978:
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r6,7(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rldicr r7,r10,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r3,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,144(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r7,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r7.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x820b8988
	ctx.lr = 0x823D49B4;
	sub_820B8988(ctx, base);
loc_823D49B4:
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

PPC_WEAK_FUNC(sub_823D4920) {
	__imp__sub_823D4920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D49C8) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// addi r9,r9,2672
	ctx.r9.s64 = ctx.r9.s64 + 2672;
	// addi r7,r11,92
	ctx.r7.s64 = ctx.r11.s64 + 92;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// ldx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x823d4a14
	if (!ctx.cr6.eq) goto loc_823D4A14;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D4A14:
	// stdx r9,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D49C8) {
	__imp__sub_823D49C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4A20) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,1
	ctx.r8.s64 = 1;
	// lhz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r8,r7,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// srad r10,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r10.s64 = ctx.r10.s64 >> temp.u64;
	// srd r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// bl 0x820b8a60
	ctx.lr = 0x823D4A84;
	sub_820B8A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4A20) {
	__imp__sub_823D4A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4A94) {
	__imp__sub_823D4A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D4AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823d4ae0
	if (!ctx.cr6.eq) goto loc_823D4AE0;
loc_823D4ABC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4920
	ctx.lr = 0x823D4AC8;
	sub_823D4920(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d4ae0
	if (ctx.cr0.eq) goto loc_823D4AE0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823d4abc
	if (ctx.cr6.eq) goto loc_823D4ABC;
loc_823D4AE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4A98) {
	__imp__sub_823D4A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D4AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823d4b34
	if (!ctx.cr6.eq) goto loc_823D4B34;
loc_823D4B10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d4920
	ctx.lr = 0x823D4B1C;
	sub_823D4920(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d4b94
	if (ctx.cr0.eq) goto loc_823D4B94;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823d4b10
	if (ctx.cr6.eq) goto loc_823D4B10;
loc_823D4B34:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823d4b94
	if (!ctx.cr6.eq) goto loc_823D4B94;
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r31,-6
	ctx.r31.s64 = ctx.r31.s64 + -6;
loc_823D4B44:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c8510
	ctx.lr = 0x823D4B54;
	sub_823C8510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823d4b6c
	if (!ctx.cr6.eq) goto loc_823D4B6C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10);
	// bl 0x823c8530
	ctx.lr = 0x823D4B6C;
	sub_823C8530(ctx, base);
loc_823D4B6C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhzu r4,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c87a8
	ctx.lr = 0x823D4B80;
	sub_823C87A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823d4b94
	if (ctx.cr0.eq) goto loc_823D4B94;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823d4b44
	if (ctx.cr6.eq) goto loc_823D4B44;
loc_823D4B94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4AE8) {
	__imp__sub_823D4AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4B9C) {
	__imp__sub_823D4B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4BA0) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4bcc
	if (ctx.cr6.eq) goto loc_823D4BCC;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x823d4a98
	ctx.lr = 0x823D4BCC;
	sub_823D4A98(ctx, base);
loc_823D4BCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4BA0) {
	__imp__sub_823D4BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D4BDC) {
	__imp__sub_823D4BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4BE0) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r4,73(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4c18
	if (ctx.cr6.eq) goto loc_823D4C18;
	// lbz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d4ae8
	ctx.lr = 0x823D4C18;
	sub_823D4AE8(ctx, base);
loc_823D4C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4BE0) {
	__imp__sub_823D4BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D4C30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// lwz r25,188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bge cr6,0x823d4c6c
	if (!ctx.cr6.lt) goto loc_823D4C6C;
loc_823D4C54:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// beq 0x823d4e48
	if (ctx.cr0.eq) goto loc_823D4E48;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x823d4c54
	if (ctx.cr6.lt) goto loc_823D4C54;
loc_823D4C6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// rldicr r28,r11,63,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// bne cr6,0x823d4d14
	if (!ctx.cr6.eq) goto loc_823D4D14;
	// lwz r26,176(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
loc_823D4C84:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r4,-2(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// addi r8,r11,2672
	ctx.r8.s64 = ctx.r11.s64 + 2672;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r4,92
	ctx.r7.s64 = ctx.r4.s64 + 92;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lhzx r5,r6,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// ldx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x823d4cf8
	if (ctx.cr6.eq) goto loc_823D4CF8;
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r7,r11,224
	ctx.r7.s64 = ctx.r11.s64 + 224;
	// stdx r9,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u64);
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srad r7,r28,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r28.s64 < 0) & (((ctx.r28.s64 >> temp.u64) << temp.u64) != ctx.r28.s64);
	ctx.r7.s64 = ctx.r28.s64 >> temp.u64;
	// srd r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r3.u8 & 0x7F));
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820b8a60
	ctx.lr = 0x823D4CF8;
	sub_820B8A60(ctx, base);
loc_823D4CF8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// beq 0x823d4e48
	if (ctx.cr0.eq) goto loc_823D4E48;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823d4c84
	if (ctx.cr6.eq) goto loc_823D4C84;
loc_823D4D14:
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x823d4dbc
	if (!ctx.cr6.eq) goto loc_823D4DBC;
loc_823D4D24:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d4d40
	if (ctx.cr6.eq) goto loc_823D4D40;
loc_823D4D34:
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d4d34
	if (!ctx.cr6.eq) goto loc_823D4D34;
loc_823D4D40:
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r9,r10,92
	ctx.r9.s64 = ctx.r10.s64 + 92;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r5,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r5.s64;
	// addi r8,r10,376
	ctx.r8.s64 = ctx.r10.s64 + 376;
	// rotlwi r9,r10,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stdx r7,r6,r31
	PPC_STORE_U64(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u64);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srad r8,r28,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r28.s64 < 0) & (((ctx.r28.s64 >> temp.u64) << temp.u64) != ctx.r28.s64);
	ctx.r8.s64 = ctx.r28.s64 >> temp.u64;
	// srd r6,r8,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfsx f0,r4,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6020(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6020, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6024(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6024, temp.u32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6028, temp.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// beq 0x823d4e48
	if (ctx.cr0.eq) goto loc_823D4E48;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x823d4d24
	if (ctx.cr6.eq) goto loc_823D4D24;
loc_823D4DBC:
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x823d4e48
	if (!ctx.cr6.eq) goto loc_823D4E48;
	// addi r9,r27,-6
	ctx.r9.s64 = ctx.r27.s64 + -6;
loc_823D4DC8:
	// lwz r6,10(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10);
	// lhzu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r3,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r5,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r5.s64;
	// stdx r7,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u64);
	// rotlwi r8,r11,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// srad r10,r28,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r28.s64 < 0) & (((ctx.r28.s64 >> temp.u64) << temp.u64) != ctx.r28.s64);
	ctx.r10.s64 = ctx.r28.s64 >> temp.u64;
	// srd r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6020(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6024(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq 0x823d4e48
	if (ctx.cr0.eq) goto loc_823D4E48;
	// lhz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x823d4dc8
	if (ctx.cr6.eq) goto loc_823D4DC8;
loc_823D4E48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4C28) {
	__imp__sub_823D4C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D4E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d4e90
	if (!ctx.cr6.lt) goto loc_823D4E90;
loc_823D4E74:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d4eb8
	if (ctx.cr0.eq) goto loc_823D4EB8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823d4e74
	if (ctx.cr6.lt) goto loc_823D4E74;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
loc_823D4E90:
	// bne cr6,0x823d4eb8
	if (!ctx.cr6.eq) goto loc_823D4EB8;
loc_823D4E94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4920
	ctx.lr = 0x823D4EA0;
	sub_823D4920(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d4eb8
	if (ctx.cr0.eq) goto loc_823D4EB8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823d4e94
	if (ctx.cr6.eq) goto loc_823D4E94;
loc_823D4EB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D4E50) {
	__imp__sub_823D4E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4EC0) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r4,74(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4f00
	if (ctx.cr6.eq) goto loc_823D4F00;
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// lbz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d4c28
	ctx.lr = 0x823D4F00;
	sub_823D4C28(ctx, base);
loc_823D4F00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4EC0) {
	__imp__sub_823D4EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4F10) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r4,74(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4f50
	if (ctx.cr6.eq) goto loc_823D4F50;
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// lbz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d4c28
	ctx.lr = 0x823D4F50;
	sub_823D4C28(ctx, base);
loc_823D4F50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4F10) {
	__imp__sub_823D4F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4F60) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r4,74(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d4fa0
	if (ctx.cr6.eq) goto loc_823D4FA0;
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// lbz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d4e50
	ctx.lr = 0x823D4FA0;
	sub_823D4E50(ctx, base);
loc_823D4FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D4F60) {
	__imp__sub_823D4F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D4FB0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823d50d8
	if (!ctx.cr6.eq) goto loc_823D50D8;
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823d50d8
	if (ctx.cr6.gt) goto loc_823D50D8;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20472
	ctx.r12.s64 = ctx.r12.s64 + 20472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823D50D8;
	case 1:
		goto loc_823D50D8;
	case 2:
		goto loc_823D5028;
	case 3:
		goto loc_823D50B4;
	case 4:
		goto loc_823D50D8;
	case 5:
		goto loc_823D5090;
	case 6:
		goto loc_823D50D8;
	case 7:
		goto loc_823D50D8;
	case 8:
		goto loc_823D5060;
	case 9:
		goto loc_823D50D8;
	case 10:
		goto loc_823D50D8;
	case 11:
		goto loc_823D50D8;
	default:
		return;
	}
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20520(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20520);
	// lwz r17,20660(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20660);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20624(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20624);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20576(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20576);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
	// lwz r17,20696(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20696);
loc_823D5028:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r3,780(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823d50d8
	if (ctx.cr6.eq) goto loc_823D50D8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r4,13060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13060);
	// bl 0x823c8558
	ctx.lr = 0x823D5048;
	sub_823C8558(ctx, base);
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
loc_823D5060:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r4,12896(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12896);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823d50d8
	if (ctx.cr6.eq) goto loc_823D50D8;
	// bl 0x823c8558
	ctx.lr = 0x823D5078;
	sub_823C8558(ctx, base);
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
loc_823D5090:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823d50d8
	if (!ctx.cr6.eq) goto loc_823D50D8;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	// b 0x823d50d4
	goto loc_823D50D4;
loc_823D50B4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12624);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823d50d8
	if (!ctx.cr6.eq) goto loc_823D50D8;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
loc_823D50D4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823D50D8:
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

PPC_WEAK_FUNC(sub_823D4FB0) {
	__imp__sub_823D4FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D50EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D50EC) {
	__imp__sub_823D50EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D50F0) {
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
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x823d511c
	if (ctx.cr6.eq) goto loc_823D511C;
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x823b7ac8
	ctx.lr = 0x823D511C;
	sub_823B7AC8(ctx, base);
loc_823D511C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D50F0) {
	__imp__sub_823D50F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D512C) {
	__imp__sub_823D512C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D5138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d5168
	if (ctx.cr6.eq) goto loc_823D5168;
loc_823D515C:
	// lwzu r10,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823d515c
	if (!ctx.cr6.eq) goto loc_823D515C;
loc_823D5168:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r30,r11,13536
	ctx.r30.s64 = ctx.r11.s64 + 13536;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x823d51d0
	if (!ctx.cr6.eq) goto loc_823D51D0;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,13052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13052);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823d51a8
	if (ctx.cr6.eq) goto loc_823D51A8;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f0,5704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5704);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d51ac
	goto loc_823D51AC;
loc_823D51A8:
	// lfs f0,924(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
loc_823D51AC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823d51d4
	if (ctx.cr6.eq) goto loc_823D51D4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x823b7ac8
	ctx.lr = 0x823D51CC;
	sub_823B7AC8(ctx, base);
	// b 0x823d51d4
	goto loc_823D51D4;
loc_823D51D0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823D51D4:
	// lbz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 708);
	// lbz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d51f0
	if (ctx.cr6.eq) goto loc_823D51F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4fb0
	ctx.lr = 0x823D51F0;
	sub_823D4FB0(ctx, base);
loc_823D51F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// bl 0x823c87a8
	ctx.lr = 0x823D5204;
	sub_823C87A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5130) {
	__imp__sub_823D5130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D5218;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r5,188(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// bne cr6,0x823d52e8
	if (!ctx.cr6.eq) goto loc_823D52E8;
loc_823D5250:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d526c
	if (ctx.cr6.eq) goto loc_823D526C;
loc_823D5260:
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d5260
	if (!ctx.cr6.eq) goto loc_823D5260;
loc_823D526C:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// rotlwi r9,r10,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// subf r10,r29,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r29.s64;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r6,r3,r8
	PPC_STORE_U64(ctx.r3.u32 + ctx.r8.u32, ctx.r6.u64);
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r10,r7,r3
	temp.u64 = ctx.r3.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r3,r10,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r29.u8 & 0x7F));
	// lwz r10,144(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfsx f0,r4,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1924, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1928, temp.u32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1932, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 | ctx.r9.u64;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// beq 0x823d5430
	if (ctx.cr0.eq) goto loc_823D5430;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d5250
	if (ctx.cr6.eq) goto loc_823D5250;
loc_823D52E8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823d5370
	if (!ctx.cr6.eq) goto loc_823D5370;
loc_823D52F0:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// rlwinm r29,r11,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r11,r29,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r29.s64;
	// rlwinm r3,r3,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r6,r4,r8
	PPC_STORE_U64(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u64);
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r7,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r11.s64 = ctx.r7.s64 >> temp.u64;
	// srd r4,r11,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r29.u8 & 0x7F));
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfsx f0,r3,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// beq 0x823d5430
	if (ctx.cr0.eq) goto loc_823D5430;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823d52f0
	if (ctx.cr6.eq) goto loc_823D52F0;
loc_823D5370:
	// lwz r5,68(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823d53a4
	if (!ctx.cr6.eq) goto loc_823D53A4;
loc_823D537C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d5130
	ctx.lr = 0x823D5388;
	sub_823D5130(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d5430
	if (ctx.cr0.eq) goto loc_823D5430;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823d537c
	if (ctx.cr6.eq) goto loc_823D537C;
loc_823D53A4:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823d53d0
	if (!ctx.cr6.eq) goto loc_823D53D0;
loc_823D53AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d4920
	ctx.lr = 0x823D53B8;
	sub_823D4920(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// beq 0x823d5430
	if (ctx.cr0.eq) goto loc_823D5430;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823d53ac
	if (ctx.cr6.eq) goto loc_823D53AC;
loc_823D53D0:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823d5430
	if (!ctx.cr6.eq) goto loc_823D5430;
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r31,-6
	ctx.r31.s64 = ctx.r31.s64 + -6;
loc_823D53E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c8510
	ctx.lr = 0x823D53F0;
	sub_823C8510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823d5408
	if (!ctx.cr6.eq) goto loc_823D5408;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10);
	// bl 0x823c8530
	ctx.lr = 0x823D5408;
	sub_823C8530(ctx, base);
loc_823D5408:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhzu r4,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823c87a8
	ctx.lr = 0x823D541C;
	sub_823C87A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823d5430
	if (ctx.cr0.eq) goto loc_823D5430;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823d53e0
	if (ctx.cr6.eq) goto loc_823D53E0;
loc_823D5430:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5210) {
	__imp__sub_823D5210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5438) {
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
	// lwz r11,2812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2812);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d5480
	if (ctx.cr6.eq) goto loc_823D5480;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d5474
	if (ctx.cr6.eq) goto loc_823D5474;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x823d5478
	goto loc_823D5478;
loc_823D5474:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D5478:
	// bl 0x820b8c80
	ctx.lr = 0x823D547C;
	sub_820B8C80(ctx, base);
	// stw r31,2812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2812, ctx.r31.u32);
loc_823D5480:
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

PPC_WEAK_FUNC(sub_823D5438) {
	__imp__sub_823D5438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5498) {
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
	// lwz r11,2816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2816);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823d54d0
	if (ctx.cr6.eq) goto loc_823D54D0;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x820b9060
	ctx.lr = 0x823D54CC;
	sub_820B9060(ctx, base);
	// stw r30,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r30.u32);
loc_823D54D0:
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

PPC_WEAK_FUNC(sub_823D5498) {
	__imp__sub_823D5498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D54E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D54F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,200(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r27
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823d553c
	if (ctx.cr6.eq) goto loc_823D553C;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d55f0
	if (ctx.cr6.eq) goto loc_823D55F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b9268
	ctx.lr = 0x823D5530;
	sub_820B9268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x823d55f0
	goto loc_823D55F0;
loc_823D553C:
	// lwz r26,64(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823d55ac
	if (!ctx.cr6.eq) goto loc_823D55AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r28,r11,-7040
	ctx.r28.s64 = ctx.r11.s64 + -7040;
loc_823D5558:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d55a0
	if (ctx.cr6.eq) goto loc_823D55A0;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r23,0(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x823ddb58
	ctx.lr = 0x823D5584;
	sub_823DDB58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x822830e8
	ctx.lr = 0x823D55A0;
	sub_822830E8(ctx, base);
loc_823D55A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823d5558
	if (!ctx.cr0.eq) goto loc_823D5558;
loc_823D55AC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d55d0
	if (ctx.cr6.eq) goto loc_823D55D0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x823d55d4
	goto loc_823D55D4;
loc_823D55D0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823D55D4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d55f0
	if (ctx.cr6.eq) goto loc_823D55F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b9268
	ctx.lr = 0x823D55EC;
	sub_820B9268(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_823D55F0:
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823d562c
	if (!ctx.cr6.eq) goto loc_823D562C;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,64(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-7120
	ctx.r4.s64 = ctx.r10.s64 + -7120;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x823D562C;
	sub_822830E8(ctx, base);
loc_823D562C:
	// lwz r11,2816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2816);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823d5648
	if (ctx.cr6.eq) goto loc_823D5648;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b9060
	ctx.lr = 0x823D5644;
	sub_820B9060(ctx, base);
	// stw r26,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r26.u32);
loc_823D5648:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D54E8) {
	__imp__sub_823D54E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D5658;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mulli r10,r4,84
	ctx.r10.s64 = ctx.r4.s64 * 84;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,2796(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lbz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 24);
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x823d56c4
	if (ctx.cr6.eq) goto loc_823D56C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c97b0
	ctx.lr = 0x823D56C0;
	sub_823C97B0(ctx, base);
	// stw r29,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r29.u32);
loc_823D56C4:
	// lwz r11,2800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d56e0
	if (ctx.cr6.eq) goto loc_823D56E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9a10
	ctx.lr = 0x823D56DC;
	sub_823C9A10(ctx, base);
	// stw r28,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r28.u32);
loc_823D56E0:
	// lwz r29,68(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,2812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2812);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d5710
	if (ctx.cr6.eq) goto loc_823D5710;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d5704
	if (ctx.cr6.eq) goto loc_823D5704;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x823d5708
	goto loc_823D5708;
loc_823D5704:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D5708:
	// bl 0x820b8c80
	ctx.lr = 0x823D570C;
	sub_820B8C80(ctx, base);
	// stw r29,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r29.u32);
loc_823D5710:
	// lbz r4,74(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d573c
	if (ctx.cr6.eq) goto loc_823D573C;
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823d5210
	ctx.lr = 0x823D573C;
	sub_823D5210(ctx, base);
loc_823D573C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5650) {
	__imp__sub_823D5650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5744) {
	__imp__sub_823D5744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8396(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8396);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5748) {
	__imp__sub_823D5748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5758) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// rldicl r10,r11,22,42
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0x3FFFFF;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823d5778
	if (!ctx.cr6.eq) goto loc_823D5778;
loc_823D5770:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D5778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d579c
	if (!ctx.cr6.eq) goto loc_823D579C;
	// lbz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d579c
	if (ctx.cr6.eq) goto loc_823D579C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r4,8396(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8396);
loc_823D579C:
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 3;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r4,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r6.u32);
	// beq cr6,0x823d5770
	if (ctx.cr6.eq) goto loc_823D5770;
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5758) {
	__imp__sub_823D5758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D57D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// b 0x821741f8
	sub_821741F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D57D0) {
	__imp__sub_823D57D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D57E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D57E4) {
	__imp__sub_823D57E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D57E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r4,188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 188, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r11.u32);
	// bne cr6,0x823d581c
	if (!ctx.cr6.eq) goto loc_823D581C;
loc_823D5814:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D581C:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5840
	if (ctx.cr6.eq) goto loc_823D5840;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r8,r11,13536
	ctx.r8.s64 = ctx.r11.s64 + 13536;
	// lbz r7,772(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 772);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823d5814
	if (ctx.cr6.eq) goto loc_823D5814;
loc_823D5840:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x823d5850
	if (ctx.cr6.eq) goto loc_823D5850;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x823d586c
	if (!ctx.cr6.eq) goto loc_823D586C;
loc_823D5850:
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d586c
	if (ctx.cr6.eq) goto loc_823D586C;
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lhz r10,5352(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d5814
	if (ctx.cr6.eq) goto loc_823D5814;
loc_823D586C:
	// stw r5,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D57E8) {
	__imp__sub_823D57E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5878) {
	__imp__sub_823D5878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5894) {
	__imp__sub_823D5894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5898) {
	__imp__sub_823D5898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D58AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D58AC) {
	__imp__sub_823D58AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D58B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D58B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lhz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x821741f8
	ctx.lr = 0x823D58E8;
	sub_821741F8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x823d5948
	if (!ctx.cr6.eq) goto loc_823D5948;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,159(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r31,158(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 158);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4924);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x823d57e8
	ctx.lr = 0x823D5924;
	sub_823D57E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d595c
	if (ctx.cr6.eq) goto loc_823D595C;
	// clrlwi r5,r28,31
	ctx.r5.u64 = ctx.r28.u32 & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d5d40
	ctx.lr = 0x823D593C;
	sub_823D5D40(ctx, base);
loc_823D593C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823D5948:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x823d5974
	if (ctx.cr6.gt) goto loc_823D5974;
	// bl 0x823d5758
	ctx.lr = 0x823D5954;
	sub_823D5758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d593c
	if (!ctx.cr6.eq) goto loc_823D593C;
loc_823D595C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823D5974:
	// bl 0x823d57e8
	ctx.lr = 0x823D5978;
	sub_823D57E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d593c
	if (!ctx.cr6.eq) goto loc_823D593C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D58B0) {
	__imp__sub_823D58B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5994) {
	__imp__sub_823D5994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5998) {
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
	ctx.lr = 0x823D59AC;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x823dde20
	ctx.lr = 0x823D59C0;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-22124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x823D59DC;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x823D59E8;
	sub_823DE800(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfd f2,-6816(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + -6816);
	// bl 0x823e2a68
	ctx.lr = 0x823D59FC;
	sub_823E2A68(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f28,3696(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3696, temp.u32);
	// stfs f29,3700(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3700, temp.u32);
	// stfs f31,3704(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// stfs f12,3708(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// lhz r11,5358(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5358);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,5358(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5358, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x823D5A28;
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

PPC_WEAK_FUNC(sub_823D5998) {
	__imp__sub_823D5998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5A38) {
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
	// lfs f0,5756(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x823d5a64
	if (!ctx.cr6.eq) goto loc_823D5A64;
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
loc_823D5A64:
	// stfs f1,5756(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5756, temp.u32);
	// lfs f0,5704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// bl 0x823d5998
	ctx.lr = 0x823D5A74;
	sub_823D5998(ctx, base);
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

PPC_WEAK_FUNC(sub_823D5A38) {
	__imp__sub_823D5A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 + 1352;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
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

PPC_WEAK_FUNC(sub_823D5A88) {
	__imp__sub_823D5A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5AB4) {
	__imp__sub_823D5AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5AB8) {
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
	// bl 0x823de020
	ctx.lr = 0x823D5ACC;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lbz r10,5780(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5780);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12824);
	// lwz r10,12652(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12652);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823d5b08
	if (ctx.cr6.eq) goto loc_823D5B08;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
loc_823D5B08:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmuls f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmuls f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f27,f10,f13
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// bl 0x8239ede8
	ctx.lr = 0x823D5B40;
	sub_8239EDE8(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239ede8
	ctx.lr = 0x823D5B4C;
	sub_8239EDE8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8239ede8
	ctx.lr = 0x823D5B58;
	sub_8239EDE8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8239ede8
	ctx.lr = 0x823D5B64;
	sub_8239EDE8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8239ede8
	ctx.lr = 0x823D5B70;
	sub_8239EDE8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8239ede8
	ctx.lr = 0x823D5B7C;
	sub_8239EDE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f26,3600(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
	// stfs f31,3604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3604, temp.u32);
	// stfs f30,3608(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3612, temp.u32);
	// lhz r11,5346(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5346);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5346(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5346, ctx.r10.u16);
	// stfs f29,3616(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stfs f28,3620(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f1,3624(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stfs f0,3628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3628, temp.u32);
	// lhz r11,5348(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5348);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,5348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5348, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de06c
	ctx.lr = 0x823D5BC8;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5AB8) {
	__imp__sub_823D5AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D5BE0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,4836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4836, ctx.r11.u32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lbz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 8);
	// stb r8,4909(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4909, ctx.r8.u8);
	// lfs f13,5264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,5272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5272);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f3,f31,f11
	ctx.f3.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f4,3584(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3584, temp.u32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f3,3596(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3596, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f5,3588(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3588, temp.u32);
	// stfs f6,3592(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3592, temp.u32);
	// lhz r11,5344(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5344);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// sth r7,5344(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5344, ctx.r7.u16);
	// lfs f2,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3632(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3632, temp.u32);
	// stfs f1,3636(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3636, temp.u32);
	// stfs f2,3640(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3640, temp.u32);
	// stfs f0,3644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3644, temp.u32);
	// lhz r11,5350(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5350);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,5350(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5350, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5ab8
	ctx.lr = 0x823D5C94;
	sub_823D5AB8(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823d5ca8
	if (ctx.cr6.eq) goto loc_823D5CA8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823d5cf4
	if (!ctx.cr6.eq) goto loc_823D5CF4;
loc_823D5CA8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f30,3660(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3660, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// stfs f11,3648(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f7,3652(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// stfs f6,3656(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// lhz r11,5352(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5352);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,5352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5352, ctx.r9.u16);
loc_823D5CF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5BD8) {
	__imp__sub_823D5BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5D04) {
	__imp__sub_823D5D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3584(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3584, temp.u32);
	// stfs f12,3588(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3588, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,3592(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3592, temp.u32);
	// stfs f0,3596(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3596, temp.u32);
	// lhz r11,5344(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5344);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5344(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5344, ctx.r10.u16);
	// b 0x823d5ab8
	sub_823D5AB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5D08) {
	__imp__sub_823D5D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5D3C) {
	__imp__sub_823D5D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D5D48;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5776);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d5d84
	if (!ctx.cr6.eq) goto loc_823D5D84;
	// lbz r10,5780(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5780);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d5e64
	if (ctx.cr6.eq) goto loc_823D5E64;
loc_823D5D84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d5e64
	if (ctx.cr6.eq) goto loc_823D5E64;
	// addi r10,r30,8634
	ctx.r10.s64 = ctx.r30.s64 + 8634;
	// lwz r27,4924(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4924);
	// addi r25,r6,616
	ctx.r25.s64 = ctx.r6.s64 + 616;
	// stw r30,5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5776, ctx.r30.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stb r5,5780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5780, ctx.r5.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// beq cr6,0x823d5e54
	if (ctx.cr6.eq) goto loc_823D5E54;
	// lbz r11,8468(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 8468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5de8
	if (ctx.cr6.eq) goto loc_823D5DE8;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// addi r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 + 1352;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r7,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d5dec
	if (!ctx.cr6.eq) goto loc_823D5DEC;
loc_823D5DE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D5DEC:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823d5e70
	if (!ctx.cr6.eq) goto loc_823D5E70;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d5e24
	if (ctx.cr6.eq) goto loc_823D5E24;
	// lwz r11,5636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5636);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823d5e24
	if (ctx.cr6.eq) goto loc_823D5E24;
	// stw r30,5636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5636, ctx.r30.u32);
	// addi r4,r27,7936
	ctx.r4.s64 = ctx.r27.s64 + 7936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d43d0
	ctx.lr = 0x823D5E24;
	sub_823D43D0(ctx, base);
loc_823D5E24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3584(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// stfs f12,3588(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3588, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,3592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3592, temp.u32);
	// stfs f0,3596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
	// lhz r11,5344(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5344);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5344, ctx.r10.u16);
loc_823D5E54:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5ab8
	ctx.lr = 0x823D5E64;
	sub_823D5AB8(ctx, base);
loc_823D5E64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823D5E70:
	// lwz r26,60(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lfs f0,-11988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11988);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lhz r6,64(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x823a6338
	ctx.lr = 0x823D5ED4;
	sub_823A6338(ctx, base);
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d5f30
	if (ctx.cr6.eq) goto loc_823D5F30;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r10,5636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5636);
	// mulli r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 * 464;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// addi r28,r11,8752
	ctx.r28.s64 = ctx.r11.s64 + 8752;
	// beq cr6,0x823d5f10
	if (ctx.cr6.eq) goto loc_823D5F10;
	// stw r30,5636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5636, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d43d0
	ctx.lr = 0x823D5F10;
	sub_823D43D0(ctx, base);
loc_823D5F10:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lfs f31,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r28,444
	ctx.r5.s64 = ctx.r28.s64 + 444;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4812, ctx.r11.u32);
	// bl 0x823be950
	ctx.lr = 0x823D5F30;
	sub_823BE950(ctx, base);
loc_823D5F30:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5bd8
	ctx.lr = 0x823D5F4C;
	sub_823D5BD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5D40) {
	__imp__sub_823D5D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// lwz r11,4924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r8,r10,1352
	ctx.r8.s64 = ctx.r10.s64 + 1352;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823d5f98
	if (ctx.cr6.eq) goto loc_823D5F98;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823d5d40
	sub_823D5D40(ctx, base);
	return;
loc_823D5F98:
	// addi r10,r4,8634
	ctx.r10.s64 = ctx.r4.s64 + 8634;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r6,616
	ctx.r4.s64 = ctx.r6.s64 + 616;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x823d5bd8
	sub_823D5BD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D5F58) {
	__imp__sub_823D5F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5FC0) {
	__imp__sub_823D5FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D5FC4) {
	__imp__sub_823D5FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D5FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r11,13412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13412);
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r4,r6,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r11.u32);
	// rldicl r6,r10,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// rldicl r4,r10,19,45
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 19) & 0x7FFFF;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// rlwimi r9,r11,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r6,r9,0,19,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
loc_823D6018:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r10,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d6018
	if (ctx.cr6.eq) goto loc_823D6018;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,13412(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13412);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// ldx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r11.u32);
	// rldicl r4,r10,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// rldicl r11,r10,19,45
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 19) & 0x7FFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// rlwimi r9,r10,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r9,r9,0,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r9,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823d6018
	if (ctx.cr6.eq) goto loc_823D6018;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D5FC8) {
	__imp__sub_823D5FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D6088;
	__savegprlr_29(ctx, base);
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lhz r9,-48(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r30.u8);
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lfs f1,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// rotlwi r6,r7,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r8,r11,19,45
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 19) & 0x7FFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r8,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r8.u8);
	// rlwimi r9,r7,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r11,r9,0,19,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r11,-48(r1)
	PPC_STORE_U16(ctx.r1.u32 + -48, ctx.r11.u16);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r29,-48(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lhz r5,-48(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// addi r6,r11,4608
	ctx.r6.s64 = ctx.r11.s64 + 4608;
loc_823D60EC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r8,r8,17
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFF;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rotlwi r7,r7,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// lwz r10,8456(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_823D6134:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fabs f2,f9
	ctx.f2.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f13,f7
	ctx.f13.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f9,f3
	ctx.f9.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f8,f2,f6
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fsubs f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f6,f9,f4
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsel f5,f8,f8,f0
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsel f4,f7,f7,f0
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// fsel f3,f6,f6,f0
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f13,f4,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f9,f3,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fsubs f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsel f1,f8,f9,f1
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f1.f64;
	// bdnz 0x823d6134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6134;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d60ec
	if (ctx.cr6.eq) goto loc_823D60EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d61f0
	if (ctx.cr6.eq) goto loc_823D61F0;
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// stb r30,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r30.u8);
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// rldicl r11,r7,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// rldicl r10,r7,19,45
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 19) & 0x7FFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// stb r10,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r10.u8);
	// rlwimi r5,r9,1,19,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x1FFE) | (ctx.r5.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r5,r5,0,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1FFE;
	// sth r5,-48(r1)
	PPC_STORE_U16(ctx.r1.u32 + -48, ctx.r5.u16);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d60ec
	if (ctx.cr6.eq) goto loc_823D60EC;
loc_823D61F0:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D6080) {
	__imp__sub_823D6080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D61F4) {
	__imp__sub_823D61F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D61F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r10,r6,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// rlwimi r9,r6,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// rlwinm r6,r9,0,19,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
loc_823D624C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r9,r10,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r9,r9,0,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// sth r9,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823d624c
	if (!ctx.cr6.eq) goto loc_823D624C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D61F8) {
	__imp__sub_823D61F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D62A4) {
	__imp__sub_823D62A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D62A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D62B0;
	__savegprlr_29(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lhz r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stb r4,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r4.u8);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,13412(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r8,r6,1,19,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE001);
	// lfs f1,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r7,r8,0,19,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE;
	// sth r7,-48(r1)
	PPC_STORE_U16(ctx.r1.u32 + -48, ctx.r7.u16);
	// stb r9,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r9.u8);
	// lwz r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r29,-48(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lhz r31,-48(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
loc_823D630C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r10,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D6324:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r11,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
loc_823D6340:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f1,f3
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f1,f2,f3,f1
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f1.f64;
	// bne cr6,0x823d6340
	if (!ctx.cr6.eq) goto loc_823D6340;
	// bdnz 0x823d6324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6324;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823d63c0
	if (ctx.cr6.eq) goto loc_823D63C0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r31,r10,1,19,30
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r31.u64 & 0xFFFFFFFFFFFFE001);
	// stb r4,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r4.u8);
	// rlwinm r31,r31,0,19,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1FFE;
	// stb r9,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r9.u8);
	// sth r31,-48(r1)
	PPC_STORE_U16(ctx.r1.u32 + -48, ctx.r31.u16);
	// lwz r7,-48(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823d630c
	if (ctx.cr6.eq) goto loc_823D630C;
loc_823D63C0:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D62A8) {
	__imp__sub_823D62A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D63C4) {
	__imp__sub_823D63C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D63C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// and r10,r8,r12
	ctx.r10.u64 = ctx.r8.u64 & ctx.r12.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823D63EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d63ec
	if (!ctx.cr6.eq) goto loc_823D63EC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D63C8) {
	__imp__sub_823D63C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r7,r7,49872
	ctx.r7.u64 = ctx.r7.u64 | 49872;
	// lfs f12,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
loc_823D6454:
	// rldicl r9,r11,11,60
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xF;
	// cmpldi cr6,r9,5
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 5, ctx.xer);
	// beq cr6,0x823d64d8
	if (ctx.cr6.eq) goto loc_823D64D8;
	// cmpldi cr6,r9,6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 6, ctx.xer);
	// beq cr6,0x823d648c
	if (ctx.cr6.eq) goto loc_823D648C;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,-19968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19968);
	// addi r9,r9,3616
	ctx.r9.s64 = ctx.r9.s64 + 3616;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f9,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// b 0x823d64f8
	goto loc_823D64F8;
loc_823D648C:
	// rlwinm r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823d64c8
	if (ctx.cr6.eq) goto loc_823D64C8;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,-19968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19968);
	// addi r9,r9,3616
	ctx.r9.s64 = ctx.r9.s64 + 3616;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d64d0
	if (ctx.cr6.eq) goto loc_823D64D0;
loc_823D64C8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d651c
	goto loc_823D651C;
loc_823D64D0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x823d651c
	goto loc_823D651C;
loc_823D64D8:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,-19968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19968);
	// addi r9,r9,3616
	ctx.r9.s64 = ctx.r9.s64 + 3616;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
loc_823D64F8:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f0,f4,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
loc_823D651C:
	// fsubs f11,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// fsel f1,f11,f0,f1
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r12,-16128
	ctx.r12.s64 = -1056964608;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r5
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x823d6454
	if (ctx.cr6.eq) goto loc_823D6454;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6420) {
	__imp__sub_823D6420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D654C) {
	__imp__sub_823D654C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6550) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823D656C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d656c
	if (!ctx.cr6.eq) goto loc_823D656C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6550) {
	__imp__sub_823D6550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6598) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823D65B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d65b4
	if (!ctx.cr6.eq) goto loc_823D65B4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6598) {
	__imp__sub_823D6598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D65E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823D65FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d65fc
	if (!ctx.cr6.eq) goto loc_823D65FC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D65E0) {
	__imp__sub_823D65E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6628) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// and r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823D665C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d665c
	if (!ctx.cr6.eq) goto loc_823D665C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6628) {
	__imp__sub_823D6628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D668C) {
	__imp__sub_823D668C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6690) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
loc_823D66B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d66b4
	if (!ctx.cr6.eq) goto loc_823D66B4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6690) {
	__imp__sub_823D6690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D66E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823D66F0;
	__savegprlr_22(ctx, base);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x823d6700
	if (!ctx.cr6.eq) goto loc_823D6700;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x823d6804
	if (ctx.cr6.eq) goto loc_823D6804;
loc_823D6700:
	// srawi. r26,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mullw r28,r4,r6
	ctx.r28.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r22,r26,r6
	ctx.r22.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// beq 0x823d67b4
	if (ctx.cr0.eq) goto loc_823D67B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d67b4
	if (ctx.cr6.eq) goto loc_823D67B4;
	// ble cr6,0x823d6804
	if (!ctx.cr6.gt) goto loc_823D6804;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm r23,r28,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_823D672C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x823d67a0
	if (!ctx.cr6.gt) goto loc_823D67A0;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_823D6744:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823d6790
	if (!ctx.cr6.gt) goto loc_823D6790;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r5,r28,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r28.s64;
	// subf r4,r31,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_823D6760:
	// lbzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823d6760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6760;
loc_823D6790:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bne 0x823d6744
	if (!ctx.cr0.eq) goto loc_823D6744;
loc_823D67A0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 + ctx.r22.u64;
	// bne 0x823d672c
	if (!ctx.cr0.eq) goto loc_823D672C;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_823D67B4:
	// add. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823d6804
	if (!ctx.cr0.gt) goto loc_823D6804;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823D67C4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823d67f4
	if (!ctx.cr6.gt) goto loc_823D67F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
loc_823D67D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823d67d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D67D8;
loc_823D67F4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// bne 0x823d67c4
	if (!ctx.cr0.eq) goto loc_823D67C4;
loc_823D6804:
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D66E8) {
	__imp__sub_823D66E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6808) {
	PPC_FUNC_PROLOGUE();
	// srw r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823d6818
	if (ctx.cr6.gt) goto loc_823D6818;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D6818:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srw r11,r4,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823d6830
	if (ctx.cr6.gt) goto loc_823D6830;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D6830:
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6808) {
	__imp__sub_823D6808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6838) {
	__imp__sub_823D6838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D683C) {
	__imp__sub_823D683C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6840) {
	__imp__sub_823D6840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D6844) {
	__imp__sub_823D6844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6848) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6848) {
	__imp__sub_823D6848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6858) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r10,0,14,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r4,r10,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d694c
	if (ctx.cr6.eq) goto loc_823D694C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d6910
	if (ctx.cr6.eq) goto loc_823D6910;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823d68e8
	if (ctx.cr6.eq) goto loc_823D68E8;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ed6f0
	ctx.lr = 0x823D68E4;
	sub_823ED6F0(ctx, base);
	// b 0x823d6974
	goto loc_823D6974;
loc_823D68E8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed760
	ctx.lr = 0x823D690C;
	sub_823ED760(ctx, base);
	// b 0x823d6974
	goto loc_823D6974;
loc_823D6910:
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ed838
	ctx.lr = 0x823D6948;
	sub_823ED838(ctx, base);
	// b 0x823d6974
	goto loc_823D6974;
loc_823D694C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed7c8
	ctx.lr = 0x823D6974;
	sub_823ED7C8(ctx, base);
loc_823D6974:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_823D6858) {
	__imp__sub_823D6858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D698C) {
	__imp__sub_823D698C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D6998;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// lhz r10,66(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r23,68(r3)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x823d69dc
	if (!ctx.cr6.eq) goto loc_823D69DC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ed9d8
	ctx.lr = 0x823D69D4;
	sub_823ED9D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823D69DC:
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ee130
	ctx.lr = 0x823D69F0;
	sub_823EE130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x823d6a14
	if (ctx.cr6.gt) goto loc_823D6A14;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ed9d8
	ctx.lr = 0x823D6A0C;
	sub_823ED9D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823d6a70
	goto loc_823D6A70;
loc_823D6A14:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r27,r24,26
	ctx.r27.u64 = ctx.r24.u32 & 0x3F;
	// bl 0x823ed9d8
	ctx.lr = 0x823D6A20;
	sub_823ED9D8(ctx, base);
	// clrlwi r26,r23,16
	ctx.r26.u64 = ctx.r23.u32 & 0xFFFF;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ee348
	ctx.lr = 0x823D6A48;
	sub_823EE348(ctx, base);
	// subf r23,r3,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r3.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ee348
	ctx.lr = 0x823D6A6C;
	sub_823EE348(ctx, base);
	// add r31,r3,r23
	ctx.r31.u64 = ctx.r3.u64 + ctx.r23.u64;
loc_823D6A70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823d6b04
	if (ctx.cr6.eq) goto loc_823D6B04;
	// lbz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823d6ad4
	if (!ctx.cr6.eq) goto loc_823D6AD4;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ed6f0
	ctx.lr = 0x823D6AC0;
	sub_823ED6F0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823D6AD4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed7c8
	ctx.lr = 0x823D6AFC;
	sub_823ED7C8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823D6B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D6990) {
	__imp__sub_823D6990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823D6B18;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823d6990
	ctx.lr = 0x823D6B40;
	sub_823D6990(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r28,1
	ctx.r28.s64 = 1;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r24,r3,r9
	ctx.r24.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d6b64
	if (!ctx.cr6.gt) goto loc_823D6B64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823D6B64:
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// srw r29,r11,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bgt cr6,0x823d6b7c
	if (ctx.cr6.gt) goto loc_823D6B7C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823D6B7C:
	// clrlwi r30,r30,26
	ctx.r30.u64 = ctx.r30.u32 & 0x3F;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ee370
	ctx.lr = 0x823D6B90;
	sub_823EE370(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// addi r7,r10,-28928
	ctx.r7.s64 = ctx.r10.s64 + -28928;
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// divwu r9,r9,r11
	ctx.r9.u32 = ctx.r9.u32 / ctx.r11.u32;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// divwu r8,r6,r10
	ctx.r8.u32 = ctx.r6.u32 / ctx.r10.u32;
	// addi r26,r8,1
	ctx.r26.s64 = ctx.r8.s64 + 1;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r7,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x823ee128
	ctx.lr = 0x823D6BD8;
	sub_823EE128(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823d6c04
	if (!ctx.cr6.eq) goto loc_823D6C04;
	// mullw r11,r26,r28
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823D6BFC;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823D6C04:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d6c4c
	if (ctx.cr6.eq) goto loc_823D6C4C;
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// lhz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// lhz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ee9d8
	ctx.lr = 0x823D6C44;
	sub_823EE9D8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823D6C4C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mullw r8,r28,r29
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ee9d0
	ctx.lr = 0x823D6C6C;
	sub_823EE9D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D6B10) {
	__imp__sub_823D6B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D6C74) {
	__imp__sub_823D6C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D6C80;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srw r27,r10,r11
	ctx.r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bgt cr6,0x823d6cac
	if (ctx.cr6.gt) goto loc_823D6CAC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823D6CAC:
	// lhz r10,66(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// srw r25,r10,r9
	ctx.r25.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bgt cr6,0x823d6cc4
	if (ctx.cr6.gt) goto loc_823D6CC4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_823D6CC4:
	// lhz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// srw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d6ce0
	if (!ctx.cr6.gt) goto loc_823D6CE0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_823D6CE0:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6990
	ctx.lr = 0x823D6CF8;
	sub_823D6990(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r29,r30,26
	ctx.r29.u64 = ctx.r30.u32 & 0x3F;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r11,-28928
	ctx.r9.s64 = ctx.r11.s64 + -28928;
	// add r28,r3,r10
	ctx.r28.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r30,r8,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x823ee128
	ctx.lr = 0x823D6D24;
	sub_823EE128(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823d6d7c
	if (ctx.cr6.eq) goto loc_823D6D7C;
	// mullw r11,r30,r25
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r25.s32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lhz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// lhz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// lhz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mullw r8,r30,r27
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x823ef0f8
	ctx.lr = 0x823D6D74;
	sub_823EF0F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823D6D7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mullw r10,r30,r25
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r25.s32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// mullw r9,r30,r27
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ef0c0
	ctx.lr = 0x823D6DB0;
	sub_823EF0C0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D6C78) {
	__imp__sub_823D6C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6DB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823d6dd4
	if (!ctx.cr6.eq) goto loc_823D6DD4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x823d6c78
	sub_823D6C78(ctx, base);
	return;
loc_823D6DD4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x823d6b10
	sub_823D6B10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D6DB8) {
	__imp__sub_823D6DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D6DDC) {
	__imp__sub_823D6DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6DE0) {
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
	// lhz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed7c8
	ctx.lr = 0x823D6E20;
	sub_823ED7C8(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x823b2540
	ctx.lr = 0x823D6E28;
	sub_823B2540(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D6DE0) {
	__imp__sub_823D6DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6E40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhz r4,66(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhz r5,68(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x823ed838
	ctx.lr = 0x823D6E94;
	sub_823ED838(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x823b2540
	ctx.lr = 0x823D6E9C;
	sub_823B2540(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D6E40) {
	__imp__sub_823D6E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6EB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,66(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ed6f0
	ctx.lr = 0x823D6F0C;
	sub_823ED6F0(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x823b2540
	ctx.lr = 0x823D6F14;
	sub_823B2540(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D6EB8) {
	__imp__sub_823D6EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6F30) {
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
	// lhz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ed760
	ctx.lr = 0x823D6F70;
	sub_823ED760(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x823b2540
	ctx.lr = 0x823D6F78;
	sub_823B2540(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D6F30) {
	__imp__sub_823D6F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D6F90) {
	__imp__sub_823D6F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D6F94) {
	__imp__sub_823D6F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D6F98) {
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
	// srw r11,r4,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// srw r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823d6fc4
	if (ctx.cr6.gt) goto loc_823D6FC4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D6FC4:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823d6fd8
	if (!ctx.cr6.gt) goto loc_823D6FD8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823D6FD8:
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823d6858
	ctx.lr = 0x823D6FF0;
	sub_823D6858(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D6F98) {
	__imp__sub_823D6F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7008) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x823d6858
	ctx.lr = 0x823D7034;
	sub_823D6858(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823D7008) {
	__imp__sub_823D7008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D704C) {
	__imp__sub_823D704C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D7058;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,0,14,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30000;
	// sth r4,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r4.u16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r5,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r5.u16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// sth r6,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r6.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// rlwinm r4,r7,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// beq cr6,0x823d70e4
	if (ctx.cr6.eq) goto loc_823D70E4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d70d0
	if (ctx.cr6.eq) goto loc_823D70D0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d70bc
	if (ctx.cr6.eq) goto loc_823D70BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// bl 0x823d6f30
	ctx.lr = 0x823D70B8;
	sub_823D6F30(ctx, base);
	// b 0x823d70f4
	goto loc_823D70F4;
loc_823D70BC:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x823d6e40
	ctx.lr = 0x823D70CC;
	sub_823D6E40(ctx, base);
	// b 0x823d70f4
	goto loc_823D70F4;
loc_823D70D0:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x823d6de0
	ctx.lr = 0x823D70E0;
	sub_823D6DE0(ctx, base);
	// b 0x823d70f4
	goto loc_823D70F4;
loc_823D70E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x823d6eb8
	ctx.lr = 0x823D70F4;
	sub_823D6EB8(ctx, base);
loc_823D70F4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d6858
	ctx.lr = 0x823D710C;
	sub_823D6858(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7050) {
	__imp__sub_823D7050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D7120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x823d7050
	ctx.lr = 0x823D7140;
	sub_823D7050(ctx, base);
	// rlwinm r11,r27,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x1;
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// sth r30,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// sth r29,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r29.u16);
	// sth r28,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r28.u16);
	// bl 0x823b2570
	ctx.lr = 0x823D7160;
	sub_823B2570(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7118) {
	__imp__sub_823D7118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7168) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D7168) {
	__imp__sub_823D7168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7170) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D7170) {
	__imp__sub_823D7170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D7180;
	__savegprlr_28(ctx, base);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7198
	if (!ctx.cr6.gt) goto loc_823D7198;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r30,512
	ctx.r30.s64 = 512;
	// b 0x823d719c
	goto loc_823D719C;
loc_823D7198:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823D719C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d71c4
	if (!ctx.cr6.gt) goto loc_823D71C4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D71B8:
	// dcbt r10,r3
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d71b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D71B8;
loc_823D71C4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d71dc
	if (!ctx.cr6.gt) goto loc_823D71DC;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r31,512
	ctx.r31.s64 = 512;
	// b 0x823d71e0
	goto loc_823D71E0;
loc_823D71DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823D71E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d7208
	if (!ctx.cr6.gt) goto loc_823D7208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D71FC:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d71fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D71FC;
loc_823D7208:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d7314
	if (ctx.cr6.eq) goto loc_823D7314;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// addi r9,r9,-5664
	ctx.r9.s64 = ctx.r9.s64 + -5664;
	// addi r28,r8,-31248
	ctx.r28.s64 = ctx.r8.s64 + -31248;
	// addi r11,r11,-5648
	ctx.r11.s64 = ctx.r11.s64 + -5648;
	// addi r5,r5,-5616
	ctx.r5.s64 = ctx.r5.s64 + -5616;
	// addi r29,r29,-5632
	ctx.r29.s64 = ctx.r29.s64 + -5632;
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v1,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D725C:
	// dcbt r30,r3
	// dcbt r31,r4
	// lvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// vupkd3d128 v0,v63,8
	temp.u32 = ctx.v63.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v0 = vTemp;
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// vspltw128 v30,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v3,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// vupkd3d128 v13,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v13 = vTemp;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// vmaddfp v5,v0,v11,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v6,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v60,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// lvx128 v0,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v4,v13,v11,v10
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v7,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v0,v30,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x55));
	// vspltw v29,v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xAA));
	// vor128 v59,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vspltw v4,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v28,v58,v0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v3,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v57,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vspltw128 v31,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vspltw128 v5,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v2,v57,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v30,v29,v13,v28
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v0,v31,v13,v2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v4,v12,v30
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v0,v5,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v6,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v13,v8,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v8,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vperm128 v56,v12,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// stvx128 v56,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v63,v0,2,1,1
	vTemp.s32[0] = int32_t(ctx.v0.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v0.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v0.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v0.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v63.u32[1] = temp.u32;
	// vpkd3d128 v63,v13,2,1,0
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v63.u32[0] = temp.u32;
	// stvx128 v63,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x823d725c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D725C;
loc_823D7314:
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7178) {
	__imp__sub_823D7178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D7320;
	__savegprlr_25(ctx, base);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7338
	if (!ctx.cr6.gt) goto loc_823D7338;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,512
	ctx.r29.s64 = 512;
	// b 0x823d733c
	goto loc_823D733C;
loc_823D7338:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823D733C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d7364
	if (!ctx.cr6.gt) goto loc_823D7364;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D7358:
	// dcbt r10,r3
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d7358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7358;
loc_823D7364:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d737c
	if (!ctx.cr6.gt) goto loc_823D737C;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r30,512
	ctx.r30.s64 = 512;
	// b 0x823d7380
	goto loc_823D7380;
loc_823D737C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823D7380:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d73a8
	if (!ctx.cr6.gt) goto loc_823D73A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D739C:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d739c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D739C;
loc_823D73A8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d752c
	if (ctx.cr6.eq) goto loc_823D752C;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-31248
	ctx.r11.s64 = ctx.r11.s64 + -31248;
	// addi r10,r10,-5648
	ctx.r10.s64 = ctx.r10.s64 + -5648;
	// lis r28,-32252
	ctx.r28.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r26,-31771
	ctx.r26.s64 = -2082144256;
	// addi r25,r1,-80
	ctx.r25.s64 = ctx.r1.s64 + -80;
	// addi r8,r8,-5664
	ctx.r8.s64 = ctx.r8.s64 + -5664;
	// addi r5,r5,-5616
	ctx.r5.s64 = ctx.r5.s64 + -5616;
	// addi r31,r31,-5632
	ctx.r31.s64 = ctx.r31.s64 + -5632;
	// addi r11,r28,-5808
	ctx.r11.s64 = ctx.r28.s64 + -5808;
	// addi r28,r27,-5840
	ctx.r28.s64 = ctx.r27.s64 + -5840;
	// stvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r26,-25280
	ctx.r10.s64 = ctx.r26.s64 + -25280;
	// lvx128 v6,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v8,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,4
	ctx.r31.s64 = 4;
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D742C:
	// dcbt r29,r3
	// dcbt r30,r4
	// lvx128 v61,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// vupkd3d128 v0,v61,8
	temp.u32 = ctx.v61.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v0 = vTemp;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lvx128 v59,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vspltw128 v11,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vupkd3d128 v13,v60,8
	temp.u32 = ctx.v60.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v13 = vTemp;
	// lvlx128 v58,r4,r31
	temp.u32 = ctx.r4.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v3,v0,v8,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v10,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vspltw128 v9,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v58,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmaddfp v2,v13,v8,v7
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v4,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v30,v0,v11,v4
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v4,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vcuxwfp128 v56,v57,16
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v54,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v7,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// vspltw128 v53,v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x55));
	// vspltw v29,v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xAA));
	// vspltw v31,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// vspltw128 v52,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0x55));
	// vmulfp128 v28,v53,v0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v26,v2,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0xAA));
	// vmaddfp v27,v10,v13,v30
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vspltw v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0xFF));
	// vsubfp128 v3,v62,v56
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v25,v52,v0
	simde_mm_store_ps(ctx.v25.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r10,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v0,v11,v4
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v28,v29,v13,v28
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v29,v26,v13,v25
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v25.f32)));
	// lvx128 v13,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v30,v31,v12,v28
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v31,v9,v12,v27
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v4,v2,v12,v29
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddfp v0,v9,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v30,v5,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v4,v5,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v0,v0,v56
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vpkd3d128 v61,v13,2,1,1
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v61.u32[1] = temp.u32;
	// vmaddfp v0,v3,v31,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkd3d128 v61,v12,2,1,0
	vTemp.s32[0] = int32_t(ctx.v12.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v12.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v12.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v12.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v61.u32[0] = temp.u32;
	// stvx128 v61,r7,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v51,v0,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v7,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// stvx128 v51,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x823d742c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D742C;
loc_823D752C:
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7318) {
	__imp__sub_823D7318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D7538;
	__savegprlr_26(ctx, base);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7550
	if (!ctx.cr6.gt) goto loc_823D7550;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r28,512
	ctx.r28.s64 = 512;
	// b 0x823d7554
	goto loc_823D7554;
loc_823D7550:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823D7554:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d757c
	if (!ctx.cr6.gt) goto loc_823D757C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D7570:
	// dcbt r10,r3
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d7570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7570;
loc_823D757C:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7594
	if (!ctx.cr6.gt) goto loc_823D7594;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,512
	ctx.r29.s64 = 512;
	// b 0x823d7598
	goto loc_823D7598;
loc_823D7594:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823D7598:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d75c0
	if (!ctx.cr6.gt) goto loc_823D75C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D75B4:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d75b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D75B4;
loc_823D75C0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d776c
	if (ctx.cr6.eq) goto loc_823D776C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5648
	ctx.r11.s64 = ctx.r11.s64 + -5648;
	// addi r10,r10,-5664
	ctx.r10.s64 = ctx.r10.s64 + -5664;
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// lvx128 v4,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r26,-31771
	ctx.r26.s64 = -2082144256;
	// addi r8,r8,-31248
	ctx.r8.s64 = ctx.r8.s64 + -31248;
	// addi r5,r5,-5616
	ctx.r5.s64 = ctx.r5.s64 + -5616;
	// addi r31,r31,-5632
	ctx.r31.s64 = ctx.r31.s64 + -5632;
	// addi r30,r30,-5808
	ctx.r30.s64 = ctx.r30.s64 + -5808;
	// addi r11,r27,-5840
	ctx.r11.s64 = ctx.r27.s64 + -5840;
	// addi r10,r26,-25280
	ctx.r10.s64 = ctx.r26.s64 + -25280;
	// lvx128 v1,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v8,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,4
	ctx.r30.s64 = 4;
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,8
	ctx.r31.s64 = 8;
loc_823D7640:
	// dcbt r28,r3
	// dcbt r29,r4
	// lvx128 v61,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v0,v61,8
	temp.u32 = ctx.v61.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v0 = vTemp;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// vspltw128 v60,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lvx128 v59,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// vspltw128 v11,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// lvlx128 v58,r4,r30
	temp.u32 = ctx.r4.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v2,v0,v8,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v0,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vupkd3d128 v12,v60,8
	temp.u32 = ctx.v60.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vspltw128 v9,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// lvlx128 v57,r4,r31
	temp.u32 = ctx.r4.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v58,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v3,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v57,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v31,v12,v8,v6
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v29,v13,v0,v3
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v3,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// vcuxwfp128 v54,v56,16
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// vspltw128 v53,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r4,10
	ctx.r4.s64 = ctx.r4.s64 + 10;
	// vor128 v52,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v2,r10,r5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v51,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0x55));
	// vspltw128 v50,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0x55));
	// vmaddfp v25,v11,v12,v29
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vspltw128 v28,v52,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xAA));
	// vmaddfp v29,v2,v0,v3
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw v26,v31,1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xAA));
	// vmulfp128 v27,v51,v13
	simde_mm_store_ps(ctx.v27.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v3,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v24,v50,v13
	simde_mm_store_ps(ctx.v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v2,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v3,v3,v0,v2
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v30,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// vspltw v31,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xFF));
	// vcuxwfp128 v13,v55,16
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v28,v28,v12,v27
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v26,v26,v12,v24
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v24.f32)));
	// lvx128 v12,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v29,v11,v12,v29
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// lvx128 v12,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v12,v3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp128 v49,v54,v13
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v27,v30,v10,v28
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v30,v31,v10,v26
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v26.f32)));
	// vmaddfp v28,v9,v10,v25
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v25.f32)));
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v9,v10,v29
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddfp v0,v9,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v31,v62,v49
	simde_mm_store_ps(ctx.v31.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vmaddfp v30,v30,v4,v5
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v12,v10,v54
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vpkd3d128 v61,v30,2,1,1
	vTemp.s32[0] = int32_t(ctx.v30.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v30.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v30.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v30.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v61.u32[1] = temp.u32;
	// vmaddfp v0,v13,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v31,v28,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v48,v0,v53,v1
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmaddfp v0,v27,v4,v5
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v27.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v48,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v61,v0,2,1,0
	vTemp.s32[0] = int32_t(ctx.v0.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v0.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v0.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v0.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v61.u32[0] = temp.u32;
	// stvx128 v61,r7,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x823d7640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7640;
loc_823D776C:
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7530) {
	__imp__sub_823D7530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823D7778;
	__savegprlr_25(ctx, base);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7790
	if (!ctx.cr6.gt) goto loc_823D7790;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r26,512
	ctx.r26.s64 = 512;
	// b 0x823d7794
	goto loc_823D7794;
loc_823D7790:
	// li r26,0
	ctx.r26.s64 = 0;
loc_823D7794:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d77bc
	if (!ctx.cr6.gt) goto loc_823D77BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D77B0:
	// dcbt r10,r3
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d77b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D77B0;
loc_823D77BC:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d77d4
	if (!ctx.cr6.gt) goto loc_823D77D4;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r27,512
	ctx.r27.s64 = 512;
	// b 0x823d77d8
	goto loc_823D77D8;
loc_823D77D4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_823D77D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d7800
	if (!ctx.cr6.gt) goto loc_823D7800;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D77F4:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d77f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D77F4;
loc_823D7800:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d79ec
	if (ctx.cr6.eq) goto loc_823D79EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5648
	ctx.r11.s64 = ctx.r11.s64 + -5648;
	// addi r10,r10,-5664
	ctx.r10.s64 = ctx.r10.s64 + -5664;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lvx128 v4,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-31771
	ctx.r28.s64 = -2082144256;
	// lvx128 v5,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// addi r5,r5,-5616
	ctx.r5.s64 = ctx.r5.s64 + -5616;
	// addi r30,r30,-5808
	ctx.r30.s64 = ctx.r30.s64 + -5808;
	// addi r25,r31,-5632
	ctx.r25.s64 = ctx.r31.s64 + -5632;
	// addi r11,r29,-5840
	ctx.r11.s64 = ctx.r29.s64 + -5840;
	// addi r10,r28,-25280
	ctx.r10.s64 = ctx.r28.s64 + -25280;
	// addi r9,r9,-31248
	ctx.r9.s64 = ctx.r9.s64 + -31248;
	// lvx128 v6,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v8,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,32
	ctx.r31.s64 = 32;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,8
	ctx.r28.s64 = 8;
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,4
	ctx.r29.s64 = 4;
	// li r30,12
	ctx.r30.s64 = 12;
loc_823D7884:
	// dcbt r26,r3
	// dcbt r27,r4
	// lvx128 v60,r3,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v0,v60,8
	temp.u32 = ctx.v60.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v0 = vTemp;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// vspltw128 v59,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lvx128 v58,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvlx128 v57,r4,r28
	temp.u32 = ctx.r4.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v2,v0,v8,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v0,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x55));
	// vupkd3d128 v13,v59,8
	temp.u32 = ctx.v59.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v13 = vTemp;
	// lvlx128 v56,r4,r29
	temp.u32 = ctx.r4.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v55,v57,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvlx128 v53,r4,r30
	temp.u32 = ctx.r4.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v11,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v54,v56,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v10,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vmaddfp v31,v13,v8,v6
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// vspltw128 v13,v58,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xAA));
	// vcuxwfp128 v62,v55,16
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// vcuxwfp128 v52,v54,16
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// vperm128 v51,v53,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// vspltw128 v50,v58,3
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x0));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vor128 v49,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmaddfp v2,v11,v0,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v3,r10,r5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,14
	ctx.r4.s64 = ctx.r4.s64 + 14;
	// vspltw128 v48,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x55));
	// vspltw128 v47,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0x55));
	// vspltw128 v29,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xAA));
	// vspltw v25,v31,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xAA));
	// vmulfp128 v28,v48,v11
	simde_mm_store_ps(ctx.v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw v31,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xFF));
	// vmulfp128 v24,v47,v11
	simde_mm_store_ps(ctx.v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v30,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// vaddfp128 v46,v52,v62
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaddfp v26,v13,v10,v2
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vor128 v2,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vmaddfp v27,v29,v10,v28
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v29,v25,v10,v24
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v25.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v24.f32)));
	// lvx128 v10,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v28,v11,v0,v3
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v11,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v3,v11,v0,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v26,v12,v9,v26
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v26.f32)));
	// vmaddfp v25,v30,v9,v27
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v29,v31,v9,v29
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v31,v13,v10,v28
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// lvx128 v10,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v13,v10,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v3,r9,r31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v28,v29,v4,v5
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v31,v12,v9,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// lvx128 v9,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v29,v25,v4,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v25.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v27,v12,v11,v10
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v11,v51,16
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// vpkd3d128 v60,v28,2,1,1
	vTemp.s32[0] = int32_t(ctx.v28.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v28.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v28.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v28.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v60.u32[1] = temp.u32;
	// vmulfp128 v30,v31,v52
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v52.f32)));
	// lvx128 v31,r9,r5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v3,v3,v0,v31
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vaddfp128 v45,v46,v11
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vpkd3d128 v60,v29,2,1,0
	vTemp.s32[0] = int32_t(ctx.v29.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v29.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v29.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v29.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v60.u32[0] = temp.u32;
	// vmaddfp v2,v2,v27,v30
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vsubfp128 v0,v61,v45
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vmaddfp v13,v13,v9,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// stvx128 v60,r7,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v12,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v11,v13,v2
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v0,v0,v26,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vperm128 v44,v0,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// stvx128 v44,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x823d7884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7884;
loc_823D79EC:
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7770) {
	__imp__sub_823D7770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D79F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lvx128 v29,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lvx128 v13,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lvx128 v12,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r10,r10,-5648
	ctx.r10.s64 = ctx.r10.s64 + -5648;
	// addi r9,r9,-5664
	ctx.r9.s64 = ctx.r9.s64 + -5664;
	// addi r8,r8,-31248
	ctx.r8.s64 = ctx.r8.s64 + -31248;
	// addi r5,r5,-5616
	ctx.r5.s64 = ctx.r5.s64 + -5616;
	// addi r4,r4,-5632
	ctx.r4.s64 = ctx.r4.s64 + -5632;
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D7A54:
	// dcbt r6,r3
	// lvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v6,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// vupkd3d128 v7,v63,8
	temp.u32 = ctx.v63.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v7 = vTemp;
	// vspltw128 v4,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vupkd3d128 v5,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v5 = vTemp;
	// vmaddfp v6,v13,v6,v29
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vspltw128 v30,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vmaddfp v7,v7,v11,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v60,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vmaddfp v5,v5,v11,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v31,v4,v12,v6
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw128 v59,v7,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x55));
	// vspltw v2,v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xAA));
	// vspltw128 v58,v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x55));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vspltw v7,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v3,v59,v13
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v4,v5,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xAA));
	// vmulfp128 v5,v58,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v31,v30,v0,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v3,v2,v12,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v5,v4,v12,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vperm128 v57,v31,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmaddfp v6,v6,v0,v3
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v7,v7,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v57,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v6,v6,v8,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v7,v7,v8,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vpkd3d128 v63,v7,2,1,1
	vTemp.s32[0] = int32_t(ctx.v7.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v7.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v7.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v7.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v63.u32[1] = temp.u32;
	// vpkd3d128 v63,v6,2,1,0
	vTemp.s32[0] = int32_t(ctx.v6.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v6.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v6.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v6.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v63.u32[0] = temp.u32;
	// stvx128 v63,r7,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x823d7a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7A54;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D79F0) {
	__imp__sub_823D79F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D7AEC) {
	__imp__sub_823D7AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D7AF8;
	__savegprlr_27(ctx, base);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// ble cr6,0x823d7b14
	if (!ctx.cr6.gt) goto loc_823D7B14;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r28,512
	ctx.r28.s64 = 512;
	// b 0x823d7b18
	goto loc_823D7B18;
loc_823D7B14:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823D7B18:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d7b40
	if (!ctx.cr6.gt) goto loc_823D7B40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D7B34:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d7b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7B34;
loc_823D7B40:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d7c7c
	if (ctx.cr6.eq) goto loc_823D7C7C;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r27,r3,-5632
	ctx.r27.s64 = ctx.r3.s64 + -5632;
	// addi r11,r11,-5648
	ctx.r11.s64 = ctx.r11.s64 + -5648;
	// addi r10,r10,-5664
	ctx.r10.s64 = ctx.r10.s64 + -5664;
	// addi r9,r9,-31248
	ctx.r9.s64 = ctx.r9.s64 + -31248;
	// addi r7,r7,-5616
	ctx.r7.s64 = ctx.r7.s64 + -5616;
	// lvx128 v4,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,16
	ctx.r29.s64 = 16;
	// lvx128 v31,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	ctx.r30.s64 = 32;
	// lvx128 v2,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D7BA0:
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x823d7c64
	if (ctx.cr6.eq) goto loc_823D7C64;
	// subf r7,r4,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r4.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D7BD0:
	// dcbt r28,r11
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v7,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v11,v12,v11,v30
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vspltw128 v60,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vupkd3d128 v10,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v10 = vTemp;
	// vupkd3d128 v9,v60,8
	temp.u32 = ctx.v60.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v9 = vTemp;
	// vmaddfp v10,v10,v4,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v9,v9,v4,v3
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v11,v8,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw128 v59,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vspltw v5,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw128 v58,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x55));
	// vspltw v8,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xAA));
	// vmaddfp v6,v7,v0,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw v11,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v9,v58,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v59,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vperm128 v57,v6,v61,v1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmaddfp v9,v8,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v7,v5,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// stvx128 v57,r7,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmaddfp v11,v11,v0,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v10,v0,v7
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v11,v11,v31,v2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v10,v10,v31,v2
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vpkd3d128 v62,v11,2,1,1
	vTemp.s32[0] = int32_t(ctx.v11.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v11.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v11.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v11.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v62.u32[1] = temp.u32;
	// vpkd3d128 v62,v10,2,1,0
	vTemp.s32[0] = int32_t(ctx.v10.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v10.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v10.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v10.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v62.u32[0] = temp.u32;
	// stvx128 v62,r7,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x823d7bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7BD0;
loc_823D7C64:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x823d7ba0
	if (!ctx.cr0.eq) goto loc_823D7BA0;
loc_823D7C7C:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7AF0) {
	__imp__sub_823D7AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D7C88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d7cd4
	if (ctx.cr6.eq) goto loc_823D7CD4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823d7178
	ctx.lr = 0x823D7CC4;
	sub_823D7178(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823D7CD4:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d7d18
	if (ctx.cr6.eq) goto loc_823D7D18;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823d7318
	ctx.lr = 0x823D7CFC;
	sub_823D7318(ctx, base);
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823D7D18:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d7d5c
	if (ctx.cr6.eq) goto loc_823D7D5C;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823d7530
	ctx.lr = 0x823D7D40;
	sub_823D7530(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823D7D5C:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d7d84
	if (ctx.cr6.eq) goto loc_823D7D84;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823d7770
	ctx.lr = 0x823D7D84;
	sub_823D7770(ctx, base);
loc_823D7D84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7C80) {
	__imp__sub_823D7C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D7D8C) {
	__imp__sub_823D7D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7D90) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bne cr6,0x823d7db4
	if (!ctx.cr6.eq) goto loc_823D7DB4;
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// b 0x823d7af0
	sub_823D7AF0(ctx, base);
	return;
loc_823D7DB4:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// b 0x823d7c80
	sub_823D7C80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7D90) {
	__imp__sub_823D7D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f13,f12,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f7,16(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f13,f6,f5,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f12,f4,f3,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,24(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f2,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f2,f1,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,32(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f0,f7,f6,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f5,f4,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f13,36(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f9,f8,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,40(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f9,f1,f11,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f3,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f7,48(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmadds f12,f0,f4,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f11,f6,f5,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,52(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f3,f2,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,56(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D7DC0) {
	__imp__sub_823D7DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D7FBC) {
	__imp__sub_823D7FBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D7FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823D7FC8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823ddff4
	ctx.lr = 0x823D7FD0;
	__savefpr_15(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12720(r1)
	ea = -12720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d82fc
	if (ctx.cr6.eq) goto loc_823D82FC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lfs f30,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r11,17280
	ctx.r25.s64 = ctx.r11.s64 + 17280;
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r10,-8688
	ctx.r24.s64 = ctx.r10.s64 + -8688;
loc_823D8020:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,-3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -3, ctx.xer);
	// bne cr6,0x823d8034
	if (!ctx.cr6.eq) goto loc_823D8034;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x823d82f4
	goto loc_823D82F4;
loc_823D8034:
	// lbz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823d828c
	if (ctx.cr6.eq) goto loc_823D828C;
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x823d828c
	if (!ctx.cr6.lt) goto loc_823D828C;
	// addi r9,r1,220
	ctx.r9.s64 = ctx.r1.s64 + 220;
	// rlwinm r8,r7,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r6,r6,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r6.s64;
	// rlwinm r11,r7,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7C;
loc_823D8084:
	// srawi r5,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 5;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d8270
	if (ctx.cr6.eq) goto loc_823D8270;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// lfs f2,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f26,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// stfs f26,192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f0,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f28,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f25,f12,f9
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f29,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f24,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f23,f0,f9
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f21,f1,f7
	ctx.f21.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f22,f0,f7
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f20,f8,f4
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f26,f5,f3
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fadds f18,f27,f25
	ctx.f18.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// fmuls f17,f13,f6
	ctx.f17.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f16,f8,f3
	ctx.f16.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f19,f8,f6
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fadds f27,f27,f10
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f10.f64));
	// fmuls f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fadds f25,f25,f10
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f10.f64));
	// fadds f13,f9,f22
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f22.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f23,f21
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f21.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f8,f31,f18
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f18.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f15,f20,f26
	ctx.f15.f64 = double(float(ctx.f20.f64 + ctx.f26.f64));
	// fadds f11,f1,f7
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f7,f1
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f16,f17
	ctx.f1.f64 = double(float(ctx.f16.f64 + ctx.f17.f64));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f1,f19,f3
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f3.f64));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f7,f31,f27
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f12,f23,f21
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f21.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f9,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 - ctx.f9.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f6,f31,f25
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f1,f20,f2
	ctx.f1.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// fadds f2,f26,f2
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fsubs f27,f31,f15
	ctx.f27.f64 = double(float(ctx.f31.f64 - ctx.f15.f64));
	// fmuls f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmadds f7,f24,f7,f0
	ctx.f7.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 + ctx.f0.f64));
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// fmadds f13,f24,f12,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfsx f0,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f24,f11,f8
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f12,f5,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f5,f31,f1
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f4,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f3,f19
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// fsubs f1,f16,f17
	ctx.f1.f64 = double(float(ctx.f16.f64 - ctx.f17.f64));
	// stfs f3,176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f12,f31,f2
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r5,r8,-12
	ctx.r5.s64 = ctx.r8.s64 + -12;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fnmadds f10,f28,f10,f7
	ctx.f10.f64 = double(float(-(ctx.f28.f64 * ctx.f10.f64 + ctx.f7.f64)));
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fnmadds f8,f29,f6,f13
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f6.f64 + ctx.f13.f64)));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fnmadds f7,f29,f9,f11
	ctx.f7.f64 = double(float(-(ctx.f29.f64 * ctx.f9.f64 + ctx.f11.f64)));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x823d7dc0
	ctx.lr = 0x823D8260;
	sub_823D7DC0(ctx, base);
	// stfs f30,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f30,16(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f30,32(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// stfs f31,48(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
loc_823D8270:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// rlwinm r11,r7,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7C;
	// blt cr6,0x823d8084
	if (ctx.cr6.lt) goto loc_823D8084;
loc_823D828C:
	// cmpwi cr6,r27,-4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -4, ctx.xer);
	// ble cr6,0x823d82e4
	if (!ctx.cr6.gt) goto loc_823D82E4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,88(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// rlwinm r8,r29,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d82d4
	if (!ctx.cr6.eq) goto loc_823D82D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x823d7af0
	ctx.lr = 0x823D82D0;
	sub_823D7AF0(ctx, base);
	// b 0x823d82f4
	goto loc_823D82F4;
loc_823D82D4:
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x823d7c80
	ctx.lr = 0x823D82E0;
	sub_823D7C80(ctx, base);
	// b 0x823d82f4
	goto loc_823D82F4;
loc_823D82E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r31,r11,-68
	ctx.r31.s64 = ctx.r11.s64 + -68;
loc_823D82F4:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x823d8020
	if (!ctx.cr0.eq) goto loc_823D8020;
loc_823D82FC:
	// addi r1,r1,12720
	ctx.r1.s64 = ctx.r1.s64 + 12720;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de040
	ctx.lr = 0x823D8308;
	__restfpr_15(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D7FC0) {
	__imp__sub_823D7FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D830C) {
	__imp__sub_823D830C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823D8318;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x823D8320;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r25,4576(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4576);
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D8344:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d8344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8344;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf. r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d8408
	if (ctx.cr0.lt) goto loc_823D8408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lfs f29,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f28.f64 = double(temp.f32);
	// lwz r26,14480(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14480);
loc_823D8374:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
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
	// fsubs f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d8430
	if (!ctx.cr6.gt) goto loc_823D8430;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823D83E4:
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
loc_823D83FC:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf. r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823d8374
	if (!ctx.cr0.lt) goto loc_823D8374;
loc_823D8408:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d84ec
	if (ctx.cr6.eq) goto loc_823D84EC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x823D842C;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823D8430:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d8444
	if (!ctx.cr6.lt) goto loc_823D8444;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823d83e4
	goto loc_823D83E4;
loc_823D8444:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r27,r10,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d84cc
	if (!ctx.cr6.lt) goto loc_823D84CC;
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
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfsx f9,r31,r29
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfsx f8,r31,r28
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// bge cr6,0x823d84ac
	if (!ctx.cr6.lt) goto loc_823D84AC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823d8310
	ctx.lr = 0x823D84A4;
	sub_823D8310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d8500
	if (!ctx.cr6.eq) goto loc_823D8500;
loc_823D84AC:
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfsx f12,r31,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfsx f11,r31,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// b 0x823d83fc
	goto loc_823D83FC;
loc_823D84CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823d8310
	ctx.lr = 0x823D84DC;
	sub_823D8310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d8500
	if (!ctx.cr6.eq) goto loc_823D8500;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// b 0x823d83fc
	goto loc_823D83FC;
loc_823D84EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x823D84FC;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823D8500:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x823D8510;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8310) {
	__imp__sub_823D8310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D8514) {
	__imp__sub_823D8514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8518) {
	PPC_FUNC_PROLOGUE();
	// b 0x823d8310
	sub_823D8310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8518) {
	__imp__sub_823D8518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D851C) {
	__imp__sub_823D851C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D8528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,8456(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// bl 0x823d11b0
	ctx.lr = 0x823D8554;
	sub_823D11B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823d857c
	if (!ctx.cr6.eq) goto loc_823D857C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d8668
	if (ctx.cr6.eq) goto loc_823D8668;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82102540
	ctx.lr = 0x823D8574;
	sub_82102540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823D857C:
	// lwsync 
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r7,44
	ctx.r5.s64 = ctx.r7.s64 + 44;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823d860c
	if (!ctx.cr6.gt) goto loc_823D860C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
loc_823D85BC:
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
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f4,f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f2,f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f6,f9,f5,f2
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f5,f10,f7,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f4,f11,f3,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f3,f8
	ctx.cr6.compare(ctx.f3.f64, ctx.f8.f64);
	// ble cr6,0x823d8660
	if (!ctx.cr6.gt) goto loc_823D8660;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823d85bc
	if (ctx.cr6.lt) goto loc_823D85BC;
loc_823D860C:
	// lhz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r3,60(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// bl 0x823d8518
	ctx.lr = 0x823D8618;
	sub_823D8518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d8660
	if (ctx.cr6.eq) goto loc_823D8660;
	// lwz r3,112(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// bl 0x82102568
	ctx.lr = 0x823D8628;
	sub_82102568(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1048
	ctx.lr = 0x823D8640;
	sub_823D1048(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r7,r8,19,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF;
	// stbx r11,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823D8660:
	// lwz r3,112(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// bl 0x82102540
	ctx.lr = 0x823D8668;
	sub_82102540(ctx, base);
loc_823D8668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8520) {
	__imp__sub_823D8520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D8678;
	__savegprlr_26(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d8750
	if (ctx.cr6.eq) goto loc_823D8750;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,17280
	ctx.r29.s64 = ctx.r11.s64 + 17280;
	// lfs f10,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
loc_823D869C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823d8740
	if (!ctx.cr6.lt) goto loc_823D8740;
	// rlwinm r30,r28,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D86B4:
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// andc r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// lbzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d8730
	if (!ctx.cr6.eq) goto loc_823D8730;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ble cr6,0x823d872c
	if (!ctx.cr6.gt) goto loc_823D872C;
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
loc_823D86F0:
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// ble cr6,0x823d8730
	if (!ctx.cr6.gt) goto loc_823D8730;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823d86f0
	if (ctx.cr6.lt) goto loc_823D86F0;
loc_823D872C:
	// stbx r26,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r26.u8);
loc_823D8730:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823d86b4
	if (ctx.cr6.lt) goto loc_823D86B4;
loc_823D8740:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823d869c
	if (ctx.cr6.lt) goto loc_823D869C;
loc_823D8750:
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8670) {
	__imp__sub_823D8670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D8754) {
	__imp__sub_823D8754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D8760;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lhz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r11,4608
	ctx.r7.s64 = ctx.r11.s64 + 4608;
	// lbz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r6,r9,6
	ctx.r6.s64 = ctx.r9.s64 + 6;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8456);
	// addi r10,r11,648
	ctx.r10.s64 = ctx.r11.s64 + 648;
	// lwz r28,648(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// mullw r4,r8,r28
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// lwzx r27,r5,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x82182618
	ctx.lr = 0x823D87A8;
	sub_82182618(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8670
	ctx.lr = 0x823D87C4;
	sub_823D8670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8758) {
	__imp__sub_823D8758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D87CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D87CC) {
	__imp__sub_823D87CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D87D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823D87D8;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r10,r8,13312
	ctx.r10.s64 = ctx.r8.s64 + 13312;
	// addi r4,r11,-24156
	ctx.r4.s64 = ctx.r11.s64 + -24156;
	// sth r9,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r9.u16);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// ori r5,r8,41376
	ctx.r5.u64 = ctx.r8.u64 | 41376;
	// lwzx r19,r6,r4
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r6,r11,4608
	ctx.r6.s64 = ctx.r11.s64 + 4608;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r3,9
	ctx.r3.s64 = 589824;
	// addis r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 655360;
	// rlwinm r29,r11,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r10,8456(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8456);
	// ori r6,r4,41408
	ctx.r6.u64 = ctx.r4.u64 | 41408;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r25,r10,52
	ctx.r25.s64 = ctx.r10.s64 + 52;
	// mullw r10,r29,r11
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// lwzx r22,r31,r6
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r4,r3,41412
	ctx.r4.u64 = ctx.r3.u64 | 41412;
	// addi r3,r8,-24120
	ctx.r3.s64 = ctx.r8.s64 + -24120;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r23,r31,r4
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r21,r5,r3
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// beq cr6,0x823d88ac
	if (ctx.cr6.eq) goto loc_823D88AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_823D88AC:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r7,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r7.s64;
	// add r20,r11,r26
	ctx.r20.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r18,1
	ctx.r18.s64 = 1;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823D88C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217e4c8
	ctx.lr = 0x823D88CC;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d8aa4
	if (ctx.cr6.eq) goto loc_823D8AA4;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r11,r7,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d88c4
	if (!ctx.cr6.eq) goto loc_823D88C4;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x823d8984
	if (!ctx.cr6.eq) goto loc_823D8984;
	// lhzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x823d88c4
	if (ctx.cr6.eq) goto loc_823D88C4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 524288;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-88
	ctx.r11.s64 = ctx.r9.s64 + -88;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823d8978
	if (!ctx.cr6.gt) goto loc_823D8978;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r21
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	ctx.f11.f64 = double(temp.f32);
loc_823D893C:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f8,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f12,f7,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// ble cr6,0x823d88c4
	if (!ctx.cr6.gt) goto loc_823D88C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823d893c
	if (ctx.cr6.lt) goto loc_823D893C;
loc_823D8978:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r18,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r18.u8);
	// b 0x823d88c4
	goto loc_823D88C4;
loc_823D8984:
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// mulli r6,r10,120
	ctx.r6.s64 = ctx.r10.s64 * 120;
	// addi r11,r11,-588
	ctx.r11.s64 = ctx.r11.s64 + -588;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823d89f4
	if (!ctx.cr6.gt) goto loc_823D89F4;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r21
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	ctx.f11.f64 = double(temp.f32);
loc_823D89B8:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f8,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f12,f7,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// ble cr6,0x823d88c4
	if (!ctx.cr6.gt) goto loc_823D88C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823d89b8
	if (ctx.cr6.lt) goto loc_823D89B8;
loc_823D89F4:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x823d8a6c
	if (!ctx.cr6.gt) goto loc_823D8A6C;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
loc_823D8A1C:
	// lfs f8,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f3,f13,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f3,f9,f6,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f1,f11,f8,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f8,f10,f4,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x823d88c4
	if (!ctx.cr6.gt) goto loc_823D88C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x823d8a1c
	if (ctx.cr6.lt) goto loc_823D8A1C;
loc_823D8A6C:
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r10,r10,-588
	ctx.r10.s64 = ctx.r10.s64 + -588;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x823d8a94
	if (ctx.cr6.lt) goto loc_823D8A94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d8520
	ctx.lr = 0x823D8A90;
	sub_823D8520(ctx, base);
	// b 0x823d88c4
	goto loc_823D88C4;
loc_823D8A94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823b7ac8
	ctx.lr = 0x823D8AA0;
	sub_823B7AC8(ctx, base);
	// b 0x823d88c4
	goto loc_823D88C4;
loc_823D8AA4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x823d8adc
	if (ctx.cr6.eq) goto loc_823D8ADC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_823D8ADC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217e4c8
	ctx.lr = 0x823D8AE4;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d8b88
	if (ctx.cr6.eq) goto loc_823D8B88;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r11,r8,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d8adc
	if (!ctx.cr6.eq) goto loc_823D8ADC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r11,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// ble cr6,0x823d8b7c
	if (!ctx.cr6.gt) goto loc_823D8B7C;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r20,4
	ctx.r10.s64 = ctx.r20.s64 + 4;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
loc_823D8B2C:
	// lfs f8,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f5,f3,f13,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f3,f9,f6,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f1,f11,f8,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f8,f10,f4,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x823d8adc
	if (!ctx.cr6.gt) goto loc_823D8ADC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823d8b2c
	if (ctx.cr6.lt) goto loc_823D8B2C;
loc_823D8B7C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r18,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r18.u8);
	// b 0x823d8adc
	goto loc_823D8ADC;
loc_823D8B88:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D87D0) {
	__imp__sub_823D87D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D8B94) {
	__imp__sub_823D8B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D8BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8BC4;
	sub_823C9CA0(ctx, base);
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d8bdc
	if (ctx.cr6.eq) goto loc_823D8BDC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8BDC;
	sub_823C9CA0(ctx, base);
loc_823D8BDC:
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D8BEC;
	sub_823C94D0(ctx, base);
	// addi r5,r31,1256
	ctx.r5.s64 = ctx.r31.s64 + 1256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a9450
	ctx.lr = 0x823D8BFC;
	sub_823A9450(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x823c9528
	ctx.lr = 0x823D8C08;
	sub_823C9528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8B98) {
	__imp__sub_823D8B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8C10) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D8C40;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D8C4C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D8C58;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-29800
	ctx.r3.s64 = ctx.r11.s64 + -29800;
	// bl 0x823c9d38
	ctx.lr = 0x823D8C78;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D8C10) {
	__imp__sub_823D8C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D8C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8CBC;
	sub_823C9CA0(ctx, base);
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d8cd4
	if (ctx.cr6.eq) goto loc_823D8CD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8CD4;
	sub_823C9CA0(ctx, base);
loc_823D8CD4:
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D8CE4;
	sub_823C94D0(ctx, base);
	// addi r5,r31,1744
	ctx.r5.s64 = ctx.r31.s64 + 1744;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a9450
	ctx.lr = 0x823D8CF4;
	sub_823A9450(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x823c9528
	ctx.lr = 0x823D8D00;
	sub_823C9528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8C90) {
	__imp__sub_823D8C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8D08) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D8D38;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D8D44;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D8D50;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-29552
	ctx.r3.s64 = ctx.r11.s64 + -29552;
	// bl 0x823c9d38
	ctx.lr = 0x823D8D70;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D8D08) {
	__imp__sub_823D8D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D8D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8DB4;
	sub_823C9CA0(ctx, base);
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d8dcc
	if (ctx.cr6.eq) goto loc_823D8DCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8DCC;
	sub_823C9CA0(ctx, base);
loc_823D8DCC:
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D8DDC;
	sub_823C94D0(ctx, base);
	// addi r5,r31,2232
	ctx.r5.s64 = ctx.r31.s64 + 2232;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a9450
	ctx.lr = 0x823D8DEC;
	sub_823A9450(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x823c9528
	ctx.lr = 0x823D8DF8;
	sub_823C9528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8D88) {
	__imp__sub_823D8D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8E00) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D8E30;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D8E3C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D8E48;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-29304
	ctx.r3.s64 = ctx.r11.s64 + -29304;
	// bl 0x823c9d38
	ctx.lr = 0x823D8E68;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D8E00) {
	__imp__sub_823D8E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8E80) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8EAC;
	sub_823C9CA0(ctx, base);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D8EBC;
	sub_823C94D0(ctx, base);
	// addi r5,r30,3208
	ctx.r5.s64 = ctx.r30.s64 + 3208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9398
	ctx.lr = 0x823D8ECC;
	sub_823A9398(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823D8ED8;
	sub_823C9528(ctx, base);
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

PPC_WEAK_FUNC(sub_823D8E80) {
	__imp__sub_823D8E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8EF0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D8F20;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D8F2C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D8F38;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// bl 0x823c9d38
	ctx.lr = 0x823D8F58;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D8EF0) {
	__imp__sub_823D8EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D8F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8F9C;
	sub_823C9CA0(ctx, base);
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d8fb4
	if (ctx.cr6.eq) goto loc_823D8FB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D8FB4;
	sub_823C9CA0(ctx, base);
loc_823D8FB4:
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D8FC4;
	sub_823C94D0(ctx, base);
	// addi r5,r31,768
	ctx.r5.s64 = ctx.r31.s64 + 768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a9398
	ctx.lr = 0x823D8FD4;
	sub_823A9398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x823c9528
	ctx.lr = 0x823D8FE0;
	sub_823C9528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D8F70) {
	__imp__sub_823D8F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D8FE8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D9018;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D9024;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D9030;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// bl 0x823c9d38
	ctx.lr = 0x823D9050;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D8FE8) {
	__imp__sub_823D8FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D9070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823D9090;
	sub_823C9CA0(ctx, base);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r31,368
	ctx.r5.s64 = ctx.r31.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823D90A4;
	sub_823C94D0(ctx, base);
	// addi r6,r31,2720
	ctx.r6.s64 = ctx.r31.s64 + 2720;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a9898
	ctx.lr = 0x823D90B8;
	sub_823A9898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823c9528
	ctx.lr = 0x823D90C4;
	sub_823C9528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9068) {
	__imp__sub_823D9068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D90CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D90CC) {
	__imp__sub_823D90CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D90D0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823D9100;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823D910C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823D9118;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28568
	ctx.r3.s64 = ctx.r11.s64 + -28568;
	// bl 0x823c9d38
	ctx.lr = 0x823D9138;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823D90D0) {
	__imp__sub_823D90D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D9158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r28,354
	ctx.r7.s64 = ctx.r28.s64 + 354;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
loc_823D9180:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d91a4
	if (!ctx.cr6.eq) goto loc_823D91A4;
	// stwcx. r26,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823d9180
	if (!ctx.cr0.eq) goto loc_823D9180;
	// b 0x823d91ac
	goto loc_823D91AC;
loc_823D91A4:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823D91AC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d93a0
	if (ctx.cr6.eq) goto loc_823D93A0;
	// bl 0x8236b940
	ctx.lr = 0x823D91BC;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823d91e0
	if (!ctx.cr6.lt) goto loc_823D91E0;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d91e4
	goto loc_823D91E4;
loc_823D91E0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823D91E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 524288;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x823da188
	ctx.lr = 0x823D9200;
	sub_823DA188(ctx, base);
	// cmplwi cr6,r28,17
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 17, ctx.xer);
	// bgt cr6,0x823d934c
	if (ctx.cr6.gt) goto loc_823D934C;
	// lis r12,-32194
	ctx.r12.s64 = -2109865984;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28128
	ctx.r12.s64 = ctx.r12.s64 + -28128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_823D92B8;
	case 1:
		goto loc_823D92C8;
	case 2:
		goto loc_823D92D8;
	case 3:
		goto loc_823D92E8;
	case 4:
		goto loc_823D92F8;
	case 5:
		goto loc_823D9308;
	case 6:
		goto loc_823D9318;
	case 7:
		goto loc_823D9318;
	case 8:
		goto loc_823D932C;
	case 9:
		goto loc_823D933C;
	case 10:
		goto loc_823D933C;
	case 11:
		goto loc_823D933C;
	case 12:
		goto loc_823D933C;
	case 13:
		goto loc_823D9268;
	case 14:
		goto loc_823D9278;
	case 15:
		goto loc_823D9288;
	case 16:
		goto loc_823D9298;
	case 17:
		goto loc_823D92A8;
	default:
		return;
	}
	// lwz r17,-27976(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27976);
	// lwz r17,-27960(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27960);
	// lwz r17,-27944(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27944);
	// lwz r17,-27928(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27928);
	// lwz r17,-27912(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27912);
	// lwz r17,-27896(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27896);
	// lwz r17,-27880(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27880);
	// lwz r17,-27880(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27880);
	// lwz r17,-27860(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27860);
	// lwz r17,-27844(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r17,-27844(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r17,-27844(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r17,-27844(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27844);
	// lwz r17,-28056(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28056);
	// lwz r17,-28040(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28040);
	// lwz r17,-28024(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28024);
	// lwz r17,-28008(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28008);
	// lwz r17,-27992(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27992);
loc_823D9268:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da8d0
	ctx.lr = 0x823D9274;
	sub_823DA8D0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D9278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da9d8
	ctx.lr = 0x823D9284;
	sub_823DA9D8(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D9288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823daae0
	ctx.lr = 0x823D9294;
	sub_823DAAE0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D9298:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dabe8
	ctx.lr = 0x823D92A4;
	sub_823DABE8(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dacf0
	ctx.lr = 0x823D92B4;
	sub_823DACF0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d8fe8
	ctx.lr = 0x823D92C4;
	sub_823D8FE8(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d8c10
	ctx.lr = 0x823D92D4;
	sub_823D8C10(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d8d08
	ctx.lr = 0x823D92E4;
	sub_823D8D08(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d8e00
	ctx.lr = 0x823D92F4;
	sub_823D8E00(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D92F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d90d0
	ctx.lr = 0x823D9304;
	sub_823D90D0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D9308:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d8ef0
	ctx.lr = 0x823D9314;
	sub_823D8EF0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D9318:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r28,-6
	ctx.r4.s64 = ctx.r28.s64 + -6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ddcc0
	ctx.lr = 0x823D9328;
	sub_823DDCC0(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D932C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da838
	ctx.lr = 0x823D9338;
	sub_823DA838(ctx, base);
	// b 0x823d934c
	goto loc_823D934C;
loc_823D933C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r28,-9
	ctx.r4.s64 = ctx.r28.s64 + -9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dae58
	ctx.lr = 0x823D934C;
	sub_823DAE58(ctx, base);
loc_823D934C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da238
	ctx.lr = 0x823D9354;
	sub_823DA238(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823d9378
	if (!ctx.cr6.eq) goto loc_823D9378;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwsync 
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823D9378:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
loc_823D93A0:
	// lwsync 
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9150) {
	__imp__sub_823D9150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D93B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// lfs f0,14152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D93B0) {
	__imp__sub_823D93B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D93F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,4608
	ctx.r11.s64 = ctx.r10.s64 + 4608;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8532
	ctx.r7.s64 = ctx.r11.s64 + 8532;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D93F0) {
	__imp__sub_823D93F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D9414) {
	__imp__sub_823D9414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D9420;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de014
	ctx.lr = 0x823D9428;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f24,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f24.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// frsp f26,f12
	ctx.f26.f64 = double(float(ctx.f12.f64));
	// fdivs f9,f26,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 / ctx.f10.f64));
	// fadds f1,f9,f24
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f24.f64));
	// bl 0x823dde20
	ctx.lr = 0x823D9478;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f25,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823d94a4
	if (ctx.cr6.eq) goto loc_823D94A4;
	// fmr f28,f25
	ctx.f28.f64 = ctx.f25.f64;
	// b 0x823d94a8
	goto loc_823D94A8;
loc_823D94A4:
	// fmr f28,f24
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f24.f64;
loc_823D94A8:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f23,f25
	ctx.f23.f64 = ctx.f25.f64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f0,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// ble cr6,0x823d9594
	if (!ctx.cr6.gt) goto loc_823D9594;
loc_823D94C8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fadds f31,f11,f28
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f31,f31
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fadds f30,f9,f28
	ctx.f30.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// fmuls f1,f8,f27
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// bl 0x823e02f0
	ctx.lr = 0x823D950C;
	sub_823E02F0(ctx, base);
	// fmuls f7,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// frsp f29,f1
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f7,f27
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// bl 0x823e02f0
	ctx.lr = 0x823D951C;
	sub_823E02F0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823d9534
	if (!ctx.cr6.eq) goto loc_823D9534;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// bne cr6,0x823d9534
	if (!ctx.cr6.eq) goto loc_823D9534;
	// fmuls f29,f29,f24
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
loc_823D9534:
	// fadds f0,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x823d955c
	if (!ctx.cr6.eq) goto loc_823D955C;
	// fadds f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fdivs f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f26.f64));
	// stfsx f12,r11,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// b 0x823d9570
	goto loc_823D9570;
loc_823D955C:
	// fmuls f12,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmadds f10,f13,f30,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// stfsx f9,r11,r29
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
loc_823D9570:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f23,f0,f23
	ctx.f23.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823d94c8
	if (ctx.cr6.lt) goto loc_823D94C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bgt cr6,0x823d95ac
	if (ctx.cr6.gt) goto loc_823D95AC;
loc_823D9594:
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f24,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de060
	ctx.lr = 0x823D95A8;
	__restfpr_23(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823D95AC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// fdivs f0,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f23.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9690
	if (ctx.cr6.lt) goto loc_823D9690;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f13,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x823d9654
	if (ctx.cr6.lt) goto loc_823D9654;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D95E8:
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x823d9600
	if (!ctx.cr6.lt) goto loc_823D9600;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_823D9600:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x823d9618
	if (!ctx.cr6.lt) goto loc_823D9618;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823D9618:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x823d9630
	if (!ctx.cr6.lt) goto loc_823D9630;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_823D9630:
	// lfs f12,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x823d9648
	if (!ctx.cr6.lt) goto loc_823D9648;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_823D9648:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x823d95e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D95E8;
loc_823D9654:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9690
	if (ctx.cr6.lt) goto loc_823D9690;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D966C:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x823d9684
	if (!ctx.cr6.lt) goto loc_823D9684;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_823D9684:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x823d966c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D966C;
loc_823D9690:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de060
	ctx.lr = 0x823D969C;
	__restfpr_23(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9418) {
	__imp__sub_823D9418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D96A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D96A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x823d9418
	ctx.lr = 0x823D96D4;
	sub_823D9418(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,4608
	ctx.r11.s64 = ctx.r10.s64 + 4608;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8532
	ctx.r7.s64 = ctx.r11.s64 + 8532;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// subf r8,r4,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r4.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_823D972C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d972c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D972C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D96A0) {
	__imp__sub_823D96A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823D9760;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x823d9418
	ctx.lr = 0x823D9790;
	sub_823D9418(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823d9418
	ctx.lr = 0x823D97AC;
	sub_823D9418(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f13,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
loc_823D97C4:
	// li r7,2
	ctx.r7.s64 = 2;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
loc_823D97E8:
	// lfsx f11,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f8,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d97e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D97E8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x823d97c4
	if (ctx.cr6.lt) goto loc_823D97C4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,8564
	ctx.r8.s64 = ctx.r11.s64 + 8564;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9758) {
	__imp__sub_823D9758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D9868;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de018
	ctx.lr = 0x823D9870;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lfs f24,-5620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5620);
	ctx.f24.f64 = double(temp.f32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823d98b8
	if (!ctx.cr6.eq) goto loc_823D98B8;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823d9958
	if (ctx.cr6.eq) goto loc_823D9958;
loc_823D98B8:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fsel f1,f0,f30,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fcmpu cr6,f1,f24
	ctx.cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// ble cr6,0x823d98cc
	if (!ctx.cr6.gt) goto loc_823D98CC;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
loc_823D98CC:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmsubs f9,f30,f30,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 - ctx.f0.f64));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmsubs f8,f31,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 - ctx.f0.f64));
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fsqrts f7,f9
	ctx.f7.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// fsqrts f3,f8
	ctx.f3.f64 = double(float(sqrt(ctx.f8.f64)));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f7,f2
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fdivs f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x823d9758
	ctx.lr = 0x823D9954;
	sub_823D9758(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_823D9958:
	// mulli r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 * 136;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f28,-5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5624);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-5628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5628);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,-5632(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5632);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
loc_823D9988:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bge cr6,0x823d9998
	if (!ctx.cr6.lt) goto loc_823D9998;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// blt cr6,0x823d9a30
	if (ctx.cr6.lt) goto loc_823D9A30;
loc_823D9998:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x823d99b8
	if (!ctx.cr6.lt) goto loc_823D99B8;
	// fadds f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fcmpu cr6,f1,f24
	ctx.cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// ble cr6,0x823d9a44
	if (!ctx.cr6.gt) goto loc_823D9A44;
loc_823D99B8:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x823d99ec
	if (!ctx.cr6.gt) goto loc_823D99EC;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x823d99d8
	if (!ctx.cr6.lt) goto loc_823D99D8;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// b 0x823d9a10
	goto loc_823D9A10;
loc_823D99D8:
	// fmsubs f0,f30,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 - ctx.f28.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fsqrts f30,f0
	ctx.f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x823d9a10
	goto loc_823D9A10;
loc_823D99EC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x823d9a00
	if (ctx.cr6.gt) goto loc_823D9A00;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x823d9a0c
	goto loc_823D9A0C;
loc_823D9A00:
	// fmsubs f0,f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 - ctx.f28.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
loc_823D9A0C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_823D9A10:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d96a0
	ctx.lr = 0x823D9A20;
	sub_823D96A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,136
	ctx.r28.s64 = ctx.r28.s64 + 136;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x823d9988
	if (ctx.cr6.lt) goto loc_823D9988;
loc_823D9A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de064
	ctx.lr = 0x823D9A40;
	__restfpr_24(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823D9A44:
	// mulli r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 * 136;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823d9758
	ctx.lr = 0x823D9A64;
	sub_823D9758(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de064
	ctx.lr = 0x823D9A74;
	__restfpr_24(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9860) {
	__imp__sub_823D9860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// addi r8,r10,3732
	ctx.r8.s64 = ctx.r10.s64 + 3732;
	// addi r6,r10,3736
	ctx.r6.s64 = ctx.r10.s64 + 3736;
	// addi r5,r10,3740
	ctx.r5.s64 = ctx.r10.s64 + 3740;
	// addi r4,r10,3728
	ctx.r4.s64 = ctx.r10.s64 + 3728;
	// addi r10,r10,5362
	ctx.r10.s64 = ctx.r10.s64 + 5362;
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_823D9AB8:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r7,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d9ab8
	if (ctx.cr6.lt) goto loc_823D9AB8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D9A78) {
	__imp__sub_823D9A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D9AFC) {
	__imp__sub_823D9AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9B00) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823d9b50
	if (!ctx.cr6.eq) goto loc_823D9B50;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r4,2192(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2192);
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823D9B34;
	sub_823C90B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r4,2192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823D9B44;
	sub_823C9CA0(ctx, base);
	// lwz r11,2180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// stw r11,4816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4816, ctx.r11.u32);
	// b 0x823d9b98
	goto loc_823D9B98;
loc_823D9B50:
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r8,-26624
	ctx.r30.s64 = ctx.r8.s64 + -26624;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// bl 0x823a7d70
	ctx.lr = 0x823D9B78;
	sub_823A7D70(ctx, base);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,-29904
	ctx.r4.s64 = ctx.r5.s64 + -29904;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,4816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4816, ctx.r11.u32);
loc_823D9B98:
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

PPC_WEAK_FUNC(sub_823D9B00) {
	__imp__sub_823D9B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9BB0) {
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
	// lwz r11,2192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2192);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r8,-26624
	ctx.r30.s64 = ctx.r8.s64 + -26624;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// bl 0x823a7d70
	ctx.lr = 0x823D9BF0;
	sub_823A7D70(ctx, base);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,-29904
	ctx.r4.s64 = ctx.r5.s64 + -29904;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,4816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4816, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823D9BB0) {
	__imp__sub_823D9BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9C28) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// ori r10,r11,252
	ctx.r10.u64 = ctx.r11.u64 | 252;
	// bne cr6,0x823d9c40
	if (!ctx.cr6.eq) goto loc_823D9C40;
	// rlwinm r10,r11,0,30,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
loc_823D9C40:
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823D9C28) {
	__imp__sub_823D9C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9C48) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823d9cb8
	if (!ctx.cr6.gt) goto loc_823D9CB8;
	// lwz r11,2188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d9cb8
	if (ctx.cr6.eq) goto loc_823D9CB8;
	// bl 0x823b1db0
	ctx.lr = 0x823D9C80;
	sub_823B1DB0(ctx, base);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-26624
	ctx.r8.s64 = ctx.r9.s64 + -26624;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r9,r10,252
	ctx.r9.u64 = ctx.r10.u64 | 252;
	// bne cr6,0x823d9cb4
	if (!ctx.cr6.eq) goto loc_823D9CB4;
	// rlwinm r9,r10,0,30,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
loc_823D9CB4:
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_823D9CB8:
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

PPC_WEAK_FUNC(sub_823D9C48) {
	__imp__sub_823D9C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823D9CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d9d04
	if (ctx.cr6.eq) goto loc_823D9D04;
	// bl 0x823b1c28
	ctx.lr = 0x823D9D04;
	sub_823B1C28(ctx, base);
loc_823D9D04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a71c0
	ctx.lr = 0x823D9D0C;
	sub_823A71C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,-29904
	ctx.r28.s64 = ctx.r11.s64 + -29904;
	// bne cr6,0x823d9d68
	if (!ctx.cr6.eq) goto loc_823D9D68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// bl 0x823c90b8
	ctx.lr = 0x823D9D30;
	sub_823C90B8(ctx, base);
	// ld r3,-16268(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// lwz r4,2184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// bl 0x823c9ca0
	ctx.lr = 0x823D9D3C;
	sub_823C9CA0(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-24112
	ctx.r9.s64 = ctx.r11.s64 + -24112;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r7,-2296
	ctx.r5.s64 = ctx.r7.s64 + -2296;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,144(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// bl 0x823c91d0
	ctx.lr = 0x823D9D68;
	sub_823C91D0(ctx, base);
loc_823D9D68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9c48
	ctx.lr = 0x823D9D74;
	sub_823D9C48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d9dbc
	if (!ctx.cr6.gt) goto loc_823D9DBC;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_823D9D88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9b00
	ctx.lr = 0x823D9D94;
	sub_823D9B00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d9a78
	ctx.lr = 0x823D9D9C;
	sub_823D9A78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823a71f8
	ctx.lr = 0x823D9DA8;
	sub_823A71F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d9d88
	if (ctx.cr6.lt) goto loc_823D9D88;
loc_823D9DBC:
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// ld r3,-16268(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16268);
	// addi r30,r11,-26624
	ctx.r30.s64 = ctx.r11.s64 + -26624;
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x823a7d70
	ctx.lr = 0x823D9DE0;
	sub_823A7D70(ctx, base);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r11,4816(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4816, ctx.r11.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x823d9e34
	if (!ctx.cr6.gt) goto loc_823D9E34;
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d9e34
	if (ctx.cr6.eq) goto loc_823D9E34;
	// bl 0x823b1db0
	ctx.lr = 0x823D9E14;
	sub_823B1DB0(ctx, base);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r7,r8,0,30,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// stw r7,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
loc_823D9E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9CD0) {
	__imp__sub_823D9CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823D9E3C) {
	__imp__sub_823D9E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823D9E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r5,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r5,2280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2280, ctx.r5.u32);
	// addi r8,r11,4520
	ctx.r8.s64 = ctx.r11.s64 + 4520;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// lfs f0,14152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r7,-26624
	ctx.r11.s64 = ctx.r7.s64 + -26624;
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwzx r7,r4,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r7,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r7.u32);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwzx r5,r4,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r29,2284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2284, ctx.r29.u32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// bl 0x823d9860
	ctx.lr = 0x823D9EE8;
	sub_823D9860(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x823b1db0
	ctx.lr = 0x823D9EF0;
	sub_823B1DB0(ctx, base);
	// lwz r11,2276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r9,r10,252
	ctx.r9.u64 = ctx.r10.u64 | 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// bl 0x823d9cd0
	ctx.lr = 0x823D9F0C;
	sub_823D9CD0(ctx, base);
	// bl 0x823b1db0
	ctx.lr = 0x823D9F10;
	sub_823B1DB0(ctx, base);
	// lwz r11,2276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2276);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r7,r8,0,30,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9E40) {
	__imp__sub_823D9E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823D9F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823D9F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x823d9f5c
	if (!ctx.cr6.eq) goto loc_823D9F5C;
loc_823D9F50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823D9F5C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r31,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r31.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r31,2280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2280, ctx.r31.u32);
	// addi r7,r11,4520
	ctx.r7.s64 = ctx.r11.s64 + 4520;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// lfs f0,5880(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12980);
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f13,14152(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14152);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,-26624
	ctx.r11.s64 = ctx.r4.s64 + -26624;
	// lfs f12,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lbz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// addi r10,r3,4608
	ctx.r10.s64 = ctx.r3.s64 + 4608;
	// subfe r7,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,8608
	ctx.r5.s64 = ctx.r10.s64 + 8608;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r27,r8,r5
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r6,2284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2284, ctx.r6.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r11.u32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// bl 0x823d9860
	ctx.lr = 0x823DA03C;
	sub_823D9860(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add. r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq 0x823d9f50
	if (ctx.cr0.eq) goto loc_823D9F50;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d9cd0
	ctx.lr = 0x823DA058;
	sub_823D9CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823D9F28) {
	__imp__sub_823D9F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA064) {
	__imp__sub_823DA064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA068) {
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
	// lfs f1,612(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x823da0c4
	if (ctx.cr6.eq) goto loc_823DA0C4;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x823d9f28
	ctx.lr = 0x823DA098;
	sub_823D9F28(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r10,-26624
	ctx.r7.s64 = ctx.r10.s64 + -26624;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r9,-19960
	ctx.r5.s64 = ctx.r9.s64 + -19960;
	// stw r11,-19960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19960, ctx.r11.u32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_823DA0C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823DA068) {
	__imp__sub_823DA068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA0D4) {
	__imp__sub_823DA0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA0D8) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823DA104;
	sub_823C90B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA114;
	sub_823C9CA0(ctx, base);
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823DA124;
	sub_823C8D28(ctx, base);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// addi r7,r9,-26624
	ctx.r7.s64 = ctx.r9.s64 + -26624;
	// addi r6,r8,4608
	ctx.r6.s64 = ctx.r8.s64 + 4608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// lwz r3,8496(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8496);
	// stw r11,4824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4824, ctx.r11.u32);
	// stw r11,4816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4816, ctx.r11.u32);
	// bl 0x823a7528
	ctx.lr = 0x823DA14C;
	sub_823A7528(ctx, base);
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

PPC_WEAK_FUNC(sub_823DA0D8) {
	__imp__sub_823DA0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA164) {
	__imp__sub_823DA164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA168) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823DA168) {
	__imp__sub_823DA168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA184) {
	__imp__sub_823DA184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DA190;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// beq cr6,0x823da230
	if (ctx.cr6.eq) goto loc_823DA230;
	// bl 0x8236b940
	ctx.lr = 0x823DA1C4;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823da1e8
	if (!ctx.cr6.lt) goto loc_823DA1E8;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823da1ec
	goto loc_823DA1EC;
loc_823DA1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823DA1EC:
	// bl 0x823905c8
	ctx.lr = 0x823DA1F0;
	sub_823905C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be020
	ctx.lr = 0x823DA1F8;
	sub_820BE020(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c5768
	ctx.lr = 0x823DA230;
	sub_820C5768(ctx, base);
loc_823DA230:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA188) {
	__imp__sub_823DA188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA238) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823da26c
	if (ctx.cr6.eq) goto loc_823DA26C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5d58
	ctx.lr = 0x823DA25C;
	sub_820C5D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820be108
	ctx.lr = 0x823DA264;
	sub_820BE108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820be060
	ctx.lr = 0x823DA26C;
	sub_820BE060(ctx, base);
loc_823DA26C:
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

PPC_WEAK_FUNC(sub_823DA238) {
	__imp__sub_823DA238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823DA280) {
	__imp__sub_823DA280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA294) {
	__imp__sub_823DA294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823DA2A0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x823DA2A8;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// std r3,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r3.u64);
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// std r4,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r4.u64);
	// addi r29,r11,-26624
	ctx.r29.s64 = ctx.r11.s64 + -26624;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// ld r3,-16268(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + -16268);
	// lwz r4,120(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x823a7df8
	ctx.lr = 0x823DA2E0;
	sub_823A7DF8(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r30,r11,-24112
	ctx.r30.s64 = ctx.r11.s64 + -24112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823DA2F0;
	sub_823D3C78(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823DA304;
	sub_823C90B8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// ld r3,-16268(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA310;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4060
	ctx.lr = 0x823DA318;
	sub_823D4060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823c8a38
	ctx.lr = 0x823DA324;
	sub_823C8A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823c8c38
	ctx.lr = 0x823DA330;
	sub_823C8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823c8e00
	ctx.lr = 0x823DA33C;
	sub_823C8E00(ctx, base);
	// lwz r26,284(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DA350;
	sub_823C94D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,191
	ctx.r4.s64 = 191;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x823c91d0
	ctx.lr = 0x823DA384;
	sub_823C91D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x823da3bc
	if (!ctx.cr6.eq) goto loc_823DA3BC;
	// lfs f0,4468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823da3bc
	if (!ctx.cr6.eq) goto loc_823DA3BC;
	// lfs f0,4472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823da3bc
	if (!ctx.cr6.eq) goto loc_823DA3BC;
	// lfs f0,4476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823da3d8
	if (ctx.cr6.eq) goto loc_823DA3D8;
loc_823DA3BC:
	// lhz r11,5454(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5454);
	// stfs f31,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f31,4468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f13,4472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f13,4476(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// sth r11,5454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5454, ctx.r11.u16);
loc_823DA3D8:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da3f8
	if (ctx.cr6.eq) goto loc_823DA3F8;
	// bl 0x823b1c28
	ctx.lr = 0x823DA3F8;
	sub_823B1C28(ctx, base);
loc_823DA3F8:
	// lwz r11,5764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5764);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r10,5768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// li r8,8
	ctx.r8.s64 = 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// fadds f8,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// fadds f7,f30,f28
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// addi r5,r9,4608
	ctx.r5.s64 = ctx.r9.s64 + 4608;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8532(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8532);
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823DA460;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823DA464;
	sub_823B1C28(ctx, base);
	// lwz r4,160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// ld r3,-16268(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + -16268);
	// bl 0x823a7df8
	ctx.lr = 0x823DA470;
	sub_823A7DF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9618
	ctx.lr = 0x823DA478;
	sub_823C9618(ctx, base);
	// lwz r31,276(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9528
	ctx.lr = 0x823DA488;
	sub_823C9528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823DA490;
	sub_823D3C78(ctx, base);
	// lwz r31,272(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823DA4A0;
	sub_823C90B8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c9ca0
	ctx.lr = 0x823DA4AC;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d41b0
	ctx.lr = 0x823DA4B4;
	sub_823D41B0(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r11,4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4844, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x823DA4C8;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA298) {
	__imp__sub_823DA298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA4CC) {
	__imp__sub_823DA4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DA4D8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x823DA4E0;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,-26624
	ctx.r9.s64 = ctx.r11.s64 + -26624;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r11,120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stw r11,4844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4844, ctx.r11.u32);
	// lwz r4,140(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// bl 0x823a7d70
	ctx.lr = 0x823DA518;
	sub_823A7D70(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x823c9618
	ctx.lr = 0x823DA520;
	sub_823C9618(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r30,r11,-24112
	ctx.r30.s64 = ctx.r11.s64 + -24112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3c78
	ctx.lr = 0x823DA530;
	sub_823D3C78(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823DA544;
	sub_823C90B8(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r3,-16268(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA554;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4060
	ctx.lr = 0x823DA55C;
	sub_823D4060(ctx, base);
	// lfs f0,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823da58c
	if (!ctx.cr6.eq) goto loc_823DA58C;
	// lfs f0,4468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x823da58c
	if (!ctx.cr6.eq) goto loc_823DA58C;
	// lfs f0,4472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x823da58c
	if (!ctx.cr6.eq) goto loc_823DA58C;
	// lfs f0,4476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x823da5a8
	if (ctx.cr6.eq) goto loc_823DA5A8;
loc_823DA58C:
	// lhz r11,5454(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5454);
	// stfs f31,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f30,4468(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f29,4472(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f28,4476(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// sth r11,5454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5454, ctx.r11.u16);
loc_823DA5A8:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da5c8
	if (ctx.cr6.eq) goto loc_823DA5C8;
	// bl 0x823b1c28
	ctx.lr = 0x823DA5C8;
	sub_823B1C28(ctx, base);
loc_823DA5C8:
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,344(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r5,4608
	ctx.r4.s64 = ctx.r5.s64 + 4608;
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f8,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r3,8528(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8528);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// frsp f4,f11
	ctx.f4.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823DA638;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823DA63C;
	sub_823B1C28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c9618
	ctx.lr = 0x823DA644;
	sub_823C9618(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x823DA650;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA4D0) {
	__imp__sub_823DA4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA654) {
	__imp__sub_823DA654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA658) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,431(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 431);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823DA658) {
	__imp__sub_823DA658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823DA668;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x823DA670;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,431(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 431);
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,5744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5744);
	// lwz r9,5748(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
	// lwz r8,5752(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5752);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r3,5740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5740);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r6,5764(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5764);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,5768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// fdivs f30,f13,f2
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fdivs f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fdivs f28,f11,f2
	ctx.f28.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// fdivs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// beq cr6,0x823da758
	if (ctx.cr6.eq) goto loc_823DA758;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823da298
	ctx.lr = 0x823DA754;
	sub_823DA298(ctx, base);
	// b 0x823da778
	goto loc_823DA778;
loc_823DA758:
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA760;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d41b0
	ctx.lr = 0x823DA768;
	sub_823D41B0(ctx, base);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DA778;
	sub_823C94D0(ctx, base);
loc_823DA778:
	// addi r5,r30,4672
	ctx.r5.s64 = ctx.r30.s64 + 4672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a9398
	ctx.lr = 0x823DA788;
	sub_823A9398(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x823c9528
	ctx.lr = 0x823DA794;
	sub_823C9528(ctx, base);
	// lbz r11,431(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 431);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da7bc
	if (ctx.cr6.eq) goto loc_823DA7BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823da4d0
	ctx.lr = 0x823DA7BC;
	sub_823DA4D0(ctx, base);
loc_823DA7BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x823DA7C8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA660) {
	__imp__sub_823DA660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA7CC) {
	__imp__sub_823DA7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DA7D8;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DA7FC;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DA808;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DA814;
	sub_823C8D28(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c9d38
	ctx.lr = 0x823DA830;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA7D0) {
	__imp__sub_823DA7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r5,r11,-22944
	ctx.r5.s64 = ctx.r11.s64 + -22944;
	// b 0x823da7d0
	sub_823DA7D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA838) {
	__imp__sub_823DA838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA844) {
	__imp__sub_823DA844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DA850;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA870;
	sub_823C9CA0(ctx, base);
	// lwz r29,644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DA884;
	sub_823C94D0(ctx, base);
	// addi r4,r30,768
	ctx.r4.s64 = ctx.r30.s64 + 768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,488
	ctx.r5.s64 = 488;
	// bl 0x823de1f0
	ctx.lr = 0x823DA894;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4924);
	// addi r5,r11,10608
	ctx.r5.s64 = ctx.r11.s64 + 10608;
	// bl 0x823a9a10
	ctx.lr = 0x823DA8B8;
	sub_823A9A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x823c9528
	ctx.lr = 0x823DA8C4;
	sub_823C9528(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA848) {
	__imp__sub_823DA848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA8CC) {
	__imp__sub_823DA8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA8D0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DA900;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DA90C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DA918;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// bl 0x823c9d38
	ctx.lr = 0x823DA938;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823DA8D0) {
	__imp__sub_823DA8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DA958;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DA978;
	sub_823C9CA0(ctx, base);
	// lwz r29,644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DA98C;
	sub_823C94D0(ctx, base);
	// addi r4,r30,1256
	ctx.r4.s64 = ctx.r30.s64 + 1256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,488
	ctx.r5.s64 = 488;
	// bl 0x823de1f0
	ctx.lr = 0x823DA99C;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4924);
	// addi r5,r11,10984
	ctx.r5.s64 = ctx.r11.s64 + 10984;
	// bl 0x823a9a10
	ctx.lr = 0x823DA9C0;
	sub_823A9A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x823c9528
	ctx.lr = 0x823DA9CC;
	sub_823C9528(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DA950) {
	__imp__sub_823DA950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DA9D4) {
	__imp__sub_823DA9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DA9D8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DAA08;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DAA14;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DAA20;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-22192
	ctx.r3.s64 = ctx.r11.s64 + -22192;
	// bl 0x823c9d38
	ctx.lr = 0x823DAA40;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823DA9D8) {
	__imp__sub_823DA9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DAA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DAA80;
	sub_823C9CA0(ctx, base);
	// lwz r29,644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DAA94;
	sub_823C94D0(ctx, base);
	// addi r4,r30,1744
	ctx.r4.s64 = ctx.r30.s64 + 1744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,488
	ctx.r5.s64 = 488;
	// bl 0x823de1f0
	ctx.lr = 0x823DAAA4;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4924);
	// addi r5,r11,11360
	ctx.r5.s64 = ctx.r11.s64 + 11360;
	// bl 0x823a9a10
	ctx.lr = 0x823DAAC8;
	sub_823A9A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x823c9528
	ctx.lr = 0x823DAAD4;
	sub_823C9528(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAA58) {
	__imp__sub_823DAA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DAADC) {
	__imp__sub_823DAADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAAE0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DAB10;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DAB1C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DAB28;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// bl 0x823c9d38
	ctx.lr = 0x823DAB48;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823DAAE0) {
	__imp__sub_823DAAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DAB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DAB88;
	sub_823C9CA0(ctx, base);
	// lwz r29,644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DAB9C;
	sub_823C94D0(ctx, base);
	// addi r4,r30,2232
	ctx.r4.s64 = ctx.r30.s64 + 2232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,488
	ctx.r5.s64 = 488;
	// bl 0x823de1f0
	ctx.lr = 0x823DABAC;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4924);
	// addi r5,r11,11736
	ctx.r5.s64 = ctx.r11.s64 + 11736;
	// bl 0x823a9a10
	ctx.lr = 0x823DABD0;
	sub_823A9A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x823c9528
	ctx.lr = 0x823DABDC;
	sub_823C9528(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAB60) {
	__imp__sub_823DAB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DABE4) {
	__imp__sub_823DABE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DABE8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DAC18;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DAC24;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DAC30;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-21664
	ctx.r3.s64 = ctx.r11.s64 + -21664;
	// bl 0x823c9d38
	ctx.lr = 0x823DAC50;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823DABE8) {
	__imp__sub_823DABE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DAC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r5,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	// bl 0x823c9ca0
	ctx.lr = 0x823DAC90;
	sub_823C9CA0(ctx, base);
	// lwz r29,644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r30,368
	ctx.r5.s64 = ctx.r30.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c94d0
	ctx.lr = 0x823DACA4;
	sub_823C94D0(ctx, base);
	// addi r4,r30,2720
	ctx.r4.s64 = ctx.r30.s64 + 2720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,488
	ctx.r5.s64 = 488;
	// bl 0x823de1f0
	ctx.lr = 0x823DACB4;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4924);
	// addi r5,r11,12112
	ctx.r5.s64 = ctx.r11.s64 + 12112;
	// bl 0x823a9a10
	ctx.lr = 0x823DACD8;
	sub_823A9A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x823c9528
	ctx.lr = 0x823DACE4;
	sub_823C9528(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAC68) {
	__imp__sub_823DAC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DACEC) {
	__imp__sub_823DACEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DACF0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5904(r1)
	ea = -5904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3b90
	ctx.lr = 0x823DAD20;
	sub_823D3B90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// bl 0x823c90b8
	ctx.lr = 0x823DAD2C;
	sub_823C90B8(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c8d28
	ctx.lr = 0x823DAD38;
	sub_823C8D28(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// bl 0x823c9d38
	ctx.lr = 0x823DAD58;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5904
	ctx.r1.s64 = ctx.r1.s64 + 5904;
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

PPC_WEAK_FUNC(sub_823DACF0) {
	__imp__sub_823DACF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823DAD78;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x823c9ca0
	ctx.lr = 0x823DADA4;
	sub_823C9CA0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r24,204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r30,144(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 144);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bne cr6,0x823dae1c
	if (!ctx.cr6.eq) goto loc_823DAE1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-11240
	ctx.r5.s64 = ctx.r10.s64 + -11240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c91d0
	ctx.lr = 0x823DAE00;
	sub_823C91D0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,-4796
	ctx.r7.s64 = ctx.r9.s64 + -4796;
	// addi r5,r27,120
	ctx.r5.s64 = ctx.r27.s64 + 120;
	// addi r4,r25,9
	ctx.r4.s64 = ctx.r25.s64 + 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823cbd10
	ctx.lr = 0x823DAE1C;
	sub_823CBD10(ctx, base);
loc_823DAE1C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a9ac8
	ctx.lr = 0x823DAE2C;
	sub_823A9AC8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823dae4c
	if (!ctx.cr6.eq) goto loc_823DAE4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x823a7cb0
	ctx.lr = 0x823DAE4C;
	sub_823A7CB0(ctx, base);
loc_823DAE4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAD70) {
	__imp__sub_823DAD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DAE54) {
	__imp__sub_823DAE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823DAE60;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5952(r1)
	ea = -5952 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d3b90
	ctx.lr = 0x823DAE84;
	sub_823D3B90(ctx, base);
	// mulli r11,r27,464
	ctx.r11.s64 = ctx.r27.s64 * 464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,8460(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8460);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r31,8752
	ctx.r29.s64 = ctx.r31.s64 + 8752;
	// lwz r4,9192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9192);
	// bl 0x823c90b8
	ctx.lr = 0x823DAEA0;
	sub_823C90B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,8844(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8844);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,8840(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8840);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c8d60
	ctx.lr = 0x823DAEB8;
	sub_823C8D60(ctx, base);
	// mulli r11,r27,488
	ctx.r11.s64 = ctx.r27.s64 * 488;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// addi r9,r11,5160
	ctx.r9.s64 = ctx.r11.s64 + 5160;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r29,96
	ctx.r7.s64 = ctx.r29.s64 + 96;
	// addi r6,r30,384
	ctx.r6.s64 = ctx.r30.s64 + 384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-21136
	ctx.r3.s64 = ctx.r10.s64 + -21136;
	// bl 0x823c9d38
	ctx.lr = 0x823DAEF4;
	sub_823C9D38(ctx, base);
	// addi r1,r1,5952
	ctx.r1.s64 = ctx.r1.s64 + 5952;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAE58) {
	__imp__sub_823DAE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DAEFC) {
	__imp__sub_823DAEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DAF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8736);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823daf50
	if (!ctx.cr6.gt) goto loc_823DAF50;
loc_823DAF24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cc880
	ctx.lr = 0x823DAF30;
	sub_823CC880(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dae58
	ctx.lr = 0x823DAF40;
	sub_823DAE58(ctx, base);
	// lwz r11,8736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8736);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823daf24
	if (ctx.cr6.lt) goto loc_823DAF24;
loc_823DAF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAF00) {
	__imp__sub_823DAF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823DAF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823DAF70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cc880
	ctx.lr = 0x823DAF7C;
	sub_823CC880(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ddcc0
	ctx.lr = 0x823DAF8C;
	sub_823DDCC0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823daf70
	if (ctx.cr6.lt) goto loc_823DAF70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAF58) {
	__imp__sub_823DAF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAFA0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821435e8
	sub_821435E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DAFA0) {
	__imp__sub_823DAFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DAFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823daff4
	if (ctx.cr6.eq) goto loc_823DAFF4;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_823DAFCC:
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823daff4
	if (!ctx.cr6.gt) goto loc_823DAFF4;
	// lhzu r8,-2(r10)
	ea = -2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x823dafcc
	if (!ctx.cr0.eq) goto loc_823DAFCC;
loc_823DAFF4:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r3,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r3.u16);
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823DAFA8) {
	__imp__sub_823DAFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DB01C) {
	__imp__sub_823DB01C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB020) {
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
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r31,74(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823db0fc
	if (ctx.cr6.eq) goto loc_823DB0FC;
	// lbz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// lbz r9,73(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823db084
	if (!ctx.cr6.lt) goto loc_823DB084;
loc_823DB06C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// beq 0x823db0fc
	if (ctx.cr0.eq) goto loc_823DB0FC;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x823db06c
	if (ctx.cr6.lt) goto loc_823DB06C;
loc_823DB084:
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x823db0d0
	if (!ctx.cr6.eq) goto loc_823DB0D0;
loc_823DB090:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823db0ac
	if (ctx.cr6.eq) goto loc_823DB0AC;
loc_823DB0A0:
	// lwzu r10,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823db0a0
	if (!ctx.cr6.eq) goto loc_823DB0A0;
loc_823DB0AC:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lhz r3,2(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// bl 0x823dafa8
	ctx.lr = 0x823DB0B8;
	sub_823DAFA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// beq 0x823db0fc
	if (ctx.cr0.eq) goto loc_823DB0FC;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x823db090
	if (ctx.cr6.eq) goto loc_823DB090;
loc_823DB0D0:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x823db0fc
	if (!ctx.cr6.eq) goto loc_823DB0FC;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_823DB0DC:
	// lhz r3,6(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// lwzu r4,8(r6)
	ea = 8 + ctx.r6.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// bl 0x823dafa8
	ctx.lr = 0x823DB0E8;
	sub_823DAFA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823db0fc
	if (ctx.cr0.eq) goto loc_823DB0FC;
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x823db0dc
	if (ctx.cr6.eq) goto loc_823DB0DC;
loc_823DB0FC:
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

PPC_WEAK_FUNC(sub_823DB020) {
	__imp__sub_823DB020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DB114) {
	__imp__sub_823DB114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB118) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r31,74(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823db1b4
	if (ctx.cr6.eq) goto loc_823DB1B4;
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lbz r9,73(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bge cr6,0x823db184
	if (!ctx.cr6.lt) goto loc_823DB184;
loc_823DB168:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// beq 0x823db1b4
	if (ctx.cr0.eq) goto loc_823DB1B4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x823db168
	if (ctx.cr6.lt) goto loc_823DB168;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
loc_823DB184:
	// bne cr6,0x823db1b4
	if (!ctx.cr6.eq) goto loc_823DB1B4;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_823DB18C:
	// lhz r3,6(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// lhzu r11,8(r6)
	ea = 8 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823dafa8
	ctx.lr = 0x823DB1A0;
	sub_823DAFA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823db1b4
	if (ctx.cr0.eq) goto loc_823DB1B4;
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823db18c
	if (ctx.cr6.eq) goto loc_823DB18C;
loc_823DB1B4:
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

PPC_WEAK_FUNC(sub_823DB118) {
	__imp__sub_823DB118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823DB1CC) {
	__imp__sub_823DB1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823DB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823DB1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_823DB1F8:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// stwx r27,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
	// lbz r10,73(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 73);
	// lbz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 72);
	// lwz r9,80(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,74(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 74);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x823db298
	if (ctx.cr6.eq) goto loc_823DB298;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x823db250
	if (!ctx.cr6.lt) goto loc_823DB250;
loc_823DB234:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq 0x823db298
	if (ctx.cr0.eq) goto loc_823DB298;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x823db234
	if (ctx.cr6.lt) goto loc_823DB234;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
loc_823DB250:
	// bne cr6,0x823db28c
	if (!ctx.cr6.eq) goto loc_823DB28C;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
loc_823DB25C:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r4,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// sthx r8,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u16);
	// beq 0x823db298
	if (ctx.cr0.eq) goto loc_823DB298;
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x823db25c
	if (ctx.cr6.eq) goto loc_823DB25C;
loc_823DB28C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x823db020
	ctx.lr = 0x823DB298;
	sub_823DB020(ctx, base);
loc_823DB298:
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// addi r5,r5,100
	ctx.r5.s64 = ctx.r5.s64 + 100;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// blt cr6,0x823db1f8
	if (ctx.cr6.lt) goto loc_823DB1F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823db370
	if (!ctx.cr0.eq) goto loc_823DB370;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823db2ec
	if (ctx.cr6.eq) goto loc_823DB2EC;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
loc_823DB2CC:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,512(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 512);
	// subf. r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823db370
	if (!ctx.cr0.eq) goto loc_823DB370;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823db2cc
	if (ctx.cr6.lt) goto loc_823DB2CC;
loc_823DB2EC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf. r3,r11,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823db370
	if (!ctx.cr0.eq) goto loc_823DB370;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823db36c
	if (ctx.cr6.eq) goto loc_823DB36C;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
loc_823DB310:
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r4,100(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 100);
	// subf. r3,r4,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823db370
	if (!ctx.cr0.eq) goto loc_823DB370;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,-100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -100);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_823DB330:
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823db378
	if (ctx.cr6.lt) goto loc_823DB378;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823db384
	if (ctx.cr6.gt) goto loc_823DB384;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823db330
	if (ctx.cr6.lt) goto loc_823DB330;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823db310
	if (ctx.cr6.lt) goto loc_823DB310;
loc_823DB36C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DB370:
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823DB378:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823DB384:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823DB1D0) {
	__imp__sub_823DB1D0(ctx, base);
}

